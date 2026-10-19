/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:57:49 by mehkekli          #+#    #+#             */
/*   Updated: 2023/08/02 17:57:52 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !ft_is_separator(*str, charset))
			str++;
	}
	return (count);
}

char	**ft_free_words(char **words, int count)
{
	while (count > 0)
	{
		count--;
		free(words[count]);
	}
	free(words);
	return (0);
}

int	ft_store_word(char **result, char **str, char *charset)
{
	int	length;
	int	i;

	while (**str && ft_is_separator(**str, charset))
		(*str)++;
	length = 0;
	while ((*str)[length] && !ft_is_separator((*str)[length], charset))
		length++;
	*result = malloc(length + 1);
	if (!*result)
		return (0);
	i = 0;
	while (i < length)
	{
		(*result)[i] = (*str)[i];
		i++;
	}
	(*result)[i] = 0;
	*str += length;
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		index;
	int		count;

	if (!str || !charset)
		return (0);
	count = ft_count_words(str, charset);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (0);
	index = 0;
	while (index < count)
	{
		if (!ft_store_word(&result[index], &str, charset))
			return (ft_free_words(result, index));
		index++;
	}
	result[index] = 0;
	return (result);
}
