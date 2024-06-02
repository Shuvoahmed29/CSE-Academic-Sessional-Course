# Design an FIR filter to meet the following specifications—Passsband edge=2KHz,
#Stopband edge= 5KHZ, Fs=20KHz, Filter length =21, use Hanning window in the design
import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import freqz
fp = 2000
fs = 5000
Fs = 20000
N = 21

n = np.arange(N)-(N-1)/2
h_ideal = np.sinc((2*fp/Fs)*n)

hamming_window = np.hamming(N)
h = h_ideal*hamming_window

plt.figure(figsize=(10,6))

plt.subplot(2,1,1)
plt.stem(n,h)
plt.title("Implus Response of FIR Filter")
plt.xlabel("n")
plt.ylabel("h[n]")
plt.grid(True)
plt.legend()

W,H = freqz(h,worN=8000)

plt.subplot(2,1,2)
plt.plot(W/np.pi*(Fs/2),20*np.log10(np.abs(H)))
plt.title("Frequency Response of FIR Filter")
plt.xlabel("Frequency(Hz)")
plt.ylabel("Magnitude(dB)")
plt.grid(True)
plt.axvline(fp,color = "green",linestyle="--",label="Passsband Edge")
plt.axvline(fs,color = "green",linestyle="--",label="Stopband Edge")
plt.legend()

plt.tight_layout()
plt.show()