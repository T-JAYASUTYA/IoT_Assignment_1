char data_string[50];
int i=0;
int k=0,length;
void string_empty()
{   length=strlen(data_string);
    for(k=0;k<=length;k++)
    data_string[k]='\0';
    }
void main()
{


  UART1_Init(9600);
  Delay_ms(100);

  UART1_Write_Text("Start");
  UART1_Write(10);
  UART1_Write(13);

  while(1)
   {
   if(UART1_Data_Ready()==1)
      {
       data_string[i]=uart1_raed();
       UART1_write(data_string[i]);
        i++;
      }
   if(data_string[i-1]=='/r')
      {
       UART1_Write_Text(data_string);
       string_empty();
      }
   }
}
