#ifndef __SWIFTCURL_H
#define __SWIFTCURL_H

#include 
#include "swiftcurl.h"

CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param);
CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param);

#endif