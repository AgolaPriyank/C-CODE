#include <stdio.h>
struct time
{
  int hour;
  int minute;
  int second;  
}T;
void display (struct time);

void main()
{
    printf("Enter hour: ");
    scanf("%d", &T.hour);
    printf("Enter minute: ");
    scanf("%d", &T.minute);
    printf("Enter second: ");+
    scanf("%d", &T.second);
    display(T);

}

void display(struct time T)
{
    printf("Time is %d : %d : %d ", T.hour,T.minute,T.second);
}
