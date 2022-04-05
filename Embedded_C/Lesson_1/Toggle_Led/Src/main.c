/**************************************************************************************************************
 Learn_In_Depth_Diploma                                                                                       *
 Name        : main.c                                                                                         *
 Author      : Esraa_Salman                                                                                   *
 Description : Write a program to toggle led on stm32f103cx                                                   *                      *
 **************************************************************************************************************/
#define RCC             0x40021000
#define GPIO_PA         0x40010800

#define RCCC_APB2ENR    *(volatile unsigned long *)(RCC + 0x18)
#define GPIO_PA_CRH     *(volatile unsigned long *)(GPIO_PA + 0x04)
#define GPIO_PA_ODR     *(volatile unsigned long *)(GPIO_PA + 0x0C)


typedef union
{
	volatile unsigned long all_pins;
	struct
	{
		volatile unsigned long reserved_1:13;
		volatile unsigned long pin_13  :1;
		volatile unsigned long reserved_2:18;
	}pin;
}Reg_ODR;

volatile Reg_ODR* Reg_ptr = (volatile Reg_ODR*)(GPIO_PA + 0x0C);

int main(void)
{
	volatile unsigned int i;
	RCCC_APB2ENR |= (1<<2);
	GPIO_PA_CRH  = (GPIO_PA_CRH&0xFF0FFFFF)|(0x00200000);

	while(1)
	{
		Reg_ptr->pin.pin_13 =1;
		for(i=0;i<5000;i++);
		Reg_ptr->pin.pin_13 =0;
		for(i=0;i<5000;i++);
	}
}
