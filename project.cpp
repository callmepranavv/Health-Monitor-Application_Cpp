#include<stdio.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class Customer
{
	
	protected:
		char name[100],bg[10];
		char sex;
		double age,weight,height;
	public:
		//cout<<"****************///////WELCOME TO NAPP HEALTH MONITER CALCULATOR///////****************\n";
		friend int call();
		Customer(){return;}	
		void details()
		{

			cout<<"Enter your name\n";
			cin>>name;
			cout<<"Enter your age\n";
			cin>>age;
			cout<<"Enter your Gender\n";
			cin>>sex;
			//strupr(sex);
			if (sex!='M'&& sex!='F'){
				cout<<"Enter a valid Gender\n";
				exit(0);
				}

			//printf("Enter your Gender\n");
			//scanf("%[M,F]",sex);
			//printf("%s\n",sex);
			//cout<<"Enter your Blood Group\n";
			//cin>>bg;
			cout<<"Enter your weight in Kg\n";
			cin>>weight;
			cout<<"Enter your height in cm\n";
			cin>>height;

		}
		//friend void call();

};


class BMI:public Customer
{
	public:
	friend int call();
	void cal_bmi()
	{
		double bmi;
		bmi=(weight)/(height*height)*10000;
		cout<<"Your BMI(Body Mass Index) is "<<bmi<<endl;
		bmi_table(bmi);
	}

	void bmi_table(double bmi)
	{
		if(bmi<18.5)
		{
			cout<<"You are UNDERWEIGHT\n";
			cout<<"-----------------------------------------------------------------------------\n";
			cout<<"-->You may not be eating enough healthy foods with key nutrients to fuel your body.\n-->That can cause malnutrition.\n-->Over time,malnutrition can affect your health in a number of different ways that may be noticeable to you or\nthose around you.\n";
			cout<<"-->Add healthy calories. You don’t need to drastically change your diet.\n-->You can increase calories by adding nut or seed toppings,cheese,and healthy side dishes.\n-->Try almonds,sunflower seeds,fruit, or whole-grain,wheat toast.\n";
			cout<<"-->Go nutrient dense. Instead of eating empty calories and junk food, eat foods that are rich in nutrients.\n-->Consider high-protein meats,which can help you to build muscle.\n";
			cout<<"-->Enjoy snacks that contain plenty of protein and healthy carbohydrates.\n-->Consider options like trail mix,protein bars or drinks,and crackers with hummus or peanut butter.\n";
		}
		
		else if(bmi>18.5 && bmi<24.9)
		{
			cout<<"You are NORMAL\n";
			cout<<"-----------------------------------------------------------------------------\n";
			cout<<"-->You are having a normal and healthy diet.You have to maintain this habit to stay fit ahead.\n";
			cout<<"-->Do exercise daily and try to avoid junk food in more quantity.\n-->Ya but you can have cheat meals very often.\n";
		}

		else if(bmi>25 && bmi<29.9)
		{
			cout<<"You are OVERWEIGHT\n";
			cout<<"-----------------------------------------------------------------------------\n";
			cout<<"-->You are not eating a healthy diet the amount of fat and carbohydrates in your meals in above average.\n-->You have to be serious regarding your health beacuse being OVERWEIGHT leads to many health problems.\n";
			cout<<"-->Do exercise on daily basis and avoid food rich in fat and totally avoid junk and outside food.\n";
			cout<<"-->Keep the trans fats away. There is a chance that industrial trans fats would be present in fast foods,\nsnack food, fried foods cookies, margarine and spreads)\n";
			cout<<"-->Do not skip meals. Eat three balanced meals. Take a standard dinner plate,\nfill ½ with vegetables, 1/3rd with cereal, 1/3rd with the protein, add 150 ml of milk/dahi/dessert. You have a healthy meal.\n";
			cout<<"-->Snack on seasonal fruits, keep whole fruits easily available for the family members to pick up.\n";
		}

		else if(bmi>30 && bmi<34.9)
		{
			cout<<"You are OBESE\n";
			cout<<"-----------------------------------------------------------------------------\n";
			cout<<"-->You are not eating a healthy diet the amount of fat and carbohydrates in your meals in above average.\n-->You have to be serious regarding your health beacuse being OVERWEIGHT leads to many health problems.\n";
			cout<<"-->Do exercise on daily basis and avoid food rich in fat and totally avoid junk and outside food.\n";
			cout<<"-->You may be referred to a dietician who can help you with a plan to lose one to two pounds per week.\n-->To lose weight, you have to reduce the number of calories you consume.\n";
			cout<<"-->“Reduce calories by 500 calories per day to lose about a one pound a week, or cut 1,000 calories\na day to lose about two pounds a week.”\n";
		}

		else if(bmi>35)
		{
			cout<<"You are EXTREMLY OBESE\n";
			cout<<"******************************************************************************\n";
			//cout<<\n";
		}

	}
	
	//friend void call();
};



class BMR:public Customer
{
	public:
		BMR(){return;}
		friend int call();
		void cal_bmr()
		{
			double bmr;
			cout<<"Basal Metabolic Rate is the amount of calories you would burn per day at rest.\nBMR is also known as your body’s metabolism; therefore, any increase to your metabolic weight, such as exercise, will increase your BMR.\n";
			switch(sex)
			{
			case 'M':
			{
				bmr=(10*weight)+(6.25*height)-(5*age)+5;
				cout<<"\nYour BMR(BASAL METABOLIC RATE is) "<<round(bmr)<<endl;
				cout<<"---------------------------------------------------------------------------\n";
				break;
			}
			case 'F':
			{
				bmr=(10*weight)+(6.25*height)-(5*age)-161;
				cout<<"\nYour Your BMR(BASAL METABOLIC RATE is) "<<round(bmr)<<endl;
				cout<<"----------------------------------------------------------------------------\n";
				break;
			}
			default:
				cout<<"Enter a valid Input...\n";
				break;
			}
			char input;
			cout<<"Press Y if you want to know your TDEE(TOTAL DAILY ENERGY EXPENDITURE) also known as AMR(Active Metabolic Rate) and N to exit.\n";
			cin>>input;
			cout<<"********************************************************************************\n";
		
			if(input=='Y')
				{
				cout<<"TDEE is defined as the amount of calories burnt by human body in a single day\ni.e. within a period of 24 hours\n";
			    cal_calorie(bmr);
				}
			else
				cout<<"*****THANK YOU*****\n";
				return;
		}

		void cal_calorie(double bmr)
		{
			cout<<"Please enter your daily activity status\n";
			cout<<"Press 1 if you are not much active\n";
			cout<<"Press 2 if you are Slight active\n";
			cout<<"Press 3 if you are Moderetly active\n";
			cout<<"Press 4 if you are Very active\n";
			cout<<"Press 5 if you are Super Active\n";
			int choice;
			double calorie=0;
			cin>>choice;

			if(choice==1)
			{
				calorie=(1.2) * bmr;
				cout<<"Calories burnt:-->>> "<<round(calorie)<<endl;
			}

			else if(choice==2)
			{
				calorie=(1.375) * bmr;
				cout<<"Calories burnt:-->>> "<<round(calorie)<<endl;
			}

			else if(choice==3)
			{
				calorie=(1.5) * bmr;
				cout<<"Calories burnt:-->>> "<<round(calorie)<<endl;
			}

			else if(choice==4)
			{
				calorie=(1.725) * bmr;
				cout<<"Calories burnt:-->>> "<<round(calorie)<<endl;
			}

			else if(choice==5)
			{
				calorie=(1.9) * bmr;
				cout<<"Calories burnt:-->>> "<<round(calorie)<<endl;
			}

			else
			cout<<"Enter a valid choice\n";	

			int insert;
			cout<<"Press 1 if you want to know your Daily Macro Calulation and 0 to exit.\n";
			cin>>insert;
			cout<<"***********************************************************************************\n";	
			if(insert==1){cal_macro(calorie);}
			else
				cout<<"*****THANK YOU*****\n";
				return;

		}

		void cal_macro(double calorie)
		{
			double carbo,pro,fat;
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
		


};

class BAC:public Customer
{
	public:
	BAC(){return;}


	void cal_bac(int a,int b)
	{
		cout<<"Blood alcohol concentration (BAC) refers to the amount of alcohol present in the bloodstream\n";
		double A;
		cout<<"Tell the  drink you consumed\n";
		cout<<"Enter 1 for Beer\nEnter 2 for Liquor(ie Vodka,Wisky...)\nEnter 3 for Wine\n";
		weight=weight*2.205;
		//cout<<weight<<endl;
		int select;
		cin>>select;
		
		if(select==1)
		{
			double content,number,hours;
			content=0.05;
			cout<<"Number of consumed beer bottles if one bottle is of 500ml\n";
			cin>>number;
			cout<<"Enter the time passed consuming last drink(in hours)\n";
			cin>>hours;
			///volume=volume/1000;
			//cout<<number<<endl;
			//qcout<<content<<endl;
			A = number * 16 * content;
			//cout<<A;
			//cout<<"Number of standard drink is"<<std_drink<<endl;
			//return round(std_drink);
			double bac;
			if(sex=='M')
			{
				bac = (A*5.14)/(weight*.73)-(.015*hours);
				cout<<"Your %BAC is "<<bac<<endl;
			}
			else if(sex=='F')
			{
				bac = (A*5.14/weight*.66)-(.015*hours);
				cout<<"Your %BAC is "<<bac<<endl;
			}
			else
				cout<<"Enter a valid input\n";

			cal_bac(bac,6);

		}
		
		else if(select==2)
		{
			double content,number,hours;
			content=0.40;
			cout<<"Number of consumed wisky if one shot is of  50ml\n";
			cin>>number;
			cout<<"Enter the time\n";
			cin>>hours;
			///volume=volume/1000;
			//cout<<number<<endl;
			//cout<<content<<endl;
			A = number * 4 * content;
			//cout<<A;
			//cout<<"Number of standard drink is"<<std_drink<<endl;
			//return round(std_drink);
			double bac;
			if(sex=='M')
			{
				bac = (A*5.14)/(weight*.73)-(.015*hours);
				cout<<"Your %BAC is" <<bac<<endl;
			}
			else if(sex=='F')
			{
				bac = (A*5.14/weight*.66)-(.015*hours);
				cout<<"Your %BAC is "<<bac<<endl;
			}
			else
				cout<<"Enter a valid input\n";
			cal_bac(bac,6);

		}

		else if(select==3)
		{
			double content,number,hours;
			content=0.12;
			cout<<"Number of consumed wine glass if one wine glass is of 250ml\n";
			cin>>number;
			cout<<"Enter the time\n";
			cin>>hours;
			///volume=volume/1000;
			//cout<<number<<endl;
			//cout<<content<<endl;
			A = number * 8 * content;
			//cout<<A;
			//cout<<"Number of standard drink is"<<std_drink<<endl;
			//return round(std_drink);
			double bac;
			if(sex=='M')
			{
				bac = (A*5.14)/(weight*.73)-(.015*hours);
				cout<<"Your %BAC is "<<bac<<endl;
			}
			else if(sex=='F')
			{
				bac = (A*5.14/weight*.66)-(.015*hours);
				cout<<"Your %BAC is "<<bac<<endl;
			}
			else
				cout<<"Enter a valid input\n";

			cal_bac(bac,5);

		}
		

		
	}


	void cal_bac(double bac,int x)
	{
		if(bac>0.001 && bac<0.029)
		{
			cout<<"-->>Average\n-->>Individual appears normal...\n";
		}

		else if(bac>0.030 && bac<0.059)
		{
			cout<<"-->>Mild Euphoria\n-->>relaxation,Joyousness,Talkativeness...\n";
		}

		else if(bac>0.060 && bac<0.099)
		{
			cout<<"-->>Blunted feelings\n-->>Reduced sensitivity to pain,Disinhibition\n";
		}

		else if(bac>0.100 && bac<0.199)
		{
			cout<<"-->>Over-expression\n-->>Possiblity of nausea and vomiting\n";
		}

		else if(bac>0.200 && bac<0.299)
		{
			cout<<"-->>Nausea,vomiting\n-->>Emotional swings ie Anger and sadness\n-->>Partial loss of understanding\n-->>Possiblity of stupor\n";
		}

		else if(bac>0.300 && bac<0.399)
		{
			cout<<"-->>Stupor\n-->>Central nervous system depression,\n-->>Loss of understanding\n-->>Lapses in and out of consciousness\n-->>Low possiblity of death\n";
		}

		else if(bac>0.400 && bac<0.500)
		{
			cout<<"-->>Severe Central nervous system depression\n-->>Coma and possiblity of death\n";
		}

		else if(bac>0.50)
		{
			cout<<"-->>High possiblity of death\n";
		}
	}


};


	int call()
{
	int option;

	while(option!=4)
	{
 	cout<<"Press 1 for BMI(BODY MASS INDEX)-->>\n";
 	cout<<"Press 2 for BMR(BASAL METABOLIC RATE) & TDEE(TOTAL DAILY ENERGY EXPENDITURE)-->>\n";
 	cout<<"Press 3 for BAC(BLOOD ALCOHOL CONTENT)-->>\n";
 	cout<<"Press 4 to exit\n";
 	cin>>option;
 	
 	
 	//return option;
	//friend int call();
	//call();
	//void list();
	//{
 	if(option==1)
 	{
 		BMI b;
 		b.details();
 		b.cal_bmi();
 	}

 	else if(option==2)
 	{
 		BMR b1;
		b1.details();
 		b1.cal_bmr();
 	}
 	else if(option==3)
 	{
 	BAC b2;
 	b2.details();
 	b2.cal_bac(1,1);	
 	}
 	
 	else if(option==4)
 	{
	exit(0);	
 	}
 	
 	else
 		cout<<"Enter a valid input\n";

 	//return 0;
 	}
 	return 0;
 }


int main()
{
	call();
	return 0;
}	










