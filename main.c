#include <stdio.h>

// C STRUCTURES
void print_something();
struct MyStructure {
  int myNumber;           
  char myLetter; 
  char weirdName[17];
};
int main() {
//Output statements
  printf("Hello \nthere \n");
  /*
  ESCAPE SEQUENCE:
  	\t	Creates a horizontal tab
    
\\	Inserts a backslash character (\)

\"	Inserts a double quote character
  	
  */
  
  /*
  
  VARIABLES : int ,float , char
  */
  
  //declare 
  int num = 5;
  /*
  Format specifiers in C :
  %d or %i for ints
  %c for chars
  %f for floats
  %lf for double
  %s for strings (Which are arrays of characters)
  %lu for long unsigned ints 
  %p for memory address
  */
  
  // Output the num variable
  printf("%d\n",num);
  
  float dec = 6.52;
  
  printf("%f\n",dec);
  
  char letter = 'B';
  
  printf("%c\n",letter);
  
  //Concatenation 
  printf("Myfavourite letter is %c",letter);
  
  // Also: 
  printf("Fav num : %d and fav letter: %c",num,letter);
  
  //Add numbers :
  int num2 = 10;
  int sum = num + num2;
  printf("%d",sum);
  
  // Short hand variable declaration
  
  int x = 50, y=100,z=150;
  // Assign similar value to many variables
  
  int g,h,t;
  
  g=h=t=500;
  
  // Data types 
  
  /*
    int	2 or 4 bytes	Stores whole numbers, without decimals
    float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
    double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
    char	1 byte	Stores a single character/letter/number, or ASCII values	
  
  */
  
  //constants in C use const keyword 
  
  // The value must be assigned there and then
  
  /*
  const int age;
  age = 30;
  [ERROR]
  */
  const int AGE = 25;
  
  
  	/*
    OPERATORS IN C: 
    + addition
    - sub
    * product
    / div
    % mod
    ++ increment (++x)
    -- decrement (--x)
    
    
    x = x+5 || x +=5;
    same applies for all the others:
    
    &=	x &= 3	x = x & 3	
    |=x |= 3	x = x | 3	
    ^=	x ^= 3	x = x ^ 3	
    >>=	x >>= 3	x = x >> 3	
    <<=	x <<= 3	x = x << 3
    
    COMPARISON OPERATORS
    
    ==	Equal to	x == y	
    !=	Not equal	x != y	
    >	Greater than	x > y	
    <	Less than	x < y	
    >=	Greater than or equal to	x >= y	
    <=	Less than or equal to	x <= y
    
    LOGICAL OPERATORS 
    
    && Checks if two statements are true 
    || OR operator 
    ! Logical not
    
    
    */
    
    
    //Memory size in bytes of a data type 
    // %lu acess specifier 
    
    printf("%l",sizeof(num));
    
    // Conditionals 
    
    if(2 < 3){
    	return 1;
  	}else if(3>1){
    	return 3;
    }else{
    	return 2;
        
    }
    
    //SHORT HAND 
    
    // int o;
    // 2<3 ?  o=1 : o=0;
    
    
    //SWITCH AND CASE 
    
    int day = 4;

    switch (day) {
      case 1:
        printf("Monday");
        break;
      case 2:
        printf("Tuesday");
        break;
      case 3:
        printf("Wednesday");
        break;
      case 4:
        printf("Thursday");
        break;
      case 5:
        printf("Friday");
        break;
      case 6:
        printf("Saturday");
        break;
      case 7:
        printf("Sunday");
        break;
      default:
      	printf("Not a day index");
        break;
    }
    
    // WHILE LOOPS 
    
    // Just like in other languages ... The concept is pretty much the same
    
    int i = 0;

    while (i < 5) {
      printf("%d\n", i);
      i++;
    }
    
    // Do while loops 
    
    do{
    	printf("Hello");
        i++;
    }while(i<1);
    
    
    // FOR LOOPS AND BREAK / CONTINUE STATEMENTS: 
    
    int j;
    
    for(j = 0; j<5; j++){
    	printf("%d\n" ,j);
        
        // (j==4) ? break : continue;
    }
    
    
    // ARRAYS 
    
    /*
    	SPECIFIC TYPE , CANNOT BE MULTIDIMENSIONAL 
        ZERO-BASED
        Can be looped through
        
    */
    int numbers[] = {10,20,30,40,50};
    
    // add to an array 
    numbers[5] = 60;
    
    // C Strings
    // These are essentially arrays
	
    char name[] = "billy";
    printf("%s\n",name);
    
    // Indexing 
    // %c is used since the string is an array of characters 
    
    printf("%c\n",name[0]);
    
    // METHOD II 
    
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s", greetings);
	
    // \0 is the null termination character to tell C the string has ended 
    
    
    // USER INPUT 
    
    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);
    
    /*
    	The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.
    
    */
    
    
    // MEMORY ADRESS IN C 
    
    int whatever = 80;
    printf("%p",&whatever);
    

	// POINTERS IN C 
    
   // We use the & operator
    int myAge = 43;
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Outputs the value of myAge (43)
    printf("%d\n", myAge);

    // Outputs the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Outputs the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
	
    // DE-REFERENCING 
    
    printf("%d\n",*ptr);
    
    // calling functions in C
    
    print_something();
    
    // MATH 
    
    // #include <math.h>
    
    /*

      ceil(x) Rounds a number upwards to its nearest integer
      floor(x) Rounds a number down to its nearest integer
      sqrt(x)     Returns the square root of x
      abs(x)	Returns the absolute value of x
      acos(x)	Returns the arccosine of x
      asin(x)	Returns the arcsine of x
      atan(x)	Returns the arctangent of x
      cbrt(x)	Returns the cube root of x
      cos(x)	Returns the cosine of x
      exp(x)	Returns the value of Ex
      sin(x)	Returns the sine of x (x is in radians)
      tan(x)	Returns the tangent of an angle
      
    */
    
    // C structures ... 
    // create variable 
    
    // struct myStructure r;
    
    
    // ACESS MEMBERS
  // r.myNumber = 18;
    
    // Using strings in C structures 
    
    // strcpy(r.weirdName,"Some weird name");
    
    // SHORT HAND SYNTAX 
    
    // struct myStructure s1 = {13, 'B', "Some text"};
    
  return 0;
}	

// FUNCTIONS
// JUST LIKE IN C++ FUNCTIONS CAN BE DECLARED THEN DEFINED
// Void functions just like in C++ do not have a return value

void print_something(){
	printf("Executed");
}

// ARGUMENTS 



void someWeirdFunction(int a, int b , int c , char name[] ,float age){
	// Some weird code 

}

// RECURSION : FUNCTION CALLING ITSELF, 
