/*==========================================*/
/*======================= LIB =============================*/
#include<stdio.h>


/*================  FUNCTION DECLARATION ============*/
void EnterFunc( PHANSO &x )



/*=============== STRUCT ===================*/
struct phanso
{
	int tu;
	int mau;
};

typedef struct phanso PHANSO;




/******************************************************/
struct gpio {
	volatile uint32_t crl;
	volatile uint32_t crh;
	volatile uint32_t odr;
};


typedef struct gpio1 {
	volatile uint32_t crl;
	volatile uint32_t crh;
	volatile uint32_t odr;
}gpioReg;
#define gpiob ((gpioReg*)0x3333ul)
//struct gpio* gpioa= (struct gpio*)0x333333ul;
//gpioa->crh= 1;
//gpiob->crh= 1;

/*======================== MAIN ======================*/
int main( void )
{
	EnterFunc();
	return 0;
}

/*====================== SUBROUTINE ===============================*/
void EnterFunc( PHANSO &x )
{
	printf("Nhap tu\n");
	scanf("%d", &x.tu);
	printf("Nhap mau\n");
	scanf("%d", &x.mau);
	printf("Result: %d/%d", x.tu, x.mau);
}

