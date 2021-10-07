 #include<iostream>
using namespace std;
//char short int long float double long double wide char

void char_d()
{
	char c = 67;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(char)<<endl;
}

void bool_d()
{
	bool a = true;
	cout<<sizeof(bool)<<endl;
	cout<<sizeof(a)<<endl;
}

void short_d()
{
	short a = 34;
	cout<<sizeof(short)<<endl;
	cout<<sizeof(a)<<endl;
}

void int_d()
{
	int b = 90;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(b)<<endl;
}

void long_d()
{
	long int a = 89;
	cout<<sizeof(long int)<<endl;
	cout<<sizeof(a)<<endl;
}

void float_d()
{
	float f = 32.78;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(f)<<endl;
}

void double_d()
{
	double c = 78.43;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(c)<<endl;
}

void long_double_d()
{
	long double a = 8.34;
	cout<<sizeof(long double)<<endl;
	cout<<sizeof(a)<<endl;
}

void wide_char()
{
	wchar_t g = L'ロ';
	cout<<sizeof(wchar_t)<<endl;
	cout<<sizeof(g)<<endl;
}


int main()
{
	cout<<"Data:"<<endl;
	char_d();
	bool_d();
	short_d();
	int_d();
	long_d();
	float_d();
	double_d();
	long_double_d();
	wide_char();
return 0;
}

