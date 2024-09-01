#include <stdio.h>
#include <string.h>

#define MAX_CURRENCIES 40

// Structure to hold currency information
typedef struct {
    char name[4]; // Currency code (e.g., USD, EUR)
    char fullName[50]; // Full currency name
    double rate;  // Exchange rate relative to USD
} Currency;

// Function to convert currency
double convert(double amount, double rate) {
    return amount * rate;
}

// Function to find a currency by its code
int findCurrencyIndex(Currency currencies[], int size, const char* code) {
    for (int i = 0; i < size; ++i) {
        if (strcmp(currencies[i].name, code) == 0) {
            return i;
        }
    }
    return -1; // Currency not found
}

int main() {
    Currency currencies[MAX_CURRENCIES] = {
        {"USD", "United States Dollar", 1.0},
        {"EUR", "Euro", 0.93},
        {"JPY", "Japanese Yen", 144.45},
        {"GBP", "British Pound Sterling", 0.77},
        {"AUD", "Australian Dollar", 1.55},
        {"CAD", "Canadian Dollar", 1.36},
        {"CHF", "Swiss Franc", 0.91},
        {"CNY", "Chinese Yuan", 6.91},
        {"SEK", "Swedish Krona", 10.55},
        {"NZD", "New Zealand Dollar", 1.60},
        {"MXN", "Mexican Peso", 18.19},
        {"SGD", "Singapore Dollar", 1.35},
        {"HKD", "Hong Kong Dollar", 7.85},
        {"NOK", "Norwegian Krone", 10.08},
        {"KRW", "South Korean Won", 1328.50},
        {"TRY", "Turkish Lira", 27.30},
        {"RUB", "Russian Ruble", 98.95},
        {"INR", "Indian Rupee", 82.75},
        {"BRL", "Brazilian Real", 5.30},
        {"ZAR", "South African Rand", 18.45},
        {"BDT", "Bangladeshi Taka", 106.50},
        {"PKR", "Pakistani Rupee", 278.55},
        {"THB", "Thai Baht", 34.25},
        {"MYR", "Malaysian Ringgit", 4.65},
        {"IDR", "Indonesian Rupiah", 15310.00},
        {"SAR", "Saudi Riyal", 3.75},
        {"AED", "United Arab Emirates Dirham", 3.67},
        {"CLP", "Chilean Peso", 805.00},
        {"COP", "Colombian Peso", 4040.00},
        {"PEN", "Peruvian Nuevo Sol", 3.68},
        {"DZD", "Algerian Dinar", 135.00},
        {"EGP", "Egyptian Pound", 30.95},
        {"MAD", "Moroccan Dirham", 10.00},
        {"KWD", "Kuwaiti Dinar", 0.31},
        {"BHD", "Bahraini Dinar", 0.38},
        {"JOD", "Jordanian Dinar", 0.71},
        {"OMR", "Omani Rial", 0.39},
        {"LKR", "Sri Lankan Rupee", 297.00},
        {"VND", "Vietnamese Dong", 24225.00},
        {"HUF", "Hungarian Forint", 367.00},
        {"CZK", "Czech Koruna", 21.94},
        {"PLN", "Polish Zloty", 4.24},
        {"RON", "Romanian Leu", 4.69},
        {"HRK", "Croatian Kuna", 7.04},
        {"ISK", "Icelandic Króna", 134.50},
        {"DOP", "Dominican Peso", 54.85},
        {"NAD", "Namibian Dollar", 18.45},
        {"MUR", "Mauritian Rupee", 45.25},
        {"BMD", "Bermudian Dollar", 1.00}
    };

    char fromCurrency[4], toCurrency[4];
    double amount, convertedAmount;
    int fromIndex, toIndex;
    
    printf("Currency Converter\n");
    
    // Display available currencies
    printf("Available currencies:\n");
    for (int i = 0; i < MAX_CURRENCIES; ++i) {
        printf("%s (%s)\n", currencies[i].name, currencies[i].fullName);
    }
    
    // Get from and to currencies
    printf("Enter the source currency code (e.g., USD): ");
    scanf("%3s", fromCurrency);
    printf("Enter the target currency code (e.g., EUR): ");
    scanf("%3s", toCurrency);
    
    // Find indices of the selected currencies
    fromIndex = findCurrencyIndex(currencies, MAX_CURRENCIES, fromCurrency);
    toIndex = findCurrencyIndex(currencies, MAX_CURRENCIES, toCurrency);
    
    if (fromIndex == -1 || toIndex == -1) {
        printf("Invalid currency code entered.\n");
        return 1;
    }
    
    // Get amount to convert
    printf("Enter amount to convert: ");
    if (scanf("%lf", &amount) != 1 || amount < 0) {
        printf("Invalid amount entered.\n");
        return 1;
    }
    
    // Convert the amount
    double amountInUsd = convert(amount, 1.0 / currencies[fromIndex].rate);
    convertedAmount = convert(amountInUsd, currencies[toIndex].rate);
    
    // Display the result
    printf("Converted amount: %.2f %s\n", convertedAmount, currencies[toIndex].name);
    
    return 0;
}
