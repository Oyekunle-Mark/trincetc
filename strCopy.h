//
// Created by Oyekunle Oloyede on 28/10/2020.
//

#ifndef TRINCETC_STRCOPY_H
#define TRINCETC_STRCOPY_H

char *strCopy(char *s1, const char *s2) {
    int index = 0;

    do {
        s1[index] = s2[index];
        ++index;
    } while (s2[index] != '\0');

    return s1;
}

#endif //TRINCETC_STRCOPY_H
