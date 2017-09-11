#pragma once

#include <vector>

class IEndPointInfo;

class ICommunicationServer
{
public:

	virtual ~ICommunicationServer()
	{}

	virtual bool getEndPointsList(std::vector<IEndPointInfo>& active_points) = 0;

	virtual IEndPointInfo* registerPoint( const char* point_name ) = 0;
};
