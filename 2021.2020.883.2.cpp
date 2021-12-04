#include<stdio.h>
int main()
{ float score; char grade;
int i, k;
for(i=0; i<5; i++)
{ scanf("%f", &score) ;
k=(int) (score/10) ;
if(score>100) k++;
switch(k)
{ case 0:
case 1:
case 2:
case 3:
case 4:
case 5: grade='E'; break;
case 6: grade='D'; break;
case 7: grade='C'; break;
case 8: grade='B'; break;
case 9:
case 10: grade='A'; break;
default: grade='n';
}
if(grade=='n') printf("input data wrong! \n") ;
else printf("score=%6.1f-->grade=%c\n", score, grade) ;
}
return 0;
}