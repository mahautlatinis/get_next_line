/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:33:38 by malatini          #+#    #+#             */
/*   Updated: 2021/03/03 17:30:24 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
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
