#ifndef BONUSCLIQUET_H
#define BONUSCLIQUET_H
#include "BaseProduct.h"

class BonusCliquet : public BaseProduct 
{
private:
	double spotPrice;
	double lowBarrier;
	double highBarrier;
	double vol;

public:
	BonusCliquet(void);
	virtual ~BonusCliquet(void);
	virtual void price();
	virtual void computeGreeks();
	virtual void simulatePaths();
	virtual void simulateRandVars();
	virtual void simulatePseudoRandVars();
	void setSpotPrice(double price);
	void setLowBarrier(double barrier);
	void setHighBarrier(double barrier);
	void setVol(double v);
	void setMaturity(double m);

};



#endif