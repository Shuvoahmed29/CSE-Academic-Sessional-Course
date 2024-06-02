#1. Write a Python program to find the spectrum of the following signal f = 0.25 + 2 sin(2𝜋5𝑘) + sin(2𝜋12.5𝑘) + 1.5 sin(2𝜋20𝑘) + 0.5sin(2𝜋35𝑘)
import numpy as np # type: ignore
import matplotlib.pyplot as plt # type: ignore

sample_rate = 1000
duration = 1.0
t = np.linspace(0,duration,int(duration*sample_rate),endpoint=False)

f = 0.25 + 2*np.sin(2*np.pi*5*t) + np.sin(2*np.pi*12.5*t) + 1.5*np.sin(2*np.pi*20*t)+ 0.5*np.sin(2*np.pi*35*t)

f_fft = np.fft.fft(f)
frequency = np.fft.fftfreq(len(f),1/sample_rate)
magnitude = np.abs(f_fft)

plt.figure(figsize=(10,6))
plt.plot(frequency,magnitude)
plt.title("Frequency Spectrum")
plt.xlabel("Frequency(HZ)")
plt.ylabel("Magnitude")
plt.xlim(0,50)
plt.grid(1)
plt.show()