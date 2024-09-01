# Currency-Converter-C
[In Python3](https://github.com/mdriyadkhan585/Currency-Converter)

![Currency Converter](logo.svg)

---

# Currency Converter

## Overview

The Currency Converter is a command-line utility written in C that allows users to convert amounts between different currencies. The tool supports a broad range of currencies and provides an easy-to-use interface for real-time currency conversion. The program uses exchange rates relative to USD, making it a versatile tool for various currency conversion needs.

## Features

- **Multi-Currency Support**: Convert between a wide range of currencies.
- **Dynamic Currency Input**: Enter currency codes and amounts dynamically.
- **Error Handling**: Handles invalid currency codes and amounts gracefully.
- **Customizable Exchange Rates**: Easily update exchange rates in the source code.
- **Simple Interface**: User-friendly command-line interface.

## Supported Currencies
---
# **Only Input UpperCase Character in command line**
---
The Currency Converter supports the following currencies:

- **USD**: United States Dollar
- **EUR**: Euro
- **JPY**: Japanese Yen
- **GBP**: British Pound Sterling
- **AUD**: Australian Dollar
- **CAD**: Canadian Dollar
- **CHF**: Swiss Franc
- **CNY**: Chinese Yuan
- **SEK**: Swedish Krona
- **NZD**: New Zealand Dollar
- **MXN**: Mexican Peso
- **SGD**: Singapore Dollar
- **HKD**: Hong Kong Dollar
- **NOK**: Norwegian Krone
- **KRW**: South Korean Won
- **TRY**: Turkish Lira
- **RUB**: Russian Ruble
- **INR**: Indian Rupee
- **BRL**: Brazilian Real
- **ZAR**: South African Rand
- **BDT**: Bangladeshi Taka
- **PKR**: Pakistani Rupee
- **THB**: Thai Baht
- **MYR**: Malaysian Ringgit
- **IDR**: Indonesian Rupiah
- **SAR**: Saudi Riyal
- **AED**: United Arab Emirates Dirham
- **CLP**: Chilean Peso
- **COP**: Colombian Peso
- **PEN**: Peruvian Nuevo Sol
- **DZD**: Algerian Dinar
- **EGP**: Egyptian Pound
- **MAD**: Moroccan Dirham
- **KWD**: Kuwaiti Dinar
- **BHD**: Bahraini Dinar
- **JOD**: Jordanian Dinar
- **OMR**: Omani Rial
- **LKR**: Sri Lankan Rupee
- **VND**: Vietnamese Dong
- **HUF**: Hungarian Forint
- **CZK**: Czech Koruna
- **PLN**: Polish Zloty
- **RON**: Romanian Leu
- **HRK**: Croatian Kuna
- **ISK**: Icelandic Króna
- **DOP**: Dominican Peso
- **NAD**: Namibian Dollar
- **MUR**: Mauritian Rupee
- **BMD**: Bermudian Dollar

## How It Works

1. **User Input**:
   - The user provides the source currency code (e.g., USD).
   - The user provides the target currency code (e.g., EUR).
   - The user enters the amount to convert.

2. **Currency Lookup**:
   - The program retrieves exchange rates for the specified currencies.
   - The amount is converted to USD using the source currency's exchange rate.

3. **Conversion**:
   - The amount in USD is then converted to the target currency using its exchange rate.

4. **Output**:
   - The program displays the converted amount in the target currency.

## Building and Running

### Prerequisites

- **C Compiler**: Ensure you have a C compiler installed, such as `gcc`.

### Compilation

To compile the program, navigate to the directory containing `currency_converter.c` and use the following command:

```sh
git clone https://github.com/mdriyadkhan585/Currency-Converter-C
cd Currency-Converter-C
```

```sh
gcc -o currency_converter currency_converter.c
```

This will generate an executable file named `currency_converter`.

### Running the Program

Execute the compiled binary with:

```sh
./currency_converter
```

### Using the Program

1. **Enter the Source Currency Code**: Type the 3-letter currency code of the source currency (e.g., `USD`).
2. **Enter the Target Currency Code**: Type the 3-letter currency code of the target currency (e.g., `EUR`).
3. **Enter the Amount**: Provide the amount to convert in the source currency.

The program will display the converted amount in the target currency.

#### Example

```sh
./currency_converter
Enter the source currency code (e.g., USD): USD
Enter the target currency code (e.g., EUR): EUR
Enter amount to convert: 100
Converted amount: 93.00 EUR
```

This example converts 100 USD to EUR, displaying 93.00 EUR.

## Customization

### Updating Exchange Rates

To update exchange rates, modify the `currencies` array in `currency_converter.c` with the latest rates. Ensure that each currency's rate is updated relative to USD.

### Adding New Currencies

1. Add the currency code, full name, and exchange rate to the `currencies` array.
2. Ensure that the new currency code follows the 3-letter format and update the rates accordingly.

## Error Handling

The program handles:
- **Invalid Currency Codes**: If an invalid currency code is entered, the program will display an error message.
- **Invalid Amounts**: Non-numeric or negative amounts will trigger an error message.

## Contributing

Contributions to improve the Currency Converter are welcome. You can:
- Submit pull requests to add features or fix bugs.
- Open issues for reporting bugs or requesting new features.

## Contact

For questions or support, please contact [mdriyadkhan585@gmail.com](mailto:mdriyadkhan585@gmail.com).

---
