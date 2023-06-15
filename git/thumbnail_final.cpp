
#include <gst/gst.h>
#include <string>
#include "mmm.h"
#include<iostream>
using namespace std;




int main(int argc, char *argv[]) {

    int option;
     while(1)
    {
    	 cout<<"\n Enter the storage type to generate thumbnail \n ";
    	 cout<<"\n 1--FROM USB \n";
    	 cout<<"\n 2--FROM INTERNAL STORAGE \n";
    	 cout<<"\n 3--EXIT\n";
    	 cin>>option;
    	 switch(option)
    	 {

    	 	 	case 1: //create thumbnail for video file from internal storage
    	 	 			usbset();
    	 	 			break;

    	 	 	case 2: //create thumbnail for video file from USB
    	 	 		   internal_storage_set();

    	 	 			break;
    	 	 	case 3://exit
						//iririr
    	 	 			exit(1);
    	 	 			break;
    	 	 	default://valid option
    	 	 			cout<<"\n ENTER THE VALID OPTION \n";
    	 	 			break;

    }
    }
    return 0;
}

