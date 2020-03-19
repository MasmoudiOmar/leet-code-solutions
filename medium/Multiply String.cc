//This one , was kind of a brute force since i was bored and had to make it like that

class Solution {
public:
	string Sum(string s1, string s2)
	{
		int i = s1.length()-1;
		int j = s2.length()-1;
		string result = "";
		int c = 0;
		while (i>=0 && j>=0)
		{
			if ((s1[i] - '0') + (s2[j] - '0') + c >= 10)
			{
				result = to_string(((s1[i] - '0') + (s2[j] - '0') + c) % 10) + result;
				c = 1;
			}
			else
			{
				result = to_string(((s1[i] - '0') + (s2[j] - '0') + c)) + result;
				c = 0;

			}
			i--;j--;
		}
		while (i >= 0)
		{
			if ((s1[i] - '0') + c >= 10)
			{
				result = to_string(((s1[i] - '0') + c) % 10) + result;
				c = 1;
			}
			else
			{
				result = to_string((s1[i] - '0') + c) + result;
				c = 0;
			}
			i--;
		}
		while (j >= 0)
		{
			if ((s2[j] - '0') + c >= 10)
			{
				result = to_string(((s2[j] - '0') + c) % 10) + result;
				c = 1;
			}
			else
			{
				result = to_string(((s2[j] - '0') + c)) + result;
				c = 0;
			}
			j--;
		}
		if (c == 1)
			result = "1" + result;
		return result;

	}
public:
	string multiply(string num1, string num2) {
		if (num1 == "0" || num2 == "0")
			return "0";
		int i = num1.length();
		int j = num2.length();
		string suf = "";
		string result = "0";
		while (i--)
		{
			string ans = "0";
			for (int k = 0;k < num1[i] - '0';k++)
			{
				ans = Sum(ans, num2);
			}
			ans += suf;
			suf += "0";
			result = Sum(result, ans);
		}
		return result;
	}

};

