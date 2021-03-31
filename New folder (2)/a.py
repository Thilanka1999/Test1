import numpy as np
import matplotlib.pyplot as plt
t=np.arange(-2*np.pi,2*np.pi,np.pi/100)
A=1
omega=1
phi=np.pi/6
xt=A*np.cos(omega*t-phi)
plt.plot(t,xt)
plt.show()
