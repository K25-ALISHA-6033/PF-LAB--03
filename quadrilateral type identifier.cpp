#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter four side lengths of the quadrilateral:\n");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	if(a<=0 ||b<=0|| c<=0||d<=0){
		printf("Not a valid quadrilateral\n");
	}
	else{
		if(a==b&& b==c &&c==d){
			printf("square\n");
			
		}
		else if (a==c && b==d){
			printf("Rectangle\n");
		}
		else{
			printf("General quadrilateral\n");
			
		}
	}
	return 0;
}
