from cs50 import get_float
while True:
    change = get_float("Change owed: ")
    if change > 0:
        break
cents = round(change * 100)
coins = 0
for coin in [25, 10, 5, 1]:
    coins += cents // coin
    cents %= coin

print(coins)
