//
// cNoradSGP4.h
//
// This class implements the NORAD Simple General Perturbation 4 orbit
// model. This model provides the ECI coordiantes/velocity of satellites
// with orbit periods less than 225 minutes.
//
// Copyright (c) 2003 Michael F. Henry
//
#pragma once

#include "cNoradBase.h"

namespace opensat {

class cOrbit;

//////////////////////////////////////////////////////////////////////////////
class cNoradSGP4 : public cNoradBase
{
public:
   cNoradSGP4(const cOrbit &orbit);
   ~cNoradSGP4(void);

   virtual bool getPosition(double tsince, cEci &eci);

protected:
   double m_c5; 
   double m_omgcof;
   double m_xmcof;
   double m_delmo;
   double m_sinmo;
};

} // namespace opensat
