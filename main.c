#include<stdio.h>
#include<stdlib.h>

char team1[50],team2[50],t_won[50],t_choose[50];
void member_input()
{

}
void input()
{
    
    int overs;
    printf("Enter names of two teams\n");
    scanf("%s",team1);
    scanf("%s",team2);
    printf("Enter the number of overs:-\n");
    scanf("%d",&overs);
    printf("Who won the toss??\n");
    scanf("%s",t_won);
    printf("What did %s chose to do first?(batting/fielding)\n",t_won);
    scanf("%s",t_choose);
    member_input();
}


int main()
{
   input();
}    
