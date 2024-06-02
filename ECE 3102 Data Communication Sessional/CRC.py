def xor1(a, b):
    result = ""
    n = len(b)
    for i in range(1, n):
        if a[i] == b[i]:
            result += "0"
        else:
            result += "1"
    return result

def mod2div(dividend, divisor):
    pick = len(divisor)
    tmp = dividend[:pick]
    n = len(dividend)

    while pick < n:
        if tmp[0] == '1':
            tmp = xor1(divisor, tmp) + dividend[pick]
        else:
            tmp = xor1('0' * pick, tmp) + dividend[pick]

        pick += 1

    if tmp[0] == '1':
        tmp = xor1(divisor, tmp)
    else:
        tmp = xor1('0' * pick, tmp)

    return tmp

def encode_data(data, key):
    l_key = len(key)
    appended_data = data + '0' * (l_key - 1)
    remainder = mod2div(appended_data, key)
    codeword = data + remainder
    print("Remainder : ", remainder)
    print("Encoded Data (Data + Remainder): ", codeword)

def receiver(data, key):
    curr_xor = mod2div(data[:len(key)], key)
    curr = len(key)

    while curr != len(data):
        if len(curr_xor) != len(key):
            curr_xor += data[curr]
            curr += 1
        else:
            curr_xor = mod2div(curr_xor, key)

    if len(curr_xor) == len(key):
        curr_xor = mod2div(curr_xor, key)

    if '1' in curr_xor:
        print("There is some error in data")
    else:
        print("Correct message received")

# Driver code
data = input("Inter Data: ")
key = "1101"
print("Sender side...")
encode_data(data, key)

print("\nReceiver side...")
receiver(data + mod2div(data + '0' * (len(key) - 1), key), key)
