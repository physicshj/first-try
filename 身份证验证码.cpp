#include<cstdio>

int du(int x){
	if(x==0)return 1;
	if(x==1)return 0;
	if(x==2)return -1;//±íÊ¾X 
	if(x==3)return 9;
	if(x==4)return 8;
	if(x==5)return 7;
	if(x==6)return 6;
	if(x==7)return 5;
	if(x==8)return 4;
	if(x==9)return 3;
	if(x==10)return 2;
}
 
int main(){
	int i,j,k,a,s;
	freopen("a.out","w",stdout);
	for(k=0;k<=8;k+=2){
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
	  	    s=280;
	   	    s+=k*2;
			s+=j*4;
			s+=i*8;
			printf("%d%d%d%d\n",i,j,k,du(s%11));
			}
    	}
	}
	return 0;
}

