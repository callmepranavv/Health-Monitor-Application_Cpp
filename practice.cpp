#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
 //double carbo,pro,fat;
			double carbo,pro,fat;
			double calorie=2390;
			carbo= calorie*0.40;
			carbo=carbo/4;
			cout<<"Total gram of Carbohydrates allowed per day:-->> "<<carbo<<"gm\n";

			pro=calorie*0.30;
			pro=pro/4;
			cout<<"Total gram of Protein allowed per day:-------->> "<<pro<<"gm\n";

			fat=calorie*0.30;
			fat=fat/9;
			cout<<"Total gram of fat allowed per day:------------>> "<<fat<<"gm\n";
}