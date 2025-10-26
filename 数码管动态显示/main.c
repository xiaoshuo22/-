#include <STC89C5xRC.H>
#include <tntrins.h>
void Delay(unsigned int xms)	//@11.0592MHz
{
	unsigned char data i, j;
while (xms)
{
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
unsigned char Nixietable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
void Nixie(unsigned char location,unsigned char number)
{
    switch(location)//段选
    {
        case 1:P24 = 1; P23 = 1; P22 = 1; break;
        case 2:P24 = 1; P23 = 1; P22 = 0; break;
        case 3:P24 = 1; P23 = 0; P22 = 1; break;
        case 4:P24 = 1; P23 = 0; P22 = 0; break;
        case 5:P24 = 0; P23 = 1; P22 = 1; break;
        case 6:P24 = 0; P23 = 1; P22 = 0; break;
        case 7:P24 = 0; P23 = 0; P22 = 1; break;
        case 8:P24 = 0; P23 = 0; P22 = 0; break;


    }
    P0 = Nixietable[number];//位选
    Delay(0.5);
    P0 = 0x00;//消影
    //P0 = 0x5B;
}
int main()
{
    while(1)
    { 
    Nixie(1,2);
    //Delay(200);
    Nixie(2,3);
    //Delay(200);
    //Nixie(3,3);
    //Nixie(4,3);
    //Nixie(5,3);
     //Nixie(6,3);
    //Delay(200);
    }
    
    
   
}
