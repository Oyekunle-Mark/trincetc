//
// Created by Oyekunle Oloyede on 27/10/2020.
//

#ifndef TRINCETC_AVERAGE_H
#define TRINCETC_AVERAGE_H

double average(const float *array, int length) {
    double sum = 0.0;
    const float *end = array + length;

    if (length <= 0)
        return 0.0;

    for (const float *itr = array; itr < end; ++itr) {
        sum += *itr;
    }

    return sum / length;
}

#endif //TRINCETC_AVERAGE_H
