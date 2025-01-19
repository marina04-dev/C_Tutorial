#include<stdio.h>

int main()
{
    int zarA1, zarA2, zarB1, zarB2;
    printf("Dwse to  apotelesma tou prwtou zariou toy paikti A: ");
    scanf("%d", &zarA1);
    printf("Dwse to  apotelesma tou deyterou zariou toy paikti A: ");
    scanf("%d", &zarA2);
    printf("Dwse to  apotelesma tou prwtou zariou toy paikti B: ");
    scanf("%d", &zarB1);
    printf("Dwse to  apotelesma tou deyterou zariou toy paikti B: ");
    scanf("%d", &zarB2);
    
    if ((zarA1+zarA2)>(zarB1+zarB2)) {
        printf("Nikitis einai o paiktis A");
    }
    else if ((zarA1+zarA2)<(zarB1+zarB2)){
        printf("Nikitis einai o paiktis B");
    }
    else {
        printf("Exoume isopalia");
    }
    
    
}
