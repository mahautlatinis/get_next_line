/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:18:44 by malatini          #+#    #+#             */
/*   Updated: 2021/03/03 17:30:16 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define ERROR -1
# define SUCCESS 1
# define DONE 0

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int		ft_strlen(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
int		ft_hasnewline(char *str);
char	*ft_newline(char *s);
char	*ft_prep_s(char *s);
int		get_next_line(int fd, char **line);
#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif
