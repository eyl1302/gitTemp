#include <stdio.h>
#include <wchar.h>

size_t w_strlen(const wchar_t *s)
{

	const wchar_t *p = s;
	
	while (*p)
 		++p;
 		
 	return (p - s);
}

char *my_strcat(char *t, char *s)
{ 
	char *p = t;

	while(*p)
		++p;

	while(*p++ = *s++);

	return t;
}

size_t my_strlen(const char *s)
{
	char *p = s;
	while (*p)
	++p;
	return (p - s);
}

char *my_strcpy(char *t, char *s)
{
	char *p = t;
	while(*t++ = *s++)
	;
	return p;
}

int main(void)
{
	int i;
	char *s[] = {
	"Git tutorials",
	"Tutorials Point"
	};

	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

	return 0;
}
