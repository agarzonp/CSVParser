#include "CSVParser/CSVParser.h"

int main(int argc, char **argv) 
{
	agarzonp::CSVParser csvParser("test.csv");

	if (csvParser.IsValid())
	{
		for (auto& row : csvParser.Rows())
		{
			for (size_t index = 0; index < row.NumTokens(); index++)
			{
				printf("%s, ", row[index]);
			}
			printf("\n");
		}
	}

	return 0;
}
