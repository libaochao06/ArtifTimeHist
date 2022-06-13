#include <iostream>
#include "Spectrum.h"

int main() {
    std::string name="test";
    Spectrum sp(name,0.02,SpectrumXType::Freq,SpectrumYType::Accel);
    sp.addData(1,2);
    sp.addData(20,50);
    sp.addData(3,5);
    sp.addData(25,8);
    sp.sortData();
    auto xSeries=sp.getXData();
    for(auto it=xSeries.begin();it!=xSeries.end();it++)
        std::cout<<*it<<' ';

    return 0;
}
