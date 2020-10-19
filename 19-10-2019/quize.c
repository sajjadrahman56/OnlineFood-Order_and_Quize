#include<stdio.h>
void main(){
int q1,q2,score=0;
printf("What is the famous food of Sylhet?\n"
       "1.Tea 2.Mango 3.Coffee\n");
scanf("%d",&q1);
if (q1==1)
{
    printf("Correct");
    ++score;
}
else if (q1==2)
{
    printf("Wrong.Correct answer is 1");
}
else if (q1==3)
{
    printf("Wrong.Correct answer is 1");
}
else
{
    printf("Wrong input");
}
printf("\n2.What is the famous food of Dhaka?\n"
       "1.Apple 2.Haji Biriyani 3.Beatle\n");
scanf("%d",&q2);
if (q2==2)
{
    printf("Correct");
    ++score;
}
else if (q2==1)
{
    printf("Wrong.Correct answer is 2");
}
else if (q2==3)
{
    printf("Wrong.Correct answer is 2");
}
else
{
    printf("Wrong input");
}
printf("\nYour score is %d of 5",score);
}

