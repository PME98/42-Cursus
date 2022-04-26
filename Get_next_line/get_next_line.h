/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:45:04 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/04/26 15:59:51 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdlib.h>
# include<sys/types.h>
# include<sys/uio.h>
# include<unistd.h>
# include<stdio.h>
# include<fcntl.h>
# include<limits.h>

size_t			ft_strlen(char *str);
char			*ft_strchr(char *s, int c);
char			*ft_strjoin(char *s1, char *s2);
char			*get_next_line(int fd);
char			*ft_get_line(char *save);
char			*ft_save(char *save);
char			*ft_read_and_save(int fd, char *save);

#endif