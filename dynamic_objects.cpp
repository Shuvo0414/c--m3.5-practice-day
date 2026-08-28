#include <bits/stdc++.h>
using namespace std;

/*
Question: Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.
Cricketer
{
    jersey_no;
    country;
}

Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.

Note: At first try to do this, kohli=dhoni and see if it gives the correct output. If not, then think deeply why it didn’t work and try to copy the data manually like kohli->jersey_no=dhoni->jersey_no;

*/

class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    // Create a dynamic Cricketer object named dhoni.
    Cricketer *dhoni = new Cricketer;

    // Manually assign values to the members of the dynamic object.
    dhoni->jersey_no = 7;

    char tmp[100] = "India";
    strcpy(dhoni->country, tmp);

    // Create another separate dynamic Cricketer object named kohli.
    Cricketer *kohli = new Cricketer;

    /*
    Copy the data of dhoni into kohli manually.

    We copy the values of the members, not the pointer itself.
    Since kohli and dhoni are separate dynamic objects,
    deleting dhoni will not delete kohli.
    */
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    // Delete the dhoni object after copying its data.
    delete dhoni;

    /*
    dhoni has been deleted, but kohli still has its own
    copied data, so we can access kohli safely.
    */
    cout << kohli->jersey_no << endl
         << kohli->country;

    // Delete the kohli object after finishing its use.
    delete kohli;

    return 0;
}