def vowelCounter():
    txt = input("Input: ").lower()

    vowels = 0


    for i in txt:
        if i in ['a', 'e', 'i', 'o', 'u']:
            vowels += 1

    print(f"There are {vowels} vowels.")


if __name__ == '__main__':
    vowelCounter()
