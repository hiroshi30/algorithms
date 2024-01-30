def selection_sort(data):
    for i in range(len(data)):
        index_min = i
        for j in range(i, len(data)):
            if data[j] < data[index_min]:
                index_min = j
        data[i], data[index_min] = data[index_min], data[i]
    return data


data = [1, -1, 3, 9, 0, 0, 4, 2, -5]
data = selection_sort(data)
print(data)
