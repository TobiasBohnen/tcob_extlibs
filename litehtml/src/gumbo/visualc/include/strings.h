/*Dummy file to satisfy source file dependencies on Windows platform*/
#if defined(_MSC_VER)
    #define strcasecmp _stricmp
    #define strncasecmp _strnicmp
    #define inline __inline
#endif