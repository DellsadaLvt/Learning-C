 /*==================================================*/
#include<stdio.h>
#include<stdint.h>

/*==================================================*/
void Section_01( void );
void Section_02();
void Section_03( void );
void Section_04( void );
/*==================================================*/
int main( void )
{
	Section_04( );
	return 0;
}


void Section_01( void )
{
	int a = 200, b = 300;

	int *ptr = 0;
	int *ptr_0 = &a;  

	float f  = 2.5;
	float *fptr;
	fptr = &f;

	printf("\nThe address of a: %x\n", &a);
	printf("\nThe address of a: %x\n", ptr_0);

	printf("\nGia tri cua bien a: %d", *ptr_0);
	ptr_0 = &b;
	printf("\nGia tri cua bien b: %d", *ptr_0);
}

void Section_02()
{
	int arr[]= { 1,2,3,4,5,6};
	int *ptr = arr;

	printf("\nThe address of arr   : %x", arr);
	printf("\nThe address of arr[0]: %x", &arr[0]);
	printf("\nThe value of the *ptr: %x", ptr);
}

void Section_03( void )
{
	int arr[]= { 1,2 ,3};
	int *ptr = arr;

	printf("\n");
	for( uint8_t i= 0; i< 3; i++)
		printf("%3d", arr[i]);

	printf("\n");
	for( uint8_t i= 0; i< 3; i++)
		printf("%3d", *(ptr+i));

	ptr = arr;
	printf("\n");
	for( ; ptr <= &arr[2]; ptr++)
		printf("%3d", *ptr);

}

void Section_04( void )
{
	int arr[]= {1,2,3};
	int *ptr;
	ptr = arr;
	printf("\nThe address of array: %d", ptr);
	printf("\nThe value of arr[0] : %d", *ptr);

	ptr = arr;
	printf("\nThe first update:  %d", ptr);
	ptr++; // ptr = ptr + sizeof(int)
	printf("\nThe second update: %d", ptr);
	ptr--;
	printf("\nThe third update:  %d", ptr);
	ptr += 5; // ptr = ptr + 5*sizeof(int)
	printf("\nThe forth update: %d", ptr);
	ptr -= 2;
	printf("\nThe fifth update: %d", ptr);
	ptr = (int*)0x12;  // 0x12H = 18decimal;
	printf("\nThe sixth update: %d", ptr);
}





/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdint.h>


void printStr( char * str );

int main()
{
    //char str[]= "hello";
    //( str );
    
    uint16_t a= 1;
    uint16_t* u16ptr; // 2 byte
    u16ptr= &a;
    
    uint8_t  b=2;
    uint8_t* u8ptr;
    u8ptr= &b;
    
    uint32_t c = 3;
    
    printf("The address of a: %p\n", u16ptr);
    printf("the value of a: %d\n", *u16ptr);
    u8ptr= (uint8_t*)u16ptr;
    *u8ptr= 0xff;
    printf("The value of a: %d\n", a);
    *(u8ptr+1)= 0x71;
    printf("The value of a: %d\n", a);
    
    u16ptr+= 3;
    printf("The address of a: %p\n", u16ptr);
    
    u8ptr= (uint8_t*)u16ptr +1;
    printf("The address of a: %p\n", u8ptr);
    
    return 0;
}


void printStr( char * str ){
    for( uint8_t i=0; i< strlen(str); i++)
        printf("%c",*(str+i));
}

