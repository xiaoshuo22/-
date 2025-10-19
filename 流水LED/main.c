#include <STC89C5xRC.H>
#include <tntrins.h>
void Delay200ms(void)	//@11.0592MHz
{
	unsigned char data i, j, k;

	_nop_();
	_nop_();
	i = 9;
	j = 104;
	k = 139;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


int main ()
{
while(1)
{ 

    P2 = 0xFE;//1111 1110
     Delay200ms();
    P2 = 0xFD; //1111 1101
     Delay200ms();
    P2 = 0xFB; //1111 1011
     Delay200ms();
    P2 = 0xF7; //1111 0111
     Delay200ms();
    P2 = 0xEF; //1110 1111
     Delay200ms();
    P2 = 0xDF; //1101 1111
     Delay200ms();
    P2 = 0xBF; //1011 1111
     Delay200ms();
    P2 = 0x7F; //0111 1111
     Delay200ms();
}

    return 0;
}