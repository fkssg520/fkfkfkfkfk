#include<stdio.h>
int main() {
	int K,a,b,c;
	scanf("%d",&K);
	while(K--) {
		scanf("%d+%d=%d",&a,&b,&c);
		int cnt1;
    if(c==a*1+b) cnt1 = 0;
    else if(c==a*100000000+b) cnt1 = 8;
    else if(c==a*10000000+b) cnt1 = 7;
    else if(c==a*1000000+b) cnt1 = 6;
    else if(c==a*100000+b) cnt1 = 5;
    else if(c==a*10000+b) cnt1 = 4;
    else if(c==a*1000+b) cnt1 = 3;
    else if(c==a*100+b) cnt1 = 2;
    else if(c==a*10+b) cnt1 = 1;
    else if(c==a+b*10) cnt1 = -1;
    else if(c==a+b*100) cnt1 = -2;
    else if(c==a+b*1000) cnt1 = -3;
    else if(c==a+b*10000) cnt1 = -4;
    else if(c==a+b*100000) cnt1 = -5;
    else if(c==a+b*1000000) cnt1 = -6;
    else if(c==a+b*10000000) cnt1 = -7;
    else if(c==a+b*100000000) cnt1 = -8;
    printf("%d\n",cnt1);
	}
    return 0;
}
