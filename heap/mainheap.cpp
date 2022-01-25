#include <iostream>
#define max 100
using namespace std;
int maxheap[max] = {0};
int index = 1;

void insert_heap(int heap[], int &index, int item)
{
    heap[index] = item;
    int i = index;
    index++;
    while (i > 0)
    {
        int parent = i / 2;
        if (parent > 0)
        {
            if (heap[i] > heap[parent])
            {
                swap(heap[i], heap[parent]);
                i = parent;
            }
            else
                return;
        }
        else
            return;
    }
}

int delete_node()
{
    int x = maxheap[1];
    maxheap[1] = maxheap[index - 1];
    index--;
    int i = 1;
    while (i <= index)
    {
        int left = 2 * i;
        int right = 2 * i + 1;
        int large;
        if ((maxheap[left] > maxheap[right]) && (left <= index && right <= index))
        {
            large = left;
        }
        else if ((maxheap[left] < maxheap[right]) && (left <= index && right <= index))
        {
            large = right;
        }
        else
        {
            if (left <= index)
                large = left;
            else
                large = right;
        }

        swap(maxheap[large], maxheap[i]);
        i = large;
    }
    return x;
}

int main()
{
    int n;
    cout << "enter the number of elements in heap do you wanna insert" << endl;
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insert_heap(maxheap, index, value);
    }

    int i = 1;
    while (maxheap[i] != 0)
    {
        cout << maxheap[i] << " ";
        i++;
    }

    cout << delete_node() << endl;
    i = 1;
    while (i < index)
    {
        cout << maxheap[i] << " ";
        i++;
    }
}
