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
    	// return 0 on empty because 0 is the neutral element of addition
        return 0;
    }   
    
    if (max_heap.size() == min_heap.size()) 
    {
        return (max_heap.top() + min_heap.top()) / 2;
    }

    return max_heap.top();
}
