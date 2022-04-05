#include "main.h"
#include <stdlib.h>

/**
 * word_count - count number of words separated by spaces
 * @str: string param
 * Return: number of words
 */

int word_count(char *str)
{
	int count, i;

	i = count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}

/**
 * find_word - find length of all words in a string
 * @str: string param
 * @word: number of words
 * Return: length of words
 */

int *find_word(char *str, int word)
{
	int i, words, len;
	int *sizes;

	sizes = malloc(word * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	i = words = 0;
	while (words < word)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			len++;
			sizes[words] = len;
			words++;
		}
		i++;
	}
	return (sizes);
}

/**
 * strtow - splits a string into two
 * @str: string param
 * Return: NULL on failure
 */

char **strtow(char *str)
{
	char **newstr;
	int words, i, j, k, curr_word, *sizes;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str);
	sizes = malloc(words * sizeof(int));

	if (sizes == NULL)
		return (NULL);
	sizes = find_word(str, words);
	newstr = malloc((words + 1) * sizeof(char *));

	if (newstr == NULL)
		return (NULL);
	i = j = k = 0;
	while (i < words && str[j] != '\0')
	{
		curr_word = i;
		newstr[i] = malloc(sizes[i] + sizeof(char));
		if (newstr[i] == NULL)
		{
			for (i = i - 1; i > 0; i--)
				free(newstr[i--]);
			free(newstr);
			return (NULL);
		}
		while (str[j] != '\0' && i == curr_word)
		{
			if (str[j] != ' ')
			{
				while (str[j] != '\0' && str[j] != ' ')
				{
					newstr[i][k] = str[j];
					j++;
					k++;
				}
				newstr[i][k] = '\0';
				i++;
				k = 0;
			}
			j++;
		}
	}
	newstr[i] = NULL;
	free(sizes);
	return (newstr);
}
