/*
������ SieGet Downloader
*/
#include "..\inc\swilib.h"
#include "socket.h"
#include "inet.h"

void HttpGet::Start(const char *_req, int _ip, short _port)
{
  req = _req;
  ip = _ip;
  port = _port;
  buf = new char[1024];
  buf_size = 1024;
  recvsize = 0;
  Connect(ip, port);
}

void HttpGet::onCreate()
{
}

void HttpGet::onConnected()
{
  Send(req, strlen(req));
}

void HttpGet::onDataRead()
{
  char tmpbuf[1024];
  int recvsize = Recv(tmpbuf, 1024);
  if (recvsize+recvsize>buf_size-4)
  {
    buf = (char *)realloc(buf, buf_size+1024);
    buf_size += 1024;
  }
  memcpy(buf+recvsize, tmpbuf, recvsize);
  recvsize += recvsize;
}

void HttpGet::onClose()
{
  body = buf;
  body_size = buf_size;
  onFinish(RECV_RESULT_OK);
}

void HttpGet::onRemoteClose()
{
  Close();
}

void HttpGet::onError(SOCK_ERROR err)
{
  onFinish(RECV_RESULT_ERROR);
}

HttpGet::HttpGet(SocketHandler *handler)
  :Socket(handler)
{

}

HttpGet::~HttpGet()
{

}


