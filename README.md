# rserver
A small http-server capable of data exchange with multiple clients and status data to an admin application

# planned components
1. rserver - a server application capable of serving http requests from clients
2. rserver-client - a client application capable of sending some simple requests and receiving answers from rserver
3. rserver-admin - an admin application that can do the same things that client can do as well as configuring the server

# planned features
1. The server has login and password protection for admin access
2. The server logs statuses and errors in a nearby log file
3. The server is capable of serving multiple clients by ways of multithreaded and asynchronous/queued client serving
4. A client application can send requestd and receive answers (likely to be implemented with Qt or FTXUI or both)
5. An admin application can show current server status, current erros and configure the log mode of the server
