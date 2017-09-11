#pragma once

class IConnectionSocket;

enum EConnectionRequestResult
{
	ECRR_Connection_Refused_ = 0,
	ECRR_Connection_Timeout_ = 1,
	ECRR_Connection_Error_ = 2,
	ECRR_Connection_Established_ = 3
};

struct SConnectionResult
{
	EConnectionRequestResult result;
	IConnectionSocket* p_connection;
};

class IEndPointInfo
{
public:

	virtual ~IEndPointInfo()
	{}

	virtual const char* getPointName() const = 0;

	virtual const char* getPointUID() const = 0;

	virtual void requestConnection(const IEndPointInfo* end_point) = 0;

	virtual bool acceptConnection(const IEndPointInfo* another) const = 0;

	virtual void connectionEstablished( SConnectionResult result ) const = 0;
};
