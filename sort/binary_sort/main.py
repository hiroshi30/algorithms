def binary_sort(data):
    length = len(data)
    if length <= 1:
        return data
    mid = int(length / 2)
    mid = data.pop(mid)
    left, right = [], []
    for x in data:
        if x <= mid:
            left.append(x)
        else:
            right.append(x)

    return binary_sort(left) + [mid] + binary_sort(right)


data = [1, -1, 3, 9, 0, 0, 4, 2, -5]
data = binary_sort(data)
print(data)
