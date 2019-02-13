#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <memory>

using std::string;
using std::ifstream; using std::getline;
using std::shared_ptr; using std::make_shared;
using std::cerr; using endl;

void foo(int val)
{
    printf("%d", val);
}

int main(int argc, char* argv[])
{
    cout << "foo";
    cout << "bar";
    cout << "baz";
    cout << "goo";
    cout << "boo";
    cout << "yoo4";
    cout << "zoo5";
    cout << "abc2";
    cout << "abc3";
    cout << "abc6";
    cout << "abc7";
    cout << "abc8";
    cout << "abc9";
    cout << "abc10";
    
    foo(10);
    foo(11);
    
    foo(12);
    foo(13);
    foo(14);
    foo(15);
    foo(16);
    
    foo(17);
    foo(18);
    foo(19);
    foo(20);
    foo(21);
    foo(22);
    
    foo(23);
    foo(24);
    foo(25);

    return 0;
}
