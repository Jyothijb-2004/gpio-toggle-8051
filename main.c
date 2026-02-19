#include<reg51.h>
void delay(){
    unsigned int i, j;
      for(i=0;i<500;i++)
       for(j=0;j<1275;i++);
}
void main(){
  P1=0X00; // Set P1 as output

while(1){
P1=0xFF; //high
delay();
P1=0X00; // low
delay();
}
