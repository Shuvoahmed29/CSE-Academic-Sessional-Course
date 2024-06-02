
def hamming_error_check(data):
    c1 = 0
    c2 = 0
    c3 = 0
    c4 = 0
    idx = 1
    ok = False
    for i in range(len(receve_data)):
        if i%2 == 0:
            c1 ^= receve_data[i]
        if i == idx:
            c2 ^= receve_data[i]
            if ok == False:
                idx += 1
                ok = True
            else:
                idx +=3
                ok = False
        if i >= 3:
            c3 ^= receve_data[i]
        if i >= 7:
           c4 ^= receve_data[i]
    
    c = c1 + 2*c2 + 4*c3 + 8*c4
    if c == 0:
        print("There is no error")
    else:
        print("Error detected at position:", len(receve_data)-c+1)
        print("Which is:", data[c-1],"\nIt should be:", 1 if data[c-1] == '0' else 0)

a = input("Enter bit transmitted data: ")
receve_data = []
for i in a:
    receve_data.append(int(i))

receve_data.reverse()
hamming_error_check(receve_data)