//NEED to have separate macro file for leptonica and tessearact. 
//Some macro definition, such as CopyFile will conflict with tesseract.
#define getenv(A) NULL
#define CreateMutex(A,B,C) OpenMutex(A,B,C)
#define WaitForSingleObject(A,B) WaitForSingleObjectEx(A,B,TRUE)
#define FindFirstFile(A,B) INVALID_HANDLE_VALUE

typedef struct timeval {
  long tv_sec;
  long tv_usec;
} timeval;