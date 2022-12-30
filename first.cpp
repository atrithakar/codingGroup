/*
--------NOTE-----------
I know that AI related stuff is done using python language but I did this just for fun and tried creating something like neurons with my existing knowledge of this stuff and took no help of internet while creating this.
*/

#include <iostream>
using namespace std;
class neuron
{
    float bias, weight;

public:
    int relU(int a);
    float getBias();
    float setBias();
    float getWeight();
    float setWeight();
    neuron(float a, float b)
    {
        bias = a;
        weight = b;
    }
    neuron()
    {
        bias = 0;
        weight = 0;
    }
    ~neuron(){}
};
int main()
{
    neuron n1;
    n1.setBias();
    n1.setWeight();
    cout << n1.getBias() << endl;
    cout << n1.getWeight() << endl;

    neuron n2(23, 32);
    cout << n2.getBias() << endl;
    cout << n2.getWeight() << endl;

    neuron n3;
    cout << n3.getBias() << endl;
    cout << n3.getWeight() << endl;


    return 0;
}

int neuron ::relU(int a)
{
    if (a <= 0)
    {
        return 0;
    }
    return a;
}

float neuron ::getBias()
{
    return bias;
}

float neuron ::getWeight()
{
    return weight;
}

float neuron ::setBias()
{
    cout << "Set the value of bias for current neuron: ";
    cin >> bias;
}

float neuron ::setWeight()
{
    cout << "Set the value of weight for current neuron: ";
    cin >> weight;
}