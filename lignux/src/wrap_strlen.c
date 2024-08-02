#include <stdio.h>
#include <string.h>

/* call to strlen will call __wrap_strlen first */
size_t __wrap_strlen (const char *s)
{
	printf ("inside strlen wrapper\n");
	/* lib's strlen call will happen with __real_strlen */
	return __real_strlen (s);
}

int main (int argc, char *argv[])
{
	/* call to strlen remains as-is, and calls __wrap_strlen */
	printf ("program's name length: %zu\n", strlen(argv[0]));
        return 0;
}
