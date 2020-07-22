#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    vector<int>v{1,7,2,5,6,4,8,9,10};

    vector<int>::iterator it;
   //you need to arrang such that all elements lesser than 6 are on the left side of 6 and greater elemnts on the right side of 6//

//index of 6 is given here it is 4
vector<int>great_bucket;

vector<int>less_bucket;

for (int i=0 ; i<=3;i++)
{
    it=v.begin();
    if(v[i]>6)
    {
    it=v.begin()+i;
      great_bucket.push_back(v[i]);
      v.erase(it);
    }

}

int z=0;

for (int i=0;i<v.size();i++)
{
    if(v[i]==6){
        z=i;
        break;
    }
}


vector<int>::iterator it2;

for (int i=z+1; i<v.size();i++)
{
    it2=v.begin();
    if(v[i]<6)
    {
      it2=v.begin()+i;
      less_bucket.push_back(v[i]);
      v.erase(it2);
    }
}
cout << "the required arrangement is  : ";
for(int i=0;i<less_bucket.size();i++)
{
    cout<<less_bucket[i]<<" ";
}
int it3=0;
while(v[it3]<=6)
{
    cout<<v[it3]<<" ";
    it3++;
}
for(int i=0;i<great_bucket.size();i++)
{
    cout<<great_bucket[i]<<" ";
}

 /*z=0;

for (int i=0;i<v.size();i++)
{
    if(v[i]==6){
        z=i;
        break;
    }
}

cout << "z is " <<z<<"\n";*/

int it4=z+1;
while(it4 < v.size())
{
    
    cout<<v[it4]<<" ";
    it4++;
}

return 0;
}