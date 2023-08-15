//program to calculate the BMI of a person
#include <stdio.h>

int main(){

//declaring the data type  and variable_name
float w,h,bmi;

//weignt in kilogram and height in meters
printf("Input your weight:     \n ");
scanf("%f",&w);

printf("Input your height:     \n ");
scanf("%f",&h);

bmi = (w)/(h*h);

//printing your BMI,height and weight
printf("Your BMI is %f \nYour weight is %f \nYour height is %f \n", bmi,w,h);

if(bmi<18.5){
    printf("You are underweight\n");
}
else if (bmi<=24.9){
    printf("You are healthy\n");
}
else if (bmi<=29.9){
    printf("You are overweight\n");
}
else{
    printf("You are obese");
}
return 0;

}