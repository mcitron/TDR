# wget http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_IncMht_formulaSyst/pull/pickle.pkl

import pickle
from scipy import stats

def calc(d) :
    p = [ y for x,y in d.items() ]
    dof = len(p)
    chi2 = sum([ pp**2 for pp in p ])
    return chi2,dof,chi2/dof,1.-stats.chi2.cdf(chi2,dof)

pulls = pickle.load( open("pickle.pkl","r") )
eq0b = dict( [ (x,y) for x,y in pulls.items() if 'eq0b' in x[1] ] )
eq1b = dict( [ (x,y) for x,y in pulls.items() if 'eq1b' in x[1] ] )
eq2b = dict( [ (x,y) for x,y in pulls.items() if 'eq2b' in x[1] ] )
eq3b = dict( [ (x,y) for x,y in pulls.items() if 'eq3b' in x[1] ] )
ge4b = dict( [ (x,y) for x,y in pulls.items() if 'ge4b' in x[1] ] )

chi2,dof,rchi2,pval = calc(pulls)
print "pulls: {:5.2f}, {:3.0f}, {:.2f}, {:.3f}".format(chi2,dof,rchi2,pval)
chi2,dof,rchi2,pval = calc(eq0b)
print "eq0b : {:5.2f}, {:3.0f}, {:.2f}, {:.3f}".format(chi2,dof,rchi2,pval)
chi2,dof,rchi2,pval = calc(eq1b)
print "eq1b : {:5.2f}, {:3.0f}, {:.2f}, {:.3f}".format(chi2,dof,rchi2,pval)
chi2,dof,rchi2,pval = calc(eq2b)
print "eq2b : {:5.2f}, {:3.0f}, {:.2f}, {:.3f}".format(chi2,dof,rchi2,pval)
chi2,dof,rchi2,pval = calc(eq3b)
print "eq3b : {:5.2f}, {:3.0f}, {:.2f}, {:.3f}".format(chi2,dof,rchi2,pval)
chi2,dof,rchi2,pval = calc(ge4b)
print "ge4b : {:5.2f}, {:3.0f}, {:.2f}, {:.3f}".format(chi2,dof,rchi2,pval)

        

