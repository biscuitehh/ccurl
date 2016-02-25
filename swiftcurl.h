#ifndef __SWIFTCURL_H
#define __SWIFTCURL_H

// #include 
#include "swiftcurl.h"

// CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param);
// CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param);

// #include <curl/curl.h>
// #include <stdbool.h>
// #include <stdio.h>

#define CURL_INLINE static __inline__

CURL_INLINE CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param) {
    return curl_easy_setopt(curl, option, param);
}

CURL_INLINE CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param) {
    return curl_easy_setopt(curl, option, param);
}

#endif