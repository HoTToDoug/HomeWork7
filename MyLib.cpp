#include <iostream>

namespace MyLib
{
	void Init(float Array[], int size, float numb)
	{
		if (size <= 0)
		{
			std::cout << "Error!" << std::endl;
		}
		else
		{
			for (size_t i = 0; i < size; i++)
			{
				std::cout << "Enter " << i << " numb: ";
				std::cin >> numb;
				Array[i] = numb;
			};
		};
	};

	void Print(float Array[], int size, float numb)
	{
		if (size <= 0)
		{
			std::cout << "Error!" << std::endl;
		}
		else
		{
			for (size_t i = 0; i < size; i++)
			{
				std::cout << Array[i] << " ";
			};
			std::cout << std::endl;
		}
	};

	void Numb(float Array[], int size, float numb, int negative, int positive)
	{
		if (size <= 0)
		{
			std::cout << "Error!" << std::endl;
		}
		else
		{
			for (size_t i = 0; i < size; i++)
			{
				if (Array[i] < 0)
				{
					negative++;
				}
				else
				{
					positive++;
				}
			};
			std::cout << "Negative numb: " << negative << std::endl;
			std::cout << "Positive numb: " << positive << std::endl;
		};
	};
};