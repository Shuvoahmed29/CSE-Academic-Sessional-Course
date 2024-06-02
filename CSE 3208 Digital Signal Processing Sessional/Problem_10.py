# Design a Lowpass filter to meet the following specifications—Passsband edge=1.5KHz, 
# Transition width = 0.5KHz, Fs=10KHz Filter length =67, use Blackman window in the design
import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import firwin,freqz

fp = 1500
wt = 500
Fs = 10000
N = 67
window = 'blackman'

Omega_P = 2*np.pi*fp/Fs

h = firwin(N,Omega_P/np.pi, window=window,fs=Fs)

W,H = freqz(h,worN=8000,fs=Fs)

plt.figure(figsize=(10,6))
plt.plot(W,20*np.log10(np.abs(H)),'b',label="Low Pass Filter")
plt.title("Low Pass Filter Frequency Responce")
plt.xlabel("Frequency(Hz)")
plt.ylabel("Magnitude(dB)")
plt.axvline(fp,color='red',linestyle='--',label=f"Passsband edge {fp} Hz")
plt.axvline(fp+wt/2,color='red',linestyle='--',label=f"Stopband Edge {fp+wt/2} Hz")
plt.axvline(fp+wt/2,color='green',linestyle='--')
plt.legend()
plt.grid()

plt.tight_layout()
plt.show()