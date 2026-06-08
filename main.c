#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths,science,english,total;
    float average;
    printf("Enter your Maths Marks: ");
    scanf("%d",&maths);
    printf("Enter your Science Marks: ");
    scanf("%d",&science);
    printf("Enter your English Marks: ");
    scanf("%d",&english);


    total = maths+science+english;
    average=total/3.0;

    printf("Your total is: %d\n",total);
    printf("Your average is: %f\n",average);

    if (average >= 80 && average <= 100){
          printf("Your Grade is A\n");
}
    else if (average >= 70 && average < 80){
          printf("Your Grade is B\n");
}
    else if (average >= 60 && average < 70){
          printf("Your Grade is C\n");
}
    else if (average >= 50 && average < 60){
          printf("Your Grade is D\n");
}
    else{
          printf("Your Grade is F\n");
}

   if(maths < 40 || science < 40 || english < 40){
       printf("Result :Fail\n");
     }
   else{
       printf("Result :Pass\n");
     }

     if (maths >= science && maths >= english)
{
    printf("Highest Mark = %d (Maths)\n", maths);
}
else if (science >= maths && science >= english)
{
    printf("Highest Mark = %d (Science)\n", science);
}
else
{
    printf("Highest Mark = %d (English)\n", english);
}

return 0;
}
