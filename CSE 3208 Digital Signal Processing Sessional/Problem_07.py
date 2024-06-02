# Let x(n )= { 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1}. Determine and plot the following sequences. y(n)=2x(n − 5) − 3x(n+4).
import numpy as np
import matplotlib.pyplot as plt

# x(n )= { 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1}
x_n = np.array([1,2,3,4,5,6,7,6,5,4,3,2,1])
n_x = np.arange(0,len(x_n))

plt.figure(figsize=(10,6))
plt.subplot(2,1,1)
plt.stem(n_x,x_n)
plt.title('x(n )= { 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1}')
plt.xlabel('n')
plt.ylabel('x(n)')
plt.grid(True)

n_y = np.arange(-4,len(x_n)+5)
y_n = np.zeros_like(n_y,dtype=float)

#y(n)=2x(n − 5) − 3x(n+4)
for i in range(len(n_y)):
    shift_minus5 = i-5
    shift_plus4 = i+4

    if 0<shift_minus5<len(x_n):
        y_n[i]+=2*x_n[shift_minus5]
    if 0<shift_plus4<len(x_n):
        y_n[i]-=3*x_n[shift_plus4]

plt.subplot(2,1,2)
plt.stem(n_y,y_n)
plt.title('y(n) = 2x(n - 5) - 3x(n + 4)')
plt.xlabel('n')
plt.ylabel('y(n)')
plt.grid(True)

plt.tight_layout()
plt.show()