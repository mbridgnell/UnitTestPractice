#include "Password.h"
#include <string>
#include <cctype>
using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  return phrase.length();
}

bool Password::has_mixed_case(string phrase)
{
	bool has_lower;
	bool has_upper;
	for (int i = 0; i < phrase.length(); i++)
	{
		if (isupper(phrase[i]))
			has_upper = true;
		else if (islower(phrase[i]))
			has_lower = true;
	}
	if (has_upper && has_lower)
		return true;
	else
		return false;
}
