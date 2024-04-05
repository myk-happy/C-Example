//brief:
#include "SimpleCout.h"

using namespace std;


template<typename T> 
T CustomDiv(T a,T b)
{
    return b == 0 ? 0 : a / b;
}

template<typename T,typename Enable = std::true_type>
struct SafeDiv
{
    static T Do(T a,T b)
    {
        return CustomDiv(a,b);
    }
};

template<typename T> 
struct SafeDiv<T,typename std::is_floating_point<T>::type>
{
    static T Do(T a,T b)
    {
        return a / b;
    }
};

template<typename T>
struct SafeDiv<T,typename std::is_integral<T>::type>
{
    static T Do(T a,T b)
    {
        return b == 0 ? 0 : a / b;
    }
};

int main() {
    Cout(SafeDiv<int>::Do(3,1),purple_red);
    Cout(SafeDiv<float>::Do(3.2f,1.2f),purple_red);
    return 0;
}