#include<stdio.h>

int main(){
    char username[10];
    int password;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%d", &password);

    if(username[0]=='u' && username[1]=='s' && username[2]=='e' && username[3]=='r' && password==7890){
        
		printf("connection successful");
    }
    else{
        printf("connection failed");
    }

    return 0;
}

