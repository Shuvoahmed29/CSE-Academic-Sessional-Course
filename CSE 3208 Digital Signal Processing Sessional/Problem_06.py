# Write a python program to compute short term auto-correlation of a speech signal.
import librosa
import numpy as np
import matplotlib.pyplot as plt

file_path = r"C:\Users\SHUVO\Desktop\AlgoBangla29\948A.wav"
signal,sr = librosa.load(file_path,sr=None)

def auto_correlation(signal,frame_length=2048,pop_length=512):
    autocor=[]
    for i in range(0,len(signal)-frame_length,pop_length):
        frame = signal[i:i+frame_length]
        frame_autoco = np.correlate(frame,frame,mode="full")
        autocor.append(frame_autoco[frame_length-1:])
    return np.array(autocor)

autoCorrelation = auto_correlation(signal)

plt.figure(figsize=(15,6))
for i in range(min(5,len(autoCorrelation))):
    plt.subplot(5,1,i+1)
    plt.title(f"Frame {i+1} Auto-Correlation")
    plt.plot(autoCorrelation[i])
    plt.xlabel("Leg")
    plt.ylabel("Auto-Correlation")

plt.tight_layout()
plt.show()