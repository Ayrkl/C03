ex00: ft_strcmp
Compares two strings character by character.
Returns the difference between the first pair of differing characters, similar to the strcmp function.

ex01: ft_strncmp
Compares two strings up to n characters.
If a difference is found before n, the function returns the difference. Otherwise, it returns 0.

ex02: ft_strcat
Appends the src string to the end of the dest string.
Returns the concatenated string. Works like the standard strcat.

ex03: ft_strncat
Appends at most n characters from src to the end of dest.
Returns the resulting string. Similar to strncat.

ex04: ft_strstr
Searches for the first occurrence of to_find within str.
Returns a pointer to the beginning of the found substring, or NULL if not found.
Equivalent to strstr.

ex05: ft_strlcat
Appends src to the end of dest, ensuring the total length does not exceed size.
Prevents buffer overflows. Returns the total length the string would have had if there was enough space.
Works like strlcat.
