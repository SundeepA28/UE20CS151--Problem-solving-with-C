#include<stdio.h>
typedef struct complex{        //structure is created to store the real and imaginary part
    float real;
    float img;
}complex;			//structure of typedef complex
complex add(complex n1,complex n2);  //function to add two complex numbers
complex sub(complex n1,complex n2);  //function to subtract two complex numbers
int main()
{
    complex n1,n2;
    printf("First complex number\n");
    printf("Enter the real and imaginary part\n");	//readss teh first complex number
    scanf("%f %f",&n1.real,&n1.img);

    printf("Second complex number\n");
    printf("Enter the real and imaginary part\n");	//reads the second complex number
    scanf("%f %f",&n2.real,&n2.img);

    complex sum=add(n1,n2);
    complex diff=sub(n1,n2);

    printf("Sum=%.2f+(%.2f)i\n",sum.real,sum.img);	//prints the sum of the complex numbers
    printf("Difference=%.2f+(%.2f)i\n",diff.real,diff.img);  //prints the difference of two complex numbers
    return 0;
}

complex add(complex n1,complex n2)
{
    complex temp;
    temp.real=n1.real+n2.real;			//the real part are added
    temp.img=n1.img+n2.img;			//imaginary part are added
    return temp;
}

complex sub(complex n1,complex n2)
{
    complex temp;
    temp.real=n1.real-n2.real;			//the real part are subtracted
    temp.img=n1.img-n2.img;			//the imaginary part are subtracted
    return temp;
}
