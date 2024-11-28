
#include<stdio.h>
//#include<conio.h>
struct employee 
{
    int id;
    char name [20];
    struct date
    {
        int dd, mm, yyyy;
    }doj;
}e[10]; 
int main() 
{ 
    int n;
    printf("\n enter the numbers of employees-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    { printf("\n%d] employee detail-", i);
    printf("\n EMPLOYEE ID:-");
    scanf("%d", &e[i].id);
    printf("EMPLOYEE NAME:-");
    scanf("%s", &e[i].name);
    printf("write date of joining-");
    printf("\n day:"); 
    scanf("%d",&e[i].doj.dd);
    printf(" month:"); 
    scanf("%d",&e[i].doj.mm);
    printf(" year:");
    scanf("%d",&e[i].doj.yyyy);
        
    } 
   printf("\n*****************************EMPLOYEE DETAILS******************************");
   printf("\n EMPLOYEE ID \t | EMPLOYEE NAME \t | EMPLOYEE JOINING DATE");
   for(int i=1;i<=n;i++)
   {
   printf("\n----------------------------------------------------------------------------");
   printf("\n %d",e[i].id); 
   printf("\t\t|  %s ",e[i].name); 
   printf("\t \t|  %d / %d /%d ",e[i].doj.dd,e[i].doj.mm,e[i].doj.yyyy);
   printf("\n---------------------------------------------------------------------------");
   //getch(); 
   }
     return 0;  
   }
     
