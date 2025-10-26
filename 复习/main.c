#include <STC89C5xRC.H>
#include <tntrins.h>
void Delay(unsigned int xms)	//@11.0592MHz
{
    while (xms)
    {
        /* code */
    
    
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
unsigned char Lednum = 0;
int main()
{
    while (1)
    {
        /* code */
    
    
    if(P31==0)
    {
        Delay(15);
        while (P31==0)
        {
            /* code */
        }
        Delay(15);
        if(Lednum>=8)
        Lednum = 0;
        P2 = ~(0x01<<Lednum);
        Lednum++;

        
    }
    if(P30 == 0)
        {
                Delay(15);
                while (P30 == 0);
                Delay(15);
                if(Lednum == 0)
        {
                LEDnum = 7;
                //P27 = 0;
                P2 = ~(0x01<<Lednum);
        } 
        else
        {  
                
                Lednum--;
                P2 = ~(0x01<<Lednum);
        } 
    
    
        
    
    }
}

