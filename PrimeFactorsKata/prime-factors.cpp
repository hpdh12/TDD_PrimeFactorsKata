#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int num)
	{
		vector<int> result = {};

		if (num > 1)
		{
			int divisor = 2;
			if (num == 4)
			{
				while ((num % divisor) == 0)
				{
					result.push_back(divisor);
					num /= divisor;
				}
			}
			else if(num == 6)
			{
				while((num % divisor) == 0)
				{
					result.push_back(divisor);
					num /= divisor;
				}
				while ((num % 3) == 0)
				{
					result.push_back(3);
					num /= 3;
				}
			}
			else
			{
				result.push_back(num);
			}
		}

		return result;
	}
};