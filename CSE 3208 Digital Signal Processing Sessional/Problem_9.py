# Creating a signals ‗s‘ with three sinusoidal components (at 5,15,30 Hz) and a time vector ‗t‘ 
# of 100 samples with a sampling rate of 100 Hz, and displaying it in the time domain. Design 
# an IIR filter to suppress frequencies of 5 Hz and 30 Hz from given signal.

import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import iirnotch,lfilter

fs = 100
t = np.arange(100)/fs

s = np.sin(2*np.pi*5*t)+np.sin(2*np.pi*15*t)+np.sin(2*np.pi*30*t)

plt.figure(figsize=(10,6))

plt.subplot(2,1,1)
plt.plot(t,s,label="Orginal Signal")
plt.title("Orginal Signal in Time Domain")
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.grid(True)
plt.legend()

f_notch1 = 5
f_notch2 = 30
Q = 30
b1,a1 = iirnotch(f_notch1,Q,fs)
b2,a2 = iirnotch(f_notch2,Q,fs)

s_filter = lfilter(b1,a1,s)
s_filter = lfilter(b2,a2,s_filter)

plt.subplot(2,1,2)
plt.plot(t,s_filter,label="Filtered Signal")
plt.title("Filtered Signal in Time Domain")
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.grid(True)
plt.legend()

plt.tight_layout()
plt.show()