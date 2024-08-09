/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main()
{
int sum=21,u,c;
while(sum!=1)
{
  printf("\n Choose the number: ");
  scanf("%d",&u);
  if(u>=1&&u<=4)
  {
    c = 5-u;
    printf(" Computer chooses the number: %d",c);
    sum = sum - (u+c);
    printf("\n Number of matchsticks left: %d",sum);
  }
  else
  {
    printf("\n Enter valid numbers");
    break;
  }
}
if(sum==1)
{
  printf("\n Computer wins the game");
}
printf("\n\t\t23CS041_DHRUV_LOKADIYA");
return 0;
}

