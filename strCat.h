//
// Created by Oyekunle Oloyede on 29/10/2020.
//

#ifndef TRINCETC_STRCAT_H
#define TRINCETC_STRCAT_H

/**
 * Concatenates two strings
 */
char *strCat(char *s1, const char *s2) {
    char *s1Ptr = s1;

    while (*s1 != '\0')
        ++s1;

    while ((*s1++ = *s2++) != '\0');

    return s1Ptr;
}

#endif //TRINCETC_STRCAT_H
