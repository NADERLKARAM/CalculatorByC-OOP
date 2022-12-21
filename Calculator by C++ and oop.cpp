

#include <iostream>

using namespace std;

class clsCalculator
{
private:
    float _Result = 0;
    float _LastNumber = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    bool _IsZero(float Number)
    {
        return (Number == 0);
    }

public:
    void Add(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    void Subtrac(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtrac";
        _Result -= Number;

    }

    void Divide(float Number) {
        _LastNumber = Number;
        if (_IsZero(Number))
        {
            Number = 1;
        }
        _PreviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    void Multiply(float Number) {
        _LastNumber = Number;
        _LastOperation = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;

    }

    float getFinalResults() {
        return _Result;
    }

    void Clear()
    {
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result = 0;
    }

    void PrintResult() {
        cout << "Result " << "After " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
    }
};

int main()
{
    clsCalculator cal1;

    cal1.Add(10);
    cal1.PrintResult();

    cal1.Add(20);
    cal1.PrintResult();

    cal1.Subtrac(20);
    cal1.PrintResult();
    
    cal1.Divide(2);
    cal1.PrintResult();

    cal1.Multiply(5);
    cal1.PrintResult();

    cal1.getFinalResults();
    cal1.PrintResult();

    cal1.Clear();
    cal1.PrintResult();
}

