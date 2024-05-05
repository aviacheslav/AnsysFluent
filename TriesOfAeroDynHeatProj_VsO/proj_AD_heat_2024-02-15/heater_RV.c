/************************************************** *********************
UDF for time dependent volumetric heat generation of xxx cell
************************************************** **********************/
#include "udf.h"

DEFINE_SOURCE(heat_genI,cell,thread,dS,eqn)
{

real source;
real time;
real starttime;
starttime = 0;
time = CURRENT_TIME - starttime; //taking time value;

dS[eqn] = 0;

#if !RP_HOST

int prior;
int nc;
int np;
real cicle;
real heatTime;
real coolTime;
int elements;

prior = 1;
elements = 2;
cicle = 154/2;
nc = time/cicle + 1;
np = (time-(nc-1)*cicle)/(cicle/elements) + 1;
heatTime = cicle/elements;
coolTime = heatTime*(elements - 1);

if (np == prior)
    { source =468360304.978;}
else
    { source = 0; }  


return source;
#endif
}

DEFINE_SOURCE(heat_genII,cell,thread,dS,eqn)
{

real source;
real time;
real starttime;
starttime = 0;
time = CURRENT_TIME - starttime; //taking time value;

dS[eqn] = 0;

#if !RP_HOST

int prior;
int nc;
int np;
real cicle;
real heatTime;
real coolTime;
int elements;

prior = 2;
elements = 2;
cicle = 154/2;
nc = time/cicle + 1;
np = (time-(nc-1)*cicle)/(cicle/elements) + 1;
heatTime = cicle/elements;
coolTime = heatTime*(elements - 1);

if (np == prior)
    { source = 468360304.978;}
else
    { source = 0; }  


return source;
#endif
}

DEFINE_SOURCE(heat_genN,cell,thread,dS,eqn)
{

real source;
real time;
real starttime;
starttime = 0;
time = CURRENT_TIME - starttime; //taking time value;

dS[eqn] = 0;

#if !RP_HOST

int prior;
int prior2;
int nc;
int np;
real cicle;
real heatTime;
real coolTime;
int elements;

prior = 1;
prior2 = 2;
elements = 2;
cicle = 154/2;
nc = time/cicle + 1;
np = (time-(nc-1)*cicle)/(cicle/elements) + 1;
heatTime = cicle/elements;
coolTime = heatTime*(elements - 1);

if (np == prior || np == prior2)
    { source = 281308908.1774;}
else
    { source = 0; }  


return source;
#endif
}


















































