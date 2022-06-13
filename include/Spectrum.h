//
// Created by 李保超 on 2022/6/14.
// 反应谱类头文件
//

#ifndef ARTIFTIMEHIST_SPECTRUM_H
#define ARTIFTIMEHIST_SPECTRUM_H

#include <string>
#include <vector>
#include "DataPoint.h"

enum class SpectrumXType{Freq, Omega, Period};
enum class SpectrumYType{Accel, Vel, Disp};

class Spectrum
{
private:
    SpectrumXType xType;
    SpectrumYType yType;
    double damp;
    std::string name;
    std::vector<DataPoint> data;
    std::vector<double> xData;
    std::vector<double> yData;
public:
    Spectrum(std::string iName, double idamp, SpectrumXType ix, SpectrumYType iy);
    std::string getName() const {return name;}
    double getDamp() const {return damp;}
    SpectrumXType getXType() const {return xType;}
    SpectrumYType getYType() const {return yType;}
    const std::vector<DataPoint>& getData() const {return data;}
    const std::vector<double>& getXData() const {return xData;}
    const std::vector<double>& getYData() const {return yData;}
    void addData(const DataPoint& dp);
    void addData(double ix, double iy);
    void sortData();//数据排序，升序
};

#endif //ARTIFTIMEHIST_SPECTRUM_H
