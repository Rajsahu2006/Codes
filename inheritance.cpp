#include<iostream>
using namespace std;
class animal
{
    public :
    void eat()
    {
        cout << "this animal eats food" <<endl;

    }

};
class mamal : public animal
{
    public:
         void  walk()
         {
            cout <<" this animal walks on land " <<endl;

         }
};
class dog : public mamal
{
    public :
        void run()
        {
            cout <<"this dog run in air" <<endl;

        }
};
int main (){
    dog mydog;
    return 0;

}
    

