
/**
 * more_numbers - print numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++);
	{
		for (j = 0; j < 15; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
