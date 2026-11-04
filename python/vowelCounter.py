print("welcome to Vowel Counter!")

txt = input("Input: ").lower()

vowels = 0


for i in txt:
    if i in ['a', 'e', 'i', 'o', 'u']:
        vowels += 1

print(f"There are {vowels} vowels.")
