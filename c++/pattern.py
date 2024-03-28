def pattern():
    mainArray = [1, 2, 3, 4, 5]
    for value in mainArray:
        for _ in range(0, value, 1):
            print("x", end="")
        print("\n")


pattern()
#
