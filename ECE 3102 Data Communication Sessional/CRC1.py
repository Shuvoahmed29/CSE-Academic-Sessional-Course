def xor1(a,b):
    n = len(b)
    result = ""
    for i in range(1,n):
        if a[i] == b[i]:
            result +='0'
        else:
            result += '1'
    return result

def Calculation(dividend, divisor):
    pick = len(divisor)
    temp = dividend[:pick]
    n = len(dividend)
    
    while pick<n:
        if temp[0] =='1':
            temp = xor1(divisor,temp)+dividend[pick]
        else:
            temp = xor1('0'*pick,temp)+dividend[pick]
        pick += 1
    
    if temp[0] =='1':
        temp = xor1(divisor,temp)
    else:
        temp = xor1('0'*pick,temp)
    return temp


def encoded_data(data,key):
    n = len(key)-1;
    encode = data + '0'*n;
    remainder = Calculation(encode,key)
    codeword = data+remainder
    print("Remainder: ",remainder)
    print("Encoded data(Data+Remainder): ",codeword)
    return codeword

def decode_data(data,key):
    n = len(key)-1;
    rem = Calculation(data,key)
    if rem == '0'*n:
        print("No Error Found!")
    else:
        print("Error found")

data = input("Enter data: ")
key = input("Enter key: ")

print("Sender Side............")
codeword = encoded_data(data,key)

print("Recever Side..........")
decode_data(codeword,key)