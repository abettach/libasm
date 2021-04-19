/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <abettach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:03:49 by abettach          #+#    #+#             */
/*   Updated: 2021/02/20 16:39:35 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <stdlib.h>
#define BLK "\e[1;30m"
#define RED "\e[1;31m"
#define GRN "\e[1;32m"
#define YEL "\e[1;33m"
#define BLU "\e[1;34m"
#define MAG "\e[1;35m"
#define CYN "\e[1;36m"
#define WHT "\e[1;37m"

size_t  ft_strlen(const char *s);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strcpy(char *dst, const char *src);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
char    *ft_strdup(const char *s1);

#endif