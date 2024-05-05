/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:24:16 by dduffy-m          #+#    #+#             */
/*   Updated: 2024/05/05 17:37:57 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int			ft_atoi(const char *str);
//ft_bzero()//
//ft_calloc()//
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int arg);
//ft_memchr()//
//ft_memcmp()//
//ft_memcpy()//
//ft_memmove()//
//ft_memset()//
char		*ft_strchr(const char *str, int c);
//ft_strdup()//
//ft_strlcat()//
//ft_strlcpy()//
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
//ft_strnstr()//
char		*ft_strrchr(const char *str, int c);
int			ft_toupper(int ch);
int			ft_tolower(int ch);

#endif



