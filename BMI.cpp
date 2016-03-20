#include "lab2.h"
class Nakano
{
	public:
	void setKG(int q)
	{
		KG=q;
	}
	void setM(int q)
	{
		M=q;
	}
	float BMI()
	{
		return float(KG*10000)/M/M;
	}
	char* result()
	{
		if(BMI()<15)
		{
			strcpy(category,"Very severely underweight");
		}
		else if(BMI()<16)
		{
			strcpy(category,"Severely underweight");
		}
		else if(BMI()<18.5)
		{
			strcpy(category,"Underweight");
		}
		else if(BMI()<25)
		{
			strcpy(category,"Normal");
		}
		else if(BMI()<30)
		{
			strcpy(category,"Overweight");
		}
		else if(BMI()<35)
		{
			strcpy(category,"Obese Class I (Moderately obese)");
		}
		else if(BMI()<40)
		{
			strcpy(category,"Obese Class II (Severely obese)");
		}
		else
		{
			strcpy(category,"Obese Class III (Very severely obese)");
		}
	return &category[0];
	}

	private:
	int KG,M;
	char category[50];
};
