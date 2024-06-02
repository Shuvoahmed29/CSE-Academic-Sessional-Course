import numpy as np
import matplotlib.pyplot as plt

def am_modulation(message, carrier_frequency, modulation_index, time):
    message_signal = np.sin(2 * np.pi * message * time)
    carrier_signal = np.sin(2 * np.pi * carrier_frequency * time)
    am_signal = (1 + modulation_index * message_signal) * carrier_signal
    return am_signal

def pm_modulation(message, carrier_frequency, modulation_index, time):
    message_signal = np.sin(2 * np.pi * message * time)
    pm_signal = np.sin(2 * np.pi * carrier_frequency * time + modulation_index * message_signal)
    return pm_signal

def fm_modulation(message, carrier_frequency, modulation_index, time):
    message_signal = np.sin(2 * np.pi * message * time)
    fm_signal = np.sin(2 * np.pi * carrier_frequency * time + 2 * np.pi * modulation_index * np.cumsum(message_signal) / len(time))
    return fm_signal

# Example parameters
message_frequency = 2  # Hz
carrier_frequency = 20  # Hz
modulation_index_am = 0.5
modulation_index_pm = 1
modulation_index_fm = 5

# Time values
time = np.arange(0, 1, 0.001)

# Modulate the signals
am_signal = am_modulation(message_frequency, carrier_frequency, modulation_index_am, time)
pm_signal = pm_modulation(message_frequency, carrier_frequency, modulation_index_pm, time)
fm_signal = fm_modulation(message_frequency, carrier_frequency, modulation_index_fm, time)

# Plotting
plt.figure(figsize=(12, 8))

# AM Modulation
plt.subplot(3, 1, 1)
plt.plot(time, am_signal)
plt.title('AM Modulation')
plt.xlabel('Time')
plt.ylabel('Amplitude')

# PM Modulation
plt.subplot(3, 1, 2)
plt.plot(time, pm_signal)
plt.title('PM Modulation')
plt.xlabel('Time')
plt.ylabel('Amplitude')

# FM Modulation
plt.subplot(3, 1, 3)
plt.plot(time, fm_signal)
plt.title('FM Modulation')
plt.xlabel('Time')
plt.ylabel('Amplitude')

plt.tight_layout()
plt.show()
