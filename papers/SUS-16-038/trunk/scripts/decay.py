import math
import numpy as np
import matplotlib.pyplot as plt

def decay(t,tau=1.) :
    #print "test",t,tau,math.exp(-1.*t/tau),(1./tau)*math.exp(-1.*t/tau)
    return (1./tau)*math.exp(-1.*t/tau)

def integral(t0,t1,tau=1.) :
    integral1 = -1.*math.exp(-1.*t1/tau)
    integral0 = -1.*math.exp(-1.*t0/tau)
    return integral1 - integral0

ctau_low = -3
ctau_high = 6
ctaus = range(ctau_low,ctau_high,1)
tvals = map( lambda t: 10**t, np.arange(ctau_low,ctau_high,0.2) )
print [ 10**ctau for ctau in ctaus ]

for ctau in ctaus : 
    print "integral",10**ctau,integral(0.,np.infty,tau=10**ctau)

####

colours = ['tab:blue', 'tab:orange', 'tab:green', 'tab:red', 'tab:purple', 'tab:brown', 'tab:pink', 'tab:gray', 'tab:olive', 'tab:cyan']
for ctau,colour in zip(ctaus,colours) : 
    print ctau
    decays = map(lambda t: decay(t,10**ctau), tvals)
    plt.plot(tvals, decays, colour,label="1E{:.0f}".format(ctau))
    plt.xscale('log')
    plt.yscale('log')
    plt.axis([10**ctau_low, 10**ctau_high, 1./10**ctau_high, 1./10**ctau_low])
plt.legend()
plt.savefig("ctaus.pdf")
plt.close()

####

colours = ['tab:blue', 'tab:orange', 'tab:green', 'tab:red', 'tab:purple', 'tab:brown', 'tab:pink', 'tab:gray', 'tab:olive', 'tab:cyan']
for ctau,colour in zip(ctaus,colours) : 
    print ctau
    decays = map(lambda t: decay(t,10**ctau), tvals)
    plt.plot(tvals, decays, colour,label="1E{:.0f}".format(ctau))
    plt.xscale('log')
    plt.yscale('log')
    plt.axis([10**ctau_low, 10**ctau_high, 1./10**ctau_high, 1./10**ctau_low])
plt.legend()
plt.savefig("plots/ctaus.pdf")
plt.close()
