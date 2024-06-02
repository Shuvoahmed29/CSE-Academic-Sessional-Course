#Write a Python program to perform following operation – i) Sampling ii) Quantization iii) Coding.
import numpy as np
import matplotlib.pyplot as plt

frequency = 5
amplitude = 1
duration = 1
sample_rate = 50

#Orginal Signal
orginal_time = np.linspace(0,duration,int(duration*sample_rate*100),endpoint=False)
Orginal_amplitude = amplitude*np.sin(2*np.pi*frequency*orginal_time)

plt.figure(figsize=(10,6))

plt.subplot(3,1,1)
plt.plot(orginal_time,Orginal_amplitude,label="Orginal Signal")
plt.title("Orginal Continuous Signal")
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.legend()

#Sampling
sample_time = np.linspace(0,duration,int(duration*sample_rate),endpoint=False)
sample_amplitude = amplitude*np.sin(2*np.pi*frequency*sample_time)

plt.subplot(3,1,2)
plt.stem(sample_time,sample_amplitude,'b',label="Sampling Signal")
plt.title("Sampling Signal")
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.legend()

#Quantized
num_level = 16
quantized_value = np.linspace(-amplitude,amplitude,num_level)
quantized_index = np.digitize(sample_amplitude,quantized_value)-1
quantized = quantized_value[quantized_index]

plt.subplot(3,1,3)
plt.stem(sample_time,quantized,'g',label="Quantized Signal")
plt.title("Quantized Signal")
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.legend()

#Coding
def decimal_to_binary(n,bits):
    return bin(n)[2:].zfill(bits)
bits_per_sample = int(np.ceil(np.log2(num_level)))
x_encoded = [decimal_to_binary(index,bits_per_sample) for index in quantized_index]

print("Quantized Amplitudes and Corresponding Binary Codes:")
for i,code in enumerate(x_encoded):
    print(f'Sample {i} : Amplitude = {quantized[i]:.2f}, Binary Code: {code}')

plt.tight_layout()
plt.show()