def roman_to_decimal(roman):
    roman_values = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    decimal = 0
    prev_value = 0

    for symbol in reversed(roman):
        value = roman_values[symbol]

        if value >= prev_value:
            decimal += value
        else:
            decimal -= value

        prev_value = value

    return decimal


roman_numeral = input("Enter a Roman numeral (1 to 3999): ")
decimal_number = roman_to_decimal(roman_numeral)
print("Decimal equivalent:", decimal_number)