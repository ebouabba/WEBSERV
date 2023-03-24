#include "src/webserv.hpp"

#include "src/Configfile/Configuration.hpp"


int main(int argc, char **argv)
{
    if (argc != 2)
        exit(1);

    // Configuration conf((std::string)argv[1]);
    // Location location(conf, "/");
    // std::cout << location.getallow_methods()[0];
    // return 0;
    // std::vector<Configuration> confs;
    // confs.push_back(conf);
    Webserv myserver(argv[1]);
    if (-1 == myserver.init_server())
        return 1;
    myserver.run_server();

    return 0;
}