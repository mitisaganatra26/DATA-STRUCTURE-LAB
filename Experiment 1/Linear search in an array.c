#include<stdio.h>
void main() {
	int a[20], i, n, key, flag=0, pos;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &key);
	for(i=0; i<n; i++)
		{
			if(a[i]==key){
				pos=i;
				flag=1;
			}
		
	
	
	//Type your content here
	
	
	
	
	}
	if (flag == 1) {
		printf("found at position %d\n", pos);
	} else {
		printf("%d not found\n", key);
	}
}
