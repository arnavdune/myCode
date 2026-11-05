def vowelCounter(txt):
    txt.lower()

    vowels = 0

    for i in txt:
        if i in ["a", "e", "i", "o", "u"]:
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
    return string1 == string2


def word_frequency(text):
    txt = (text.lower()).split()
    count = {}
    for i in txt:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    return count


if __name__ == "__main__":
    print(f"Total vowels: {vowelCounter('Hello world, AEIOU')}")
    print(f"Sum of all even numbers: {sum_even_numbers([1, 2, 2, 3, 4, 5, 6])}")
    print(f"Is Anagram: {is_anagram('Listen', 'Silent')}")
    print(
        word_frequency(
            "cat rat cat cat rat the the the the the THE THE THE CAT CAT RAT 1234 *&*%"
        )
    )
