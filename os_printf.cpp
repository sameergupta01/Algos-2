#include <iostream>
#include <conio.h>

using namespace std;


int printfst(const char *format,...)
{
	char ** s = (char **) &format;
	char t;
	while((t = *format++) != '\0')
	{
		if(t != '%')
		putch(t);
		else{
		t = *format++;
		if(t == 'd' || t == 'x' || t == 'p')
		{
             s++;
            int tt = *(int*)s;
			cout<<tt;
//			while(*p)
//			putch(*p++);

			//write down the atoi fn for this
		}
		else if(t == 's')
		{
            s++;
			char *p = *s;
			while(*p)
			putch(*p++);
		}

	}
	}
	return 0;
};


void puts(char *c)
{
	while(*c != '\0'){
	putch(*c);
	c++;}
};

int atoi506(char *s)
{
    int sum = 0;
    int i=0;
    for (i = 0; s[i] != '\0'; i++){

		if(s[i] >= '0' && s[i] <= '9')
			{
				sum = sum*10 + ((int)s[i] - (int)'0');
			}
			else
			{
				return 0;			//error code
			}

	}
        return sum;
}

void itoa506(int s,int base,char op[20])
{
    int count= 0;
	int isNegative = 0;
	if(s < 0){
	isNegative = 1;
	op[count++] = '-';
	s *= -1;}
	while(s > 0)
	{
		int d = s%base;
		s /=base;
		if(d < 9)
		op[count++] = (char)d+'0';
		else
		{
            op[count++] = (char)d+'a'-10;
        }
	}
    int val = count;
	if(count > 0)
    count--;
   	int beg = 0;
    if(isNegative)
    beg = 1;
	while(count > beg)
	{
                char temp = op[beg];
                op[beg] = op[count];
                op[count] = temp;
                beg++;
                count--;
                }
                op[val]= '\0';
};


void printf506_new(const char *format,...)
{
	//write down this fn using va_list arguments
};

void printf506(const char *format,...)
{
	char ** s = (char **) &format;
	char t;
		while((t = *format++) != '\0')
		{
			if(t != '%')
			putch(t);
			else{
			t = *format++;
			if(t == 'd' || t == 'x' || t == 'p')
			{
				s++;
	           	int tt = *(int*)s;
	           	char op[20];	//for max_value 2^64
				if(t == 'd'){
				//cout<<tt;
				//write down the itoa fn for this
					itoa506(tt,10,op);
					puts(op);
				}
				else if(t == 'x')
				{
					itoa506(tt,16,op);
					puts(op);
				}
				else if(t == 'p')
				{
					puts(*s);
				}

			}
			else if(t == 's')
			{
	            s++;
				char *p = *s;
				while(*p)
				putch(*p++);
			}
			else
			{
				putch(t);
			}

		}
		}
	};



int main()
{
  printf506("%d\n%s%d",1234568,"@@sam!!!",6565);
    cout<<getch();
    return 0;
}
