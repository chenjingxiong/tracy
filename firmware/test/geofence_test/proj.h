#ifndef __PROJ_H_
#define __PROJ_H_

#include <stdint.h>
#include <stdlib.h>
#include "gps.h"

#define true            1
#define false           0

#define LOC_MAX 20
#define STR_MAX 23

struct loc_t
{
    char nmea[2][STR_MAX];
    float lat[2];
    float lon[2];
    struct nmea_gprmc_t mc_t[2];
    float dist_math_fl;
    double dist_math_dbl;
    float dist_s_fl;
    uint16_t bearing_s_fl;
    double dist_s_dbl;
};

struct loc_t l;

#endif
