
  libft_strings

  A new string implementation for c, encoding size of strings in the 4 Bytes
  preceding the pointer.
  Malloc-ing size of string + 5, and keeping the null termination for
  retro-compatibility with current c standards.

================================================================================

  c libs included:
  #include <unistd.h>
  #include <stdlib.h>

================================================================================

  typedef struct	s_istr
  {
  	char		c;
  }				t_istr;

================================================================================

  Functions currently available in libft_strings:

================================================================================

  t_istr
  *ft_newistr(int size);

  Allocates (size + 5) Bytes and return a pointer to the 5th allocated Byte.
  The value of size is written as an integer in the4 Bytes preceding the
  pointer.

================================================================================

  t_istr
  *ft_strtoistr(char *str, char del);

Creates a new copy of str, offers the option to free str if del is not '/0'.

================================================================================

  void
  ft_freeistr(t_istr *istr);

  Free a t_istr item by correctly targetting the pointer 4 Bytes inferior to
  istr.

================================================================================

  void
  ft_putistr(t_istr *istr, int fd, char end, char del);

  Writes a string in the fd file descriptor. The strlen operation to provide to
  the write(2) function is avoided by reading the type casted int left of the
  pointer.
  Optionnaly ends the string with the char of ascii value "end". ('\0' does
  nothing)
  Optionnaly frees the t_istr istr if del is not '\0'.

================================================================================
