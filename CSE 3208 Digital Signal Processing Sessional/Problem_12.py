# Use a Python program to determine and show the ‘’poles‖’’ ‘’zeros‖’’ and also ‘’roots‖’’ of the following systems-
# a) H(s) = (s^3+1)/(s^4+2s^2+1)            b) H(s) = (4s^2+8s+10)/(2s^3+8s^2+18s+20)
import numpy as np
import matplotlib.pyplot as plt

def plot_pole_zero(num,deno,title):
    zeros = np.roots(num)
    poles = np.roots(deno)

    plt.figure(figsize=(10,6))
    plt.scatter(np.real(zeros),np.imag(zeros),color='blue',marker='o',label="Zeros")
    plt.scatter(np.real(poles),np.imag(poles),color='red',marker='x',label="Poles")
    plt.title(title)
    plt.axhline(0,color='black',lw=0.5)
    plt.axvline(0,color='black',lw=0.5)
    plt.grid(True)
    plt.xlabel("Real")
    plt.ylabel("Imaginary")
    plt.legend()
    plt.show()

    return zeros,poles


num_a = [1,0,0,1]
deno_a = [1,0,2,1]

num_b = [4,8,10]
deno_b = [2,8,18,20]

zero_a,pole_a = plot_pole_zero(num_a,deno_a,'Poles and Zeros of System a')
zero_b,pole_b = plot_pole_zero(num_b,deno_b,'Poles and Zeros of System b')

print("Sytem A:")
print("Zeros: ",zero_a)
print("Poles: ",pole_a)

print("Sytem B:")
print("Zeros: ",zero_a)
print("Poles: ",pole_b)