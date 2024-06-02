#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	vector<int>vec[3];
	for(int i=0;i<3;i++){
		float a,b,c,d;	cin >> a >> b >> c >> d;
		if(abs(a)>=abs(b)+abs(c)){
			vec[0].push_back(a);
			vec[0].push_back(b);
			vec[0].push_back(c);
			vec[0].push_back(d);
		}
		else if(abs(b)>=abs(a)+abs(c)){
			vec[1].push_back(a);
			vec[1].push_back(b);
			vec[1].push_back(c);
			vec[1].push_back(d);
		}
		else if(abs(c)>=abs(a)+abs(b)){
			vec[2].push_back(a);
			vec[2].push_back(b);
			vec[2].push_back(c);
			vec[2].push_back(d);
		}

	}
	float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e=0.001;
	int step=1;
	do{
		x1 = (vec[0][3]-vec[0][1]*y0-vec[0][2]*z0)/vec[0][0];
		y1 = (vec[1][3]-vec[1][0]*x1-vec[1][2]*z0)/vec[1][1];
		z1 = (vec[2][3]-vec[2][0]*x1-vec[2][1]*y1)/vec[2][2];

		//cout<< step<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<< endl;

  		e1 = abs(x0-x1);
  		e2 = abs(y0-y1);
  		e3 = abs(z0-z1);
  		step++;
  		x0 = x1;
  		y0 = y1;
  		z0 = z1;
	}while(e1>e && e2>e && e3>e);

	cout<< endl<<"Solution: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
}