def vowelCounter(txt):
    txt.lower()

    vowels = 0

    for i in txt:
        if i in ['a', 'e', 'i', 'o', 'u']:
            vowels += 1

    return vowels


def sum_even_numbers(numbers):
    sum = 0
    for i in numbers:
        if i % 2 == 0:
            sum += i
    return sum

def is_anagram(str1, str2):
    string1 = sorted((str1.lower()).replace(" ", ""))
    string2 = sorted((str2.lower()).replace(" ", ""))
    if string1 == string2:
        return True
    else:
        return False

if __name__ == '__main__':
    print(f"Total vowels: {vowelCounter('Hello world, AEIOU')}")
    print(f"Sum of all even numbers: {sum_even_numbers([1,2,2,3,4,5,6])}")
    print(f"Is Anagram: {is_anagram("Listen", "Silent")}")
