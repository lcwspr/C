# 远程操作
## SSH 操作
* SSH为Secure Shell的缩写，由 IETF 的网络工作小组（Network Working Group）所制定；SSH 为建立在应用层和传输层基础上的安全协议。
* SSH是目前较可靠，专为远程登录会话和其他网络服务提供安全性的协议。常用于远程登录，以及用户之间进行资料拷贝。
* 利用SSH协议可以有效防止远程管理过程中的信息泄露问题。SSH最初是 UNIX 系统上的一个程序，后来又迅速扩展到其他操作平台。SSH 在正确使用时可弥补网络中的漏洞。SSH 客户端适用于多种平台。几乎所有 UNIX 平台—包括 HP-UX、Linux、AIX、Solaris、Digital UNIX、Irix，以及其他平台，都可运行SSH。
* 使用SSH服务，需要安装相应的服务器和客户端。客户端和服务器的关系：如果，A机器想被B机器远程控制，那么，A机器需要安装SSH服务器，B机器需要安装SSH客户端。

## Linux 平台相互远程
* 操作命令
    * ssh -l username hostip
* 常用选项
    * -l 
        * 用户名
    * hostip 
        * 主机ip
* 登陆流程
    * SSH 告知用户，这个主机不能识别，这个时候键入yes,SSH就会将相关信息写入'~/.ssh/know_hosts'中，再次访问就不会有这些信息了，输入完口令就可以登陆主机了。
    * 接着输入密码

## xshell传输文件
1. lcd 改变本机路径
2. cd 改变远程路径
3. put 上传
4. get 下载

## scp命令
* SSH 提供了一些命令和shell用来登陆远程服务器，在默认情况下不允许用户拷贝文件，但还是提供了一个scp命令
|参数|含义|
|--- |---|
|RemoteUserName|远程用户名|
|RemoteHostIp|远程IP|
|RemoteFile|远程文件，可带上路径|
|FileName|拷贝到本地后的名字，可带路径不带拷贝到当前目录|

1. 本地文件复制到远程
```
scp FileName RemoteUserName@RemoteHostIp:RemoteFile
scp FileName RemoteHostIp:RemoteFolder
scp FileName RemoteHostIp:RemoteFile
```

2. 本地目录复制到远程
```
scp -r FolderName RemoteUserName@RemoteHostIp:RemoteFolder

3. 远程文件复制到本地
```
scp RemoteUserName@RemoteHostIp:RemoteFile FileName
scp RemoteHostIp:RemoteFolder FileName
scp RemoteHostIp:RemoteFile FileName
```

4. 远程目录复制到本地
```
scp -r RemoteUserName@RemoteHostIp:RemoteFolder FolderName
scp -r RemoteHostIp:RemoteFolder FolderName
```