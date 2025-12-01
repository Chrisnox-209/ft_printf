/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:14:35 by cpietrza          #+#    #+#             */
/*   Updated: 2025/12/01 08:27:26 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int count1;
// 	int count2;

// 	/* ============================================================ */
// 	printf("/* ==================================================== */\n");
// 	printf("/*              SECTION : TESTS STANDARDS               */\n");
// 	printf("/* ==================================================== */\n");

// 	/* % */
// 	printf("\n-------------------- TEST %% --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> %%\n");
// 	count2 = ft_printf("TEST 42       ----> %%\n");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %c */
// 	printf("\n-------------------- TEST %%c --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> c: %c\n", 'A');
// 	count2 = ft_printf("TEST 42       ----> c: %c\n", 'A');
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %s */
// 	printf("\n-------------------- TEST %%s --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> s: %s\n", "string");
// 	count2 = ft_printf("TEST 42       ----> s: %s\n", "string");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %d */
// 	printf("\n-------------------- TEST %%d --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> d: %d\n", -123456);
// 	count2 = ft_printf("TEST 42       ----> d: %d\n", -123456);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %i */
// 	printf("\n-------------------- TEST %%i --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> i: %i\n", -123456);
// 	count2 = ft_printf("TEST 42       ----> i: %i\n", -123456);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %u */
// 	printf("\n-------------------- TEST %%u --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> u: %u\n", -123456);
// 	count2 = ft_printf("TEST 42       ----> u: %u\n", -123456);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %x */
// 	printf("\n-------------------- TEST %%x --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> x: %x\n", 3735928559u);
// 	count2 = ft_printf("TEST 42       ----> x: %x\n", 3735928559u);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %X */
// 	printf("\n-------------------- TEST %%X --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> X: %X\n", 3735928559u);
// 	count2 = ft_printf("TEST 42       ----> X: %X\n", 3735928559u);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %p */
// 	printf("\n-------------------- TEST %%p --------------------\n");
// 	char test[] = "jdhccj";
// 	count1 = printf("TEST ORIGINAL ----> p: %p\n", &test);
// 	count2 = ft_printf("TEST 42       ----> p: %p\n", &test);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %p (adresse fixe) */
// 	printf("\n--------------- TEST %%p ADRESSE FIXE ---------------\n");
// 	void *ptr = (void *)0x1234abcd;
// 	count1 = printf("TEST ORIGINAL ----> p: %p\n", ptr);
// 	count2 = ft_printf("TEST 42       ----> p: %p\n", ptr);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	printf("\n================ FIN TESTS STANDARDS =================\n\n");

// 	/* ============================================================ */
// 	printf("/* ================================================== */\n");
// 	printf("/*       SECTION : TESTS LIMITES ET SÉCURITÉ          */\n");
// 	printf("/* ================================================== */\n");

// 	/* %p NULL */
// 	printf("\n------------------- TEST %%p (NULL) -------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> p: %p\n", NULL);
// 	count2 = ft_printf("TEST 42       ----> p: %p\n", NULL);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %s NULL */
// 	printf("\n------------------- TEST %%s (NULL) -------------------\n");
// 	char *null_ptr = NULL;
// 	count1 = printf("TEST ORIGINAL ----> s(NULL): |%s|\n", null_ptr);
// 	count2 = ft_printf("TEST 42       ----> s(NULL): |%s|\n", null_ptr);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %d et %u limites */
// 	printf("\n--------------- TEST %%d / %%u LIMITES ---------------\n");
// 	count1 = printf("TEST ORIGINAL ----> d(MIN): %d | u(MIN): %u\n", INT_MIN,
// 			INT_MIN);
// 	count2 = ft_printf("TEST 42       ----> d(MIN): %d | u(MIN): %u\n", INT_MIN,
// 			INT_MIN);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	count1 = printf("TEST ORIGINAL ----> d(MAX): %d | u(MAX): %u\n", INT_MAX,
// 			INT_MAX);
// 	count2 = ft_printf("TEST 42       ----> d(MAX): %d | u(MAX): %u\n", INT_MAX,
// 			INT_MAX);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	count1 = printf("TEST ORIGINAL ----> u(UINT_MAX): %u\n", UINT_MAX);
// 	count2 = ft_printf("TEST 42       ----> u(UINT_MAX): %u\n", UINT_MAX);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %x / %X limites */
// 	printf("\n-------------- TEST %%x / %%X LIMITES ---------------\n");
// 	count1 = printf("TEST ORIGINAL ----> x(0): %x | X(0): %X\n", 0, 0);
// 	count2 = ft_printf("TEST 42       ----> x(0): %x | X(0): %X\n", 0, 0);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	count1 = printf("TEST ORIGINAL ----> x(MAX): %x | X(MAX): %X\n", UINT_MAX,
// 			UINT_MAX);
// 	count2 = ft_printf("TEST 42       ----> x(MAX): %x | X(MAX): %X\n",
// 			UINT_MAX, UINT_MAX);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* Séquences invalides */
// 	printf("\n-------------- TEST SÉQUENCES INVALIDES --------------\n");
// 	count1 = printf("TEST ORIGINAL ----> Invalid: %%z | %s\n", "ok");
// 	count2 = ft_printf("TEST 42       ----> Invalid: %%z | %s\n", "ok");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* Format vide */
// 	count1 = printf("");
// 	count2 = ft_printf("");
// 	printf("\nTEST ORIGINAL (vide) --> %d\n", count1);
// 	printf("TEST 42 (vide)       --> %d\n", count2);

// 	/* % seul */
// 	printf("\n--------------- TEST %% SEUL A LA FIN --------------\n");
// 	count1 = printf("TEST ORIGINAL ----> Seul a la fin %%\n");
// 	count2 = ft_printf("TEST 42       ----> Seul a la fin %%\n");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* Combos */
// 	printf("\n-------------------- TEST COMBOS --------------------\n");
// 	count1 = printf("TEST ORIGINAL ----> Combo: %d | %s | %c | %p | %%\n", 42,
// 			"hello", 'W', &count1);
// 	count2 = ft_printf("42            ----> Combo: %d | %s | %c | %p | %%\n",
// 			42, "hello", 'W', &count1);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	printf("\n========== FIN TESTS LIMITES ET SÉCURITÉ============\n\n");

// 	/* ============================================================ */
// 	printf("/* ===================================================== */\n");
// 	printf("/*        SECTION : TESTS EXTRÊMES & CAS TORDUS          */\n");
// 	printf("/* ===================================================== */\n");

// 	/* Multi %% */
// 	printf("\n-------------------- TEST MULTI %% --------------------\n");
// 	count1 = printf("%%%%%% %% %%%% FIN\n");
// 	count2 = ft_printf("%%%%%% %% %%%% FIN\n");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %c hors ASCII */
// 	printf("\n----------------- TEST %%c HORS ASCII -----------------\n");
// 	count1 = printf("c(-1)=%c | c(256)=%c\n", -1, 256);
// 	count2 = ft_printf("c(-1)=%c | c(256)=%c\n", -1, 256);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %s contenant % */
// 	printf("\n---------------- TEST %%s CONTENANT %% -----------------\n");
// 	count1 = printf("str= |%s|\n", "50% READY %% DONE");
// 	count2 = ft_printf("str= |%s|\n", "50% READY %% DONE");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* multi appels */
// 	printf("\n----------------- TEST MULTI-APPELS -----------------\n");
// 	count1 = ft_printf("A");
// 	count1 += ft_printf("B");
// 	count1 += ft_printf("C\n");

// 	count2 = printf("A");
// 	count2 += printf("B");
// 	count2 += printf("C\n");

// 	printf("TAILLE ORIGINAL --> %d\n", count2);
// 	printf("TAILLE 42       --> %d\n", count1);

// 	/* %s littéral */
// 	printf("\n-------------- TEST %%s LITTÉRAL (ÉCHAPPÉ) --------------\n");
// 	count1 = printf("TEST ORIGINAL ----> %%s %%s\n");
// 	count2 = ft_printf("TEST 42       ----> %%s %%s\n");
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* %p multi types */
// 	printf("\n----------------- TEST %%p MULTI-TYPES -----------------\n");
// 	int t_int = 10;
// 	char t_char = 'A';
// 	double t_double = 3.14;

// 	count1 = printf("INT=%p | CHAR=%p | DOUBLE=%p\n", &t_int, &t_char,
// 			&t_double);
// 	count2 = ft_printf("INT=%p | CHAR=%p | DOUBLE=%p\n", &t_int, &t_char,
// 			&t_double);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* hex négatifs */
// 	printf("\n------------------ TEST HEX NÉGATIFS ------------------\n");
// 	count1 = printf("x(-1)=%x | X(-1)=%X\n", -1, -1);
// 	count2 = ft_printf("x(-1)=%x | X(-1)=%X\n", -1, -1);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* Long string */
// 	printf("\n------------------- TEST LONG STRING -------------------\n");
// 	char long_str[500];
// 	for (int i = 0; i < 499; i++)
// 		long_str[i] = 'A';
// 	long_str[499] = '\0';

// 	count1 = printf("LONG = %s\n", long_str);
// 	count2 = ft_printf("LONG = %s\n", long_str);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	/* Mix extrême */
// 	printf("\n------------------ TEST MIX EXTREME ------------------\n");
// 	count1 = printf("MIX: %c %s %p %% %x %X %d %u\n", 'Z', "Test%", &t_int,
// 			0xabcdef, 0xABCDEF, -42, 42);
// 	count2 = ft_printf("MIX: %c %s %p %% %x %X %d %u\n", 'Z', "Test%", &t_int,
// 			0xabcdef, 0xABCDEF, -42, 42);
// 	printf("TAILLE ORIGINAL --> %d\n", count1);
// 	printf("TAILLE 42       --> %d\n", count2);

// 	printf("\n\n");
// 	printf("/* ===================================================== */\n");
// 	printf("/*               /!\\ TEST DE LA MORT /!\\                 */\n");
// 	printf("/* ===================================================== */\n");
// 	printf("\n");
// 	int c;
// 	c = ft_printf("%");
// 	printf("               ---------> %d <---------", c);
// 	printf("\n\n");

// 	c = ft_printf("   fff\0 56 %d", 2);
// 	printf("%d", c);
// 	return (0);
// }