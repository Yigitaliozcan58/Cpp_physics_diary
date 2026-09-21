#include <iostream>
#include <cmath>
#include <ginac/ginac.h>
#include <string>
#include <vector>
#include <algorithm>

void ff(){
        int H;
        int h;                                                // THIS PART IS TO ADD VARIABLES AND CONSTANTS
        int u;
        const int Gravity_E = 10;


         std::cout<<"please enter initial height please"<<std::endl;
        std::cin>>H;
        std::cout<<"enter initial speed (consider using m/s)"<<std::endl;    //THIS PART IS TO INPUT VALUES
        std::cin>>u;


        


          int t;
          std::cout<<"number t"<<std::endl;
        std::cin>>t;

        
           
        std::vector <int> HD_ff; 
        std::vector<int>TI;   
        std::vector<int>T;                        //THIS PART IS TO CREATE VECTORS BUT ORDER OF CIRCULAR VECTOR IS ti->T->FH_ff(stands for fall height_freefall) the nlast HD_FF
 
        std::vector<int>ti;
        std::vector<int>FH_ff;
        std::vector<int>hv_ff;

        ti.push_back(t);

        for(int z =0; z<ti.size();z++){
            T.push_back(ti.at(z));
            for(int i=0;i<T.size();i++){ 
                for(int j=0;j<=T.at(i);j++){                         // at this stage we define the vector index storage increments and we pus data to T from ti so that T can be used in another for loop for height vector functions.

                    TI.push_back(j);                                 // and we pushed T to TI so TI will be used in Height function on each second trajectory

                }





            }
        }




for(int k=0; k<TI.size();k++){
            int z=k;             // Code is z=k because the as index size z should and could not exist without time so if time input is 0 to 5 it size index cannot exceed 6 ( 0 is included in size as well) 
            h=ceil((-Gravity_E)*std::pow(TI.at(k),2)/2 + H + u*TI.at(k)); // this is our function ( assume T functions are farmers and cow movers from farm to butcher and this h unction is butcher)
                FH_ff.push_back(h);
                HD_ff.push_back(FH_ff.at(z));
            }
        

         for(int j=0;j<HD_ff.size();j++){
                std::cout<<HD_ff.at(j)<<" Meters"<<std::endl;
            }
        }
