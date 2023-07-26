#include "main.h"

/***/

char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str [index] <= 'z'))
			if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				index == 0)
				str[index] -= 32;
			index ++;
	}
}
