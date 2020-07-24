#include "pch.h"

using namespace std;

int square(int number)
{
	return number * number;
}

TEST(Example, acceptance_test)
{
	EXPECT_EQ(4, square(2));
}

int main(int argc, char **argv)
{
	return 0;
}