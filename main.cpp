#include <QCoreApplication>

#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>

int connect(int sockfd, const struct sockaddr *addr,
            socklen_t addrlen);



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
