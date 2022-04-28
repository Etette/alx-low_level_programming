#include "main.h"

/**
 * flip_bits - find num of bits needed to flip and
 * change one number to the other
 * @n: first bit to check
 * @m: second bbit to check
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_len, m_len, flip, store_n, store_m;

	n_len = m_len = flip = 0;
	store_n = n;
	store_m = m;
	while (n > 0)
	{
		n = n >> 1;
		n_len++;
	}
	while (m > 0)
	{
		m = m >> 1;
		m_len++;
	}
	m = store_m;
	n = store_n;
	if (m_len > n_len)
	{
		while (m_len > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			m_len--;
		}
	}
	else
	{
		while (n_len > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			n--;
		}
	}
	return (flip);
}
