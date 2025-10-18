# height=0
# while height < 1 or height > 8:
#     try:
#         height=int(input("Height: "))
#     except ValueError:
#         print("Please enter an integer between 1 and 8")

while True:
    try:
        height = int(input("Height: "))
        if 1 <= height <= 8:
            break
        else:
            print("Please enter an integer between 1 and 8")
    except ValueError:
        print("Please enter an integer between 1 and 8")

for i in range(height):
    print(" " * (height - 1 - i) + "#" * (i + 1) + "  " + "#" * (i + 1))
