i = 1
while i <= 10:
    total = int(input())
    extra = int(input())
    numOfApplesWithKlaudia = (total + extra) // 2
    numOfApplesWithNatalia = total - numOfApplesWithKlaudia
    print(numOfApplesWithKlaudia)
    print(numOfApplesWithNatalia)
    i += 1
