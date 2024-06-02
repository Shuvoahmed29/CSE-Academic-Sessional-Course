#Write a program to display the following region of a speech signal:i) Voiced region, ii) Unvoiced region, iii) Silence region.
import librosa
import numpy as np
import matplotlib.pyplot as plt

file_path = r"C:\Users\SHUVO\Desktop\AlgoBangla29\948A.wav"
signal,sr = librosa.load(file_path,sr=None)
time = np.linspace(0,len(signal)/sr,num=len(signal))

plt.figure(figsize=(10,6))
plt.subplot(2,1,1)
plt.plot(time,signal)
plt.title("Orginal Speech Signal")
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.legend()

def classify_region(singnal,sr,frame_length=2048,hop_length=512):
    energy=np.array([
        np.sum(np.abs(signal[i:i+frame_length]**2))
        for i in range(0,len(signal),hop_length)
    ])
    #Normalize
    energy = (energy-np.min(energy)) / (np.max(energy)-np.min(energy))

    silence = 0.1
    unvoice = 0.3

    region = np.zeros_like(energy)
    region[energy>unvoice] = 2 #Voice
    region[(energy<=unvoice) & (energy>silence)] = 1 #Unvoice
    region[energy<=silence] = 0 #Silence

    return region,energy

region,energy = classify_region(signal,sr)
frame_time = np.linspace(0,len(signal)/sr,num=len(energy))

plt.subplot(2,1,2)
plt.plot(frame_time,energy,label="Energy")
plt.fill_between(frame_time,0,1,where=region==0, color="gray",alpha=0.5,transform=plt.gca().get_xaxis_transform(),label="Silence")
plt.fill_between(frame_time,0,1,where=region==1, color="yellow",alpha=0.5,transform=plt.gca().get_xaxis_transform(),label="Unvoice")
plt.fill_between(frame_time,0,1,where=region==2, color="green",alpha=0.5,transform=plt.gca().get_xaxis_transform(),label="Voice")
plt.title("Voice,Unvoice and Silence")
plt.xlabel("Time")
plt.ylabel("Normalize Energy")
plt.legend(loc='upper right')

plt.tight_layout()
plt.show()