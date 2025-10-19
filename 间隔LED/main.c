#include <STC89C5xRC.H>
#include <TNTRINS.H>


void Delay500ms(void)	//@11.0592MHz
{
	unsigned char data i, j, k;

	_nop_();
	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

int main()
{
    while(1)
{
     P2 = 0xFE;//1111 1110
     Delay500ms();
    P2 = 0xFF;//1111 1111
    Delay500ms();
   
} 
    return 0;
}