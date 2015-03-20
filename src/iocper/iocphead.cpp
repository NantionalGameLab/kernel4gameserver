#include "iocphead.h"

tlib::TPool<iocp_event, true> g_poolIocpevent;
CLockUnit g_lock;

// async connect and accept api address
LPFN_ACCEPTEX g_pFunAcceptEx = NULL;
LPFN_CONNECTEX g_pFunConnectEx = NULL;


LPFN_ACCEPTEX GetAcceptExFun() {
    GUID GuidAcceptEx = WSAID_ACCEPTEX;
    DWORD dwBytes = 0;
    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    LPFN_ACCEPTEX pAcceptFun = NULL;
    WSAIoctl(sock, SIO_GET_EXTENSION_FUNCTION_POINTER, &GuidAcceptEx,
        sizeof(GuidAcceptEx), &pAcceptFun, sizeof(pAcceptFun),
        &dwBytes, NULL, NULL);

    if (NULL == pAcceptFun) {
        s32 nError = WSAGetLastError();
        TASSERT(false, "Get AcceptEx fun error, error code : %d", nError);
    }

    return pAcceptFun;
}

LPFN_CONNECTEX GetConnectExFun() {
    GUID GuidConnectEx = WSAID_CONNECTEX;
    DWORD dwBytes = 0;
    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    LPFN_CONNECTEX pConnectFun = NULL;
    WSAIoctl(sock, SIO_GET_EXTENSION_FUNCTION_POINTER, &GuidConnectEx,
        sizeof(GuidConnectEx), &pConnectFun, sizeof(pConnectFun),
        &dwBytes, NULL, NULL);

    if (NULL == pConnectFun) {
        TASSERT(false, "Get ConnectEx fun error, error code : %d", WSAGetLastError());
    }

    return pConnectFun;
}

void formartIocpevent(struct iocp_event * & pEvent, ISocket * p,
                             const s64 socket, const s8 event) {
                                 //memset(pEvent, 0, sizeof(struct iocp_event));
                                 pEvent->clear();
                                 pEvent->wbuf.buf = pEvent->pBuff;
                                 pEvent->wbuf.len = pEvent->buffLen;
                                 pEvent->socket = socket;
                                 pEvent->pContext = p;
                                 pEvent->opt = event;
}
