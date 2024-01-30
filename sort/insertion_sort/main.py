def insertion_sort(data):
    for i in range(1, len(data)):
        j = i
        while (j > 0 and data[j - 1] > data[j]):
            data[j], data[j - 1] = data[j - 1], data[j]
            j -= 1
    return data


data = [1, -1, 3, 9, 0, 0, 4, 2, -5]
data = insertion_sort(data)
print(data)
