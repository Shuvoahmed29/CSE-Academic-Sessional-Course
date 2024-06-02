#Explain and simulate Discrete Fourier transform (DFT) and Inverse Discrete Fourier Transform (IDFT) using Python
import numpy as np
import matplotlib.pyplot as plt

def DFT(x):
    N = len(x)
    X = np.zeros(N,dtype=complex)
    for k in range(N):
        for n in range(N):
            X[k] += x[n]*np.exp(-2j*np.pi*k*t/N)
    return X

def IDFT(X):
    N = len(X)
    x = np.zeros(N,dtype=complex)
    for k in range(N):
        for n in range(N):
            x[n] += X[k]*np.exp(2j*np.pi*n*k/N)
    return x/N

N = 64
t = np.arange(N)
freq = 5
x = np.sin(2*np.pi*freq*t/N)

X = DFT(x)
get_x = IDFT(X)

plt.figure(figsize=(10,6))
plt.subplot(2,1,1)
plt.plot(t,x,label="Orginal Signal")
plt.legend()
plt.subplot(2,1,2)
plt.plot(t,get_x.real,label="IDFT to get Orginal")
plt.legend()
plt.show()