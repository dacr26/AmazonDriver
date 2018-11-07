/*
 * BaseCompany.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef BASECOMPANY_H_
#define BASECOMPANY_H_
#include "AbstractCompanyAPI.h"
namespace edu {
namespace neu {
namespace csye6205 {

class BaseCompany: AbstractCompanyAPI {
public:
  BaseCompany();
  virtual ~BaseCompany();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASECOMPANY_H_ */
