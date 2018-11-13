//============================================================================
// Name        : DriverProject1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "AmazonEmployee.h"
#include "BaseItem.h"
#include "IPhoneItem.h"
#include "MacBookItem.h"
#include "IPadItem.h"
#include <vector>
using namespace std;
namespace edu {
  namespace neu {
    namespace csye6205 {

      int main() {
        // 1, iPhone, 999.99, end
        //   2, macBook, 2599.99, end
        //   3, iPad, 62.25, end
        //   4, iWatch, 249.25, end
    	vector<BaseItem*> vi;

        BaseItem * iphone = new IPhoneItem(1, "iPhone", 999.99);
        BaseItem *macBook = new MacBookItem(2, "macBook", 2599.99);
        cout << iphone->getName()<<"\n";

        return 0;
      }
    }
  }
}
