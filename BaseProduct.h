#ifndef BASEPRODUCT_H
#define BASEPRODUCT_H
#include <vector>
#include "SimulationType.h"

class BaseProduct
{
protected:
	double maturity;
	int nbTimestep;
	int nbSimulation;
	double mConfidenceLowerBound;
	double mConfidenceUpperBound;
	double mPrice;
	std::vector<double> mRandVars;
	double spotPrice;
	double delta;
	double gamma;
	double theta;
	double rho;
	double vega;
	double riskFreeRate;
	double deltaS;
	double deltaR;
	double deltaSigma;
	double deltaT;

	double moro_normSInv(double u);
	double FaureBase2(int n);
	double varNorm();
	SimulationType simulationType;
	
	



public:
	BaseProduct(void);
	virtual ~BaseProduct(void);
	double getConfidenceLowerBound();
	double getConfidenceUpperBound();
	virtual void price();
	virtual void computeGreeks()=0;
	virtual void simulatePaths()=0;
	virtual void simulateRandVars()=0;
	virtual void simulatePseudoRandVars()=0;
	double getPrice();
	double getDelta();
	double getGamma();
	double getTheta();
	double getRho();
	double getVega();
	virtual void setMaturity(double m);
	void setNbTimestep(int nb);
	void setNbSimulation(int nb);
	void setRiskFreeRate(double r);
	void setDeltaS(double ds);
	void setDeltaT(double dt);
	void setDeltaR(double dr);
	void setDeltaSigma(double ds);
	SimulationType getSimulationType();
	void setSimulationType(SimulationType type);
	
};

#endif