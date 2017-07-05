#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	**line;

	fd = open("tst", O_RDWR, 0600);
	get_next_line(fd, line);
	return (0);
}
