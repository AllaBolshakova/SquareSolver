#include<TXLib.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
double a,b,c,m;
printf("������� ������������ ����������� ���������: ");
scanf("%Lf %Lf %Lf", &a, &b, &c);
if (a==0)
  {
  if (b==0)
    {
    if (c==0)
      printf("���������� ����� ������");
    else
      printf("��� ������");
    }
  else
    {
    printf("�����: %Lf",c/b);
    }
  }
else
  {
  if (b*b-4*a*c<0)
    printf("��� ������������ ������");
  else if (b*b-4*a*c==0)
    printf("�����: %Lf",(-b)/(2*a));
  else
    {
    m=sqrt(b*b-4*a*c);
    printf("������: %Lf, %Lf",(-b-m)/(2*a), (-b+m)/(2*a), m);
    }
  }
  return 0;
}
