```cpp
#include<iostream>
#include<vector>
#include<algorithm>

class BasicDataProcessing
{
private:
    std::vector<int> data;
public:
    BasicDataProcessing(std::vector<int> data)
    {
        this->data = data;
    }

    void insertData(int value)
    {
        data.push_back(value);
    }

    int getDataAt(int index)
    {
        if(index >= 0 && index < data.size())
        {
            return data[index];
        }
        else
        {
            std::cout << "Index out of range." << std::endl;
            return -1;
        }
    }

    void removeDataAt(int index)
    {
        if(index >= 0 && index < data.size())
        {
            data.erase(data.begin() + index);
        }
        else
        {
            std::cout << "Index out of range." << std::endl;
        }
    }

    void printData()
    {
        for(int i = 0; i < data.size(); i++)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    void sortData()
    {
        std::sort(data.begin(), data.end());
    }

    void reverseData()
    {
        std::reverse(data.begin(), data.end());
    }

    int getSum()
    {
        int sum = 0;
        for(int i = 0; i < data.size(); i++)
        {
            sum += data[i];
        }
        return sum;
    }

    double getAverage()
    {
        double sum = getSum();
        return sum / data.size();
    }

    int getMax()
    {
        int max_value = data[0];
        for(int i = 1; i < data.size(); i++)
        {
            if(data[i] > max_value)
            {
                max_value = data[i];
            }
        }
        return max_value;
    }

    int getMin()
    {
        int min_value = data[0];
        for(int i = 1; i < data.size(); i++)
        {
            if(data[i] < min_value)
            {
                min_value = data[i];
            }
        }
        return min_value;
    }
};

int main()
{
    std::vector<int> initial_data = {10, 20, 30, 40, 50};
    BasicDataProcessing bdp(initial_data);

    bdp.printData();

    std::cout << "Inserting 60 into data." << std::endl;
    bdp.insertData(60);
    bdp.printData();

    std::cout << "Value at index 2: " << bdp.getDataAt(2) << std::endl;

    std::cout << "Removing data at index 3." << std::endl;
    bdp.removeDataAt(3);
    bdp.printData();

    std::cout << "Sorting data." << std::endl;
    bdp.sortData();
    bdp.printData();

    std::cout << "Reversing data." << std::endl;
    bdp.reverseData();
    bdp.printData();

    std::cout << "Sum of data: " << bdp.getSum() << std::endl;
    std::cout << "Average of data: " << bdp.getAverage() << std::endl;
    std::cout << "Max value: " << bdp.getMax() << std::endl;
    std::cout << "Min value: " << bdp.getMin() << std::endl;

    return 0;
}
```
Цей код являє собою простий клас для обробки даних. Він надає можливість додавати, видаляти та отримувати дані, а також друкувати всі дані. Крім того, він надає функції для сортування, реверсування, отримання суми, середнього значення, максимального та мінімального значення з даних.