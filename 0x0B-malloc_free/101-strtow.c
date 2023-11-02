#include <stdlib.h>

int count_word(char *s) {
	int flag, c, w;
	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++) {
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0) {
			flag = 1;
			w++;
		}
	}
	return w;
}

char **strtow(char *str) {
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (len = 0; str[len]; len++);
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			if (c) {
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL) {
					for (int j = 0; j < k; ++j) {
						free(matrix[j]);
					}
					free(matrix);
					return (NULL);
				}
				for (int j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[end - start] = '\0';
				matrix[k++] = tmp;
				c = 0;
			}
		} else if (c++ == 0) {
			start = i;
		}
	}

	matrix[k] = NULL;

	return (matrix);
}

