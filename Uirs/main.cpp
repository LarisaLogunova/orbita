#include <iostream>
#include "custommodel.h"
#include "integrator.h"

using namespace std;

int main()
{
    satellite *s = new satellite();
    s->setSampIncrement(100.0);
    s->setT_st(0.0);
    s->setT_fin(86400.0);
    dormandPrinceIntgrator *dp_integrator = new dormandPrinceIntgrator();
    dp_integrator->run(s);
    return 0;
}
