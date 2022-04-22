#include "main.h"

/**
<<<<<<< HEAD
 * print_rot - writes the str in ROT13
=======
 * print_rev - writes the str in reverse
>>>>>>> c45889d7a409f478183e40ccec994ca4101835cf
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
<<<<<<< HEAD

int print_rot(va_list arguments, char *buf, unsigned int ibuf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";
=======
int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";
>>>>>>> c45889d7a409f478183e40ccec994ca4101835cf

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
<<<<<<< HEAD
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				ibuf = handl_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, str[i], ibuf);
=======
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = handl_buf(buf, str[j], ibuf);
>>>>>>> c45889d7a409f478183e40ccec994ca4101835cf
	}
	return (i);
}
