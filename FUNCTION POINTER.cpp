#include <stdio.h>

int basic(int d,int hp){ return hp-d; }
int power(int d,int hp){ return hp-(int)(d*2.5); }
int heal(int d,int hp){ return hp+20; }
int poison(int d,int hp){
    printf("Poison applied\n");
    return hp-(d/2);
}

int main(){
    int hp=100, dmg=25, choice;
    int (*action)(int,int);

    for(int i=0;i<3;i++){
        scanf("%d",&choice);

        if(choice==1) action=basic;
        else if(choice==2) action=power;
        else if(choice==3) action=heal;
        else action=poison;

        hp = action(dmg, hp);
        printf("HP: %d\n", hp);
    }
    return 0;
}
