/*************************************************************************
	> File Name: common.c
	> Author:zhangsheng 
	> Mail: 
	> Created Time: Mon 20 Jul 2020 03:31:54 PM CST
 ************************************************************************/

#include "head.h"

char *get_conf_value(const char *path, const char *key){

}

int socket_create_udp(int port){

}

int socket_udp(){
    int sockfd;
    if ((sockfd = socket(AE_INET, SOCK_DGRAM)) < 0){
        perror("socket()");
        return -1;
    }
    return sockfd;
}



