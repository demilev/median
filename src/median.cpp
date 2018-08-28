#include "median.h"
#include <iostream>

void MedianStructure::transfer(std::priority_queue<double, std::vector<double>, auto>& from, std::priority_queue<double, std::vector<double>, auto>& to)
{
    to.push(from.top());
    from.pop();
}

MedianStructure& MedianStructure::insert(const double number)
{   
    if (max_heap.empty() || number <= max_heap.top()) 
    {   
        max_heap.push(number);
        if (max_heap.size() > min_heap.size() + 1)
        {
            transfer(max_heap, min_heap);
        }
    } 
    else
    {   
        min_heap.push(number);
        if (min_heap.size() > max_heap.size())
        {
            transfer(min_heap, max_heap);
        }
    }

    return *this;
}

double MedianStructure::getMedian()
{
    if (max_heap.empty())
    {   
        return 0;
    }   
    
    if (max_heap.size() == min_heap.size()) 
    {
        return (max_heap.top() + min_heap.top()) / 2;
    }

    return max_heap.top();
}

int main()
{
    MedianStructure median_structure = MedianStructure();
    median_structure.insert(1).insert(2).insert(3).insert(4).insert(5);
    std::cout << median_structure.getMedian() << "\n";
}