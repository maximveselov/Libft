# Libft
My rework of basic libc functions. 
Functions have been rewritten using only write, malloc and free. 
Compiles with gcc -Wall -Wextra -Werror
Use "make bonus" to add functions that manipulate linked lists.

Generates libft.a file, compile as
gcc main.c libft.a
using libft.h as header
##
###  t_list = takes (void*) into a linked list
##
##
###  BASIC FUNCTIONS (NO EXTERNAL FUNCTIONS)
##

ft_memset - fill a byte string

ft_bzero - fill a byte string with zeroes

ft_memcpy - copy memory area, unsafe with overlaps

ft_memccpy - copy memory area until character found

ft_memmove - copy memory area, safe with overalps

ft_memchr - locate byte in a byte string

ft_memcmp - compare two byte strings

ft_strlcat - append N characters from string X to string Y

ft_strlcpy - copy N characters from string X to string Y

ft_strchr - locate first occurance of character in a string

ft_strrchr - locate last occurance of character in a string

ft_strlen - count amount of characters in a string

ft_strnstr - locate a substring in a string

ft_strncmp - compare two char strings

ft_atoi - convert char into int

ft_isalpha - check if character is alphabetical

ft_isdigit

ft_isalnum

ft_isascii

ft_isprint

ft_toupper - change character to uppercase

ft_tolower





## FUNCTIONS THAT USE MALLOC() AND FREE()



ft_calloc - allocate memory and fill it with zeroes

ft_strdup - create a copy of a string

ft_strjoin - concatenate two strings

ft_substr - create a substring

ft_strtrim - trims %set from a string

ft_split - split a string into an array with a delimiter C

ft_itoa - convert int into char

ft_strmapi - apply function (*f) to all elements of a strin


## FUNCTIONS THAT WRITE ON FILE DESCRIPTOR USING WRITE() AND READ(


ft_putchar_fd - output char on fd

ft_putstr_fd - output string on fd

ft_putendl_fd - output string with \n on fd

ft_putnbr_fd - output int on f


##   BONUS


#LINKED LISTS FUNCTION (WITH MALLOC() AND FREE()


ft_lstnew - create a new list element

ft_lstadd_front - push content from front of the list

ft_lstadd_back - push content from back of the list

ft_lstsize - returns number of elements in a list

ft_lstlast - returns last element of a list

ft_lstdelone - deletes content

ft_lstclear - clears content from all elements of a list

ft_lstiter - iterate (*f) on all elements of a list

ft_lstmap - apply function (*f) to all element, (*del) and free() if necessary, and return a new list
