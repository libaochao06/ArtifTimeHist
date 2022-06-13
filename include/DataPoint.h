//
// Created by 李保超 on 2022/6/14.
//

#ifndef ARTIFTIMEHIST_DATAPOINT_H
#define ARTIFTIMEHIST_DATAPOINT_H

struct DataPoint
{
    double x;
    double y;
    DataPoint(double ix, double iy)
    {
        x=ix;
        y=iy;
    }
};

#endif //ARTIFTIMEHIST_DATAPOINT_H
