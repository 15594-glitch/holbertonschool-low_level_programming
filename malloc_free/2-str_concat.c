#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne de caractères
 * @s2: La seconde chaîne de caractères
 *
 * Return: Pointeur vers la nouvelle chaîne, ou NULL en cas d'échec
 */
char	*str_concat(char *s1, char *s2)
{
	char	*fin_tableau;
	char	*fin_tableau2;
	int		note;
	int		note2;
	int		j;
	char	*s1_s2;

	note = 0;
	note2 = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	fin_tableau = s1;
	fin_tableau2 = s2;
	while (*fin_tableau != '\0' && fin_tableau++)
		note++;
	while (*fin_tableau2 != '\0' && fin_tableau2++)
		note2++;
	s1_s2 = malloc(sizeof(char) * (note + note2 + 1));
	if (s1_s2 == NULL)
		return (NULL);
	while (*s1 != '\0')
		s1_s2[j++] = *s1++;
	while (*s2 != '\0')
		s1_s2[j++] = *s2++;
	*(s1_s2 + j) = '\0';
	return (s1_s2);
}
