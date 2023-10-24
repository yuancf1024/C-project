typedef struct {
	int		name; 		// 字符串表中的字节偏移
	char	type:4,		// 数据或函数
			binding:4;	// 符号是本地还是全局
	char 	reserved;
	short 	section;	// 节头索引
	long 	value; 		// 符号地址或距定义目标节的起始位置的偏移
	long 	size;		// 目标大小
} Elf64_Symbol;
