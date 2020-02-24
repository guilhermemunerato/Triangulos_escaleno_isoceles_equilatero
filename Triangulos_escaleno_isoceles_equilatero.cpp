#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int ladoa ,ladob ,ladoc, ac, bc,ab;
    
    cout<<"Digite lado A:";
    cin>> ladoa;
    
    cout<<"Digite lado B:";
    cin>> ladob;
    
    cout<<"Digite lado C:";
    cin>> ladoc;
    
    
    
    if (ladoa==   ladob&&  ladoc == ladoa)
    {
    
    cout<<"O Triangulo equilatero:";
    }
    else if ((ladoa!= ladob) && (ladoc != ladob)&& (ladoa != ladoc))
    {   
    cout<<"O triangulo é Escaleno:";
    }
    else
    {
        cout<<"O triangulo é Isóceles";
    }   
        
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
