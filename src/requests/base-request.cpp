#include "requestand.hpp"
#include <iostream>
#include <stdexcept>
#include <curl/curl.h>

void requestBuilder()
{
    Requestand requestand;
    BURI buri;

    if (requestand.port == "0" || requestand.host == "" || requestand.scheme == "")
    {
        throw std::invalid_argument("Missing components necessary to construct request.");
    }

    buri.uriWriter(requestand.scheme + "://" + requestand.host);

    if ((requestand.scheme == "http" && requestand.port != "80") || (requestand.scheme == "https" && requestand.port != "443")) 
    {
        buri.uriWriter(requestand.port);
    }

    if (requestand.path != "")
    {
        buri.uriWriter(requestand.path);
    }
}

void urlBuilder()
{
    Requestand requestand;
    BURI buri;

    if (requestand.queryParams != "")
    {
        buri.uriWriter(requestand.queryParams);
    }
    buri.urlWriter(buri.uriReturner());
}

std::string queryParameterBuilder()
{
    Requestand requestand;

    if (requestand.queryParams != "")
    {
        return ("?");
    };
    return(" ");
}

int main()
{
    requestBuilder();
    urlBuilder();
    queryParameterBuilder();
}