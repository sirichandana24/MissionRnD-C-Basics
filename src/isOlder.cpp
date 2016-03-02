/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int i=0, count = 0,yr1=0,yr2=0,m1,m2;
	if (dob1[2] != '-' || dob1[5] != '-' || dob2[2] != '-' || dob2[5] != '-')
		return -1;
	yr1 = (dob1[6]-48) * 1000 + (int)(dob1[7]-48) * 100 + (dob1[8]-48) * 10 + (dob1[9]-48);
	yr2 = (dob2[6] - 48) * 1000 + (int)(dob2[7] - 48) * 100 + (dob2[8] - 48) * 10 + (dob2[9] - 48);
	m1 = (dob1[3] - 48) * 10 + dob1[4]-48;
	m2 = (dob2[3] - 48) * 10 + dob2[4] - 48;
	if (dob1[4] == '2')
	{
		if (yr1 % 4 == 0)
		{
		}
		else
			return -1;
	}
	if (dob2[4] == '2')
	{
		if (yr2 % 4 == 0)
		{
		}
		else
			return -1;
	}
	if(m1>=13 || m2>=13)
		return -1;
	for (i = 0; i <= 9; i++)
	{
		if ((dob1[i] < 48 || dob1[i]>57 || dob2[i] < 48 || dob2[i]>57))
		{
			if (i == 2 || i == 5)
			{
			}
			else
				return -1;
		}
	}
  for (i = 0; i <= 9; i++)
	{
		if (dob1[i] == dob2[i])
			count++;
	}
	if (count == 10)
		return 0;
	else
	{
		for (i = 6; i <= 9; i++)
		{
			if (dob1[i] > dob2[i])
				return 2;
			else
				if (dob1[i]<dob2[i])
				return 1;
		}
		
		for (i = 3; i <= 4; i++)
		{
			if (dob1[i] > dob2[i])
				return 2;
			else
				if (dob1[i]<dob2[i])
				return 1;
		}
		for (i = 0; i <= 1; i++)
		{
			if (dob1[i] > dob2[i])
				return 2;
			else
				if (dob1[i]<dob2[i])
					return 1;
		}

	}
}
