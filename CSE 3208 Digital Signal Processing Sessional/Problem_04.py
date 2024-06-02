# Write a Python program to perform the convolution and correlation of two sequences.
import numpy as np
import matplotlib.pyplot as plt

x = np.array([1,2,3,4])
h = np.array([1,1,1,1])

Convulation = np.convolve(x,h,mode='full')
Correlation = np.correlate(x,h,mode='full')

plt.figure(figsize=(10,6))

plt.subplot(4,1,1)
plt.title("x Signal")
plt.stem(x,basefmt=" ")
plt.xlabel("Index")
plt.ylabel("Amplitude")
plt.legend()

plt.subplot(4,1,2)
plt.title("h Signal")
plt.stem(h,basefmt=" ")
plt.xlabel("Index")
plt.ylabel("Amplitude")
plt.legend()

plt.subplot(4,1,3)
plt.title("Convulation Signal")
plt.stem(Convulation,basefmt=" ")
plt.xlabel("Index")
plt.ylabel("Amplitude")
plt.legend()

plt.subplot(4,1,4)
plt.title("Correlation Signal")
plt.stem(Correlation,basefmt=" ")
plt.xlabel("Index")
plt.ylabel("Amplitude")
plt.legend()

print(f"Convulation Result: {Convulation}")
print(f"Correlation Result: {Correlation}")

plt.tight_layout()
plt.show()