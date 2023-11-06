/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, two_numbers)
{
	Password my_password;
		int actual = my_password.count_leading_characters("11");
		ASSERT_EQ(2, actual);
}

TEST(PasswordTest, empty_password)
{
    Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, single_letter_password)
{
    Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}

TEST(PasswordTest, onecap_onelowercase)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("aA");
	ASSERT_EQ(true, actual);
}
