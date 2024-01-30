def bubble_sort(data):
    for i in range(len(data)):
        for j in range(len(data) - i - 1):
            if data[j] > data[j + 1]:
                data[j], data[j + 1] = data[j + 1], data[j]
    return data


data = [1, -1, 3, 9, 0, 0, 4, 2, -5]
data = bubble_sort(data)
print(data)
