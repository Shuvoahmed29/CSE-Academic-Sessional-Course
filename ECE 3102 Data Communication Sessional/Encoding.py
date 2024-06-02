import matplotlib.pyplot as plt

def plot_encoding(encoding, title):
    plt.step(range(len(encoding)), encoding, where='post', linewidth=2)
    plt.title(title)
    plt.xlabel('Time')
    plt.ylabel('Voltage')
    plt.ylim(-1.5, 1.5)
    plt.grid()
    # plt.show()

#Unipolar 1 - Positive Voltage &  0 - Negative Voltage
def unipolar(bits):
    encoding = []
    for bit in bits:
        if bit == '1':
            encoding.extend([1])
        else:
            encoding.extend([0])
    return encoding

# 1 -Transition & 0 -No transition
def nrz_i(bits):
    encoding = []
    voltage = 1
    for bit in bits:
        if bit == '1':
            voltage *= -1
        encoding.extend([voltage]*2)
    return encoding

# 1 - negative voltage & 0 - Positive Voltage
def nrz_l(bits):
    encoding = []
    voltage = 1
    for bit in bits:
        if bit == '1':
            voltage = -1
        else:
            voltage = 1
        encoding.extend([voltage])
    return encoding

# 1 - positive to zero & 0 - negative to zero
def rz(bits):
    encoding = []
    for bit in bits:
        if bit == '0':
            encoding.extend([-1,-1,0,0])
        else:
            encoding.extend([1,1,0,0])
    return encoding

# 1 - Positive to negative & 0 - Negative to positive (Dr. Thomas)
def manchester(bits):
    encoding = []
    for bit in bits:
        if bit == '1':
            encoding.extend([1,-1])
        else:
            encoding.extend([-1,1])
    return encoding

# 1 - No transition & 0 - Transition
def differential_manchester(bits):
    encoding = []
    voltage = 1
    for bit in bits:
        if bit == '1':
            voltage *= -1
            encoding.extend([-voltage, voltage])
        else:
            encoding.extend([voltage, -voltage])
    return encoding


if __name__ == "__main__":
    bits = input("Enter bit: ")

    plt.subplot(2,3,1)
    unipolar_encoding = unipolar(bits)
    plot_encoding(unipolar_encoding,"Unipolar Encoding")
    
    plt.subplot(2,3,2)
    nrz_i_encoding = nrz_i(bits)
    plot_encoding(nrz_i_encoding, "Polar NRZ-I Encoding")
    
    plt.subplot(2,3,3)
    nrz_l_encoding = nrz_l(bits)
    plot_encoding(nrz_l_encoding, "Polar NRZ-L Encoding")
    
    plt.subplot(2,3,4)
    rz_encoding = rz(bits)
    plot_encoding(rz_encoding, "Polar RZ Encoding")
   
    plt.subplot(2,3,5)
    manchester_encoding = manchester(bits)
    plot_encoding(manchester_encoding, "Manchester Encoding")
    
    plt.subplot(2,3,6)
    diff_manchester_encoding = differential_manchester(bits)
    plot_encoding(diff_manchester_encoding, "Differential Manchester Encoding")
    
    plt.tight_layout()
    plt.show()
