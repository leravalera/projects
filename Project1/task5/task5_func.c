#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x)
{
	float  d;
	d = (1 + cos(2 * x)) / 2 - (1 - cos(2 * x)) / 2;
	return(d);
}
