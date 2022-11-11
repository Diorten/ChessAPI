#include <string>

class Requestand
{
    public:
    std::string port = "";
    std::string host = "";
    std::string scheme = "";
    std::string path = "";
    std::string queryParams = "";
    std::string bodyParams = "";
    std::string headers = "";
};

class BURI
{
    std::string uri = "";
    std::string url = "";

    public:
    std::string uriReturner()
    {
        return uri;
    };

    void uriWriter(std::string arg)
    {
        uri += arg;
    };


    std::string urlReturner()
    {
        return url;
    };

    void urlWriter(std::string arg)
    {
        url += arg;
    };
};

class Builder
{

};