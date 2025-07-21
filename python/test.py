# create a list of 15 integer by getting whose values from the user
# find the numbers of repetitive values in a list
# show in dictionary form value as key and number of the repetitions as value
numbers = []
for i in range(15):
    num = int(input("Enter an integer: "))
    numbers.append(num)
repetitions = {}
for num in numbers:
    if num in repetitions:
        repetitions[num] += 1
    else:
        repetitions[num] = 1
print("Repetitive values:")
for key, value in repetitions.items():
    if value > 1:
        print(f"Value: {key}, Count: {value}")
# End of the code

