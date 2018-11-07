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
          BaseItem iphone = new IPhoneItem(1, "iPhone", 999.99);
        BaseItem iphone = new IPhoneItem(1, "iPhone", 999.99);
        BaseItem iphone = new IPhoneItem(1, "iPhone", 999.99);
        BaseItem iphone = new IPhoneItem(1, "iPhone", 999.99);
        //sort employees
        AmazonEmployee amazonem1 = new AmazonEmployee(1, "James", "Monroe", 43, 25.45);
        AmazonEmployee amazonem2 = new AmazonEmployee(2, "George", "Washington", 79, 13.95);
        AmazonEmployee amazonem3 = new AmazonEmployee(3, "Dave", "Smith", 14, 62.25);
        AmazonEmployee amazonem4 = new AmazonEmployee(4, "Harry", "James", 15, 62.25);
        vector<AmazonEmployee> v1();
        v1.push_back(&amazonem1);
        v1.push_back(&amazonem2);
        v1.push_back(&amazonem3);
        v1.push_back(&amazonem4);
        std::sort(v1.begin(), v1.end(), AmazonEmployee::sortByWage);
        for(int i = 0; i < v1.size(); i++) {
          cout << v1[i]->getWage() << ",";
        }
        //add wage by 10
        auto addL = [](const AmazonEmployee & n) {
          return n.getWage() + 10;
        };
        std::transform (v1.begin(), v1.end(), v1.begin(), addL);
        //sort afer wage
        std::sort(v1.begin(), v1.end(), AmazonEmployee::sortByWage);
        for(int i = 0; i < v1.size(); i++) {
          cout << v1[i]->getWage() << ",";
        }
        return 0;
      }
    }
  }
}
