#ifndef MEDIAN_H
#define MEDIAN_H

#include <queue>
#include <vector>

class MedianStructure
{
    private:
        
        std::priority_queue<double> max_heap; 
        std::priority_queue<double, std::vector<double>, std::greater<double>> min_heap;
        void transfer(std::priority_queue<double, std::vector<double>, auto>&, std::priority_queue<double, std::vector<double>, auto>&);
    
    public:

        MedianStructure& insert(const double);
        double getMedian(); 
};
#endif