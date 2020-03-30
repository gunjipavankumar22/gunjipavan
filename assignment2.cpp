#include<pthread.h>
#include<stdio.h>
decrease AVAILABLE RESOURCES 5
int Available_resources = MAX RESOURCES;
    mutex.lock()
    if (available resources < count)
        mutex.unlock()
        decrease_count(count);
    else{
        mutex.lock()
        available resources -= count;
        mutex.unlock()
        return 0;
    }
}
int increase count(int count){
    mutex.lock()
    if available_resources + count <= MAX_RESOURCES
        available resources += count;
    else
        throw an error
    mutex.unlock()
    return 0;
}
