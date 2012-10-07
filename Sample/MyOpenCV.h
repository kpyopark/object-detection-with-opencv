#pragma once


class CMyOpenCV
{
public:
	CMyOpenCV(void);
	~CMyOpenCV(void);

	void OpenAndShow(const char* psz_file_name);
};

extern CMyOpenCV myWrapper;
