//
// Created by 李保超 on 2022/6/14.
//

#include "Spectrum.h"
#include <algorithm>

bool cmp(const DataPoint &dp1, const DataPoint &dp2)
{
    return dp1.x<dp2.x;
}

Spectrum::Spectrum(std::string iName, double idamp, SpectrumXType ix, SpectrumYType iy)
:name(iName),damp(idamp),xType(ix),yType(iy)
{
    data.clear();
    xData.clear();
    yData.clear();
}

void Spectrum::addData(const DataPoint &dp)
{
    data.push_back(dp);
    xData.push_back(dp.x);
    yData.push_back(dp.y);
}

void Spectrum::addData(double ix, double iy)
{
    data.push_back(DataPoint(ix,iy));
    xData.push_back(ix);
    yData.push_back(iy);
}

void Spectrum::sortData()
{
    std::sort(data.begin(),data.end(),cmp);
    for(int i=0;i<data.size();i++)
    {
        xData.at(i)=data.at(i).x;
        yData.at(i)=data.at(i).y;
    }
}