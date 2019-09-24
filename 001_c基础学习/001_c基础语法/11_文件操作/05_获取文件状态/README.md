#include <sys/types.h>
#include <sys/stat.h>
int stat(const char *path, struct stat *buf);
功能：获取文件状态信息
参数：
path：文件名
buf：保存文件信息的结构体
返回值：
成功：0
失败-1

struct stat {
	dev_t         st_dev;         //文件的设备编号
	ino_t         st_ino;          //节点
	mode_t        st_mode;   //文件的类型和存取的权限
	nlink_t       st_nlink;     //连到该文件的硬连接数目，刚建立的文件值为1
	uid_t         st_uid;         //用户ID
	gid_t         st_gid;         //组ID
	dev_t         st_rdev;      //(设备类型)若此文件为设备文件，则为其设备编号
	off_t         st_size;        //文件字节数(文件大小)
	unsigned long st_blksize;   //块大小(文件系统的I/O 缓冲区大小)
	unsigned long st_blocks;    //块数
	time_t        st_atime;     //最后一次访问时间
	time_t        st_mtime;    //最后一次修改时间
	time_t        st_ctime;     //最后一次改变时间(指属性)
};

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char **args)
{
	if (argc < 2)
		return 0;

	struct stat st = { 0 };

	stat(args[1], &st);
	int size = st.st_size;//得到结构体中的成员变量
	printf("%d\n", size);
	return 0;
}
