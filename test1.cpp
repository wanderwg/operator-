class Date
{
public:
	Date(int year = 2010, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._month;
	}
	//d1=d2=d3;
	Date& operator=(const Date& d)
	{
		if (this != &d)//检测是否自己给自己赋值
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2019, 6, 15);
	Date d2(2019, 6, 16);
	Date d3(2019, 6, 17);
	d1 = d2 = d3;
	
	return 0;
}