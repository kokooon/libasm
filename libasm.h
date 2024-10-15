/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:30:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/10/15 15:11:15 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBASM_H
# define LIBASM_H

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

//ssize_t ft_strlen(char *s);
void	ft_hello_world(void);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *src, const char *dst);
int		ft_write(int fd, const char *buff, size_t len);


#endif