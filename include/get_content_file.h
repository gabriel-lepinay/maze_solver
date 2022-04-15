/*
** EPITECH PROJECT, 2022
** get_content_file
** File description:
** Header
*/

#ifndef GCONT_H_
    #define GCONT_H_
    #include <stddef.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

char **my_split(char *str, char splitter);

char *get_content(int fd);

int write_error(char const *str);

int count_char(char *str, char c);

#endif /*GCONT_H_*/
