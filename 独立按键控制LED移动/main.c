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
unsigned char LEDnum = 0;
int main()
{
    P20 = 0;
while (1)
{
    
    if(P31 == 0)
    {
        Delay(15);
        while(P31 == 0);
        Delay(15);
        //P20  = 0;
        LEDnum++;
        if(LEDnum>=8)
            LEDnum = 0;
            P2 = ~(0x01<<LEDnum);
    }
        
        if(P30 == 0)
        {
                Delay(15);
                while (P30 == 0);
                Delay(15);
                if(LEDnum == 0)
        {
                LEDnum = 7;
                //P27 = 0;
                P2 = ~(0x01<<LEDnum);
        } 
        else
        {  
                
                LEDnum--;
                P2 = ~(0x01<<LEDnum);
        } 
        }









}



}
