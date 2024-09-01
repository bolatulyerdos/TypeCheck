/*
	================================================================================================================================
	Name		: TypeCheck.c
	Created		: 08.08.2014
	Modified	: 08.08.2014
	Author		: bolatulyerdos
	License		: Public domain
	Description	: Checking size, minimum and maximum values of C integer data types (without macros)
	================================================================================================================================
*/

#include <stdio.h>

int main(void)
{
	// Calculating minimum value signed types
	signed char					min_s_char					= -(signed char)((unsigned char)~0 >> 1) - 1;
	signed short				min_s_short					= -(signed short)((unsigned short)~0 >> 1) - 1;
	signed int					min_s_int					= -(signed int)((unsigned int)~0 >> 1) - 1;
	signed long					min_s_long					= -(signed long)((unsigned long)~0 >> 1) - 1;
	signed long long			min_s_long_long				= -(signed long long)((unsigned long long)~0 >> 1) - 1;

	// Calculating maximum value signed types
	signed char					max_s_char					=  (signed char)((unsigned char)~0 >> 1);
	signed short				max_s_short					=  (signed short)((unsigned short)~0 >> 1);
	signed int					max_s_int					=  (signed int)((unsigned int)~0 >> 1);
	signed long					max_s_long					=  (signed long)((unsigned long)~0 >> 1);
	signed long long			max_s_long_long				=  (signed long long)((unsigned long long)~0 >> 1);

	// Calculating maximum value unsigned types
	unsigned char				max_u_char					=  (unsigned char)~0;
	unsigned short				max_u_short					=  (unsigned short)~0;
	unsigned int				max_u_int					=  (unsigned int)~0;
	unsigned long				max_u_long					=  (unsigned long)~0;
	unsigned long long			max_u_long_long				=  (unsigned long long)~0;

	// Print results
	printf("signed char:        %zu bytes (%d...%d)\n",		sizeof(signed char),		min_s_char,			max_s_char);
	printf("signed short:       %zu bytes (%d...%d)\n",		sizeof(signed short),		min_s_short,		max_s_short);
	printf("signed int:         %zu bytes (%d...%d)\n",		sizeof(signed int),			min_s_int,			max_s_int);
	printf("signed long:        %zu bytes (%ld...%ld)\n",	sizeof(signed long),		min_s_long,			max_s_long);
	printf("signed long long:   %zu bytes (%lld...%lld)\n",	sizeof(signed long long),	min_s_long_long,	max_s_long_long);
	printf("unsigned char:      %zu bytes (0...%u)\n",		sizeof(unsigned char),		max_u_char);
	printf("unsigned short:     %zu bytes (0...%u)\n",		sizeof(unsigned short),		max_u_short);
	printf("unsigned int:       %zu bytes (0...%u)\n",		sizeof(unsigned int),		max_u_int);
	printf("unsigned long:      %zu bytes (0...%lu)\n",		sizeof(unsigned long),		max_u_long);
	printf("unsigned long long: %zu bytes (0...%llu)\n",	sizeof(unsigned long long),	max_u_long_long);

	return 0;
}