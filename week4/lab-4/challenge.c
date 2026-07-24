#include<stdio.h>
int main(){
    char gradeC , gradeP , gradeCo;
    float calc, phy, compro, GPAp, GPAc, GPAco;
    float GPAavg;

    printf("calculus score :");
    scanf("%f", &calc);
    printf("physics score :");
    scanf("%f", &phy);
    printf("compro score :");
    scanf("%f", &compro);

    if(calc >= 80){
        gradeC = 'A';
    }
    else if(calc < 80 && calc >= 70){
        gradeC = 'B';
    }
    else if(calc 70 >= 60){
        gradeC = 'C';
    }
    else if(calc 60>= 50){
    gradeC = 'D';    
    }
    else{
    gradeC = 'F';
    }
    
    if(phy > 80)
        gradeP = 'A';
    else if(phy >= 70)
        gradeP ='B';
    else if(phy >= 60)
        gradeP = 'C';
    else if(phy >= 50)
    gradeP = 'D';    
    else
    gradeP = 'F';
    
    if(compro > 80)
        gradeCo = 'A';
    else if(compro >= 70)
        gradeCo = 'B';
    else if(compro >= 60)
        gradeCo = 'C';
    else if(compro >= 50)
    gradeCo = 'D';    
    else
    gradeCo = 'F';
  
    if (gradeP == 'A')
    GPAp == 4.0;
    else if (gradeP == 'B')
    GPAp = 3.0;
    else if (gradeP == 'C')
    GPAp = 2.0;
    else if (gradeP == 'D')
    GPAp = 1.0;
    else
    GPAp = 0.0;
    
    
    if (gradeC == 'A')
    GPAc == 4.0;
    else if (gradeC == 'B')
    GPAc = 3.0;
    else if (gradeC == 'C')
    GPAc = 2.0;
    else if (gradeC == 'D')
    GPAc = 1.0;
    else
    GPAc = 0.0;


    if (gradeCo == 'A')
    GPAco == 4.0;
    else if (gradeCo == 'B')
    GPAco = 3.0;
    else if (gradeCo == 'C')
    GPAco = 2.0;
    else if (gradeCo == 'D')
    GPAco = 1.0;
    else
    GPAco = 0.0;

    GPAavg = (GPAc + GPAco + GPAp)/3;


    printf(" Subject    Score    Grade    Grade");
    printf("\n-----------------------------------");
    printf("\nCalculus    %.2f     %c    %.1f \n",calc,gradeC,GPAc);
    printf("\nPhysics     %.2f     %c    %.1f \n",phy,gradeP,GPAp);
    printf("\nCompro      %.2f     %c    %.1f \n",compro,gradeCo,GPAco);

    printf("\nGPA: %.1f",GPAavg);

    return(0);
}