#pragma once
#ifdef ONYX32IMPORT
#define ONYXOBJECT __declspec(dllimport)
#elif ONYX32EXPORT
#define ONYXOBJECT __declspec(dllexport)
#else
#define ONYXOBJECT
#endif