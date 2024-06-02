# Design a bandpass filter of length M=32 with passband edge frequencies fp1=0.2 and fp2=0.35 
# and stopband edge frequencies fs1=.1 and fs2=0.425.

import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import firwin,freqz

M = 32
fp1 = 0.2
fp2 = 0.35
fs1 = 0.1
fs2 = 0.425

normalize_fp1 = fp1
normalize_fp2 = fp2
normalize_fs1 = fs1
normalize_fs2 = fs2

h = firwin(M,[normalize_fp1,normalize_fp2],pass_zero=False,fs = 1.0, window='hamming')

W,H = freqz(h,worN=8000)
plt.figure(figsize=(10,6))

plt.plot(W/np.pi,20*np.log10(np.abs(H)),'b',label = "Bandpass Filter Response")
plt.axvline(normalize_fp1,color="red",linestyle="--",label=f"Passband Edge 1 ({fp1}) Hz")
plt.axvline(normalize_fp2,color="red",linestyle="--",label=f"Passband Edge 2 ({fp2}) Hz")
plt.axvline(normalize_fs1,color="y",linestyle="--",label=f"Passband Edge 1 ({fs1}) Hz")
plt.axvline(normalize_fs2,color="y",linestyle="--",label=f"Passband Edge 2 ({fs2}) Hz")
plt.title("Bandpass Frequency Response")
plt.xlabel("Normalize Frequency(Hz)")
plt.ylabel("Magnitude(dB)")

plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()