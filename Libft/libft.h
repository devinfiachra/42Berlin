/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:24:16 by dduffy-m          #+#    #+#             */
/*   Updated: 2024/05/05 18:55:13 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//C LIBRARY FUNCTIONS
int			ft_atoi(const char *str);
//void 		ft_bzero(void *s, size_t n);
//void *ft_calloc(size_t nmemb, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int arg);
//void *ft_memchr(const void *s, int c, size_t n);
//int ft_memcmp(const void *s1, const void *s2, size_t n);
//void *ft_memcpy(void *dest, const void *src, size_t n);
//void *ft_memmove(void *dest, const void *src, size_t n);
//void *ft_memset(void *s, int c, size_t n);
char		*ft_strchr(const char *str, int c);
//char *ft_strdup(const char *s);
//ft_strlcat(char *dst, const char *src, size_t size);
//ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
//char *ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strrchr(const char *str, int c);
int			ft_toupper(int ch);
int			ft_tolower(int ch);

// ADDITIONAL FUNCTIONS//
#endif



