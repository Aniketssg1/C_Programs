/* Palindrome number
#include<stdio.h>
int main(){
    int r, n, temp;
    int sum = 0;
    printf("Enter the number to check palindrome: ");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        r = n%10;
        sum = (sum*10) + r;
        n = n/10;
    }
    if(temp == sum){
        printf("The entered number %d is a palindrome.\n", temp);
    }
    else{
        printf("The entered number is not a palindrome.\n");
    }
    return 0;
}
*/

/* count number of 3's
#include<stdio.h>
int main(){
    int n, r;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n>0){
        r = n%10;
        n = n/10;
        if(r == 3){
            ++count;
        }
        
    }
    printf("Number of 3's are: %d\n", count);
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, ctr = 1;
    float sum = 0, avg = 0;
    printf("Enter the numbers: ");
    scanf("%d", &num);
    while(num > 0){
        sum += num;
        ctr++;
        scanf("%d", &num);
        if(ctr == 5){
            avg = sum/ctr;
            printf("The average is: %f", avg);
            exit(0); 
        }
        }
    return 0;
    }
*/


/*
#include <stdio.h>

int main( void )
{
    int numberEntered;
    long long int sum;

    sum = 0;

    printf( "Enter numbers to add together (a neg number - exit): " );

    while( scanf( "%d", &numberEntered ) == 1 && numberEntered >= 0 ) 
    {
        sum += numberEntered;
    }

    printf( "%lld\n", sum );
}
*/

/*
#include<stdio.h>
int main()
{
int n;
printf("Decimal  Roman\n");
printf("numbers  numerals\n");
printf("-------------------\n");
for(int i=1; i<=100; i++)
{
n = i;
printf("%d",i);
while(n != 0)
{
if (n >= 100)
{
printf("C");
n -= 100;
}
else if (n >= 90)
{
printf("XC");
n -= 90;
}
else if (n >= 50)
{
printf("L");
n -= 50;
}
else if (n >= 40)
{
printf("XL");
n -= 40;
}
else if (n >= 10)
{
printf("X");
n -= 10;
}
else if (n >= 9)
{
printf("IX");
n -= 9;
}
else if (n >= 5)
{
printf("V");
n -= 5;
}
else if (n >= 4)
{
printf("IV");
n -= 4;
}
else if (n >= 1)
{
printf("I");
n -= 1;
}
}
printf("\n");
}
return 0;
} 
*/


/* do-while loop to print sum n times
#include<stdio.h>
int main(){
    int a,b,n,i=1;
    int sum = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("How mnay times do you wanto add the sum: ");
    scanf("%d", &n);
    do{
        sum += a+b;
        i++;
    }
    while(i<=n);
    printf("The %d times sum is: %d", n,sum);
    return 0;
}
*/

/* n natural numbers while loop
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number of natural numbers:");
    scanf("%d", &n);
    i = 1;
    while(i<=n){
        printf("%d ", i);
        i++;
    }
    return 0;
}
*/ 

/* n naatural numbers in reverse while loop
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of natural numners: ");
    scanf("%d", &n);
    while(n>=1){
        printf("%d ", n);
        n--;
    }
    return 0;
}
*/
/* A to Z while loop
#include<stdio.h>
int main(){
char ch = 'A';
printf("Alphabets from A to Z are:\n");
while(ch <= 'Z'){
    printf("%c ", ch);
    ch++;
}
}
*/

/*even/odd numbers and their sum while loop
#include<stdio.h>
int main(){
    int i=1,n;
    int sum=0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    while(i<=n){
        if(i%2==0) //change == to != for odd
        sum += i;
        i++;
    }
    printf("The sum is: %d ", sum);
    return 0;
}
*/

/* sum of n natural numbers while loop
#include<stdio.h>
int main(){
    int i=1,n;
    int sum = 0;
    printf("Enter the number of natural numners: ");
    scanf("%d", &n);
    while(i<=n){
        sum += i;
        i++;
    }
    printf("The sum of %d natural numbers is: %d", n,sum);
    return 0;
}
*/

/* number of digits while loop
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number: ");
    scanf("%d", &num);
    i = 0;
    while(num>0){
        num = num/10;
        i++;
    }
    printf("Number of digits are: %d", i);
    return 0;
}
*/

/* first and last digit using formula
#include<stdio.h>
#include<math.h>
int main(){
    int n,r,digit,lastdigit;
    printf("Enter the number: ");
    scanf("%d", &n);
    r = n%10;
    printf("The last digit is %d\n", r);
    digit = (int)log10(n);
    lastdigit = (int)(n/pow(10,digit));
    printf("The first digit is: %d", lastdigit);
    return 0;
    
}
*/

/* 1st & last digit swap and sum while loop
#include<stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("Enter the numnber: ");
    scanf("%d", &n);
    r = n;
    while(n>=10){
        n /= 10;
    }
    r %= 10;
    printf("The first digit is: %d\n", n);
    printf("The last digit is: %d\n", r);
    temp = r;
    r = n;
    n = temp;
    sum = r+n;
    printf("The swapped first digit is: %d\n", n);
    printf("The swapped last digit is: %d\n", r);
    printf("The sum of first & last digit is: %d\n", sum);
    return 0;
}
*/

/* + & * of digits while loop
#include<stdio.h>
int main(){
    int n,temp=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n!=0){
        temp *= n%10;
        n /=10;
    }
    printf("The sum of digits is: %d\n", temp);
    return 0;
}
*/

/* Reverse of a number and palindrome while loop
#include<stdio.h>
int main(){
    int n,r=0,temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while(n!=0){
        r = (r*10) + (n%10);
        n /= 10;
    }
    if(r == temp){
        printf("The number is a palindrome.\n", r);
    }
    else{
        printf("The number is not a palindrome.");
    }
    return 0;
}
*/

/* Frequency of each digit for while array
#include<stdio.h>
#define BASE 10

int main(){
    long long num, n;
    int r,i;
    int freq[BASE];

    printf("Enter the number: ");
    scanf("%lld", &num);
    n = num;
    printf("Frequency of each digit in %d num is:\n");

    for(i=0; i<BASE; i++){
        freq[i] = 0;
    }
    while(n!=0){
        r = n%10;
        n /= 10;
        freq[r]++;
    }
    for(i=0; i<BASE; i++){
        printf("Frequency of %d is: %d\n", i,freq[i]);
    }
    return 0;
}
*/

/* number to words while switch case
#include<stdio.h>
int main(){
    int num, r=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num != 0){
        r = (r*10) + (num%10);
        num /= 10;
    }
    while(r != 0){
        switch (r % 10){
            case 0: printf("Zero ");
            break;
            case 1: printf("One ");
            break;
            case 2: printf("Two ");
            break;
            case 3: printf("Three ");
            break;
            case 4: printf("Four ");
            break;
            case 5: printf("Five ");
            break;
            case 6: printf("Sixe ");
            break;
            case 7: printf("Seven ");
            break;
            case 8: printf("Eight ");
            break;
            case 9: printf("Nine ");
            break;
        }
        r /= 10;
    }
    return 0;
}
*/

/* ASCII value print for loop
#include<stdio.h>
int main(){
    int i;
    for(i=0; i<=255; i++){
        printf("ASCII value of character %c = %d\n", i,i);
    }
    return 0;
}
*/

/* power of number for loop
#include<stdio.h>
int main(){
    int num,i,p;
    long long power = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &p);
    for(i=1; i<=p; i++){
        power *= num;
    }
    printf("%d^%d= %lldd ", num,p,power);
    return 0;
}
*/
 
/* factors of a number
#include<stdio.h>
int main(){
    int num,i,n=1;
    int arr[10];
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        if(num % i == 0){
            printf("The factors of number %d are %d.\n", num,i);
        }
    }
    
    return 0;
}
*/

/* LSB of number using &
#include<stdio.h>
#define BITS sizeof(int) * 8
int main(){
    int n,lsb;
    printf("Enter the number: ");
    scanf("%d", &n);
    lsb = 0 << (BITS-1);
    if(n & lsb){
        printf("The MSB of the number is set (0).");
    }
    else{
        printf("The MSB of the numnber is not set (1).");
    }
    return 0;
}
*/

/* Check LSB and MSB
#include<stdio.h>
int main(){
    int n,msb;
    int s;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = sizeof(n)*8;
    msb = 1<<s-1;
    if(n & msb){
        printf("The MSB of number is set (1).");
    }
    else{
        printf("The MSB of number is not set (0).");
    }
    return 0;
}
*/

/*bit wise & | ^ 
#include<stdio.h>
int main(){
    int num,n,newnum;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-31)(both included): ");
    scanf("%d", &n);
    newnum = ~num;
    printf("The number before toggle %d bit is: %d (Decimal)\n", n,num);
    printf("The number after toggle %d bit is : %d (Decimal)\n", n,newnum);
    return 0;
}
*/

/* count trailing & leading 0's
#include<stdio.h>
int main(){
#define INT_SIZE sizeof(int)*8
    int num, ctr, i,msb;
    printf("Enter the number: ");
    scanf("%d", &num);
    ctr = 0;
    msb = 1 << (INT_SIZE-1); 
    for(i=0; i<INT_SIZE; i++){
        if((num << i) & msb){
            break;
        }
        ctr++;
    }
    printf("The number of leading zeroes in %d are: %d",num, ctr);
    return 0;
}
*/

/* Decimal to Binary using while and for loop
#include<stdio.h>
#define INT_SIZE (sizeof(int))
int main(){
    int num,i;
    int arr[INT_SIZE];
    printf("Enter the number: ");
    scanf("%d", &num);
    i = 0;
    while(num>0){
        arr[i] = num % 2;
        num /= 2;
        i++;
    }
    for(int j=i; j>=0; j--){
    printf("%d",arr[j]);
    }
    return 0;
}
*/

/*  Decimal to binary using while loop
#include<stdio.h>
#include<math.h>
int main(){
    int num, rem;
    int power = 0;
    long long int temp;
    long long int bit = 0;
    printf("Enter the integer: ");
    scanf("%d", &num);
    while(num>0){
        rem = num % 2;
        temp = pow(10, power);
        bit += rem * temp;
        num /= 2;
        power++;
    }
    printf("%lld", bit);
    return 0;
}
*/

/*Decimal to binary using bit wise &
#include<stdio.h>
int main(){
    int num, i;
    int mask;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d in 32 bit binary is:", num);
    for(i=31; i>=0; i--){
        mask = (1<<i);
        if(num & mask){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a = 12345;
    printf("%d", printf("%d", printf("%d",a)));
    return 0;
} 
*/

/*
#include<stdio.h>
int main(){
    int age = 30;
    int cutoff = 40;
    int result;
    result = (age>cutoff)?0:1;
    printf("%5d",age);
    printf("World");
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int var = 'a';
    int var2 = 56;
    int num;
    num = sizeof(var) ? (var2 > 23 ?((var == 97) ? 'a' : 0) : 0) : 0;
    printf("%d\n", num);
    printf("%d", sizeof(num));
    return 0;
}
*/

/* function
#include<stdio.h>

double cube(double num);

int main (){
    int num;
    double c;
    printf("Enter the number: \n");
    scanf("%d", &num);
    c = cube(num);
    printf("%.2f", c);
    return 0;
}
 double cube(double num){
     return (num * num * num);
 }
 */

/* Area circumference diameter using dunction
#include<stdio.h>
//#include<math.h>
#define PI 3.14159
double getArea(double r);
double getCircf(double r);
double getDia(double r);
int main(){
    double r, area, circf, dia;
    printf("Enter the radius of circle: \n");
    scanf("%lf", &r);
    area = getArea(r);
    circf = getCircf(r);
    dia = getDia(r);
    printf("Area = %f\ncircumference = %f\n Diameter = %f\n", area, circf, dia);
    return 0;
}

double getArea(double r){
    return (PI * r * r);
}
double getCircf(double r){
    return (2 * PI * r);
}
double getDia(double r){
    return (2 * r);
}
*/

/* max min function
#include<stdio.h>
int getMax(int a, int b);
int getMin(int a, int b);
int main(){
    int a, b,max,min;
    printf("Enter the 2 numbers: ");
    scanf("%d %d", &a, &b);
    max = getMax(a,b);
    min = getMin(a,b);
    printf("\nThe greater is %d", max);
    printf("\nThe smaller is %d", min);
    return 0;
}
int getMax(int a, int b){
    return (a>b)?a:b;
}
int getMin(int a, int b){
    return (a>b)?b:a;
}
*/

/*
#include<stdio.h>
int main(){
    int a=10, b=20, c=30, d=40;
    if(a <= b == d > c){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int square(int);
int main(){
    int num, square;
    printf("enter the number: ");
    scanf("%d", &num);
    square = square(num);
    return 0;
}
int square(int){
    square
}
*/


/* factorial using while loop
#include<stdio.h>
int main(){
    int num, factorial=1;
    printf("Enter the number: \n");
    scanf("%d", &num);
    while(num>0){
        factorial =  factorial * num;
        --num; 
    }
    printf("The factorial is: %d", factorial);
    return 0;
}
*/

/* factorial using for loop
#include<stdio.h>
int main(){
    int num, i, factorial = 1;
    printf("Enter the number: \n");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        factorial = factorial * i;
    }
    printf("factorial is: %d", factorial);
    return 0;
}
*/

/* factorial using recursion
#include<stdio.h>
unsigned long long int factorial(unsigned int num);
int main(){
    unsigned int num;
    printf("Enter the number: \n");
    scanf("%ud", &num);
    printf("factorial is %u", factorial(num));
    return 0;
}
unsigned long long int factorial(unsigned int num){
    if( num == 0){
        return 1;
    }
    return num * factorial(num-1);
}
*/

/* factorial using ternary operator
#include<stdio.h>
int factorial(unsigned int);
int main(){
    int num, factor=1;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("The factorial is: %d", factorial(num));
    return 0;
}
int factorial(unsigned int num){
    return(num == 0 || num ==1) ? 1 : num*factorial(num-1);
}
*/


/* factorial uing tgamma function
#include<stdio.h>
#include<math.h>
int main(){
    int num, factorial;
    printf("Enter the number: \n");
    scanf("%d", &num);
    num = tgamma(num+1);
    printf("The factorial is: %d", num);
    return 0;
}
*/

/*factorial using pointer
#include<stdio.h>
int factorial(unsigned int, int *);
int main(){
    int num, fact;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("The factorial is: %d", factorial(num, &fact));
    return 0;
}
int factorial(unsigned int n, int *ptr){
    *ptr = 1;
    for(int i = 1; i <= n; i++){
        *ptr = *ptr * i;
    }
    return *ptr;
}
*/

/*factorial of series of number for loop
#include<stdio.h>
int main(){
    int lowerlimit, upperlimit,i;
    printf("Enter the number: ");
    scanf("%d %d",&lowerlimit, &upperlimit);
    for(lowerlimit; lowerlimit <= upperlimit; lowerlimit++){
        int factorial = 1;
        for(i=1; i<=lowerlimit; i++){
            factorial = factorial * i;
        }
        printf("The factorial is %d\n", factorial);
    }
    return 0;
}
*/

/*factorial of series using nunbers
#include<stdio.h>
int factorial(int, int, int *, int *);
int main(){
    int r1,r2,fact1,fact2;
    printf("Enter the number: \n");
    scanf("%d %d", &r1, &r2);
    printf("The factorial is: ", factorial(r1,r2,&fact1,&fact2));
    return 0;
}
int factorial(int r1, int r2, int *fact1, int *fact2){
    for(*fact1; *fact1 <= *fact2; *fact1++){
        int factorial = 1;
        for(int i = 1; i <= *fact1; i++){
            factorial = factorial * i;
        }
        return factorial;
    }
}
*/

/*  Perfect number simple code for and if loop
#include<stdio.h>
int main(){
    int num, i, rem;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=1; i<num; i++){
        //rem = num % i;
        if(num % i == 0){
            sum += i;
        }
    }
    (sum == num)? printf("%d is a perfect number.", num): printf("%d not a perfect number.", num);
    return 0;
}
*/

/* Perfect number using function
#include<stdio.h>
int perfectnum(int); //int is return type, perfectnum is function name, int is parameter data type
int main(){
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = perfectnum(num);
    (sum == num)? printf("%d is perfect numnber.", num): printf("%d is not a perfect number.", num);
    return 0;
}
int perfectnum(int x){
    int i, sum =0;
    for(i=1; i<x; i++){
        if(x % i ==0)
        sum += i;
    }
    return sum;
}
*/

/* perfect numner using recursion
#include<stdio.h>
int perfectnum(int, int);
int main(){
    int num, x;
    printf("Enter the number: ");
    scanf("%d", &num);
    (perfectnum(num, x=num/2) == num)? printf("%d is a perfect number.",num): printf("%d is not a perfect number.",num);
    return 0;
}
int perfectnum(int num, int x){
    if(x == 1){
        return 1;
    }
    if(num % x == 0){
        return x + perfectnum(num, x-1);
    }
    else{
        return perfectnum(num, x-1);
    }
    return 0;
}
*/

/*function using pointer
#include<stdio.h>
int perfectnum(int *);
int main(){
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = perfectnum(&num);
    (sum == num)? printf("%d is perfect number.", num): printf("%d is not a perfect number.", num);
    return 0;
}
int perfectnum(int *ptr){
    int sum = 0;
    int i = 1; 
    while(i < ptr){
        if(ptr % i == 0){
            sum += i;
        }
        else{
            sum = sum;
        }
        i++;
    }
    return sum;
}
*/

/*
#include<stdio.h>
int main(){
    int *ptr, num;
    printf("Enter the address: ");
    scanf("%p", &ptr);
    printf("The value is %d\n", num);
    printf("The address is %p\n", ptr);
    return 0;
}
*/


/*print address of a variable and pointer
#include<stdio.h>
int main(){
    int num_1, num_2;
    int *ptr;
    printf("Enter the number: ");
    scanf("%d", &num_1);
    printf("Enter the number: ");
    scanf("%d", &num_2);
    ptr = &num_2;
    printf("address of %d is %p\n", num_1, &num_1);
    printf("address of %d is %p\n", num_2, &num_2);
    printf("address of pointer *ptr is %p\n", *ptr);
    return 0;
}
*/


/* pointer in int float char double pointer
#include<stdio.h>
int main(){
    int m = 300;
    float f = 300.60;
    char c = 'A';
    int *ptr1;
    float *ptr2;
    char *ptr3;
    int **ptr4;
    ptr1 = &m;
    ptr2 = &f;
    ptr3 = &c;
    ptr4 = &ptr1;

    printf("Demonstrate the use of & and 8\n");
    printf("------------------------------\n");
    printf("Value of m using m is %d\n", m);
    printf("Value of m using ptr is %d\n", *ptr1);
    printf("Value of m using * and &m is %d\n", *(&m));
    printf("Address of m using &m is %p\n", &m);
    printf("Address of m using pointer * is %p\n", ptr1);

    printf("Value of f using f is %f\n", f);
    printf("Value of f using ptr is %f\n", *ptr2);
    printf("Value of f using * and &m is %f\n", *(&f));
    printf("Address of f using &m is %p\n", &f);
    printf("Address of f using pointer * is %p\n", ptr2);

    printf("character c using f is %c\n", c);
    printf("character c using ptr is %c\n", *ptr3);
    printf("character c using * and &m is %c\n", *(&c));
    printf("Address of c using &m is %p\n", &c);
    printf("Address of c using pointer * is %p\n", ptr3);

    **ptr4 = 4;
    printf("changed m value is %d", **ptr4);

    return 0;
}
*/


/* sum using pointer
#include<stdio.h>
int main(){
    int x,y;
    long long int sum;
    int *ptrx, *ptry;
    printf("Enter the values of x and y: ");
    scanf("%lld %lld", &x, &y);
    ptrx = &x;
    ptry = &y;
    printf("sum = %lld", (*ptrx + *ptry));
    return 0;
}
*/

/* greater number using pointer and function
#include<stdio.h>
#define X Y
int greatersmaller(int *, int*); //declaration of a pointer using *
int main(){
    int x,y,num;
    //int *ptrx, *ptry;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    //ptrx = &x;
    //ptry = &y;
    num = greatersmaller(&x,&y); // passing address of x and y varible to pointer using &
    (num == 0)?printf("%d is greater than %d", x,y): printf("%d is greater than %d", y,x);
    return 0;
}
int greatersmaller(int *x,int *y){ //naming pointers as x and y
    return (*x>*y)?0:1; //comparing the values of x and y using dereference operator *
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
static int add(int, int);
int main(){
    int a, b, sum;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    sum = add(a,b);
    printf("%d", sum);
    return 0;
}

#include<stdio.h>
static int add(int x, int y){
    int sum;
    sum = x+y;
    return sum;
}
*/

/*
int a,b;
#include<stdio.h>
void print(){
    printf("%d %d", a,b);
}

int fun1(){
    int a,c;
    a=0; b=1; c=2;
    return c;
}

void fun2(){
    int b;
    a=3; b=4;
    print();
}

int main(){
    a = fun1();
    fun2();
}
*/
  
/* printing binary using recursion 
#include <stdio.h>  
void bin(unsigned x) {    // another way to print a number in binary
   if(x/2) bin(x/2);      // if we have not reached bit 0, carry on
   putchar('0'+x%2);      // print the bit
}

void main() { 
   unsigned i;        

   for(i=0;i<256;i++) {   // print 0..255 in binary 
      bin(i);             // and as signed and unsigned chars
      printf(" %d %d \n",(signed char)i,(unsigned char)i);   
   }     
}*/


/* print n natural numbers using recursion
#include<stdio.h>
int fun(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    fun(num);
    return 0;
}
int fun(int num){
    static int x = 1;
    if(x<=num){
        printf("%d ", x);
        ++x;
        fun(num);
        return 0;
    }
}
*/

/* sum of n natural numbers
#include<stdio.h>
int fun(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The sum is %d", fun(num));
    return 0;
}
int fun(int num){
    static int sum = 0;
    if(num > 0){
        sum = num + fun(num-1);
    }
    return sum;
}
/*


/* Fibonacci using recursion
#include<stdio.h>
int fib(int);
int main(){
    int num;
    printf("How many Fibbonacci Numbers: ");
    scanf("%d", &num);
    printf("0 ");
    printf("1 ");
    fib(num);
    return 0;
}
int fib(int num){
    static int prev1 = 0;
    static int prev2 = 1;
    static int i = 0;
    static int res;
    if(i == num){
        return 0;
    }
    else{
        res = prev1 + prev2;
        printf("%d ", res);
        prev1 = prev2;
        prev2 = res;
        i++;
        fib(num);
    }
    return 0;
}
*/

/* Fibbonacci using for loop and recursion
#include <stdio.h>
// fibonacci() funtion definition
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; // retuning 0, if condition meets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition meets
    }
    // else calling the fibonacci() function recursively till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}
int main()
{
    int num; // variable to store how many elements to be displayed in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); // taking user input
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }
    return 0;
}
*/

/* Count the digits using resursion
#include<stdio.h>
int fun(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    fun(num);
    printf("%d", fun(num));
    return 0;
}
int fun(int n){
    static int count = 0;
    if(n != 0 ){
        count++;
        fun(n / 10);
    }
    return count;
}
*/

/*Sum of digits in a number using recursion
#include<stdio.h>
int fun(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The sum is: %d", fun(num));
    return 0;
}
int fun(int n){
    int rem;
    static int sum = 0;
    if(n != 0){
        rem = n % 10;
        sum = sum + rem;
        fun(n / 10);
    }
    return sum;
}
*/

/* even or odd using recursion
#include<stdio.h>
int fun(int, int);
int main(){
    int num1, num2;
    printf("Enter the range:");
    scanf("%d %d", &num1, &num2);
    fun(num1, num2);
    return 0;
}
int fun(int num1, int num2){
    int i;

}
*/

/* print array
#include<stdio.h>
#define N 10
int main(){
    int arr[], i;
    arr[N];
    for(i=0; i<N; i++){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    printf("The array elements are: ");
    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
*/


/*sum of rows and columns of an array
#include<stdio.h>
int main(){
    int arr[5][5], i, j;
    int sum = 0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Enter the element of [%d] [%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\n");
    for(j=0; j<5; j++){
        for(i=0; i<5; i++){
            sum += arr[i][j];
        }
        printf("%d  ", sum);
        sum = 0;
    }
    return 0;
}
*/

/* copying 1-D array elements to another 1-D array
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the size of 1-D Array elements: ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    for(i=0; i<n; i++){
        printf("Enter the elements of array: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<n; i++){
        arr2[i] = arr1[i];
    }
    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}
*/

/* passing single pointer to 1st element of an array
#include<stdio.h>
void printarray(int R, int C, int *arr){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
        printf("%d ", *((arr+i*C)+j));
        }
        printf("\n");
    }
}
int main(){
    int arr[][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    printarray(2, 5, (int *)arr);
    return 0;
} */


/* pointer to an array 
#include<stdio.h>
void printarray(int (*arr)[5], int R, int C){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            printf("%d ", (arr[i][j]));
        }
        printf("\n");
    }
}
int main(){
    int arr[][5] = {{0,1,2,3,4},{5,6,7,8,9}};
    printarray(arr, 2, 5);
    return 0;
} */

/*  largest in array naive approach
#include<stdio.h>
int largest(int arr[6]);
int main(){
    int arr[6], i;
    printf("Enter the elements of the array: ");
    for(i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    largest(arr);
    return 0;
}
int largest(int arr[6]){
    int temp, i;
    temp = arr[0];
    for(i=0; i<6; i++){
        if(arr[i] > temp){
            temp = arr[i+1];
        }
    }
    printf("The largest number is: %d", temp);
} */


/* largest in array using recursion
#include<stdio.h>
int largest(int arr[], int);
int max(int, int);
int main(){
    int arr[6];
    int i = 0;
    printf("Enter the 6 elements of array: ");
    for(int i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    printf("Largest is %d",largest(arr, i));
    return 0;
}
int max(int a, int b){
    if(a > b) return a;
    else return b;
}
int largest(int arr[], int i){
    if(i == 5) return arr[i];
    return max(arr[i], largest(arr, i+1));
} */


/* largest in an array using pointer
#include<stdio.h>
int largest(int arr[6], int *largest){
    *largest = arr[0];
    for(int i=0; i<6; i++){
        if(arr[i] > *largest){
            *largest = arr[i];
        }
    }
    return *largest;
}
int main(){
    int arr[6] = {10, 20, 50, 80,104,501};
    int large;
    largest(arr, &large);
    printf("largest is %d", large);
    return 0;
} */


/* copying 2-D array elements to another 2-D array
#include<stdio.h>
int main(){
    int i,j, x, y;
    printf("Enter the dimensions of array x y: ");
    scanf("%d %d", &x, &y);
    int arr1[x][y];
    int arr2[x][y];

    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("Enter the array element array[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            arr2[i][j] = arr1[i][j];
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


/*counte number of repetitive digits in an array
#include<stdio.h>
int main(){
    int n, i, j;
    int countarr[10] = {0};
    int numarr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Enter the size of 1-D array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<10; j++){
            if(arr[i] == numarr[j]){
                ++countarr[j];
            }
            else continue;
        }
    }
    for(j=0; j<=9; j++){
        if(countarr[j] != 0)
        printf("Number of %d's are %d\n", j, countarr[j]);
    }
    return 0;
}
*/

/* print unique elements 
#include<stdio.h>
int main(){
    int n, i, j;
    int countarr[10] = {0};
    int numarr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Enter the size of 1-D array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<10; j++){
            if(arr[i] == numarr[j]){
                ++countarr[j];
            }
            else continue;
        }
    }
    printf("uniques elements are: ");
    for(j=0; j<=9; j++){
        if(countarr[j] == 1)
        printf("%d ", j);
    }
    return 0;
}
*/

/* Counting number of repeted digits in an array
#include <stdio.h>
int main()
{
   int n,mm=1,ctr=0;
   int i, j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int countarr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Enter %d element of the array :\n",n);
    for(i=0;i<n;i++){
              printf("element - %d : ",i);
              scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
       if (arr[i] == arr[j]) {
         ++countarr[];
         break;
   }
   }
 }
 for(i=0; i<n; i++){
 printf("%d is %d times\n", arr[i], countarr[i]);
 }
 return 0;
}
*/


/* Sum of array elements in sequence
#include<stdio.h>
int main(){
    int n,i, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    int sumarr[n];
    printf("Enter the array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum += arr[i];
        sumarr[i] = sum;
        printf("%d ", sumarr[i]);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++){
        scanf("%d", arr[i]);
    }
    
}
*/

/*Multiplication of arrays
#include<stdio.h>
int main(){
    int i,j,x1,y1, x2,y2;
    printf("Enter the size 1st of array m x m: ");
    scanf("%d %d", &x1, &y1);
    int arr1[x1][y1];
    int arr3[x1][y1];
    for(i=0; i<x1; i++){
        for(j=0; j<y1; j++){
            printf("Enter the element of [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[x1][y1];
    printf("Enter the 2nd array elements: \n");
    for(i=0; i<x1; i++){
        for(j=0; j<y1; j++){
            printf("Enter the element of [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for(i=0; i<x1; i++){
    int sum = 0;
        for(j=0; j<y1; j++){
            sum += (arr1[i][j] * arr2[j][i]) + (arr1[i][j] * arr2[j][i]);
            arr3[i][j] = sum;
        }
    }
    printf("\n");
    for(i=0; i<x1; i++){
        for(j=0; j<y1; j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*transpose of a matrix
#include<stdio.h>
int main(){
    int i, j, m,n;
    printf("Enter the size f array mxn: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int transp[n][m];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
            transp[j][i] = arr[i][j];
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", transp[i][j]);
        }
        printf("\n");
    }
    return 0;    
}
*/


/*Sum of right diagonal
#include<stdio.h>
int main(){
    int i,j,n;
    int sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
            if(i == j){
            sum += arr[i][j];
        }
    }
    }
    printf("sum is %d",sum);
    return 0;
}
*/

/*finding a pair for a given sum
#include<stdio.h>
void sum(int arr[], int n, int s);
int main(){
    int n,s,i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the array element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &s);
    printf("The arrays is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    sum(arr, n, s);
    return 0;
}
void sum(int arr[], int n, int s){
    int i,j;
    int count = 0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] + arr[j] == s){
                printf("The pair is %d & %d", arr[i], arr[j]);
                count++;
                printf("\n");
            }
        }
    }
    if(count == 0) printf("Pair not found");
    return;
}
*/

 /*
#include<stdio.h>
int main(){
    char s[] = "Hello";
    int i;
    //printf("Enter the string: ");
    //scanf("%s", ptr);
    for(i=0; s[i] != '\0'; i++){
        printf("%s ", s);
    }
    printf("\n");
    s[i] = '\0';
    printf("%6.5s", s);
    puts(s);
    puts(s);
    return 0;
}
*/


/* structure redundant
#include<stdio.h>
struct carinfo{              //this structure is in global scope
    char *engine;
    char *model;
    char *power;
}car1, car2;

int car(){
 struct carinfo{              //this structure is in local scope
    char *engine;
    char *model;
    char *power;
 }car0;
 car0.engine = "2JZ";
 car0.model = "Turbo";
 car0.power = "470 HP";
 return car0.engine;
 return car0.model;
 return car0.power;
}

int main(){
    car1.engine = "1.0L Petrol";
    car1.model = "vvti";
    car1.power = "150 HP";
    car2.engine = "1.0L Petrol twin turbo";
    car2.model = "ddsi";
    car2.power = "172 HP";
    printf("Car1 engine is: %s\n", car1.engine);
    printf("Car1 model is: %s\n", car1.model);
    printf("Car1 power is: %s\n", car1.power);
    printf("Car2 engine is: %s\n", car2.engine);
    printf("Car2 model is: %s\n", car2.model);
    printf("Car2 power is: %s\n", car2.power);
    printf("car engine is: %s\n", car());
    printf("Car engine is: %s\n", car());
    printf("Car engine is: %s\n", car());
    return 0;
}
*/

/* structure tag 
#include<stdio.h>
struct carinfo{
    char *name;
    char *engine;
};

int car0(){
    struct carinfo car0;
    car0.name = "Maxzda";
    car0.engine = "Rotary";
    return car0.name, car0.engine;
}

int main(){
    struct carinfo car1;
    struct carinfo car2;
    car1.name = "Supra";
    car1.engine = "2JZ";
    car2.name = "Mustang";
    car2.engine = "Big Block";
    printf("Car0 name is %s\n", car0());
    printf("Car0 engine is %s\n", car0());
    printf("Car1 name is %s\n", car1.name);
    printf("Car1 engine is %s\n", car1.engine);
    printf("Car2 name is %s\n", car2.name);
    printf("Car2 engine is %s\n", car2.engine);
    return 0;
}
*/


/* typedef structure
#include<stdio.h>
typedef struct carinfo{
    char *name;
    char *engine;
}car;

int car0(){
    car car0;
    car0.name = "Maxzda";
    car0.engine = "Rotary";
    return car0.name, car0.engine;
}

int main(){
    car car1;
    car car2;
    car1.name = "Supra";
    car1.engine = "2JZ";
    car2.name = "Mustang";
    car2.engine = "Big Block";
    printf("Car0 name is %s\n", car0());
    printf("Car0 engine is %s\n", car0());
    printf("Car1 name is %s\n", car1.name);
    printf("Car1 engine is %s\n", car1.engine);
    printf("Car2 name is %s\n", car2.name);
    printf("Car2 engine is %s\n", car2.engine);
    return 0;
}
*/


/*
#include<stdio.h>
//#pragma pack(1)
typedef struct favs{
    char *dish;
    int c;
    char *desert;
}favourite;
int main(){
    struct favs fav;  //creating array of structure type (struct favs) with name (fav) and elemnets (10)
    printf("%d", sizeof(fav));
    return 0;
}
*/

/*
#include<stdio.h>
#pragma pack(1)
struct test {
 int a;
 char b;
};
int main(){
printf("%d\n", sizeof(struct test));

struct test {
 int a;
 char b;
};
printf("%d\n", sizeof(struct test));
}
*/


/* Structure call by value to a function
#include<stdio.h>
typedef struct student {
    char name[50];
    int age;
    char dob[10];
}stu;

void print(char name[], int age, char dob[]){
    printf("Name of student is: %s\n", name);
    printf("Age of student is: %d\n", age);
    printf("Date of birth of student is: %s\n", dob);
}

int main(){
    stu s1;
    printf("Enter the name of student: ");
    scanf("%[^\n]", &s1.name); // [^\n] is format specifier for taking a space while scanning a string literal
    printf("Enter the age of student: ");
    scanf("%d", &s1.age);
    printf("Enter the date of birth of student: ");
    scanf("%s", &s1.dob);
    print(s1.name, s1.age, s1.dob);
    return 0;
}
*/

/*structure call by reference
#include<stdio.h>
typedef struct student{
    char name[50];
    int age;
    char dob[10];
}std1;
void print(char* name[], int* age, char* dob[]){
    printf("Name of student is: %s\n", name);
    printf("Age of student is: %d\n", age);
    printf("Date of birth of student is: %s\n", dob);
}
int main (){
    std1 s;
    printf("Enter the name of student: ");
    scanf("%[^\n]", s.name); // [^\n] is format specifier for taking a space while scanning a string literal
    printf("Enter the age of student: ");
    scanf("%d", s.age);
    printf("Enter the date of birth of student: ");
    scanf("%s", s.dob);
    print(ptrname, &s.age, &s.dob[0]);
    return 0;
}
*/


/*
#include<stdio.h>
struct charset {
  char s[10];
  int i;
};

void keyValue(char* s[], int* i) {
  printf("Enter Key Value Pair: ");
  scanf("%c %d", s, i);
}

int main() {
  int j;
  struct charset cs;
  keyValue(&cs.s, &cs.i);
  printf("%c %d", cs.s, cs.i);
  return 0;
}
*/

/*



#include <stdio.h>

 struct Employee
{
    int empid;
    char name[10];
    float salary;
};

void acceptRecord(){
struct Employee e1; //local object
printf("Enter emp id :");
scanf("%d",&e1.empid);
printf("Enter emp name :");
scanf("%s",e1.name);
printf("Enter emp salary :");
scanf("%f",&e1.salary);
printf("\nAddress of e in accept=%d",&e1);
}

void printRecord(){
int num1=10;
struct Employee e; // local object  // mapped to be destroyed
printf("\nAddress of e in print=%d",&e);
printf("\nValue of num %d",num1);
printf("\nEmployee details are %d , %s, %f",e.empid,e.name,e.salary);
}

/*
Local objects/variables gets destroyed immediately after the scope
*/


/*
#include <stdio.h>
int x = 0;
int f()
{
    if (x == 0)
        return x + 1;
    else
        return x - 1;
}
int g()
{
    return x++;
}
int main()
{
    int i = (f() + g()) | g(); //bitwise or
    int j = g() | (f() + g()); //bitwise or
    printf("%d\n", i);
    printf("%d", j);
}
*/

/* 
#include <stdio.h>
int main()
    {
        int n = 0, m = 0;
        if (n > 0)
            if (m > 0)
                printf("True");
        else 
            printf("alse");
    }
*/

/*
   #include <stdio.h>
   int main()
   {
       if (sizeof(int) > -1)
           printf("True");
       else
           printf("%d False", sizeof(int));
   }
   */
/*
    #include <stdio.h>
    main()
    {
        char *p = "Sanfoundry C-Test";
        p[0] = 'a';
        p[1] = 'b';
        printf("%s", p);
    }
*/

/*
#include <stdio.h>
    int main()
    {
        int a[5] = {1, 2, 3, 4, 5};
        int i;
        for (i = 0; i < 4; i++)
            if ((char)a[i] == '5')
                printf("%d\n", a[i]);
            else
                printf("FAIL\n");
                printf("%c", (char)a[i]);
    }
    */

/*   
#include  <stdio.h>
    int main()
    {
        char c;
        int i = 0;
        FILE *file;
        file = fopen("test.txt", "w+");
        fprintf(file, "%c", 'a');
        fprintf(file, "%c", 'c');
        fprintf(file, "%c", 'b');
        fclose(file);
        file = fopen("test.txt", "r");
        while ((c = fgetc(file)) !=  -1)
            printf("%c", c);
        return 0;
    }
*/

/*
#include <stdio.h>
    int main()
    {
        printf("C programming %s","Class by\n Sanfoundry", "WOW");
    }
*/

/*
 #include <stdio.h>
    #define A 10
    int main()
    {
        const int A = 5;
        printf("a = %d\n", A);
    }
*/

/*
    #include <stdio.h>
    int main()
    {
        int k;
        {
            int k;
            for (k = 0; k < 10; k++);
            printf("%d", k);
        }
    }

*/

/* size of datatypes
#include<stdio.h>
int main(){
    short int shortinteger;
    unsigned short unsignedshortinteger;
    int integer;
    unsigned int unsignedinteger;
    long int longinteger;
    unsigned long int unsignedlonginteger;
    long long int longlonginteger;
    unsigned long long int unsignedlonglonginteger;
    char character;
    unsigned char unsignedcharacter;
    float floattype;
    double doubletype;
    long double longdouble;
    
    printf("size of short int is = %ld\n", sizeof(shortinteger));
    printf("size of unsigned short is = %ld\n", sizeof(unsignedshortinteger));
    printf("size of int is = %ld\n", sizeof(integer));
    printf("size of unsigned int is = %ld\n", sizeof(unsignedinteger));
    printf("size of long int is = %ld\n", sizeof(longinteger));
    printf("size of unsignned long int is = %ld\n", sizeof(unsignedlonginteger));
    printf("size of long long int is = %ld\n", sizeof(longlonginteger));
    printf("size of unsigned long long int is = %ld\n", sizeof(unsignedlonglonginteger));
    printf("size of char is = %ld\n", sizeof(character));
    printf("size of unsigned char is = %ld\n", sizeof(unsignedcharacter));
    printf("size of float is = %ld\n", sizeof(floattype));
    printf("size of double is = %ld\n", sizeof(doubletype));
    printf("size of long double is = %ld\n", sizeof(longdouble));

    return 0;
}
*/

/* prime number naive approach
#include<stdio.h>
int prime(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}
int prime(int num){
    int i;
    int flag = 0;
    for(i=0; i = num/2; i++){
        if(num % i ==  0){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("The number %d is not a prime number.", num);
    }
    else{
        printf("The number %d is a prime number.", num);
    }
}
*/

/* prime using sqrt method
#include<stdio.h>
#include<math.h>
int main(){
    int num, i;
    int flag = 0;
    double sqt;
    printf("Enter the number: ");
    scanf("%d", &num);
    sqt = sqrt(num);
    for(i=2; i<= sqt; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("The number %d is not a prime number.", num);
    }
    else{
        printf("The number %d is a prime number.", num);
    }
    return 0;
}
*/


/* prime number using sqrt optimal method
#include<stdio.h>
#include<math.h>
int isprime(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    isprime(num);
    if(isprime(num)){
        printf("%d is prime number.", num);
    }
    else{
        printf("%d is not a prime number.", num);
    }
}
int isprime(int num){
    int i;
    double sqt = sqrt(num);
    if(num <= 1) return 0;
    if(num == 2 || num == 3) return 1;
    if(num%2 == 0 || num%3 == 0) return 0;
    for(i = 5; i <= sqt; i += 6){
        if(num % i == 0|| num % (i+2) == 0) return 0;
    }
    return 1;
}
*/


/* prime numbers using sqrt boolean and function
#include<stdio.h>
#include<stdbool.h>
int isprime(int);
int main(){
    int num1, num2;
    printf("Enter the range of number: ");
    scanf("%d %d", &num1, &num2);
    for(num1; num1 <= num2; num1++){
        if(isprime(num1)){printf("%d ", num1);}
    }
    return 0;
}
int isprime(int num1){
    int i;
    if(num1 == 0 || num1 == 1){return false;}
    for(i=2; i*i <= num1; i++){
        if(num1 % i == 0){return false;}
    }
    return true;
}
*/


/* swapping values using pointers
#include<stdio.h>
int swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main(){
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("The swapped values are x=%d y=%d.", x, y);
    return 0;
}
*/

/* prime numnbers using seive of Eratosthenes
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void isprime(int);
int main(){
    int num;
    printf("Enter the range:");
    scanf("%d", &num);
    isprime(num);
}
void isprime(int num){
    bool prime[num + 1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p <= num; p++){
        if(prime[p] == true){
            for(int i = p*p; i <= num; i += p){
                prime[i] = false;
            }
        }
    }
    for(int p = 2; p <= num; p++){
        if(prime[p] == true){
        printf("%d ", p);
        }
    }
}
*/

/*
#include<stdio.h>
typedef struct ComplexNumber{
  int real;
  int img;
}complex;
complex add(complex x ,complex y);
int main(){
  complex a,b,sum;
  a.real = 2;
  a.img = 3;
  b.real = 4;
  b.img = 5;
  printf("a = %d + %di\n", a.real, a.img);
  printf("b = %d + %di\n", b.real, b.img);
  sum = add(a,b);
  printf("sum of a and b is = %d + %di\n", sum.real, sum.img);
  return 0;
}
complex add (complex x, complex y){
  complex add;
  add.real = x.real + y.real;
  add.img = x.img + y.img;
  return add;
}
*/


/* vowel check using switch case
#include<stdio.h>
int isvowel(char);
int main(){
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    isvowel(ch);
    if(isvowel(ch) == 1){printf("%c is a vowel", ch);}
    else{printf("%c is not a vowel", ch);}
    return 0;
}
int isvowel(char ch){
    int check = 0;
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        check = 1;
    }
    return check;
}
*/


/* vowel check using strchr string constant
#include<stdio.h>
#include<string.h>
int isvowel(char);
int main(){
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    isvowel(ch);
    return 0;
}
int isvowel(char ch){
    char str[] = "aeiouAEIOU";
    if(strchr(str,ch) != NULL){ printf("%c is a vowel", ch); }
    else { printf("%c is not a vowel"); }
    return 0;
}
*/

/* vowel check using bit shift
#include<stdio.h>
int isvowel(char);
int main(){
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    isvowel(ch);
    //if(isvowel != NULL) { printf("%c is a vowel", ch);}
    //else { printf("%c is not a vowel", ch); }
    return 0;
}
int isvowel(char ch){
    if((0x208222 >> (ch & 0x1f)) & 1) { printf("%c is a vowel", ch);}
    else { printf("%c is not a vowel", ch);}
    return 0;
} */

/*
#include<stdio.h>
#include<math.h>
int main(){
    int i, order=0, num,temp, sum=0, rem;
    printf("All armstrong numbers between 1 & 1000 are\n");
    for(i=1; i<=1000; i++){
        num = i;
        while(num > 0){
            order++;
            num /= 10;
        }
        temp = i;
        while(temp > 0){
            rem = temp % 10;
            sum += pow(rem,order);
            temp /= 10;
        }
        if(sum == i) { printf("%d", i);}
        order = 0;
    }
    return 0;
}*/


/*
#include<stdio.h>
#include<math.h>
int neonnumber(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    neonnumber(num);
    return 0;
}
int neonnumber(int num){
    int rem, order, sum = 0;
    int n = num;
    int temp = num*num;
    while(num > 0){
        rem = num % 10;
        sum = sum + pow(rem,2);
        num = num / 10;
    }
    if(sum == temp) { printf("%d is a neon number", n);}
    else { printf("%d is not a neon number", n);}
} */

/* ------------------ --------------------STRUCTURE------------------------------------------------------*/
/*
#include<stdio.h>
struct Student{
    char* name;
    int age;
    int rollno;
    int marks;
};
int main(){
    int i, n=1;
    struct Student student[n];
    student[0].name = "Aniket Ghage";
    student[0].age = 24;
    student[0].rollno = 2;
    student[0].marks = 70;

    student[1].name = "Vaibhav Ghage";
    student[1].age = 21;
    student[1].rollno = 25;
    student[1].marks = 92;

    printf("The data of students is:\n");
    for(i=0; i<=1; i++){
        printf("\tStudent name: %s\n", student[i].name);
        printf("\tStudent age: %d\n", student[i].age);
        printf("\tStudent roll number: %d\n", student[i].rollno);
        printf("\tStudent marks: %d\n", student[i].marks);
        printf("\n");
    }
    return 0;
} */

/* max and min traversal method
#include<stdio.h>
struct pair{
    int min;
    int max;
};
struct pair getminmax(int arr[], int arr_size){
    struct pair minmax;
    int i;
    if(arr_size == 1){
        minmax.min = minmax.max = arr[0];
    }
    if(arr[1] > arr[0]){
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for(i=2; i<arr_size; i++){
        if(arr[i] > minmax.max){
            minmax.max = arr[i];
        }
        else if(arr[i] < minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main(){
    int arr[0] = {};
    int arr_size = 10;
    struct pair minmax = getminmax(arr, arr_size);
    printf("The smallest element is: %d\n", minmax.min);
    printf("The largest element is: %d\n", minmax.max);
    return 0;
} */

/* min max using recursion
#include<stdio.h>
struct pair{
    int min;
    int max;
};
struct pair getminmax(int arr[], int low, int high){
    struct pair minmax, mml, mmr;
    int mid;
    if(low == high){
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }
    if(high == low+1){
        if(arr[high] > arr[low]){
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        else{
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
        return minmax;
    }
    mid = (low + high) / 2;
    mml = getminmax(arr, low, mid);
    mmr = getminmax(arr, mid+1, high);
    if(mml.min > mmr.min) 
        minmax.min = mmr.min;
    else minmax.min = mml.min;

    if(mml.max > mmr.max)
        minmax.max = mml.max;
    else minmax.max = mmr.max;
    return minmax;
}
int main(){
    int arr[10] = {1,20,51,800,51,35,-1,999,0,5};
    int arr_size = 10;
    struct pair minmax = getminmax(arr, 0, arr_size -1);
    printf("The smallest element is: %d\n", minmax.min);
    printf("The largest element is: %d\n", minmax.max);
    return 0;
} */

/* min max using even odd method
#include<stdio.h>
struct pair{
    int min;
    int max;
};
struct pair getminmax(int arr[], int n){
    struct pair minmax;
    int i;
    if(n%2 == 0){ //for array size even
        if(arr[0] > arr[1]){
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else{
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }
    else{ //for array size odd
        minmax.min = arr[0];
        minmax.max = arr[0];
    }
    while(i<n-1){
        if(arr[i] > arr[i+1]){
            if(arr[i] > minmax.max){
                minmax.max = arr[i];
            }
            if(arr[i+1] < minmax.min){
                minmax.min = arr[i+1];
            }
        }
        else{
            if(arr[i+1] > minmax.max){
                minmax.max = arr[i+1];
            }
            if(arr[i] < minmax.min){
                minmax.min = arr[i];
            }
        }
        i += 2;
    }
    return minmax;
}
int main(){
    int arr[10] = {1,20,51,800,51,35,-2,9,0,5};
    int arr_size = 10;
    struct pair minmax = getminmax(arr, arr_size);
    printf("The smallest element is: %d\n", minmax.min);
    printf("The largest element is: %d\n", minmax.max);
    return 0;
} */

/*--------------------------------------------BINARY SEARCH------------------------------------------*/
/*  iterative method
#include<stdio.h>
int binarysearch(int arr[], int low,int high, int key){
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_size = 10;
    int key = 1;
    int result = binarysearch(arr, 0, arr_size-1, key);
    (result == -1)? printf("Element not found."): printf("Element found at %d position.", result);
    return 0;
}  */

/* Recursive method
#include<stdio.h>
int binarysearch(int arr[], int l, int r, int key){
    if(r >= l){
        int mid = (l+r) / 2;
        if(arr[mid] == key) return mid;
        if(arr[mid] > key) return binarysearch(arr, l, mid-1, key);
        else return binarysearch(arr, mid+1, r, key);
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_size = 10;
    int key = 11;
    int result = binarysearch(arr, 0, arr_size-1, key);
    (result == -1)? printf("Element not found."): printf("Element found at %d position.", result);
    return 0;
} */

/*-------------------------------------------------LINEAR SEARCH-------------------------------------------*/
/*
#include<stdio.h>
int linearsearch(int arr[], int l, int r, int key){
    int i = 0;
    while(i<=r){
        if(arr[i] == key) return i;
        i++;
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_size = 10;
    int key = 1;
    int position = linearsearch(arr, 0, arr_size-1, key);
    (position == -1)? printf("not found"): printf("found at %d position", position);
    return 0;
} */


/*-----------------------------------------------BUBBLE SORT---------------------------------------------*/
/*   Sorts largest element first
#include<stdio.h>
#include<stdbool.h>
int swap(int *l, int *r){
    int temp = *l;
    *l = *r;
    *r = temp;
}
int bubblesort(int arr[], int size){
    int i = 0;
    int j = 0;
    bool swapped;
    for(j=0; j<=size; j++){
    swapped = false;
    for(i=0; i<=size; i++){
        if(arr[i] > arr[i+1]){
            swap(&arr[i], &arr[i+1]);
            swapped = true;
        }
    }
    if(swapped == false) //the array is alread sorted and outer for loop won't run for all js//
    break;
    }
}
int main(){
    int arr[10] = {6,2,1,9,0,3,4,5,8,7};
    int arr_size = 10;
    bubblesort(arr, arr_size-1);
    for(int i =0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} */

/*--------------------------------------------------------SELECTION SORT------------------------------------------------*/
/*Sorts smallest element first
#include<stdio.h>
int swap(int *l, int *r){
    int temp = *l;
    *l = *r;
    *r = temp;
}
int selectionsort(int arr[], int size){
    int i, j, min_idx;
    for(i=0; i<size-1; i++){
        min_idx = i;
        for(j=i+1; j<size; j++){
            if(arr[j] < arr[min_idx])
                min_idx = j;
            if(min_idx != i)
                swap(&arr[min_idx], &arr[i]);
    }
}
}
int main(){
    int arr[10] = {8,0,2,7,3,1,5,9,4,6};
    int arr_size = 10;
    selectionsort(arr, arr_size);
    for(int i =0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} */

/*----------------------------------------------INSERTION SORT--------------------------------------------------------------*/
/* Divides array into sorted and unsorted sub-arrays
#include<stdio.h>
int selectionsort(int arr[],  int arr_size){
    int i,j;
    int temp;
    for(i=1; i<arr_size; i++){
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > temp){  // Shifting of elements one position ahead
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;  // placing the small element at emptied block
    }
}
int main(){
    int arr[10] = {0,1,2,3,4,6,5,7,8,9};
    int arr_size = 10;
    selectionsort(arr, arr_size);
    for(int i =0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} */


/*-----------------------------------------------------MERGE SORT--------------------------------------------------------*/
/*
#include<stdio.h>
void merge(int arr[], int l, int mid, int r){
    int i, j, k;
    int n1 = mid-l+1;
    int n2 = r-l;
    int L[n1];
    int R[n2];
    for(i=0; i<n1; i++){
        L[i] = arr[l+i];
    }
    for(j=0; j<n2; j++){
        R[j] = arr[mid+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if(L[i] < R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int l, int r){
    if(l<r){
    int mid = l + (r-l) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid+1, r);
    merge(arr, l, mid, r);
    }
}
void printarr(int arr[], int arr_size){
    int i;
    for(i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10] = {8,0,2,7,9,5,1,4,6,3};
    int arr_size = 10;
    printarr(arr, arr_size);
    mergesort(arr, 0 ,arr_size-1);
    printarr(arr, arr_size);
    return 0;
} */


/*-------------------------------------------------------------QUICK SORT----------------------------------------------*/
/*
#include<stdio.h>
int swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int partition
int quicksort(int arr[], int l, int r){

    }
}
void printarr(int arr[], int arr_size){
    int i;
    for(i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10] = {8,0,2,7,9,5,1,4,6,3};
    int arr_size = 10;
    int pivot = 3;
    printf("unsorted arrray is: ");
    printarr(arr, arr_size);
    quicksort(arr, 0, arr_size-1);
    printf("sorted arrray is: ");
    printarr(arr, arr_size);
    return 0;
} */


/*---------------------------------------------------------Ascending order descending order----------------------------------
#include<stdio.h>
int order(int arr[], int arr_size){
    int i, j, temp;
    for(i=0; i<arr_size; i++){
        for(j=i+1; j<arr_size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
       for(i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[10] = {8,0,2,7,9,5,1,4,6,3};
    int arr_size = 10;
    order(arr, arr_size);
    return 0; 
} */


/*---------------------------------------------------------DUPLICATE AND FREQUENCY-------------------------------------------- 
#include<stdio.h>
int unique_elements(int arr[], int arr_size){
    int i, j;
    int visited = -1;
    int count;
    int freq[10];
    for(i=0; i<arr_size; i++){
        count = 1;
        for(j=i+1; j<arr_size; j++){
            if(arr[i] == arr[j]){
                count++;
                freq[j] = visited;
            }
        }
        if(freq[i] != visited){
            freq[i] = count;
        }
    }
    printf("The duplicate elements are: \n");
       for(i=0; i<arr_size; i++){
           if(freq[i] != visited && freq[i] > 1){
            printf("    %d", arr[i]);
            printf("    |");
            printf("    %d\n", freq[i]);
            }
        }
}
int main(){
    int arr[10] = {1,2,2,5,0,0,3,6,1,1};
    int arr_size = 10;
    unique_elements(arr, arr_size);
    return 0;
} */

/*------------------------------------------------------------MERGING OF 2 ARRAYS--------------------------------------------------
#include<stdio.h>
int main(){
    int arr1size = 10;
    int arr2size = 10;
    int i, j, resultarrsize;
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr2[10] = {10,11,12,13,14,15,16,17,18,19};
    resultarrsize = arr1size + arr2size;
    int resultarr[resultarrsize];
    for(i=0; i<arr1size; i++){
        resultarr[i] = arr1[i];
    }
    for(i=0, j=arr1size; i<arr2size, j<resultarrsize; i++, j++){
        resultarr[j] = arr2[i];
    }
    for(i=0; i<resultarrsize; i++){
        printf("%d ", resultarr[i]);
    }
    return 0;
} */

/*------------------------------------------------------REMOVE OCCURENCES OF AN ELEMENT--------------------------------------------
#include<stdio.h>
int removeoccurences(int arr[], int arr_size, int key){
    int i = 0;
    while(i<arr_size){
        if(arr[i] == key){
            i++;
            continue;
        }
        else {
            printf("%d ", arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[10] = {0,1,2,1,2,1,2,1,2,1};
    int arr_size = 10;
    int key = 2;
    removeoccurences(arr, arr_size, key);
    return 0;
} */

/*-------------------------------------------------------------COMMON ELEMENTS----------------------------------------------------*/
/*
#include<stdio.h>
int commonelements(int arr1[], int arr2[], int arr1size, int arr2size){
    int i, j, x, k = 0, flag;
    int resultarr[10];
    for(i=0; i<arr1size; i++){
        for(j=0; j<arr2size; j++){
            if(arr1[i] == arr2[j]){
                flag = 0;
                for(x=0; x<k; x++){
                    if(resultarr[x] == arr1[i]){
                        flag++;
                    }
                }
                if(flag == 0){
                    resultarr[k] = arr1[i];
                    printf("%d ", resultarr[k]);
                    k++;
                }
            }
        }
    }
}
int main(){
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr2[10] = {0,10,2,5,2,90,51,8,7,7};
    int arr1size = 10, arr2size = 10;
    commonelements(arr1, arr2, arr1size, arr2size);
    return 0;
} */


/*------------------------------------------------------------------COPY ARRAY---------------------------------------------------------
#include<stdio.h>
int arrcopy(int arr1[], int arr_size, int copyarray[], int i){
    if(i < arr_size){
        copyarray[i] = arr1[i];
        arrcopy(arr1, arr_size, copyarray, ++i);
    }
}
int main(){
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr_size = 10;
    int copyarray[10];
    arrcopy(arr1, arr_size, copyarray, 0);
    for(i=0; i<arr_size; i++){
        printf("%d ", copyarray[i]);
    }
    return 0;
} */


/*---------------------------------------------------------------ROTATE ARRAY (NAIVE METHOD)-----------------------------------*/
/*
#include<stdio.h>
int rotatearr(int arr1[], int arr_size, int rotby){
    int temp, i = 1, j, k;
    while(i <= rotby){
        temp = arr1[0];
        for(j=0; j<arr_size; j++){
            arr1[j] = arr1[j+1];
        }
        arr1[arr_size-1] = temp;
        i++;
    }
    for(k=0; k<arr_size; k++){
        printf("%d ", arr1[k]);
    }
}
int main(){
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr_size = 10;
    int rotby = 5;
    rotatearr(arr1, arr_size, rotby);
    return 0;
}  */

/*--------------------------------------------------------------ROTATE ARRAY(JUGGLING METHOD)---------------------------------------*/
/*
#include<stdio.h>
int gcd(int arr_size, int rotateby){
    if(rotateby == 0) return arr_size;
    else return gcd(rotateby, arr_size % rotateby);
}
int rotatearr(int arr[], int arr_size, int rotateby){
    int i, j, k, temp;
    int g_c_d = gcd(arr_size, rotateby);
    for(i=0; i<g_c_d; i++){
        temp = arr[0];
        j = i;
        while(1){
            k = j + rotateby;
            if(k >= arr_size)
            k = k - arr_size;
            if(k == i) 
            break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr_size = 10;
    int rotateby = 4;
    rotatearr(arr, arr_size, rotateby);
    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} */

/*------------------------------------------------------------BUBBLE SORT 2D ARRAY-------------------------------------------------*/
/*
#include<stdio.h>
int bubblesort2Darray(int arr[][4], int r, int c){
    int i, j, k;
    int temp =0;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            for(k=0; k<c-j-1; k++){
                if(arr[i][k] > arr[i][k+1]){
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                }
            }
        }
    }
    printf("\n Row-Wise Sorted 2D Array \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf(" %d", arr[i][j]);
        printf("\n");
}
}
int main(){
    int arr[][4] = { { 8, 5, 7, 2 },
                     { 7, 3, 0, 1 },
                     { 8, 5, 3, 2 },
                     { 9, 4, 2, 1 } };
    bubblesort2Darray(arr, 4, 4);
    return 0;
}  */


/*-----------------------------------------------------------SELECTION SORT 2d ARRAY-----------------------------------------------*/
/*
#include<stdio.h>
int swap(int *l, int *r){
    int temp = *l;
    *l = *r;
    *r = temp;
}
int selectionsort2Darray(int arr[][4], int r, int c){
    int i, j, k, l, min_idx;
    int temp = 0;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            for(k=j+1; k<c; k++){
                if(arr[i][j] < arr[i][k])
                min_idx = j;
                if(min_idx != j)
                swap(&arr[i][j], &arr[i][k]);
            }
        }
}
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf(" %d", arr[i][j]);
        printf("\n");
    }
}
int main(){
    int arr[][4] = { { 8, 5, 7, 2 },
                     { 10, 3, 0, 1 },
                     { 6, 11, 13, 15 },
                     { 9, 14, 12, 4 } };
    selectionsort2Darray(arr, 4, 4);

    return 0;
}   */

/*---------------------------------------------------------------PRINT BOUNDARY ELEMENTS OF MATRIX---------------------------------------*/
/*
#include<stdio.h>
int boundary_elements(int arr[][4], int r, int c){
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i == 0 || j == 0 || i == (r-1) || j == (c-1)){
                printf("%d ", arr[i][j]);
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int arr[4][4] = { { 8, 5, 7, 2 },
                     { 10, 3, 0, 1 },
                     { 6, 11, 13, 15 },
                     { 9, 14, 12, 4 } };
    int r = 4;
    int c = 4;
    boundary_elements(arr, r, c);
    return 0;
}    */

/*-------------------------------------------------------------ROTATE MATRIX-------------------------------------------------------*/
/*
#include<stdio.h>
int rotatematrix(int arr[][4], int r, int c, int rotate){
    int i, j, rot = 0, temp;
    while(rot < rotate){
        temp = arr[3][3];
        for(i=(r-1); i>=0; i--){
            for(j=(c-1); j>=0; j--){
                arr[i][j] = arr[i][j-1];
            }
        }
        arr[0][0] = temp;
        rot++;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf(" %d", arr[i][j]);
        printf("\n");
    }
}
int main(){
    int arr[4][4] = { { 8, 5, 7, 2 },
                     { 10, 3, 0, 1 },
                     { 6, 11, 13, 15 },
                     { 9, 14, 12, 4 } };
    int r = 4; 
    int c = 4;
    int rotate = 5;
    rotatematrix(arr, r, c, rotate);
    return 0;
}   */


/*-------------------------------------------------------------SUM OF DIAGONALS OF A MATRIX----------------------------------------------*/
/*
#include<stdio.h>
int matrix_diagonal_sum(int arr[][4], int r, int c){
    int i, j;
    int main_sum = 0;
    int off_sum = 0;
    for(i=0; i<r; i++){
        main_sum += arr[i][i];
        off_sum += arr[i][r-i-1];
    }
    printf("%d\n", main_sum);
    printf("%d", off_sum);
}
int main(){
    int arr[4][4] = { { 8, 5, 7, 2 },
                     { 10, 3, 0, 1 },
                     { 6, 11, 13, 15 },
                     { 9, 14, 12, 4 } };
    int r = 4; 
    int c = 4;
    matrix_diagonal_sum(arr, r, c);
    return 0;
}  */

/*---------------------------------------------------------------------------------------------------------------------------------------*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[25][50], temp[50];
    int i,j, number_of_strings;
    printf("Enter the number of strings: ");
    scanf("%d", &number_of_strings);
    for(i=0; i<number_of_strings; i++){
        fgets(str[i], sizeof str, stdin);
    }
    for(i=0; i<number_of_strings; i++){
        for(j=0; j<number_of_strings - i; j++){
            if(strcmp(str[j], str[j+1]) > 0){
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }
    for(i=0; i<number_of_strings; i++){
        printf("%s\n", str[i]);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>

int main(){
    printf("ceil of 2.3 is %.1f\n", ceil(2.3));
    printf("ceil of -3.8 is %.1f\n", ceil(-3.8));

    return 0;
}  */


#include<stdio.h>
#include<errno.h>
#include<string.h>

extern int errno;

int main(){
    FILE* fp;
    char text_written[50];

    fp = fopen("Sample.txt", "r");

    if(fp == NULL){
        printf("Sample.txt doesn't exist\n");
    }
    else{
        printf("Sample.txt is now read\n");

        while(fgets(text_written, 50, fp) != NULL){
            printf("%s", text_written);
        }
    }
    fclose(fp);
    return 0;
}