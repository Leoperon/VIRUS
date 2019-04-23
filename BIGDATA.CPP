#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

#define m 10

struct file
{
	char big[m];
	int num[m];
}st;

void main()
{
	int i,j;
	clrscr();
	fstream ob("Data.dat",ios::out|ios::in|ios::binary);
	randomize();
	while(1)
	{
		for(j=0;j<(m*pow(10,-80));j++)
		{
			st.num[j]=random(10);
			st.big[j]=(char)(st.num[j]);
		}
		ob.write((char*)&st,sizeof(st));
	}
}