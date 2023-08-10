#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 1024

int _close(int fd)
{
	if (close(fd) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (0);
}

ssize_t _read(const char *filename, int fd, char *buf, size_t count)
{
	ssize_t bytes_read = read(fd, buf, count);

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (-1);
	}
	return (bytes_read);
}

ssize_t _write(const char *filename, int fd, const char *buf, size_t count)
{
	ssize_t bytes_written = write(fd, buf, count);

	if (bytes_written < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (-1);
	}
	return (bytes_written);
}

int main(int argc, const char *argv[])
{
	int fd_in, fd_out;
	ssize_t bytes_read;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(fd_in);
		return (99);
	}

	while ((bytes_read = _read(argv[1], fd_in, buffer, BUFSIZE)) > 0)
	{
		if (_write(argv[2], fd_out, buffer, bytes_read) < 0)
		{
			_close(fd_in);
			_close(fd_out);
			return (99);
		}
	}

	if (_close(fd_in) < 0 || _close(fd_out) < 0)
		return (100);

	return (0);
}
