#include <STC89C5xRC.H>
#include <tntrins.h>
void Delay(unsigned int xms)	//@11.0592MHz
{
    while (xms)
{
    

	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 11;
	j = 190;
	do
	{
		while (--j);
	} while (--i);
    xms--;
}
}
int main()
{
    while (1)
{
    /* code */


if(P31 == 0)
{
     Delay(15);
     while (P31 ==  0);
     Delay(15);
     P20 = ~P20;
     //P20 = 0;
    


}
}

}

