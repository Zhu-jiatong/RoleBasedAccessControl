#if !defined(_Role_h)
#define _Role_h

#include <FS.h>

class Role
{
public:
	Role(const String &mountpoint) : _mountpoint(mountpoint){};
	virtual File openFile(const String &path, const char *mode) = 0;
	virtual void deleteItem(const String &path) = 0;
	virtual void renameFile(const String &oldPath, const String &newPath) = 0;
	virtual void createDir(const String &path) = 0;

private:
	const String &_mountpoint;
};

#endif // _Role_h
