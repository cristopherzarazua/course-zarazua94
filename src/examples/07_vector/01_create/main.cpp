#include<iostream>
#include<vector>

using std::vector;; using std::cout;

int main()
{
    vector<int> nums;//creates an empty vector
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";

    nums.push_back(4);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";

    nums.push_back(10);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";

    nums.push_back(5);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";
    
    nums.push_back(50);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";
    
    vector<char> letter {'a', 'b', 'c' };
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    letters.push_back('d');
    cout<<letters.size()<<"\n";
    cout<<letters.capacity()<<"\n";

    //create vector
    vector<char> all.As(10, 'a');
    return 0;
}