def character_frequency_count(string):
    frequency = {}
    for char in string:
        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1
    return frequency

def main():
   user_input = input("Enter a string: ")
    count = character_frequency_count(user_input)
    for char, frequency in count.items():
        print(f"{char}: {frequency}")

main()
