#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main(){
	int i;
	double x,y,x0,y0;
	freopen("a.out","w",stdout);
	x=0.8;y=0.6;
	x0=0;
	y0=0;
	while(sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0))>=0.001){
		y0=y;
		x0=x;
		x=(0.5*x0+2*y0*x0*x0+y0*y0/2/x0+1/2/x0)/(1+3*x0*y0);
		y=(1.5*x0+3/2*y0*y0*x0-1/2*x0*x0*x0)/(1+3*x0*y0);
		printf("%lf %lf\n",x,y);
	}
	return 0;
}

