#include<stdio.h>
int main()
{
	int arr[3000];
	arr[0] = arr[1] = 1;
	for( int i = 0; i < 3000; i ++ ) {
		arr[i+2] = arr[i]+arr[i+1];
	}
	int T;
	scanf("%d",&T);
	int n;
	while( T-- ) {
		scanf("%d",&n);
		int temp = 0;
		while( arr[temp++] <= n){	
		}
		int cnt = 0;
		for( int i = 1; i <= temp; i++) {
			if(arr[i]+arr[i]+arr[i] == n ) cnt ++;
			for(int j = i+1; j <= temp; j++) {
				if(arr[i]+arr[i]+arr[j] == n) cnt ++;
				if(arr[i]+arr[j]+arr[j] == n) cnt ++;
				for(int k = j+1; k <= temp; k++) {
					if(arr[i]+arr[j]+arr[k] == n) cnt ++;
				}
			}
		}
		printf("%d\n",cnt);
	}
 	return 0;
}