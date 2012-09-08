
#include <runtime/base/hphp_system.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
#include <sys/literal_strings.h>

namespace hphp_impl_starter {}


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int64 k_ABDAY_1;
extern const int64 k_ABDAY_2;
extern const int64 k_ABDAY_3;
extern const int64 k_ABDAY_4;
extern const int64 k_ABDAY_5;
extern const int64 k_ABDAY_6;
extern const int64 k_ABDAY_7;
extern const int64 k_ABMON_1;
extern const int64 k_ABMON_10;
extern const int64 k_ABMON_11;
extern const int64 k_ABMON_12;
extern const int64 k_ABMON_2;
extern const int64 k_ABMON_3;
extern const int64 k_ABMON_4;
extern const int64 k_ABMON_5;
extern const int64 k_ABMON_6;
extern const int64 k_ABMON_7;
extern const int64 k_ABMON_8;
extern const int64 k_ABMON_9;
extern const int64 k_AF_INET;
extern const int64 k_AF_INET6;
extern const int64 k_AF_UNIX;
extern const int64 k_ALT_DIGITS;
extern const int64 k_AM_STR;
extern const int64 k_APACHE_MAP;
extern const int64 k_ASSERT_ACTIVE;
extern const int64 k_ASSERT_BAIL;
extern const int64 k_ASSERT_CALLBACK;
extern const int64 k_ASSERT_QUIET_EVAL;
extern const int64 k_ASSERT_WARNING;
extern const int64 k_CASE_LOWER;
extern const int64 k_CASE_UPPER;
extern const int64 k_CHAR_MAX;
extern const int64 k_CLOCK_MONOTONIC;
extern const int64 k_CLOCK_PROCESS_CPUTIME_ID;
extern const int64 k_CLOCK_REALTIME;
extern const int64 k_CLOCK_THREAD_CPUTIME_ID;
extern const int64 k_CL_EXPUNGE;
extern const int64 k_CODESET;
extern const int64 k_CONNECTION_ABORTED;
extern const int64 k_CONNECTION_NORMAL;
extern const int64 k_CONNECTION_TIMEOUT;
extern const int64 k_COUNT_NORMAL;
extern const int64 k_COUNT_RECURSIVE;
extern const int64 k_CP_MOVE;
extern const int64 k_CP_UID;
extern const int64 k_CREDITS_ALL;
extern const int64 k_CREDITS_DOCS;
extern const int64 k_CREDITS_FULLPAGE;
extern const int64 k_CREDITS_GENERAL;
extern const int64 k_CREDITS_GROUP;
extern const int64 k_CREDITS_MODULES;
extern const int64 k_CREDITS_QA;
extern const int64 k_CREDITS_SAPI;
extern const int64 k_CRNCYSTR;
extern const int64 k_CRYPT_BLOWFISH;
extern const int64 k_CRYPT_EXT_DES;
extern const int64 k_CRYPT_MD5;
extern const int64 k_CRYPT_SALT_LENGTH;
extern const int64 k_CRYPT_STD_DES;
extern const int64 k_CURLAUTH_ANY;
extern const int64 k_CURLAUTH_ANYSAFE;
extern const int64 k_CURLAUTH_BASIC;
extern const int64 k_CURLAUTH_DIGEST;
extern const int64 k_CURLAUTH_GSSNEGOTIATE;
extern const int64 k_CURLAUTH_NTLM;
extern const int64 k_CURLCLOSEPOLICY_CALLBACK;
extern const int64 k_CURLCLOSEPOLICY_LEAST_RECENTLY_USED;
extern const int64 k_CURLCLOSEPOLICY_LEAST_TRAFFIC;
extern const int64 k_CURLCLOSEPOLICY_OLDEST;
extern const int64 k_CURLCLOSEPOLICY_SLOWEST;
extern const int64 k_CURLE_ABORTED_BY_CALLBACK;
extern const int64 k_CURLE_BAD_CALLING_ORDER;
extern const int64 k_CURLE_BAD_CONTENT_ENCODING;
extern const int64 k_CURLE_BAD_FUNCTION_ARGUMENT;
extern const int64 k_CURLE_BAD_PASSWORD_ENTERED;
extern const int64 k_CURLE_COULDNT_CONNECT;
extern const int64 k_CURLE_COULDNT_RESOLVE_HOST;
extern const int64 k_CURLE_COULDNT_RESOLVE_PROXY;
extern const int64 k_CURLE_FAILED_INIT;
extern const int64 k_CURLE_FILESIZE_EXCEEDED;
extern const int64 k_CURLE_FILE_COULDNT_READ_FILE;
extern const int64 k_CURLE_FTP_ACCESS_DENIED;
extern const int64 k_CURLE_FTP_BAD_DOWNLOAD_RESUME;
extern const int64 k_CURLE_FTP_CANT_GET_HOST;
extern const int64 k_CURLE_FTP_CANT_RECONNECT;
extern const int64 k_CURLE_FTP_COULDNT_GET_SIZE;
extern const int64 k_CURLE_FTP_COULDNT_RETR_FILE;
extern const int64 k_CURLE_FTP_COULDNT_SET_ASCII;
extern const int64 k_CURLE_FTP_COULDNT_SET_BINARY;
extern const int64 k_CURLE_FTP_COULDNT_STOR_FILE;
extern const int64 k_CURLE_FTP_COULDNT_USE_REST;
extern const int64 k_CURLE_FTP_PORT_FAILED;
extern const int64 k_CURLE_FTP_QUOTE_ERROR;
extern const int64 k_CURLE_FTP_SSL_FAILED;
extern const int64 k_CURLE_FTP_USER_PASSWORD_INCORRECT;
extern const int64 k_CURLE_FTP_WEIRD_227_FORMAT;
extern const int64 k_CURLE_FTP_WEIRD_PASS_REPLY;
extern const int64 k_CURLE_FTP_WEIRD_PASV_REPLY;
extern const int64 k_CURLE_FTP_WEIRD_SERVER_REPLY;
extern const int64 k_CURLE_FTP_WEIRD_USER_REPLY;
extern const int64 k_CURLE_FTP_WRITE_ERROR;
extern const int64 k_CURLE_FUNCTION_NOT_FOUND;
extern const int64 k_CURLE_GOT_NOTHING;
extern const int64 k_CURLE_HTTP_NOT_FOUND;
extern const int64 k_CURLE_HTTP_PORT_FAILED;
extern const int64 k_CURLE_HTTP_POST_ERROR;
extern const int64 k_CURLE_HTTP_RANGE_ERROR;
extern const int64 k_CURLE_LDAP_CANNOT_BIND;
extern const int64 k_CURLE_LDAP_INVALID_URL;
extern const int64 k_CURLE_LDAP_SEARCH_FAILED;
extern const int64 k_CURLE_LIBRARY_NOT_FOUND;
extern const int64 k_CURLE_MALFORMAT_USER;
extern const int64 k_CURLE_OBSOLETE;
extern const int64 k_CURLE_OK;
extern const int64 k_CURLE_OPERATION_TIMEOUTED;
extern const int64 k_CURLE_OUT_OF_MEMORY;
extern const int64 k_CURLE_PARTIAL_FILE;
extern const int64 k_CURLE_READ_ERROR;
extern const int64 k_CURLE_RECV_ERROR;
extern const int64 k_CURLE_SEND_ERROR;
extern const int64 k_CURLE_SHARE_IN_USE;
extern const int64 k_CURLE_SSL_CACERT;
extern const int64 k_CURLE_SSL_CERTPROBLEM;
extern const int64 k_CURLE_SSL_CIPHER;
extern const int64 k_CURLE_SSL_CONNECT_ERROR;
extern const int64 k_CURLE_SSL_ENGINE_NOTFOUND;
extern const int64 k_CURLE_SSL_ENGINE_SETFAILED;
extern const int64 k_CURLE_SSL_PEER_CERTIFICATE;
extern const int64 k_CURLE_TELNET_OPTION_SYNTAX;
extern const int64 k_CURLE_TOO_MANY_REDIRECTS;
extern const int64 k_CURLE_UNKNOWN_TELNET_OPTION;
extern const int64 k_CURLE_UNSUPPORTED_PROTOCOL;
extern const int64 k_CURLE_URL_MALFORMAT;
extern const int64 k_CURLE_URL_MALFORMAT_USER;
extern const int64 k_CURLE_WRITE_ERROR;
extern const int64 k_CURLFTPAUTH_DEFAULT;
extern const int64 k_CURLFTPAUTH_SSL;
extern const int64 k_CURLFTPAUTH_TLS;
extern const int64 k_CURLFTPSSL_ALL;
extern const int64 k_CURLFTPSSL_CONTROL;
extern const int64 k_CURLFTPSSL_NONE;
extern const int64 k_CURLFTPSSL_TRY;
extern const int64 k_CURLINFO_CONNECT_TIME;
extern const int64 k_CURLINFO_CONTENT_LENGTH_DOWNLOAD;
extern const int64 k_CURLINFO_CONTENT_LENGTH_UPLOAD;
extern const int64 k_CURLINFO_CONTENT_TYPE;
extern const int64 k_CURLINFO_EFFECTIVE_URL;
extern const int64 k_CURLINFO_FILETIME;
extern const int64 k_CURLINFO_HEADER_OUT;
extern const int64 k_CURLINFO_HEADER_SIZE;
extern const int64 k_CURLINFO_HTTP_CODE;
extern const int64 k_CURLINFO_NAMELOOKUP_TIME;
extern const int64 k_CURLINFO_PRETRANSFER_TIME;
extern const int64 k_CURLINFO_PRIVATE;
extern const int64 k_CURLINFO_REDIRECT_COUNT;
extern const int64 k_CURLINFO_REDIRECT_TIME;
extern const int64 k_CURLINFO_REQUEST_SIZE;
extern const int64 k_CURLINFO_SIZE_DOWNLOAD;
extern const int64 k_CURLINFO_SIZE_UPLOAD;
extern const int64 k_CURLINFO_SPEED_DOWNLOAD;
extern const int64 k_CURLINFO_SPEED_UPLOAD;
extern const int64 k_CURLINFO_SSL_VERIFYRESULT;
extern const int64 k_CURLINFO_STARTTRANSFER_TIME;
extern const int64 k_CURLINFO_TOTAL_TIME;
extern const int64 k_CURLMSG_DONE;
extern const int64 k_CURLM_BAD_EASY_HANDLE;
extern const int64 k_CURLM_BAD_HANDLE;
extern const int64 k_CURLM_CALL_MULTI_PERFORM;
extern const int64 k_CURLM_INTERNAL_ERROR;
extern const int64 k_CURLM_OK;
extern const int64 k_CURLM_OUT_OF_MEMORY;
extern const int64 k_CURLOPT_AUTOREFERER;
extern const int64 k_CURLOPT_BINARYTRANSFER;
extern const int64 k_CURLOPT_BUFFERSIZE;
extern const int64 k_CURLOPT_CAINFO;
extern const int64 k_CURLOPT_CAPATH;
extern const int64 k_CURLOPT_CLOSEPOLICY;
extern const int64 k_CURLOPT_CONNECTTIMEOUT;
extern const int64 k_CURLOPT_COOKIE;
extern const int64 k_CURLOPT_COOKIEFILE;
extern const int64 k_CURLOPT_COOKIEJAR;
extern const int64 k_CURLOPT_COOKIESESSION;
extern const int64 k_CURLOPT_CRLF;
extern const int64 k_CURLOPT_CUSTOMREQUEST;
extern const int64 k_CURLOPT_DNS_CACHE_TIMEOUT;
extern const int64 k_CURLOPT_DNS_USE_GLOBAL_CACHE;
extern const int64 k_CURLOPT_EGDSOCKET;
extern const int64 k_CURLOPT_ENCODING;
extern const int64 k_CURLOPT_FAILONERROR;
extern const int64 k_CURLOPT_FILE;
extern const int64 k_CURLOPT_FILETIME;
extern const int64 k_CURLOPT_FOLLOWLOCATION;
extern const int64 k_CURLOPT_FORBID_REUSE;
extern const int64 k_CURLOPT_FRESH_CONNECT;
extern const int64 k_CURLOPT_FTPAPPEND;
extern const int64 k_CURLOPT_FTPLISTONLY;
extern const int64 k_CURLOPT_FTPPORT;
extern const int64 k_CURLOPT_FTPSSLAUTH;
extern const int64 k_CURLOPT_FTP_CREATE_MISSING_DIRS;
extern const int64 k_CURLOPT_FTP_SSL;
extern const int64 k_CURLOPT_FTP_USE_EPRT;
extern const int64 k_CURLOPT_FTP_USE_EPSV;
extern const int64 k_CURLOPT_HEADER;
extern const int64 k_CURLOPT_HEADERFUNCTION;
extern const int64 k_CURLOPT_HTTP200ALIASES;
extern const int64 k_CURLOPT_HTTPAUTH;
extern const int64 k_CURLOPT_HTTPGET;
extern const int64 k_CURLOPT_HTTPHEADER;
extern const int64 k_CURLOPT_HTTPPROXYTUNNEL;
extern const int64 k_CURLOPT_HTTP_VERSION;
extern const int64 k_CURLOPT_INFILE;
extern const int64 k_CURLOPT_INFILESIZE;
extern const int64 k_CURLOPT_INTERFACE;
extern const int64 k_CURLOPT_IPRESOLVE;
extern const int64 k_CURLOPT_KRB4LEVEL;
extern const int64 k_CURLOPT_LOW_SPEED_LIMIT;
extern const int64 k_CURLOPT_LOW_SPEED_TIME;
extern const int64 k_CURLOPT_MAXCONNECTS;
extern const int64 k_CURLOPT_MAXREDIRS;
extern const int64 k_CURLOPT_MUTE;
extern const int64 k_CURLOPT_NETRC;
extern const int64 k_CURLOPT_NOBODY;
extern const int64 k_CURLOPT_NOPROGRESS;
extern const int64 k_CURLOPT_NOSIGNAL;
extern const int64 k_CURLOPT_PASSWDFUNCTION;
extern const int64 k_CURLOPT_PORT;
extern const int64 k_CURLOPT_POST;
extern const int64 k_CURLOPT_POSTFIELDS;
extern const int64 k_CURLOPT_POSTQUOTE;
extern const int64 k_CURLOPT_PRIVATE;
extern const int64 k_CURLOPT_PROXY;
extern const int64 k_CURLOPT_PROXYAUTH;
extern const int64 k_CURLOPT_PROXYPORT;
extern const int64 k_CURLOPT_PROXYTYPE;
extern const int64 k_CURLOPT_PROXYUSERPWD;
extern const int64 k_CURLOPT_PUT;
extern const int64 k_CURLOPT_QUOTE;
extern const int64 k_CURLOPT_RANDOM_FILE;
extern const int64 k_CURLOPT_RANGE;
extern const int64 k_CURLOPT_READDATA;
extern const int64 k_CURLOPT_READFUNCTION;
extern const int64 k_CURLOPT_REFERER;
extern const int64 k_CURLOPT_RESUME_FROM;
extern const int64 k_CURLOPT_RETURNTRANSFER;
extern const int64 k_CURLOPT_SSLCERT;
extern const int64 k_CURLOPT_SSLCERTPASSWD;
extern const int64 k_CURLOPT_SSLCERTTYPE;
extern const int64 k_CURLOPT_SSLENGINE;
extern const int64 k_CURLOPT_SSLENGINE_DEFAULT;
extern const int64 k_CURLOPT_SSLKEY;
extern const int64 k_CURLOPT_SSLKEYPASSWD;
extern const int64 k_CURLOPT_SSLKEYTYPE;
extern const int64 k_CURLOPT_SSLVERSION;
extern const int64 k_CURLOPT_SSL_CIPHER_LIST;
extern const int64 k_CURLOPT_SSL_VERIFYHOST;
extern const int64 k_CURLOPT_SSL_VERIFYPEER;
extern const int64 k_CURLOPT_STDERR;
extern const int64 k_CURLOPT_TCP_NODELAY;
extern const int64 k_CURLOPT_TIMECONDITION;
extern const int64 k_CURLOPT_TIMEOUT;
extern const int64 k_CURLOPT_TIMEVALUE;
extern const int64 k_CURLOPT_TRANSFERTEXT;
extern const int64 k_CURLOPT_UNRESTRICTED_AUTH;
extern const int64 k_CURLOPT_UPLOAD;
extern const int64 k_CURLOPT_URL;
extern const int64 k_CURLOPT_USERAGENT;
extern const int64 k_CURLOPT_USERPWD;
extern const int64 k_CURLOPT_VERBOSE;
extern const int64 k_CURLOPT_WRITEFUNCTION;
extern const int64 k_CURLOPT_WRITEHEADER;
extern const int64 k_CURLPROXY_HTTP;
extern const int64 k_CURLPROXY_SOCKS5;
extern const int64 k_CURLVERSION_NOW;
extern const int64 k_CURL_HTTP_VERSION_1_0;
extern const int64 k_CURL_HTTP_VERSION_1_1;
extern const int64 k_CURL_HTTP_VERSION_NONE;
extern const int64 k_CURL_IPRESOLVE_V4;
extern const int64 k_CURL_IPRESOLVE_V6;
extern const int64 k_CURL_IPRESOLVE_WHATEVER;
extern const int64 k_CURL_NETRC_IGNORED;
extern const int64 k_CURL_NETRC_OPTIONAL;
extern const int64 k_CURL_NETRC_REQUIRED;
extern const int64 k_CURL_TIMECOND_IFMODSINCE;
extern const int64 k_CURL_TIMECOND_IFUNMODSINCE;
extern const int64 k_CURL_TIMECOND_LASTMOD;
extern const int64 k_CURL_VERSION_IPV6;
extern const int64 k_CURL_VERSION_KERBEROS4;
extern const int64 k_CURL_VERSION_LIBZ;
extern const int64 k_CURL_VERSION_SSL;
extern const StaticString k_DATE_ATOM;
extern const StaticString k_DATE_COOKIE;
extern const StaticString k_DATE_ISO8601;
extern const StaticString k_DATE_RFC1036;
extern const StaticString k_DATE_RFC1123;
extern const StaticString k_DATE_RFC2822;
extern const StaticString k_DATE_RFC3339;
extern const StaticString k_DATE_RFC822;
extern const StaticString k_DATE_RFC850;
extern const StaticString k_DATE_RSS;
extern const StaticString k_DATE_W3C;
extern const int64 k_DAY_1;
extern const int64 k_DAY_2;
extern const int64 k_DAY_3;
extern const int64 k_DAY_4;
extern const int64 k_DAY_5;
extern const int64 k_DAY_6;
extern const int64 k_DAY_7;
extern const int64 k_DEBUG_LOG_AGENT;
extern const int64 k_DEBUG_LOG_ALL;
extern const int64 k_DEBUG_LOG_COOKIE;
extern const int64 k_DEBUG_LOG_DEFAULT;
extern const int64 k_DEBUG_LOG_IP;
extern const int64 k_DEBUG_LOG_NONE;
extern const int64 k_DEBUG_LOG_POST;
extern const int64 k_DEBUG_LOG_REFERER;
extern const int64 k_DEBUG_LOG_TRACE;
extern const int64 k_DEBUG_LOG_URL;
extern const int64 k_DEBUG_LOG_USER;
extern const StaticString k_DEFAULT_INCLUDE_PATH;
extern const StaticString k_DIRECTORY_SEPARATOR;
extern const int64 k_DNS_A;
extern const int64 k_DNS_A6;
extern const int64 k_DNS_AAAA;
extern const int64 k_DNS_ALL;
extern const int64 k_DNS_ANY;
extern const int64 k_DNS_CNAME;
extern const int64 k_DNS_HINFO;
extern const int64 k_DNS_MX;
extern const int64 k_DNS_NAPTR;
extern const int64 k_DNS_NS;
extern const int64 k_DNS_PTR;
extern const int64 k_DNS_SOA;
extern const int64 k_DNS_SRV;
extern const int64 k_DNS_TXT;
extern const int64 k_DOMSTRING_SIZE_ERR;
extern const int64 k_DOM_HIERARCHY_REQUEST_ERR;
extern const int64 k_DOM_INDEX_SIZE_ERR;
extern const int64 k_DOM_INUSE_ATTRIBUTE_ERR;
extern const int64 k_DOM_INVALID_ACCESS_ERR;
extern const int64 k_DOM_INVALID_CHARACTER_ERR;
extern const int64 k_DOM_INVALID_MODIFICATION_ERR;
extern const int64 k_DOM_INVALID_STATE_ERR;
extern const int64 k_DOM_NAMESPACE_ERR;
extern const int64 k_DOM_NOT_FOUND_ERR;
extern const int64 k_DOM_NOT_SUPPORTED_ERR;
extern const int64 k_DOM_NO_DATA_ALLOWED_ERR;
extern const int64 k_DOM_NO_MODIFICATION_ALLOWED_ERR;
extern const int64 k_DOM_PHP_ERR;
extern const int64 k_DOM_SYNTAX_ERR;
extern const int64 k_DOM_VALIDATION_ERR;
extern const int64 k_DOM_WRONG_DOCUMENT_ERR;
extern const int64 k_D_FMT;
extern const int64 k_D_T_FMT;
extern const int64 k_ENC7BIT;
extern const int64 k_ENC8BIT;
extern const int64 k_ENCBASE64;
extern const int64 k_ENCBINARY;
extern const int64 k_ENCOTHER;
extern const int64 k_ENCQUOTEDPRINTABLE;
extern const int64 k_ENT_COMPAT;
extern const int64 k_ENT_NOQUOTES;
extern const int64 k_ENT_QUOTES;
extern const int64 k_ENT_FB_UTF8;
extern const int64 k_ENT_FB_UTF8_ONLY;
extern const int64 k_ERA;
extern const int64 k_ERA_D_FMT;
extern const int64 k_ERA_D_T_FMT;
extern const int64 k_ERA_T_FMT;
extern const int64 k_EXIF_USE_MBSTRING;
extern const int64 k_EXTR_IF_EXISTS;
extern const int64 k_EXTR_OVERWRITE;
extern const int64 k_EXTR_PREFIX_ALL;
extern const int64 k_EXTR_PREFIX_IF_EXISTS;
extern const int64 k_EXTR_PREFIX_INVALID;
extern const int64 k_EXTR_PREFIX_SAME;
extern const int64 k_EXTR_REFS;
extern const int64 k_EXTR_SKIP;
extern const int64 k_E_ALL;
extern const int64 k_E_COMPILE_ERROR;
extern const int64 k_E_COMPILE_WARNING;
extern const int64 k_E_CORE_ERROR;
extern const int64 k_E_CORE_WARNING;
extern const int64 k_E_DEPRECATED;
extern const int64 k_E_ERROR;
extern const int64 k_E_NOTICE;
extern const int64 k_E_PARSE;
extern const int64 k_E_RECOVERABLE_ERROR;
extern const int64 k_E_STRICT;
extern const int64 k_E_USER_DEPRECATED;
extern const int64 k_E_USER_ERROR;
extern const int64 k_E_USER_NOTICE;
extern const int64 k_E_USER_WARNING;
extern const int64 k_E_WARNING;
extern const bool k_FALSE;
extern const int64 k_FILE_APPEND;
extern const int64 k_FILE_IGNORE_NEW_LINES;
extern const int64 k_FILE_NO_DEFAULT_CONTEXT;
extern const int64 k_FILE_SKIP_EMPTY_LINES;
extern const int64 k_FILE_USE_INCLUDE_PATH;
extern const int64 k_FNM_CASEFOLD;
extern const int64 k_FNM_NOESCAPE;
extern const int64 k_FNM_PATHNAME;
extern const int64 k_FNM_PERIOD;
extern const int64 k_FORCE_DEFLATE;
extern const int64 k_FORCE_GZIP;
extern const int64 k_FT_INTERNAL;
extern const int64 k_FT_NOT;
extern const int64 k_FT_PEEK;
extern const int64 k_FT_PREFETCHTEXT;
extern const int64 k_FT_UID;
extern const int64 k_GD_BUNDLED;
extern const StaticString k_GD_EXTRA_VERSION;
extern const int64 k_GD_MAJOR_VERSION;
extern const int64 k_GD_MINOR_VERSION;
extern const int64 k_GD_RELEASE_VERSION;
extern const StaticString k_GD_VERSION;
extern const int64 k_GLOBAL_STATE_IGNORE;
extern const int64 k_GLOBAL_STATE_OVERWRITE;
extern const int64 k_GLOBAL_STATE_SKIP;
extern const int64 k_GLOBAL_SYMBOL_CLASS_STATIC;
extern const int64 k_GLOBAL_SYMBOL_DYNAMIC_CONSTANT;
extern const int64 k_GLOBAL_SYMBOL_FILE_INCLUDE;
extern const int64 k_GLOBAL_SYMBOL_GLOBAL_VARIABLE;
extern const int64 k_GLOBAL_SYMBOL_REDECLARED_CLASS;
extern const int64 k_GLOBAL_SYMBOL_REDECLARED_FUNCTION;
extern const int64 k_GLOBAL_SYMBOL_STATIC_VARIABLE;
extern const int64 k_GLOB_AVAILABLE_FLAGS;
extern const int64 k_GLOB_BRACE;
extern const int64 k_GLOB_ERR;
extern const int64 k_GLOB_MARK;
extern const int64 k_GLOB_NOCHECK;
extern const int64 k_GLOB_NOESCAPE;
extern const int64 k_GLOB_NOSORT;
extern const int64 k_GLOB_ONLYDIR;
extern const int64 k_GRAPHEME_EXTR_COUNT;
extern const int64 k_GRAPHEME_EXTR_MAXBYTES;
extern const int64 k_GRAPHEME_EXTR_MAXCHARS;
extern const int64 k_HASH_HMAC;
extern const StaticString k_HPHP_TRIM_CHARLIST;
extern const StaticString k_HPHP_VERSION;
extern const int64 k_HTML_ENTITIES;
extern const int64 k_HTML_SPECIALCHARS;
extern const StaticString k_ICONV_IMPL;
extern const int64 k_ICONV_MIME_DECODE_CONTINUE_ON_ERROR;
extern const int64 k_ICONV_MIME_DECODE_STRICT;
extern const StaticString k_ICONV_VERSION;
extern const int64 k_IDNA_CONTAINS_ACE_PREFIX;
extern const int64 k_IDNA_CONTAINS_MINUS;
extern const int64 k_IDNA_CONTAINS_NON_LDH;
extern const int64 k_IDNA_ICONV_ERROR;
extern const int64 k_IDNA_INVALID_LENGTH;
extern const int64 k_IDNA_MALLOC_ERROR;
extern const int64 k_IDNA_NO_ACE_PREFIX;
extern const int64 k_IDNA_PUNYCODE_ERROR;
extern const int64 k_IDNA_ROUNDTRIP_VERIFY_ERROR;
extern const int64 k_IDNA_STRINGPREP_ERROR;
extern const int64 k_IMAGETYPE_BMP;
extern const int64 k_IMAGETYPE_GIF;
extern const int64 k_IMAGETYPE_IFF;
extern const int64 k_IMAGETYPE_JB2;
extern const int64 k_IMAGETYPE_JP2;
extern const int64 k_IMAGETYPE_JPC;
extern const int64 k_IMAGETYPE_JPEG;
extern const int64 k_IMAGETYPE_JPEG2000;
extern const int64 k_IMAGETYPE_JPX;
extern const int64 k_IMAGETYPE_PNG;
extern const int64 k_IMAGETYPE_PSD;
extern const int64 k_IMAGETYPE_SWC;
extern const int64 k_IMAGETYPE_SWF;
extern const int64 k_IMAGETYPE_TIFF_II;
extern const int64 k_IMAGETYPE_TIFF_MM;
extern const int64 k_IMAGETYPE_WBMP;
extern const int64 k_IMAGETYPE_XBM;
extern const int64 k_IMAGETYPE_ICO;
extern const int64 k_IMAP_CLOSETIMEOUT;
extern const int64 k_IMAP_OPENTIMEOUT;
extern const int64 k_IMAP_READTIMEOUT;
extern const int64 k_IMAP_WRITETIMEOUT;
extern const int64 k_IMG_ARC_CHORD;
extern const int64 k_IMG_ARC_EDGED;
extern const int64 k_IMG_ARC_NOFILL;
extern const int64 k_IMG_ARC_PIE;
extern const int64 k_IMG_ARC_ROUNDED;
extern const int64 k_IMG_COLOR_BRUSHED;
extern const int64 k_IMG_COLOR_STYLED;
extern const int64 k_IMG_COLOR_STYLEDBRUSHED;
extern const int64 k_IMG_COLOR_TILED;
extern const int64 k_IMG_COLOR_TRANSPARENT;
extern const int64 k_IMG_EFFECT_ALPHABLEND;
extern const int64 k_IMG_EFFECT_NORMAL;
extern const int64 k_IMG_EFFECT_OVERLAY;
extern const int64 k_IMG_EFFECT_REPLACE;
extern const int64 k_IMG_FILTER_BRIGHTNESS;
extern const int64 k_IMG_FILTER_COLORIZE;
extern const int64 k_IMG_FILTER_CONTRAST;
extern const int64 k_IMG_FILTER_EDGEDETECT;
extern const int64 k_IMG_FILTER_EMBOSS;
extern const int64 k_IMG_FILTER_GAUSSIAN_BLUR;
extern const int64 k_IMG_FILTER_GRAYSCALE;
extern const int64 k_IMG_FILTER_MEAN_REMOVAL;
extern const int64 k_IMG_FILTER_NEGATE;
extern const int64 k_IMG_FILTER_SELECTIVE_BLUR;
extern const int64 k_IMG_FILTER_SMOOTH;
extern const int64 k_IMG_GD2_COMPRESSED;
extern const int64 k_IMG_GD2_RAW;
extern const int64 k_IMG_GIF;
extern const int64 k_IMG_JPEG;
extern const int64 k_IMG_JPG;
extern const int64 k_IMG_PNG;
extern const int64 k_IMG_WBMP;
extern const int64 k_IMG_XPM;
extern const int64 k_INFO_ALL;
extern const int64 k_INFO_CONFIGURATION;
extern const int64 k_INFO_CREDITS;
extern const int64 k_INFO_ENVIRONMENT;
extern const int64 k_INFO_GENERAL;
extern const int64 k_INFO_LICENSE;
extern const int64 k_INFO_MODULES;
extern const int64 k_INFO_VARIABLES;
extern const int64 k_INI_ALL;
extern const int64 k_INI_PERDIR;
extern const int64 k_INI_SCANNER_NORMAL;
extern const int64 k_INI_SCANNER_RAW;
extern const int64 k_INI_SYSTEM;
extern const int64 k_INI_USER;
extern const int64 k_INTL_MAX_LOCALE_LEN;
extern const int64 k_LATT_HASCHILDREN;
extern const int64 k_LATT_HASNOCHILDREN;
extern const int64 k_LATT_MARKED;
extern const int64 k_LATT_NOINFERIORS;
extern const int64 k_LATT_NOSELECT;
extern const int64 k_LATT_REFERRAL;
extern const int64 k_LATT_UNMARKED;
extern const int64 k_LC_ALL;
extern const int64 k_LC_COLLATE;
extern const int64 k_LC_CTYPE;
extern const int64 k_LC_MESSAGES;
extern const int64 k_LC_MONETARY;
extern const int64 k_LC_NUMERIC;
extern const int64 k_LC_TIME;
extern const int64 k_LDAP_DEREF_ALWAYS;
extern const int64 k_LDAP_DEREF_FINDING;
extern const int64 k_LDAP_DEREF_NEVER;
extern const int64 k_LDAP_DEREF_SEARCHING;
extern const int64 k_LDAP_OPT_CLIENT_CONTROLS;
extern const int64 k_LDAP_OPT_DEBUG_LEVEL;
extern const int64 k_LDAP_OPT_DEREF;
extern const int64 k_LDAP_OPT_ERROR_NUMBER;
extern const int64 k_LDAP_OPT_ERROR_STRING;
extern const int64 k_LDAP_OPT_HOST_NAME;
extern const int64 k_LDAP_OPT_MATCHED_DN;
extern const int64 k_LDAP_OPT_PROTOCOL_VERSION;
extern const int64 k_LDAP_OPT_REFERRALS;
extern const int64 k_LDAP_OPT_RESTART;
extern const int64 k_LDAP_OPT_SERVER_CONTROLS;
extern const int64 k_LDAP_OPT_SIZELIMIT;
extern const int64 k_LDAP_OPT_TIMELIMIT;
extern const int64 k_LIBXML_COMPACT;
extern const StaticString k_LIBXML_DOTTED_VERSION;
extern const int64 k_LIBXML_DTDATTR;
extern const int64 k_LIBXML_DTDLOAD;
extern const int64 k_LIBXML_DTDVALID;
extern const int64 k_LIBXML_ERR_ERROR;
extern const int64 k_LIBXML_ERR_FATAL;
extern const int64 k_LIBXML_ERR_NONE;
extern const int64 k_LIBXML_ERR_WARNING;
extern const int64 k_LIBXML_NOBLANKS;
extern const int64 k_LIBXML_NOCDATA;
extern const int64 k_LIBXML_NOEMPTYTAG;
extern const int64 k_LIBXML_NOENT;
extern const int64 k_LIBXML_NOERROR;
extern const int64 k_LIBXML_NONET;
extern const int64 k_LIBXML_NOWARNING;
extern const int64 k_LIBXML_NOXMLDECL;
extern const int64 k_LIBXML_NSCLEAN;
extern const int64 k_LIBXML_VERSION;
extern const int64 k_LIBXML_XINCLUDE;
extern const int64 k_LOCK_EX;
extern const int64 k_LOCK_NB;
extern const int64 k_LOCK_SH;
extern const int64 k_LOCK_UN;
extern const int64 k_LOG_ALERT;
extern const int64 k_LOG_AUTH;
extern const int64 k_LOG_AUTHPRIV;
extern const int64 k_LOG_CONS;
extern const int64 k_LOG_CRIT;
extern const int64 k_LOG_CRON;
extern const int64 k_LOG_DAEMON;
extern const int64 k_LOG_DEBUG;
extern const int64 k_LOG_EMERG;
extern const int64 k_LOG_ERR;
extern const int64 k_LOG_INFO;
extern const int64 k_LOG_KERN;
extern const int64 k_LOG_LOCAL0;
extern const int64 k_LOG_LOCAL1;
extern const int64 k_LOG_LOCAL2;
extern const int64 k_LOG_LOCAL3;
extern const int64 k_LOG_LOCAL4;
extern const int64 k_LOG_LOCAL5;
extern const int64 k_LOG_LOCAL6;
extern const int64 k_LOG_LOCAL7;
extern const int64 k_LOG_LPR;
extern const int64 k_LOG_MAIL;
extern const int64 k_LOG_NDELAY;
extern const int64 k_LOG_NEWS;
extern const int64 k_LOG_NOTICE;
extern const int64 k_LOG_NOWAIT;
extern const int64 k_LOG_ODELAY;
extern const int64 k_LOG_PERROR;
extern const int64 k_LOG_PID;
extern const int64 k_LOG_SYSLOG;
extern const int64 k_LOG_USER;
extern const int64 k_LOG_UUCP;
extern const int64 k_LOG_WARNING;
extern const int64 k_MB_CASE_LOWER;
extern const int64 k_MB_CASE_TITLE;
extern const int64 k_MB_CASE_UPPER;
extern const int64 k_MB_OVERLOAD_MAIL;
extern const int64 k_MB_OVERLOAD_REGEX;
extern const int64 k_MB_OVERLOAD_STRING;
extern const int64 k_MCC_ACCESSPOINT_DOWN;
extern const int64 k_MCC_ACCESSPOINT_UP;
extern const StaticString k_MCC_ARG_COMPRESSION_THRESHOLD;
extern const StaticString k_MCC_ARG_CONN_NTRIES;
extern const StaticString k_MCC_ARG_CONN_TMO;
extern const StaticString k_MCC_ARG_CONSISTENT_HASHING_PREFIXES;
extern const StaticString k_MCC_ARG_DEBUG;
extern const StaticString k_MCC_ARG_DEBUG_LOGFILE;
extern const StaticString k_MCC_ARG_DEFAULT_PREFIX;
extern const StaticString k_MCC_ARG_DELETE_PROXY;
extern const StaticString k_MCC_ARG_DGRAM_NTRIES;
extern const StaticString k_MCC_ARG_DGRAM_TMO_THRESHOLD;
extern const StaticString k_MCC_ARG_DGRAM_TMO_WEIGHT;
extern const StaticString k_MCC_ARG_FB_SERIALIZE_ENABLED;
extern const StaticString k_MCC_ARG_MIRROR_CFG;
extern const StaticString k_MCC_ARG_MIRROR_CFG_MODEL;
extern const StaticString k_MCC_ARG_MIRROR_CFG_NAME;
extern const StaticString k_MCC_ARG_MIRROR_CFG_SERVERPOOLS;
extern const StaticString k_MCC_ARG_NODELAY;
extern const StaticString k_MCC_ARG_NPOOLPREFIX;
extern const StaticString k_MCC_ARG_NZLIB_COMPRESSION;
extern const StaticString k_MCC_ARG_PERSISTENT;
extern const StaticString k_MCC_ARG_POLL_TMO;
extern const StaticString k_MCC_ARG_PROXY;
extern const StaticString k_MCC_ARG_PROXY_OPS;
extern const StaticString k_MCC_ARG_SERVERS;
extern const StaticString k_MCC_ARG_SERVER_RETRY_TMO_MS;
extern const StaticString k_MCC_ARG_TCP_INACTIVITY_TIME;
extern const StaticString k_MCC_ARG_TMO;
extern const StaticString k_MCC_ARG_UDP_REPLY_PORTS;
extern const StaticString k_MCC_ARG_WINDOW_MAX;
extern const int64 k_MCC_COMPRESSION_THRESHHOLD;
extern const int64 k_MCC_CONN_NTRIES;
extern const int64 k_MCC_CONN_TMO_MS;
extern const int64 k_MCC_CONSISTENCY_IGNORE;
extern const int64 k_MCC_CONSISTENCY_MATCH_ALL;
extern const int64 k_MCC_CONSISTENCY_MATCH_HITS;
extern const int64 k_MCC_CONSISTENCY_MATCH_HITS_SUPERCEDES;
extern const int64 k_MCC_DELETE_DELETED;
extern const int64 k_MCC_DELETE_ERROR_LOG;
extern const int64 k_MCC_DELETE_ERROR_NOLOG;
extern const int64 k_MCC_DELETE_NOTFOUND;
extern const int64 k_MCC_DGRAM_NTRIES;
extern const int64 k_MCC_DGRAM_TMO_THRESHOLD;
extern const int64 k_MCC_DGRAM_TMO_WEIGHT;
extern const int64 k_MCC_GET_RECORD_ERRORS;
extern const int64 k_MCC_HAVE_DEBUG_LOG;
extern const int64 k_MCC_HAVE_FB_SERIALIZATION;
extern const int64 k_MCC_HAVE_ZLIB_COMPRESSION;
extern const int64 k_MCC_IPPROTO_TCP;
extern const int64 k_MCC_IPPROTO_UDP;
extern const int64 k_MCC_MTU;
extern const int64 k_MCC_NODELAY;
extern const int64 k_MCC_POLL_TMO_US;
extern const int64 k_MCC_POOLPREFIX_LEN;
extern const int64 k_MCC_PORT_DEFAULT;
extern const int64 k_MCC_PROXY_ARITH_OP;
extern const int64 k_MCC_PROXY_DELETE_OP;
extern const int64 k_MCC_PROXY_GET_OP;
extern const int64 k_MCC_PROXY_UPDATE_OP;
extern const int64 k_MCC_RXDGRAM_MAX;
extern const int64 k_MCC_SERVER_DISABLED;
extern const int64 k_MCC_SERVER_DOWN;
extern const int64 k_MCC_SERVER_RETRY_TMO_MS;
extern const int64 k_MCC_SERVER_UP;
extern const int64 k_MCC_TCP_INACTIVITY_TMO_DEFAULT;
extern const int64 k_MCC_TMO_MS;
extern const int64 k_MCC_UDP_REPLY_PORTS;
extern const int64 k_MCC_WINDOW_MAX;
extern const StaticString k_MCRYPT_3DES;
extern const StaticString k_MCRYPT_ARCFOUR;
extern const StaticString k_MCRYPT_ARCFOUR_IV;
extern const StaticString k_MCRYPT_BLOWFISH;
extern const StaticString k_MCRYPT_BLOWFISH_COMPAT;
extern const StaticString k_MCRYPT_CAST_128;
extern const StaticString k_MCRYPT_CAST_256;
extern const StaticString k_MCRYPT_CRYPT;
extern const int64 k_MCRYPT_DECRYPT;
extern const StaticString k_MCRYPT_DES;
extern const int64 k_MCRYPT_DEV_RANDOM;
extern const int64 k_MCRYPT_DEV_URANDOM;
extern const int64 k_MCRYPT_ENCRYPT;
extern const StaticString k_MCRYPT_ENIGNA;
extern const StaticString k_MCRYPT_GOST;
extern const StaticString k_MCRYPT_IDEA;
extern const StaticString k_MCRYPT_LOKI97;
extern const StaticString k_MCRYPT_MARS;
extern const StaticString k_MCRYPT_MODE_CBC;
extern const StaticString k_MCRYPT_MODE_CFB;
extern const StaticString k_MCRYPT_MODE_ECB;
extern const StaticString k_MCRYPT_MODE_NOFB;
extern const StaticString k_MCRYPT_MODE_OFB;
extern const StaticString k_MCRYPT_MODE_STREAM;
extern const StaticString k_MCRYPT_PANAMA;
extern const int64 k_MCRYPT_RAND;
extern const StaticString k_MCRYPT_RC2;
extern const StaticString k_MCRYPT_RC6;
extern const StaticString k_MCRYPT_RIJNDAEL_128;
extern const StaticString k_MCRYPT_RIJNDAEL_192;
extern const StaticString k_MCRYPT_RIJNDAEL_256;
extern const StaticString k_MCRYPT_SAFER128;
extern const StaticString k_MCRYPT_SAFER64;
extern const StaticString k_MCRYPT_SAFERPLUS;
extern const StaticString k_MCRYPT_SERPENT;
extern const StaticString k_MCRYPT_SKIPJACK;
extern const StaticString k_MCRYPT_THREEWAY;
extern const StaticString k_MCRYPT_TRIPLEDES;
extern const StaticString k_MCRYPT_TWOFISH;
extern const StaticString k_MCRYPT_WAKE;
extern const StaticString k_MCRYPT_XTEA;
extern const int64 k_MON_1;
extern const int64 k_MON_10;
extern const int64 k_MON_11;
extern const int64 k_MON_12;
extern const int64 k_MON_2;
extern const int64 k_MON_3;
extern const int64 k_MON_4;
extern const int64 k_MON_5;
extern const int64 k_MON_6;
extern const int64 k_MON_7;
extern const int64 k_MON_8;
extern const int64 k_MON_9;
extern const int64 k_MSG_DONTROUTE;
extern const int64 k_MSG_EAGAIN;
extern const int64 k_MSG_ENOMSG;
extern const int64 k_MSG_EOF;
extern const int64 k_MSG_EOR;
extern const int64 k_MSG_EXCEPT;
extern const int64 k_MSG_IPC_NOWAIT;
extern const int64 k_MSG_NOERROR;
extern const int64 k_MSG_OOB;
extern const int64 k_MSG_PEEK;
extern const int64 k_MSG_WAITALL;
extern const int64 k_MW_AbsoluteIntent;
extern const int64 k_MW_AddCompositeOp;
extern const int64 k_MW_AddEvaluateOperator;
extern const int64 k_MW_AddNoisePreview;
extern const int64 k_MW_AllChannels;
extern const int64 k_MW_AlphaChannel;
extern const int64 k_MW_AndEvaluateOperator;
extern const int64 k_MW_AnyStretch;
extern const int64 k_MW_AnyStyle;
extern const int64 k_MW_AreaResource;
extern const int64 k_MW_AtopCompositeOp;
extern const int64 k_MW_BZipCompression;
extern const int64 k_MW_BackgroundDispose;
extern const int64 k_MW_BesselFilter;
extern const int64 k_MW_BevelJoin;
extern const int64 k_MW_BilevelType;
extern const int64 k_MW_BlackChannel;
extern const int64 k_MW_BlackmanFilter;
extern const int64 k_MW_BlendCompositeOp;
extern const int64 k_MW_BlobError;
extern const int64 k_MW_BlobFatalError;
extern const int64 k_MW_BlobWarning;
extern const int64 k_MW_BlueChannel;
extern const int64 k_MW_BlurPreview;
extern const int64 k_MW_BoxFilter;
extern const int64 k_MW_BrightnessPreview;
extern const int64 k_MW_BumpmapCompositeOp;
extern const int64 k_MW_ButtCap;
extern const int64 k_MW_CMYKColorspace;
extern const int64 k_MW_CacheError;
extern const int64 k_MW_CacheFatalError;
extern const int64 k_MW_CacheWarning;
extern const int64 k_MW_CatromFilter;
extern const int64 k_MW_CenterAlign;
extern const int64 k_MW_CenterGravity;
extern const int64 k_MW_CharPixel;
extern const int64 k_MW_CharcoalDrawingPreview;
extern const int64 k_MW_ClearCompositeOp;
extern const int64 k_MW_CoderError;
extern const int64 k_MW_CoderFatalError;
extern const int64 k_MW_CoderWarning;
extern const int64 k_MW_ColorBurnCompositeOp;
extern const int64 k_MW_ColorDodgeCompositeOp;
extern const int64 k_MW_ColorSeparationMatteType;
extern const int64 k_MW_ColorSeparationType;
extern const int64 k_MW_ColorizeCompositeOp;
extern const int64 k_MW_ConcatenateMode;
extern const int64 k_MW_CondensedStretch;
extern const int64 k_MW_ConfigureError;
extern const int64 k_MW_ConfigureFatalError;
extern const int64 k_MW_ConfigureWarning;
extern const int64 k_MW_ConstantVirtualPixelMethod;
extern const int64 k_MW_CopyBlackCompositeOp;
extern const int64 k_MW_CopyBlueCompositeOp;
extern const int64 k_MW_CopyCompositeOp;
extern const int64 k_MW_CopyCyanCompositeOp;
extern const int64 k_MW_CopyGreenCompositeOp;
extern const int64 k_MW_CopyMagentaCompositeOp;
extern const int64 k_MW_CopyOpacityCompositeOp;
extern const int64 k_MW_CopyRedCompositeOp;
extern const int64 k_MW_CopyYellowCompositeOp;
extern const int64 k_MW_CorruptImageError;
extern const int64 k_MW_CorruptImageFatalError;
extern const int64 k_MW_CorruptImageWarning;
extern const int64 k_MW_CubicFilter;
extern const int64 k_MW_CyanChannel;
extern const int64 k_MW_DarkenCompositeOp;
extern const int64 k_MW_DelegateError;
extern const int64 k_MW_DelegateFatalError;
extern const int64 k_MW_DelegateWarning;
extern const int64 k_MW_DespecklePreview;
extern const int64 k_MW_DifferenceCompositeOp;
extern const int64 k_MW_DiskResource;
extern const int64 k_MW_DisplaceCompositeOp;
extern const int64 k_MW_DissolveCompositeOp;
extern const int64 k_MW_DivideEvaluateOperator;
extern const int64 k_MW_DoublePixel;
extern const int64 k_MW_DrawError;
extern const int64 k_MW_DrawFatalError;
extern const int64 k_MW_DrawWarning;
extern const int64 k_MW_DstAtopCompositeOp;
extern const int64 k_MW_DstCompositeOp;
extern const int64 k_MW_DstInCompositeOp;
extern const int64 k_MW_DstOutCompositeOp;
extern const int64 k_MW_DstOverCompositeOp;
extern const int64 k_MW_DullPreview;
extern const int64 k_MW_EastGravity;
extern const int64 k_MW_EdgeDetectPreview;
extern const int64 k_MW_EdgeVirtualPixelMethod;
extern const int64 k_MW_ErrorException;
extern const int64 k_MW_EvenOddRule;
extern const int64 k_MW_ExclusionCompositeOp;
extern const int64 k_MW_ExpandedStretch;
extern const int64 k_MW_ExtraCondensedStretch;
extern const int64 k_MW_ExtraExpandedStretch;
extern const int64 k_MW_FatalErrorException;
extern const int64 k_MW_FaxCompression;
extern const int64 k_MW_FileOpenError;
extern const int64 k_MW_FileOpenFatalError;
extern const int64 k_MW_FileOpenWarning;
extern const int64 k_MW_FileResource;
extern const int64 k_MW_FillToBorderMethod;
extern const int64 k_MW_FloatPixel;
extern const int64 k_MW_FloodfillMethod;
extern const int64 k_MW_ForgetGravity;
extern const int64 k_MW_FrameMode;
extern const int64 k_MW_GRAYColorspace;
extern const int64 k_MW_GammaPreview;
extern const int64 k_MW_GaussianFilter;
extern const int64 k_MW_GaussianNoise;
extern const int64 k_MW_GrayscaleMatteType;
extern const int64 k_MW_GrayscalePreview;
extern const int64 k_MW_GrayscaleType;
extern const int64 k_MW_GreenChannel;
extern const int64 k_MW_Group4Compression;
extern const int64 k_MW_HSBColorspace;
extern const int64 k_MW_HSLColorspace;
extern const int64 k_MW_HWBColorspace;
extern const int64 k_MW_HammingFilter;
extern const int64 k_MW_HanningFilter;
extern const int64 k_MW_HardLightCompositeOp;
extern const int64 k_MW_HermiteFilter;
extern const int64 k_MW_HueCompositeOp;
extern const int64 k_MW_HuePreview;
extern const int64 k_MW_ImageError;
extern const int64 k_MW_ImageFatalError;
extern const int64 k_MW_ImageWarning;
extern const int64 k_MW_ImplodePreview;
extern const int64 k_MW_ImpulseNoise;
extern const int64 k_MW_InCompositeOp;
extern const int64 k_MW_IndexChannel;
extern const int64 k_MW_IntegerPixel;
extern const int64 k_MW_ItalicStyle;
extern const int64 k_MW_JPEGCompression;
extern const int64 k_MW_JPEGPreview;
extern const int64 k_MW_LABColorspace;
extern const int64 k_MW_LZWCompression;
extern const int64 k_MW_LanczosFilter;
extern const int64 k_MW_LaplacianNoise;
extern const int64 k_MW_LeftAlign;
extern const int64 k_MW_LeftShiftEvaluateOperator;
extern const int64 k_MW_LightenCompositeOp;
extern const int64 k_MW_LineInterlace;
extern const int64 k_MW_LineThroughDecoration;
extern const int64 k_MW_LongPixel;
extern const int64 k_MW_LosslessJPEGCompression;
extern const int64 k_MW_LuminizeCompositeOp;
extern const int64 k_MW_MagentaChannel;
extern const int64 k_MW_MapResource;
extern const int64 k_MW_MaxEvaluateOperator;
extern const int64 k_MW_MaxRGB;
extern const int64 k_MW_MeanAbsoluteErrorMetric;
extern const int64 k_MW_MeanSquaredErrorMetric;
extern const int64 k_MW_MemoryResource;
extern const int64 k_MW_MinEvaluateOperator;
extern const int64 k_MW_MinusCompositeOp;
extern const int64 k_MW_MirrorVirtualPixelMethod;
extern const int64 k_MW_MissingDelegateError;
extern const int64 k_MW_MissingDelegateFatalError;
extern const int64 k_MW_MissingDelegateWarning;
extern const int64 k_MW_MitchellFilter;
extern const int64 k_MW_MiterJoin;
extern const int64 k_MW_ModulateCompositeOp;
extern const int64 k_MW_ModuleError;
extern const int64 k_MW_ModuleFatalError;
extern const int64 k_MW_ModuleWarning;
extern const int64 k_MW_MonitorError;
extern const int64 k_MW_MonitorFatalError;
extern const int64 k_MW_MonitorWarning;
extern const int64 k_MW_MultiplicativeGaussianNoise;
extern const int64 k_MW_MultiplyCompositeOp;
extern const int64 k_MW_MultiplyEvaluateOperator;
extern const int64 k_MW_NoCompositeOp;
extern const int64 k_MW_NoCompression;
extern const int64 k_MW_NoDecoration;
extern const int64 k_MW_NoInterlace;
extern const int64 k_MW_NonZeroRule;
extern const int64 k_MW_NoneDispose;
extern const int64 k_MW_NormalStretch;
extern const int64 k_MW_NormalStyle;
extern const int64 k_MW_NorthEastGravity;
extern const int64 k_MW_NorthGravity;
extern const int64 k_MW_NorthWestGravity;
extern const int64 k_MW_OHTAColorspace;
extern const int64 k_MW_ObjectBoundingBox;
extern const int64 k_MW_ObliqueStyle;
extern const int64 k_MW_OilPaintPreview;
extern const int64 k_MW_OpacityChannel;
extern const int64 k_MW_OpaqueOpacity;
extern const int64 k_MW_OptimizeType;
extern const int64 k_MW_OptionError;
extern const int64 k_MW_OptionFatalError;
extern const int64 k_MW_OptionWarning;
extern const int64 k_MW_OrEvaluateOperator;
extern const int64 k_MW_OutCompositeOp;
extern const int64 k_MW_OverCompositeOp;
extern const int64 k_MW_OverlayCompositeOp;
extern const int64 k_MW_OverlineDecoration;
extern const int64 k_MW_PaletteMatteType;
extern const int64 k_MW_PaletteType;
extern const int64 k_MW_PartitionInterlace;
extern const int64 k_MW_PeakAbsoluteErrorMetric;
extern const int64 k_MW_PeakSignalToNoiseRatioMetric;
extern const int64 k_MW_PerceptualIntent;
extern const int64 k_MW_PixelsPerCentimeterResolution;
extern const int64 k_MW_PixelsPerInchResolution;
extern const int64 k_MW_PlaneInterlace;
extern const int64 k_MW_PlusCompositeOp;
extern const int64 k_MW_PointFilter;
extern const int64 k_MW_PointMethod;
extern const int64 k_MW_PoissonNoise;
extern const int64 k_MW_PreviousDispose;
extern const int64 k_MW_QuadraticFilter;
extern const int64 k_MW_QuantizePreview;
extern const int64 k_MW_QuantumRange;
extern const int64 k_MW_RGBColorspace;
extern const int64 k_MW_RLECompression;
extern const int64 k_MW_RaisePreview;
extern const int64 k_MW_RedChannel;
extern const int64 k_MW_ReduceNoisePreview;
extern const int64 k_MW_RegistryError;
extern const int64 k_MW_RegistryFatalError;
extern const int64 k_MW_RegistryWarning;
extern const int64 k_MW_RelativeIntent;
extern const int64 k_MW_ReplaceCompositeOp;
extern const int64 k_MW_ReplaceMethod;
extern const int64 k_MW_ResetMethod;
extern const int64 k_MW_ResourceLimitError;
extern const int64 k_MW_ResourceLimitFatalError;
extern const int64 k_MW_ResourceLimitWarning;
extern const int64 k_MW_RightAlign;
extern const int64 k_MW_RightShiftEvaluateOperator;
extern const int64 k_MW_RollPreview;
extern const int64 k_MW_RootMeanSquaredErrorMetric;
extern const int64 k_MW_RotatePreview;
extern const int64 k_MW_RoundCap;
extern const int64 k_MW_RoundJoin;
extern const int64 k_MW_SaturateCompositeOp;
extern const int64 k_MW_SaturationIntent;
extern const int64 k_MW_SaturationPreview;
extern const int64 k_MW_ScreenCompositeOp;
extern const int64 k_MW_SegmentPreview;
extern const int64 k_MW_SemiCondensedStretch;
extern const int64 k_MW_SemiExpandedStretch;
extern const int64 k_MW_SetEvaluateOperator;
extern const int64 k_MW_ShadePreview;
extern const int64 k_MW_SharpenPreview;
extern const int64 k_MW_ShearPreview;
extern const int64 k_MW_ShortPixel;
extern const int64 k_MW_SincFilter;
extern const int64 k_MW_SoftLightCompositeOp;
extern const int64 k_MW_SolarizePreview;
extern const int64 k_MW_SouthEastGravity;
extern const int64 k_MW_SouthGravity;
extern const int64 k_MW_SouthWestGravity;
extern const int64 k_MW_SpiffPreview;
extern const int64 k_MW_SpreadPreview;
extern const int64 k_MW_SquareCap;
extern const int64 k_MW_SrcAtopCompositeOp;
extern const int64 k_MW_SrcCompositeOp;
extern const int64 k_MW_SrcInCompositeOp;
extern const int64 k_MW_SrcOutCompositeOp;
extern const int64 k_MW_SrcOverCompositeOp;
extern const int64 k_MW_StaticGravity;
extern const int64 k_MW_StreamError;
extern const int64 k_MW_StreamFatalError;
extern const int64 k_MW_StreamWarning;
extern const int64 k_MW_SubtractCompositeOp;
extern const int64 k_MW_SubtractEvaluateOperator;
extern const int64 k_MW_SwirlPreview;
extern const int64 k_MW_ThresholdCompositeOp;
extern const int64 k_MW_ThresholdPreview;
extern const int64 k_MW_TileVirtualPixelMethod;
extern const int64 k_MW_TransparentColorspace;
extern const int64 k_MW_TransparentOpacity;
extern const int64 k_MW_TriangleFilter;
extern const int64 k_MW_TrueColorMatteType;
extern const int64 k_MW_TrueColorType;
extern const int64 k_MW_TypeError;
extern const int64 k_MW_TypeFatalError;
extern const int64 k_MW_TypeWarning;
extern const int64 k_MW_UltraCondensedStretch;
extern const int64 k_MW_UltraExpandedStretch;
extern const int64 k_MW_UndefinedAlign;
extern const int64 k_MW_UndefinedCap;
extern const int64 k_MW_UndefinedChannel;
extern const int64 k_MW_UndefinedColorspace;
extern const int64 k_MW_UndefinedCompositeOp;
extern const int64 k_MW_UndefinedCompression;
extern const int64 k_MW_UndefinedDecoration;
extern const int64 k_MW_UndefinedDispose;
extern const int64 k_MW_UndefinedEvaluateOperator;
extern const int64 k_MW_UndefinedException;
extern const int64 k_MW_UndefinedFilter;
extern const int64 k_MW_UndefinedGravity;
extern const int64 k_MW_UndefinedIntent;
extern const int64 k_MW_UndefinedInterlace;
extern const int64 k_MW_UndefinedJoin;
extern const int64 k_MW_UndefinedMethod;
extern const int64 k_MW_UndefinedMetric;
extern const int64 k_MW_UndefinedMode;
extern const int64 k_MW_UndefinedNoise;
extern const int64 k_MW_UndefinedPathUnits;
extern const int64 k_MW_UndefinedPixel;
extern const int64 k_MW_UndefinedPreview;
extern const int64 k_MW_UndefinedResolution;
extern const int64 k_MW_UndefinedResource;
extern const int64 k_MW_UndefinedRule;
extern const int64 k_MW_UndefinedStretch;
extern const int64 k_MW_UndefinedStyle;
extern const int64 k_MW_UndefinedType;
extern const int64 k_MW_UndefinedVirtualPixelMethod;
extern const int64 k_MW_UnderlineDecoration;
extern const int64 k_MW_UnframeMode;
extern const int64 k_MW_UniformNoise;
extern const int64 k_MW_UnrecognizedDispose;
extern const int64 k_MW_UserSpace;
extern const int64 k_MW_UserSpaceOnUse;
extern const int64 k_MW_WandError;
extern const int64 k_MW_WandFatalError;
extern const int64 k_MW_WandWarning;
extern const int64 k_MW_WarningException;
extern const int64 k_MW_WavePreview;
extern const int64 k_MW_WestGravity;
extern const int64 k_MW_XYZColorspace;
extern const int64 k_MW_XorCompositeOp;
extern const int64 k_MW_XorEvaluateOperator;
extern const int64 k_MW_YCCColorspace;
extern const int64 k_MW_YCbCrColorspace;
extern const int64 k_MW_YIQColorspace;
extern const int64 k_MW_YPbPrColorspace;
extern const int64 k_MW_YUVColorspace;
extern const int64 k_MW_YellowChannel;
extern const int64 k_MW_ZipCompression;
extern const int64 k_MW_sRGBColorspace;
extern const int64 k_MYSQLI_ASSOC;
extern const int64 k_MYSQLI_AUTO_INCREMENT_FLAG;
extern const int64 k_MYSQLI_BLOB_FLAG;
extern const int64 k_MYSQLI_BOTH;
extern const int64 k_MYSQLI_CLIENT_COMPRESS;
extern const int64 k_MYSQLI_CLIENT_FOUND_ROWS;
extern const int64 k_MYSQLI_CLIENT_IGNORE_SPACE;
extern const int64 k_MYSQLI_CLIENT_INTERACTIVE;
extern const int64 k_MYSQLI_CLIENT_NO_SCHEMA;
extern const int64 k_MYSQLI_CLIENT_SSL;
extern const int64 k_MYSQLI_CURSOR_TYPE_FOR_UPDATE;
extern const int64 k_MYSQLI_CURSOR_TYPE_NO_CURSOR;
extern const int64 k_MYSQLI_CURSOR_TYPE_READ_ONLY;
extern const int64 k_MYSQLI_CURSOR_TYPE_SCROLLABLE;
extern const int64 k_MYSQLI_DATA_TRUNCATED;
extern const int64 k_MYSQLI_GROUP_FLAG;
extern const int64 k_MYSQLI_INIT_COMMAND;
extern const int64 k_MYSQLI_MULTIPLE_KEY_FLAG;
extern const int64 k_MYSQLI_NOT_NULL_FLAG;
extern const int64 k_MYSQLI_NO_DATA;
extern const int64 k_MYSQLI_NUM;
extern const int64 k_MYSQLI_NUM_FLAG;
extern const int64 k_MYSQLI_OPT_CONNECT_TIMEOUT;
extern const int64 k_MYSQLI_OPT_LOCAL_INFILE;
extern const int64 k_MYSQLI_PART_KEY_FLAG;
extern const int64 k_MYSQLI_PRI_KEY_FLAG;
extern const int64 k_MYSQLI_READ_DEFAULT_FILE;
extern const int64 k_MYSQLI_READ_DEFAULT_GROUP;
extern const int64 k_MYSQLI_REPORT_ALL;
extern const int64 k_MYSQLI_REPORT_ERROR;
extern const int64 k_MYSQLI_REPORT_INDEX;
extern const int64 k_MYSQLI_REPORT_OFF;
extern const int64 k_MYSQLI_REPORT_STRICT;
extern const int64 k_MYSQLI_RPL_ADMIN;
extern const int64 k_MYSQLI_RPL_MASTER;
extern const int64 k_MYSQLI_RPL_SLAVE;
extern const int64 k_MYSQLI_SET_CHARSET_NAME;
extern const int64 k_MYSQLI_SET_FLAG;
extern const int64 k_MYSQLI_STMT_ATTR_CURSOR_TYPE;
extern const int64 k_MYSQLI_STMT_ATTR_PREFETCH_ROWS;
extern const int64 k_MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH;
extern const int64 k_MYSQLI_STORE_RESULT;
extern const int64 k_MYSQLI_TIMESTAMP_FLAG;
extern const int64 k_MYSQLI_TYPE_BIT;
extern const int64 k_MYSQLI_TYPE_BLOB;
extern const int64 k_MYSQLI_TYPE_CHAR;
extern const int64 k_MYSQLI_TYPE_DATE;
extern const int64 k_MYSQLI_TYPE_DATETIME;
extern const int64 k_MYSQLI_TYPE_DECIMAL;
extern const int64 k_MYSQLI_TYPE_DOUBLE;
extern const int64 k_MYSQLI_TYPE_ENUM;
extern const int64 k_MYSQLI_TYPE_FLOAT;
extern const int64 k_MYSQLI_TYPE_GEOMETRY;
extern const int64 k_MYSQLI_TYPE_INT24;
extern const int64 k_MYSQLI_TYPE_INTERVAL;
extern const int64 k_MYSQLI_TYPE_LONG;
extern const int64 k_MYSQLI_TYPE_LONGLONG;
extern const int64 k_MYSQLI_TYPE_LONG_BLOB;
extern const int64 k_MYSQLI_TYPE_MEDIUM_BLOB;
extern const int64 k_MYSQLI_TYPE_NEWDATE;
extern const int64 k_MYSQLI_TYPE_NEWDECIMAL;
extern const int64 k_MYSQLI_TYPE_NULL;
extern const int64 k_MYSQLI_TYPE_SET;
extern const int64 k_MYSQLI_TYPE_SHORT;
extern const int64 k_MYSQLI_TYPE_STRING;
extern const int64 k_MYSQLI_TYPE_TIME;
extern const int64 k_MYSQLI_TYPE_TIMESTAMP;
extern const int64 k_MYSQLI_TYPE_TINY;
extern const int64 k_MYSQLI_TYPE_TINY_BLOB;
extern const int64 k_MYSQLI_TYPE_VAR_STRING;
extern const int64 k_MYSQLI_TYPE_YEAR;
extern const int64 k_MYSQLI_UNIQUE_KEY_FLAG;
extern const int64 k_MYSQLI_UNSIGNED_FLAG;
extern const int64 k_MYSQLI_USE_RESULT;
extern const int64 k_MYSQLI_ZEROFILL_FLAG;
extern const int64 k_MYSQL_ASSOC;
extern const int64 k_MYSQL_BOTH;
extern const int64 k_MYSQL_CLIENT_COMPRESS;
extern const int64 k_MYSQL_CLIENT_IGNORE_SPACE;
extern const int64 k_MYSQL_CLIENT_INTERACTIVE;
extern const int64 k_MYSQL_CLIENT_SSL;
extern const int64 k_MYSQL_NUM;
extern const double k_M_1_PI;
extern const double k_M_2_PI;
extern const double k_M_2_SQRTPI;
extern const double k_M_E;
extern const double k_M_EULER;
extern const double k_M_LN10;
extern const double k_M_LN2;
extern const double k_M_LNPI;
extern const double k_M_LOG10E;
extern const double k_M_LOG2E;
extern const double k_M_PI;
extern const double k_M_PI_2;
extern const double k_M_PI_4;
extern const double k_M_SQRT1_2;
extern const double k_M_SQRT2;
extern const double k_M_SQRT3;
extern const double k_M_SQRTPI;
extern const int64 k_NIL;
extern const int64 k_NOEXPR;
extern const Variant k_NULL;
extern const int64 k_OCI_ASSOC;
extern const int64 k_OCI_BOTH;
extern const int64 k_OCI_B_BFILE;
extern const int64 k_OCI_B_BIN;
extern const int64 k_OCI_B_BLOB;
extern const int64 k_OCI_B_CFILEE;
extern const int64 k_OCI_B_CLOB;
extern const int64 k_OCI_B_CURSOR;
extern const int64 k_OCI_B_INT;
extern const int64 k_OCI_B_NTY;
extern const int64 k_OCI_B_NUM;
extern const int64 k_OCI_B_ROWID;
extern const int64 k_OCI_COMMIT_ON_SUCCESS;
extern const int64 k_OCI_DEFAULT;
extern const int64 k_OCI_DESCRIBE_ONLY;
extern const int64 k_OCI_DTYPE_FILE;
extern const int64 k_OCI_DTYPE_LOB;
extern const int64 k_OCI_DTYPE_ROWID;
extern const int64 k_OCI_D_FILE;
extern const int64 k_OCI_D_LOB;
extern const int64 k_OCI_D_ROWID;
extern const int64 k_OCI_EXACT_FETCH;
extern const int64 k_OCI_FETCHSTATEMENT_BY_COLUMN;
extern const int64 k_OCI_FETCHSTATEMENT_BY_ROW;
extern const int64 k_OCI_LOB_BUFFER_FREE;
extern const int64 k_OCI_NUM;
extern const int64 k_OCI_RETURN_LOBS;
extern const int64 k_OCI_RETURN_NULLS;
extern const int64 k_OCI_SEEK_CUR;
extern const int64 k_OCI_SEEK_END;
extern const int64 k_OCI_SEEK_SET;
extern const StaticString k_OCI_SYSDATE;
extern const int64 k_OCI_SYSDBA;
extern const int64 k_OCI_SYSOPER;
extern const int64 k_OCI_TEMP_BLOB;
extern const int64 k_OCI_TEMP_CLOB;
extern const int64 k_OPENSSL_ALGO_MD2;
extern const int64 k_OPENSSL_ALGO_MD4;
extern const int64 k_OPENSSL_ALGO_MD5;
extern const int64 k_OPENSSL_ALGO_SHA1;
extern const int64 k_OPENSSL_CIPHER_3DES;
extern const int64 k_OPENSSL_CIPHER_DES;
extern const int64 k_OPENSSL_CIPHER_RC2_128;
extern const int64 k_OPENSSL_CIPHER_RC2_40;
extern const int64 k_OPENSSL_CIPHER_RC2_64;
extern const int64 k_OPENSSL_KEYTYPE_DH;
extern const int64 k_OPENSSL_KEYTYPE_DSA;
extern const int64 k_OPENSSL_KEYTYPE_EC;
extern const int64 k_OPENSSL_KEYTYPE_RSA;
extern const int64 k_OPENSSL_NO_PADDING;
extern const int64 k_OPENSSL_PKCS1_OAEP_PADDING;
extern const int64 k_OPENSSL_PKCS1_PADDING;
extern const int64 k_OPENSSL_SSLV23_PADDING;
extern const int64 k_OPENSSL_VERSION_NUMBER;
extern const StaticString k_OPENSSL_VERSION_TEXT;
extern const int64 k_OP_ANONYMOUS;
extern const int64 k_OP_DEBUG;
extern const int64 k_OP_EXPUNGE;
extern const int64 k_OP_HALFOPEN;
extern const int64 k_OP_PROTOTYPE;
extern const int64 k_OP_READONLY;
extern const int64 k_OP_SECURE;
extern const int64 k_OP_SHORTCACHE;
extern const int64 k_OP_SILENT;
extern const int64 k_PATHINFO_BASENAME;
extern const int64 k_PATHINFO_DIRNAME;
extern const int64 k_PATHINFO_EXTENSION;
extern const int64 k_PATHINFO_FILENAME;
extern const StaticString k_PATH_SEPARATOR;
extern const StaticString k_PCRE_VERSION;
extern const StaticString k_PEAR_EXTENSION_DIR;
extern const StaticString k_PEAR_INSTALL_DIR;
extern const int64 k_PHPMCC_NEW_HANDLE;
extern const int64 k_PHPMCC_USED_FAST_PATH;
extern const int64 k_PHPMCC_USED_SLOW_PATH;
extern const int64 k_PHP_BINARY_READ;
extern const StaticString k_PHP_BINDIR;
extern const StaticString k_PHP_CONFIG_FILE_PATH;
extern const StaticString k_PHP_CONFIG_FILE_SCAN_DIR;
extern const StaticString k_PHP_DATADIR;
extern const StaticString k_PHP_EOL;
extern const StaticString k_PHP_EXTENSION_DIR;
extern const int64 k_PHP_INT_MAX;
extern const int64 k_PHP_INT_SIZE;
extern const StaticString k_PHP_LIBDIR;
extern const StaticString k_PHP_LOCALSTATEDIR;
extern const int64 k_PHP_NORMAL_READ;
extern const StaticString k_PHP_OS;
extern const int64 k_PHP_OUTPUT_HANDLER_CONT;
extern const int64 k_PHP_OUTPUT_HANDLER_END;
extern const int64 k_PHP_OUTPUT_HANDLER_START;
extern const StaticString k_PHP_PREFIX;
extern const StaticString k_PHP_SAPI;
extern const StaticString k_PHP_SHLIB_SUFFIX;
extern const StaticString k_PHP_SYSCONFDIR;
extern const int64 k_PHP_URL_FRAGMENT;
extern const int64 k_PHP_URL_HOST;
extern const int64 k_PHP_URL_PASS;
extern const int64 k_PHP_URL_PATH;
extern const int64 k_PHP_URL_PORT;
extern const int64 k_PHP_URL_QUERY;
extern const int64 k_PHP_URL_SCHEME;
extern const int64 k_PHP_URL_USER;
extern const StaticString k_PHP_VERSION;
extern const int64 k_PKCS7_BINARY;
extern const int64 k_PKCS7_DETACHED;
extern const int64 k_PKCS7_NOATTR;
extern const int64 k_PKCS7_NOCERTS;
extern const int64 k_PKCS7_NOCHAIN;
extern const int64 k_PKCS7_NOINTERN;
extern const int64 k_PKCS7_NOSIGS;
extern const int64 k_PKCS7_NOVERIFY;
extern const int64 k_PKCS7_TEXT;
extern const int64 k_PM_STR;
extern const int64 k_PNG_ALL_FILTERS;
extern const int64 k_PNG_FILTER_AVG;
extern const int64 k_PNG_FILTER_NONE;
extern const int64 k_PNG_FILTER_PAETH;
extern const int64 k_PNG_FILTER_SUB;
extern const int64 k_PNG_FILTER_UP;
extern const int64 k_PNG_NO_FILTER;
extern const int64 k_POSIX_F_OK;
extern const int64 k_POSIX_R_OK;
extern const int64 k_POSIX_S_IFBLK;
extern const int64 k_POSIX_S_IFCHR;
extern const int64 k_POSIX_S_IFIFO;
extern const int64 k_POSIX_S_IFREG;
extern const int64 k_POSIX_S_IFSOCK;
extern const int64 k_POSIX_W_OK;
extern const int64 k_POSIX_X_OK;
extern const int64 k_PREG_BACKTRACK_LIMIT_ERROR;
extern const int64 k_PREG_BAD_UTF8_ERROR;
extern const int64 k_PREG_GREP_INVERT;
extern const int64 k_PREG_INTERNAL_ERROR;
extern const int64 k_PREG_NO_ERROR;
extern const int64 k_PREG_OFFSET_CAPTURE;
extern const int64 k_PREG_PATTERN_ORDER;
extern const int64 k_PREG_RECURSION_LIMIT_ERROR;
extern const int64 k_PREG_SET_ORDER;
extern const int64 k_PREG_SPLIT_DELIM_CAPTURE;
extern const int64 k_PREG_SPLIT_NO_EMPTY;
extern const int64 k_PREG_SPLIT_OFFSET_CAPTURE;
extern const int64 k_PRIO_PGRP;
extern const int64 k_PRIO_PROCESS;
extern const int64 k_PRIO_USER;
extern const int64 k_PSFS_ERR_FATAL;
extern const int64 k_PSFS_FEED_ME;
extern const int64 k_PSFS_FLAG_FLUSH_CLOSE;
extern const int64 k_PSFS_FLAG_FLUSH_INC;
extern const int64 k_PSFS_FLAG_NORMAL;
extern const int64 k_PSFS_PASS_ON;
extern const int64 k_RADIXCHAR;
extern const int64 k_SA_ALL;
extern const int64 k_SA_MESSAGES;
extern const int64 k_SA_RECENT;
extern const int64 k_SA_UIDNEXT;
extern const int64 k_SA_UIDVALIDITY;
extern const int64 k_SA_UNSEEN;
extern const int64 k_SEEK_CUR;
extern const int64 k_SEEK_END;
extern const int64 k_SEEK_SET;
extern const int64 k_SE_FREE;
extern const int64 k_SE_NOPREFETCH;
extern const int64 k_SE_UID;
extern const int64 k_SIGABRT;
extern const int64 k_SIGALRM;
extern const int64 k_SIGBABY;
extern const int64 k_SIGBUS;
extern const int64 k_SIGCHLD;
extern const int64 k_SIGCLD;
extern const int64 k_SIGCONT;
extern const int64 k_SIGFPE;
extern const int64 k_SIGHUP;
extern const int64 k_SIGILL;
extern const int64 k_SIGINT;
extern const int64 k_SIGIO;
extern const int64 k_SIGIOT;
extern const int64 k_SIGKILL;
extern const int64 k_SIGPIPE;
extern const int64 k_SIGPOLL;
extern const int64 k_SIGPROF;
extern const int64 k_SIGPWR;
extern const int64 k_SIGQUIT;
extern const int64 k_SIGSEGV;
extern const int64 k_SIGSTKFLT;
extern const int64 k_SIGSTOP;
extern const int64 k_SIGSYS;
extern const int64 k_SIGTERM;
extern const int64 k_SIGTRAP;
extern const int64 k_SIGTSTP;
extern const int64 k_SIGTTIN;
extern const int64 k_SIGTTOU;
extern const int64 k_SIGURG;
extern const int64 k_SIGUSR1;
extern const int64 k_SIGUSR2;
extern const int64 k_SIGVTALRM;
extern const int64 k_SIGWINCH;
extern const int64 k_SIGXCPU;
extern const int64 k_SIGXFSZ;
extern const int64 k_SIG_DFL;
extern const int64 k_SIG_ERR;
extern const int64 k_SIG_IGN;
extern const int64 k_SOAP_1_1;
extern const int64 k_SOAP_1_2;
extern const int64 k_SOAP_ACTOR_NEXT;
extern const int64 k_SOAP_ACTOR_NONE;
extern const int64 k_SOAP_ACTOR_UNLIMATERECEIVER;
extern const int64 k_SOAP_AUTHENTICATION_BASIC;
extern const int64 k_SOAP_AUTHENTICATION_DIGEST;
extern const int64 k_SOAP_COMPRESSION_ACCEPT;
extern const int64 k_SOAP_COMPRESSION_DEFLATE;
extern const int64 k_SOAP_COMPRESSION_GZIP;
extern const int64 k_SOAP_DOCUMENT;
extern const int64 k_SOAP_ENCODED;
extern const int64 k_SOAP_ENC_ARRAY;
extern const int64 k_SOAP_ENC_OBJECT;
extern const int64 k_SOAP_FUNCTIONS_ALL;
extern const int64 k_SOAP_LITERAL;
extern const int64 k_SOAP_PERSISTENCE_REQUEST;
extern const int64 k_SOAP_PERSISTENCE_SESSION;
extern const int64 k_SOAP_RPC;
extern const int64 k_SOAP_SINGLE_ELEMENT_ARRAYS;
extern const int64 k_SOAP_USE_XSI_ARRAY_TYPE;
extern const int64 k_SOAP_WAIT_ONE_WAY_CALLS;
extern const int64 k_SOCKET_E2BIG;
extern const int64 k_SOCKET_EACCES;
extern const int64 k_SOCKET_EADDRINUSE;
extern const int64 k_SOCKET_EADDRNOTAVAIL;
extern const int64 k_SOCKET_EADV;
extern const int64 k_SOCKET_EAFNOSUPPORT;
extern const int64 k_SOCKET_EAGAIN;
extern const int64 k_SOCKET_EALREADY;
extern const int64 k_SOCKET_EBADE;
extern const int64 k_SOCKET_EBADF;
extern const int64 k_SOCKET_EBADFD;
extern const int64 k_SOCKET_EBADMSG;
extern const int64 k_SOCKET_EBADR;
extern const int64 k_SOCKET_EBADRQC;
extern const int64 k_SOCKET_EBADSLT;
extern const int64 k_SOCKET_EBUSY;
extern const int64 k_SOCKET_ECHRNG;
extern const int64 k_SOCKET_ECOMM;
extern const int64 k_SOCKET_ECONNABORTED;
extern const int64 k_SOCKET_ECONNREFUSED;
extern const int64 k_SOCKET_ECONNRESET;
extern const int64 k_SOCKET_EDESTADDRREQ;
extern const int64 k_SOCKET_EDQUOT;
extern const int64 k_SOCKET_EEXIST;
extern const int64 k_SOCKET_EFAULT;
extern const int64 k_SOCKET_EHOSTDOWN;
extern const int64 k_SOCKET_EHOSTUNREACH;
extern const int64 k_SOCKET_EIDRM;
extern const int64 k_SOCKET_EINPROGRESS;
extern const int64 k_SOCKET_EINTR;
extern const int64 k_SOCKET_EINVAL;
extern const int64 k_SOCKET_EIO;
extern const int64 k_SOCKET_EISCONN;
extern const int64 k_SOCKET_EISDIR;
extern const int64 k_SOCKET_EISNAM;
extern const int64 k_SOCKET_EL2HLT;
extern const int64 k_SOCKET_EL2NSYNC;
extern const int64 k_SOCKET_EL3HLT;
extern const int64 k_SOCKET_EL3RST;
extern const int64 k_SOCKET_ELNRNG;
extern const int64 k_SOCKET_ELOOP;
extern const int64 k_SOCKET_EMEDIUMTYPE;
extern const int64 k_SOCKET_EMFILE;
extern const int64 k_SOCKET_EMLINK;
extern const int64 k_SOCKET_EMSGSIZE;
extern const int64 k_SOCKET_EMULTIHOP;
extern const int64 k_SOCKET_ENAMETOOLONG;
extern const int64 k_SOCKET_ENETDOWN;
extern const int64 k_SOCKET_ENETRESET;
extern const int64 k_SOCKET_ENETUNREACH;
extern const int64 k_SOCKET_ENFILE;
extern const int64 k_SOCKET_ENOANO;
extern const int64 k_SOCKET_ENOBUFS;
extern const int64 k_SOCKET_ENOCSI;
extern const int64 k_SOCKET_ENODATA;
extern const int64 k_SOCKET_ENODEV;
extern const int64 k_SOCKET_ENOENT;
extern const int64 k_SOCKET_ENOLCK;
extern const int64 k_SOCKET_ENOLINK;
extern const int64 k_SOCKET_ENOMEDIUM;
extern const int64 k_SOCKET_ENOMEM;
extern const int64 k_SOCKET_ENOMSG;
extern const int64 k_SOCKET_ENONET;
extern const int64 k_SOCKET_ENOPROTOOPT;
extern const int64 k_SOCKET_ENOSPC;
extern const int64 k_SOCKET_ENOSR;
extern const int64 k_SOCKET_ENOSTR;
extern const int64 k_SOCKET_ENOSYS;
extern const int64 k_SOCKET_ENOTBLK;
extern const int64 k_SOCKET_ENOTCONN;
extern const int64 k_SOCKET_ENOTDIR;
extern const int64 k_SOCKET_ENOTEMPTY;
extern const int64 k_SOCKET_ENOTSOCK;
extern const int64 k_SOCKET_ENOTTY;
extern const int64 k_SOCKET_ENOTUNIQ;
extern const int64 k_SOCKET_ENXIO;
extern const int64 k_SOCKET_EOPNOTSUPP;
extern const int64 k_SOCKET_EPERM;
extern const int64 k_SOCKET_EPFNOSUPPORT;
extern const int64 k_SOCKET_EPIPE;
extern const int64 k_SOCKET_EPROTO;
extern const int64 k_SOCKET_EPROTONOSUPPORT;
extern const int64 k_SOCKET_EPROTOTYPE;
extern const int64 k_SOCKET_EREMCHG;
extern const int64 k_SOCKET_EREMOTE;
extern const int64 k_SOCKET_EREMOTEIO;
extern const int64 k_SOCKET_ERESTART;
extern const int64 k_SOCKET_EROFS;
extern const int64 k_SOCKET_ESHUTDOWN;
extern const int64 k_SOCKET_ESOCKTNOSUPPORT;
extern const int64 k_SOCKET_ESPIPE;
extern const int64 k_SOCKET_ESRMNT;
extern const int64 k_SOCKET_ESTRPIPE;
extern const int64 k_SOCKET_ETIME;
extern const int64 k_SOCKET_ETIMEDOUT;
extern const int64 k_SOCKET_ETOOMANYREFS;
extern const int64 k_SOCKET_EUNATCH;
extern const int64 k_SOCKET_EUSERS;
extern const int64 k_SOCKET_EWOULDBLOCK;
extern const int64 k_SOCKET_EXDEV;
extern const int64 k_SOCKET_EXFULL;
extern const int64 k_SOCK_DGRAM;
extern const int64 k_SOCK_RAW;
extern const int64 k_SOCK_RDM;
extern const int64 k_SOCK_SEQPACKET;
extern const int64 k_SOCK_STREAM;
extern const int64 k_SOL_SOCKET;
extern const int64 k_SOL_TCP;
extern const int64 k_SOL_UDP;
extern const int64 k_SOMAXCONN;
extern const int64 k_SORTARRIVAL;
extern const int64 k_SORTCC;
extern const int64 k_SORTDATE;
extern const int64 k_SORTFROM;
extern const int64 k_SORTSIZE;
extern const int64 k_SORTSUBJECT;
extern const int64 k_SORTTO;
extern const int64 k_SORT_ASC;
extern const int64 k_SORT_DESC;
extern const int64 k_SORT_LOCALE_STRING;
extern const int64 k_SORT_NUMERIC;
extern const int64 k_SORT_REGULAR;
extern const int64 k_SORT_STRING;
extern const int64 k_SO_BROADCAST;
extern const int64 k_SO_DEBUG;
extern const int64 k_SO_DONTROUTE;
extern const int64 k_SO_ERROR;
extern const int64 k_SO_FREE;
extern const int64 k_SO_KEEPALIVE;
extern const int64 k_SO_LINGER;
extern const int64 k_SO_NOSERVER;
extern const int64 k_SO_OOBINLINE;
extern const int64 k_SO_RCVBUF;
extern const int64 k_SO_RCVLOWAT;
extern const int64 k_SO_RCVTIMEO;
extern const int64 k_SO_REUSEADDR;
extern const int64 k_SO_SNDBUF;
extern const int64 k_SO_SNDLOWAT;
extern const int64 k_SO_SNDTIMEO;
extern const int64 k_SO_TYPE;
extern const int64 k_SQLT_AFC;
extern const int64 k_SQLT_AVC;
extern const int64 k_SQLT_BDOUBLE;
extern const int64 k_SQLT_BFILEE;
extern const int64 k_SQLT_BFLOAT;
extern const int64 k_SQLT_BIN;
extern const int64 k_SQLT_BLOB;
extern const int64 k_SQLT_CFILEE;
extern const int64 k_SQLT_CHR;
extern const int64 k_SQLT_CLOB;
extern const int64 k_SQLT_FLT;
extern const int64 k_SQLT_INT;
extern const int64 k_SQLT_LBI;
extern const int64 k_SQLT_LNG;
extern const int64 k_SQLT_LVC;
extern const int64 k_SQLT_NTY;
extern const int64 k_SQLT_NUM;
extern const int64 k_SQLT_ODT;
extern const int64 k_SQLT_RDD;
extern const int64 k_SQLT_RSET;
extern const int64 k_SQLT_STR;
extern const int64 k_SQLT_UIN;
extern const int64 k_SQLT_VCS;
extern const int64 k_STREAM_CLIENT_ASYNC_CONNECT;
extern const int64 k_STREAM_CLIENT_CONNECT;
extern const int64 k_STREAM_CLIENT_PERSISTENT;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv23_CLIENT;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv23_SERVER;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv2_CLIENT;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv2_SERVER;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv3_CLIENT;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv3_SERVER;
extern const int64 k_STREAM_CRYPTO_METHOD_TLS_CLIENT;
extern const int64 k_STREAM_CRYPTO_METHOD_TLS_SERVER;
extern const int64 k_STREAM_ENFORCE_SAFE_MODE;
extern const int64 k_STREAM_FILTER_ALL;
extern const int64 k_STREAM_FILTER_READ;
extern const int64 k_STREAM_FILTER_WRITE;
extern const int64 k_STREAM_IGNORE_URL;
extern const int64 k_STREAM_IPPROTO_ICMP;
extern const int64 k_STREAM_IPPROTO_IP;
extern const int64 k_STREAM_IPPROTO_RAW;
extern const int64 k_STREAM_IPPROTO_TCP;
extern const int64 k_STREAM_IPPROTO_UDP;
extern const int64 k_STREAM_IS_URL;
extern const int64 k_STREAM_MKDIR_RECURSIVE;
extern const int64 k_STREAM_MUST_SEEK;
extern const int64 k_STREAM_NOTIFY_AUTH_REQUIRED;
extern const int64 k_STREAM_NOTIFY_AUTH_RESULT;
extern const int64 k_STREAM_NOTIFY_COMPLETED;
extern const int64 k_STREAM_NOTIFY_CONNECT;
extern const int64 k_STREAM_NOTIFY_FAILURE;
extern const int64 k_STREAM_NOTIFY_FILE_SIZE_IS;
extern const int64 k_STREAM_NOTIFY_MIME_TYPE_IS;
extern const int64 k_STREAM_NOTIFY_PROGRESS;
extern const int64 k_STREAM_NOTIFY_REDIRECTED;
extern const int64 k_STREAM_NOTIFY_RESOLVE;
extern const int64 k_STREAM_NOTIFY_SEVERITY_ERR;
extern const int64 k_STREAM_NOTIFY_SEVERITY_INFO;
extern const int64 k_STREAM_NOTIFY_SEVERITY_WARN;
extern const int64 k_STREAM_OOB;
extern const int64 k_STREAM_PEEK;
extern const int64 k_STREAM_PF_INET;
extern const int64 k_STREAM_PF_INET6;
extern const int64 k_STREAM_PF_UNIX;
extern const int64 k_STREAM_REPORT_ERRORS;
extern const int64 k_STREAM_SERVER_BIND;
extern const int64 k_STREAM_SERVER_LISTEN;
extern const int64 k_STREAM_SHUT_RD;
extern const int64 k_STREAM_SHUT_RDWR;
extern const int64 k_STREAM_SHUT_WR;
extern const int64 k_STREAM_SOCK_DGRAM;
extern const int64 k_STREAM_SOCK_RAW;
extern const int64 k_STREAM_SOCK_RDM;
extern const int64 k_STREAM_SOCK_SEQPACKET;
extern const int64 k_STREAM_SOCK_STREAM;
extern const int64 k_STREAM_URL_STAT_LINK;
extern const int64 k_STREAM_URL_STAT_QUIET;
extern const int64 k_STREAM_USE_PATH;
extern const int64 k_STR_PAD_BOTH;
extern const int64 k_STR_PAD_LEFT;
extern const int64 k_STR_PAD_RIGHT;
extern const int64 k_ST_SET;
extern const int64 k_ST_SILENT;
extern const int64 k_ST_UID;
extern const int64 k_SUNFUNCS_RET_DOUBLE;
extern const int64 k_SUNFUNCS_RET_STRING;
extern const int64 k_SUNFUNCS_RET_TIMESTAMP;
extern const int64 k_THOUSEP;
extern const bool k_TRUE;
extern const int64 k_TYPEAPPLICATION;
extern const int64 k_TYPEAUDIO;
extern const int64 k_TYPEIMAGE;
extern const int64 k_TYPEMESSAGE;
extern const int64 k_TYPEMODEL;
extern const int64 k_TYPEMULTIPART;
extern const int64 k_TYPEOTHER;
extern const int64 k_TYPETEXT;
extern const int64 k_TYPEVIDEO;
extern const int64 k_T_ABSTRACT;
extern const int64 k_T_AND_EQUAL;
extern const int64 k_T_ARRAY;
extern const int64 k_T_ARRAY_CAST;
extern const int64 k_T_AS;
extern const int64 k_T_BAD_CHARACTER;
extern const int64 k_T_BOOLEAN_AND;
extern const int64 k_T_BOOLEAN_OR;
extern const int64 k_T_BOOL_CAST;
extern const int64 k_T_BREAK;
extern const int64 k_T_CASE;
extern const int64 k_T_CATCH;
extern const int64 k_T_CHARACTER;
extern const int64 k_T_CLASS;
extern const int64 k_T_CLASS_C;
extern const int64 k_T_CLONE;
extern const int64 k_T_CLOSE_TAG;
extern const int64 k_T_COMMENT;
extern const int64 k_T_CONCAT_EQUAL;
extern const int64 k_T_CONST;
extern const int64 k_T_CONSTANT_ENCAPSED_STRING;
extern const int64 k_T_CONTINUE;
extern const int64 k_T_CURLY_OPEN;
extern const int64 k_T_DEC;
extern const int64 k_T_DECLARE;
extern const int64 k_T_DEFAULT;
extern const int64 k_T_DIR;
extern const int64 k_T_DIV_EQUAL;
extern const int64 k_T_DNUMBER;
extern const int64 k_T_DO;
extern const int64 k_T_DOC_COMMENT;
extern const int64 k_T_DOLLAR_OPEN_CURLY_BRACES;
extern const int64 k_T_DOUBLE_ARROW;
extern const int64 k_T_DOUBLE_CAST;
extern const int64 k_T_DOUBLE_COLON;
extern const int64 k_T_ECHO;
extern const int64 k_T_ELSE;
extern const int64 k_T_ELSEIF;
extern const int64 k_T_EMPTY;
extern const int64 k_T_ENCAPSED_AND_WHITESPACE;
extern const int64 k_T_ENDDECLARE;
extern const int64 k_T_ENDFOR;
extern const int64 k_T_ENDFOREACH;
extern const int64 k_T_ENDIF;
extern const int64 k_T_ENDSWITCH;
extern const int64 k_T_ENDWHILE;
extern const int64 k_T_END_HEREDOC;
extern const int64 k_T_EVAL;
extern const int64 k_T_EXIT;
extern const int64 k_T_EXTENDS;
extern const int64 k_T_FILE;
extern const int64 k_T_FINAL;
extern const int64 k_T_FMT;
extern const int64 k_T_FMT_AMPM;
extern const int64 k_T_FOR;
extern const int64 k_T_FOREACH;
extern const int64 k_T_FUNCTION;
extern const int64 k_T_FUNC_C;
extern const int64 k_T_GLOBAL;
extern const int64 k_T_GOTO;
extern const int64 k_T_HALT_COMPILER;
extern const int64 k_T_IF;
extern const int64 k_T_IMPLEMENTS;
extern const int64 k_T_INC;
extern const int64 k_T_INCLUDE;
extern const int64 k_T_INCLUDE_ONCE;
extern const int64 k_T_INLINE_HTML;
extern const int64 k_T_INSTANCEOF;
extern const int64 k_T_INTERFACE;
extern const int64 k_T_INT_CAST;
extern const int64 k_T_ISSET;
extern const int64 k_T_IS_EQUAL;
extern const int64 k_T_IS_GREATER_OR_EQUAL;
extern const int64 k_T_IS_IDENTICAL;
extern const int64 k_T_IS_NOT_EQUAL;
extern const int64 k_T_IS_NOT_IDENTICAL;
extern const int64 k_T_IS_SMALLER_OR_EQUAL;
extern const int64 k_T_LINE;
extern const int64 k_T_LIST;
extern const int64 k_T_LNUMBER;
extern const int64 k_T_LOGICAL_AND;
extern const int64 k_T_LOGICAL_OR;
extern const int64 k_T_LOGICAL_XOR;
extern const int64 k_T_METHOD_C;
extern const int64 k_T_MINUS_EQUAL;
extern const int64 k_T_MOD_EQUAL;
extern const int64 k_T_MUL_EQUAL;
extern const int64 k_T_NAMESPACE;
extern const int64 k_T_NEW;
extern const int64 k_T_NS_C;
extern const int64 k_T_NS_SEPARATOR;
extern const int64 k_T_NUM_STRING;
extern const int64 k_T_OBJECT_CAST;
extern const int64 k_T_OBJECT_OPERATOR;
extern const int64 k_T_OPEN_TAG;
extern const int64 k_T_OPEN_TAG_WITH_ECHO;
extern const int64 k_T_OR_EQUAL;
extern const int64 k_T_PAAMAYIM_NEKUDOTAYIM;
extern const int64 k_T_PLUS_EQUAL;
extern const int64 k_T_PRINT;
extern const int64 k_T_PRIVATE;
extern const int64 k_T_PROTECTED;
extern const int64 k_T_PUBLIC;
extern const int64 k_T_REQUIRE;
extern const int64 k_T_REQUIRE_ONCE;
extern const int64 k_T_RETURN;
extern const int64 k_T_SL;
extern const int64 k_T_SL_EQUAL;
extern const int64 k_T_SR;
extern const int64 k_T_SR_EQUAL;
extern const int64 k_T_START_HEREDOC;
extern const int64 k_T_STATIC;
extern const int64 k_T_STRING;
extern const int64 k_T_STRING_CAST;
extern const int64 k_T_STRING_VARNAME;
extern const int64 k_T_SWITCH;
extern const int64 k_T_THROW;
extern const int64 k_T_TRY;
extern const int64 k_T_UNSET;
extern const int64 k_T_UNSET_CAST;
extern const int64 k_T_USE;
extern const int64 k_T_VAR;
extern const int64 k_T_VARIABLE;
extern const int64 k_T_WHILE;
extern const int64 k_T_WHITESPACE;
extern const int64 k_T_XOR_EQUAL;
extern const int64 k_ULOC_ACTUAL_LOCALE;
extern const int64 k_ULOC_VALID_LOCALE;
extern const int64 k_UNKNOWN_TYPE;
extern const int64 k_UPLOAD_ERR_CANT_WRITE;
extern const int64 k_UPLOAD_ERR_EXTENSION;
extern const int64 k_UPLOAD_ERR_FORM_SIZE;
extern const int64 k_UPLOAD_ERR_INI_SIZE;
extern const int64 k_UPLOAD_ERR_NO_FILE;
extern const int64 k_UPLOAD_ERR_NO_TMP_DIR;
extern const int64 k_UPLOAD_ERR_OK;
extern const int64 k_UPLOAD_ERR_PARTIAL;
extern const int64 k_U_AMBIGUOUS_ALIAS_WARNING;
extern const int64 k_U_BAD_VARIABLE_DEFINITION;
extern const int64 k_U_BRK_ASSIGN_ERROR;
extern const int64 k_U_BRK_ERROR_LIMIT;
extern const int64 k_U_BRK_ERROR_START;
extern const int64 k_U_BRK_HEX_DIGITS_EXPECTED;
extern const int64 k_U_BRK_INIT_ERROR;
extern const int64 k_U_BRK_INTERNAL_ERROR;
extern const int64 k_U_BRK_MALFORMED_RULE_TAG;
extern const int64 k_U_BRK_MISMATCHED_PAREN;
extern const int64 k_U_BRK_NEW_LINE_IN_QUOTED_STRING;
extern const int64 k_U_BRK_RULE_EMPTY_SET;
extern const int64 k_U_BRK_RULE_SYNTAX;
extern const int64 k_U_BRK_SEMICOLON_EXPECTED;
extern const int64 k_U_BRK_UNCLOSED_SET;
extern const int64 k_U_BRK_UNDEFINED_VARIABLE;
extern const int64 k_U_BRK_UNRECOGNIZED_OPTION;
extern const int64 k_U_BRK_VARIABLE_REDFINITION;
extern const int64 k_U_BUFFER_OVERFLOW_ERROR;
extern const int64 k_U_CE_NOT_FOUND_ERROR;
extern const int64 k_U_COLLATOR_VERSION_MISMATCH;
extern const int64 k_U_DIFFERENT_UCA_VERSION;
extern const int64 k_U_ENUM_OUT_OF_SYNC_ERROR;
extern const int64 k_U_ERROR_LIMIT;
extern const int64 k_U_ERROR_WARNING_LIMIT;
extern const int64 k_U_ERROR_WARNING_START;
extern const int64 k_U_FILE_ACCESS_ERROR;
extern const int64 k_U_FMT_PARSE_ERROR_LIMIT;
extern const int64 k_U_FMT_PARSE_ERROR_START;
extern const int64 k_U_ILLEGAL_ARGUMENT_ERROR;
extern const int64 k_U_ILLEGAL_CHARACTER;
extern const int64 k_U_ILLEGAL_CHAR_FOUND;
extern const int64 k_U_ILLEGAL_CHAR_IN_SEGMENT;
extern const int64 k_U_ILLEGAL_ESCAPE_SEQUENCE;
extern const int64 k_U_ILLEGAL_PAD_POSITION;
extern const int64 k_U_INDEX_OUTOFBOUNDS_ERROR;
extern const int64 k_U_INTERNAL_PROGRAM_ERROR;
extern const int64 k_U_INTERNAL_TRANSLITERATOR_ERROR;
extern const int64 k_U_INVALID_CHAR_FOUND;
extern const int64 k_U_INVALID_FORMAT_ERROR;
extern const int64 k_U_INVALID_FUNCTION;
extern const int64 k_U_INVALID_ID;
extern const int64 k_U_INVALID_PROPERTY_PATTERN;
extern const int64 k_U_INVALID_RBT_SYNTAX;
extern const int64 k_U_INVALID_STATE_ERROR;
extern const int64 k_U_INVALID_TABLE_FILE;
extern const int64 k_U_INVALID_TABLE_FORMAT;
extern const int64 k_U_INVARIANT_CONVERSION_ERROR;
extern const int64 k_U_MALFORMED_EXPONENTIAL_PATTERN;
extern const int64 k_U_MALFORMED_PRAGMA;
extern const int64 k_U_MALFORMED_RULE;
extern const int64 k_U_MALFORMED_SET;
extern const int64 k_U_MALFORMED_SYMBOL_REFERENCE;
extern const int64 k_U_MALFORMED_UNICODE_ESCAPE;
extern const int64 k_U_MALFORMED_VARIABLE_DEFINITION;
extern const int64 k_U_MALFORMED_VARIABLE_REFERENCE;
extern const int64 k_U_MEMORY_ALLOCATION_ERROR;
extern const int64 k_U_MESSAGE_PARSE_ERROR;
extern const int64 k_U_MISMATCHED_SEGMENT_DELIMITERS;
extern const int64 k_U_MISPLACED_ANCHOR_START;
extern const int64 k_U_MISPLACED_COMPOUND_FILTER;
extern const int64 k_U_MISPLACED_CURSOR_OFFSET;
extern const int64 k_U_MISPLACED_QUANTIFIER;
extern const int64 k_U_MISSING_OPERATOR;
extern const int64 k_U_MISSING_RESOURCE_ERROR;
extern const int64 k_U_MISSING_SEGMENT_CLOSE;
extern const int64 k_U_MULTIPLE_ANTE_CONTEXTS;
extern const int64 k_U_MULTIPLE_COMPOUND_FILTERS;
extern const int64 k_U_MULTIPLE_CURSORS;
extern const int64 k_U_MULTIPLE_DECIMAL_SEPARATORS;
extern const int64 k_U_MULTIPLE_DECIMAL_SEPERATORS;
extern const int64 k_U_MULTIPLE_EXPONENTIAL_SYMBOLS;
extern const int64 k_U_MULTIPLE_PAD_SPECIFIERS;
extern const int64 k_U_MULTIPLE_PERCENT_SYMBOLS;
extern const int64 k_U_MULTIPLE_PERMILL_SYMBOLS;
extern const int64 k_U_MULTIPLE_POST_CONTEXTS;
extern const int64 k_U_NO_SPACE_AVAILABLE;
extern const int64 k_U_NO_WRITE_PERMISSION;
extern const int64 k_U_PARSE_ERROR;
extern const int64 k_U_PARSE_ERROR_LIMIT;
extern const int64 k_U_PARSE_ERROR_START;
extern const int64 k_U_PATTERN_SYNTAX_ERROR;
extern const int64 k_U_PRIMARY_TOO_LONG_ERROR;
extern const int64 k_U_REGEX_BAD_ESCAPE_SEQUENCE;
extern const int64 k_U_REGEX_BAD_INTERVAL;
extern const int64 k_U_REGEX_ERROR_LIMIT;
extern const int64 k_U_REGEX_ERROR_START;
extern const int64 k_U_REGEX_INTERNAL_ERROR;
extern const int64 k_U_REGEX_INVALID_BACK_REF;
extern const int64 k_U_REGEX_INVALID_FLAG;
extern const int64 k_U_REGEX_INVALID_STATE;
extern const int64 k_U_REGEX_LOOK_BEHIND_LIMIT;
extern const int64 k_U_REGEX_MAX_LT_MIN;
extern const int64 k_U_REGEX_MISMATCHED_PAREN;
extern const int64 k_U_REGEX_NUMBER_TOO_BIG;
extern const int64 k_U_REGEX_PROPERTY_SYNTAX;
extern const int64 k_U_REGEX_RULE_SYNTAX;
extern const int64 k_U_REGEX_SET_CONTAINS_STRING;
extern const int64 k_U_REGEX_UNIMPLEMENTED;
extern const int64 k_U_RESOURCE_TYPE_MISMATCH;
extern const int64 k_U_RULE_MASK_ERROR;
extern const int64 k_U_SAFECLONE_ALLOCATED_WARNING;
extern const int64 k_U_SORT_KEY_TOO_SHORT_WARNING;
extern const int64 k_U_STANDARD_ERROR_LIMIT;
extern const int64 k_U_STATE_OLD_WARNING;
extern const int64 k_U_STATE_TOO_OLD_ERROR;
extern const int64 k_U_STRINGPREP_CHECK_BIDI_ERROR;
extern const int64 k_U_STRINGPREP_PROHIBITED_ERROR;
extern const int64 k_U_STRINGPREP_UNASSIGNED_ERROR;
extern const int64 k_U_STRING_NOT_TERMINATED_WARNING;
extern const int64 k_U_TOO_MANY_ALIASES_ERROR;
extern const int64 k_U_TRAILING_BACKSLASH;
extern const int64 k_U_TRUNCATED_CHAR_FOUND;
extern const int64 k_U_UNCLOSED_SEGMENT;
extern const int64 k_U_UNDEFINED_SEGMENT_REFERENCE;
extern const int64 k_U_UNDEFINED_VARIABLE;
extern const int64 k_U_UNEXPECTED_TOKEN;
extern const int64 k_U_UNMATCHED_BRACES;
extern const int64 k_U_UNQUOTED_SPECIAL;
extern const int64 k_U_UNSUPPORTED_ATTRIBUTE;
extern const int64 k_U_UNSUPPORTED_ERROR;
extern const int64 k_U_UNSUPPORTED_ESCAPE_SEQUENCE;
extern const int64 k_U_UNSUPPORTED_PROPERTY;
extern const int64 k_U_UNTERMINATED_QUOTE;
extern const int64 k_U_USELESS_COLLATOR_ERROR;
extern const int64 k_U_USING_DEFAULT_WARNING;
extern const int64 k_U_USING_FALLBACK_WARNING;
extern const int64 k_U_VARIABLE_RANGE_EXHAUSTED;
extern const int64 k_U_VARIABLE_RANGE_OVERLAP;
extern const int64 k_U_ZERO_ERROR;
extern const int64 k_WNOHANG;
extern const int64 k_WSDL_CACHE_BOTH;
extern const int64 k_WSDL_CACHE_DISK;
extern const int64 k_WSDL_CACHE_MEMORY;
extern const int64 k_WSDL_CACHE_NONE;
extern const int64 k_WUNTRACED;
extern const int64 k_X509_PURPOSE_ANY;
extern const int64 k_X509_PURPOSE_CRL_SIGN;
extern const int64 k_X509_PURPOSE_NS_SSL_SERVER;
extern const int64 k_X509_PURPOSE_SMIME_ENCRYPT;
extern const int64 k_X509_PURPOSE_SMIME_SIGN;
extern const int64 k_X509_PURPOSE_SSL_CLIENT;
extern const int64 k_X509_PURPOSE_SSL_SERVER;
extern const int64 k_XML_ATTRIBUTE_CDATA;
extern const int64 k_XML_ATTRIBUTE_DECL_NODE;
extern const int64 k_XML_ATTRIBUTE_ENTITY;
extern const int64 k_XML_ATTRIBUTE_ENUMERATION;
extern const int64 k_XML_ATTRIBUTE_ID;
extern const int64 k_XML_ATTRIBUTE_IDREF;
extern const int64 k_XML_ATTRIBUTE_IDREFS;
extern const int64 k_XML_ATTRIBUTE_NMTOKEN;
extern const int64 k_XML_ATTRIBUTE_NMTOKENS;
extern const int64 k_XML_ATTRIBUTE_NODE;
extern const int64 k_XML_ATTRIBUTE_NOTATION;
extern const int64 k_XML_CDATA_SECTION_NODE;
extern const int64 k_XML_COMMENT_NODE;
extern const int64 k_XML_DOCUMENT_FRAG_NODE;
extern const int64 k_XML_DOCUMENT_NODE;
extern const int64 k_XML_DOCUMENT_TYPE_NODE;
extern const int64 k_XML_DTD_NODE;
extern const int64 k_XML_ELEMENT_DECL_NODE;
extern const int64 k_XML_ELEMENT_NODE;
extern const int64 k_XML_ENTITY_DECL_NODE;
extern const int64 k_XML_ENTITY_NODE;
extern const int64 k_XML_ENTITY_REF_NODE;
extern const int64 k_XML_ERROR_ASYNC_ENTITY;
extern const int64 k_XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF;
extern const int64 k_XML_ERROR_BAD_CHAR_REF;
extern const int64 k_XML_ERROR_BINARY_ENTITY_REF;
extern const int64 k_XML_ERROR_DUPLICATE_ATTRIBUTE;
extern const int64 k_XML_ERROR_EXTERNAL_ENTITY_HANDLING;
extern const int64 k_XML_ERROR_INCORRECT_ENCODING;
extern const int64 k_XML_ERROR_INVALID_TOKEN;
extern const int64 k_XML_ERROR_JUNK_AFTER_DOC_ELEMENT;
extern const int64 k_XML_ERROR_MISPLACED_XML_PI;
extern const int64 k_XML_ERROR_NONE;
extern const int64 k_XML_ERROR_NO_ELEMENTS;
extern const int64 k_XML_ERROR_NO_MEMORY;
extern const int64 k_XML_ERROR_PARAM_ENTITY_REF;
extern const int64 k_XML_ERROR_PARTIAL_CHAR;
extern const int64 k_XML_ERROR_RECURSIVE_ENTITY_REF;
extern const int64 k_XML_ERROR_SYNTAX;
extern const int64 k_XML_ERROR_TAG_MISMATCH;
extern const int64 k_XML_ERROR_UNCLOSED_CDATA_SECTION;
extern const int64 k_XML_ERROR_UNCLOSED_TOKEN;
extern const int64 k_XML_ERROR_UNDEFINED_ENTITY;
extern const int64 k_XML_ERROR_UNKNOWN_ENCODING;
extern const int64 k_XML_HTML_DOCUMENT_NODE;
extern const int64 k_XML_LOCAL_NAMESPACE;
extern const int64 k_XML_NAMESPACE_DECL_NODE;
extern const int64 k_XML_NOTATION_NODE;
extern const int64 k_XML_OPTION_CASE_FOLDING;
extern const int64 k_XML_OPTION_SKIP_TAGSTART;
extern const int64 k_XML_OPTION_SKIP_WHITE;
extern const int64 k_XML_OPTION_TARGET_ENCODING;
extern const int64 k_XML_PI_NODE;
extern const StaticString k_XML_SAX_IMPL;
extern const int64 k_XML_TEXT_NODE;
extern const StaticString k_XSD_1999_NAMESPACE;
extern const int64 k_XSD_1999_TIMEINSTANT;
extern const int64 k_XSD_ANYTYPE;
extern const int64 k_XSD_ANYURI;
extern const int64 k_XSD_ANYXML;
extern const int64 k_XSD_BASE64BINARY;
extern const int64 k_XSD_BOOLEAN;
extern const int64 k_XSD_BYTE;
extern const int64 k_XSD_DATE;
extern const int64 k_XSD_DATETIME;
extern const int64 k_XSD_DECIMAL;
extern const int64 k_XSD_DOUBLE;
extern const int64 k_XSD_DURATION;
extern const int64 k_XSD_ENTITIES;
extern const int64 k_XSD_ENTITY;
extern const int64 k_XSD_FLOAT;
extern const int64 k_XSD_GDAY;
extern const int64 k_XSD_GMONTH;
extern const int64 k_XSD_GMONTHDAY;
extern const int64 k_XSD_GYEAR;
extern const int64 k_XSD_GYEARMONTH;
extern const int64 k_XSD_HEXBINARY;
extern const int64 k_XSD_ID;
extern const int64 k_XSD_IDREF;
extern const int64 k_XSD_IDREFS;
extern const int64 k_XSD_INT;
extern const int64 k_XSD_INTEGER;
extern const int64 k_XSD_LANGUAGE;
extern const int64 k_XSD_LONG;
extern const int64 k_XSD_NAME;
extern const StaticString k_XSD_NAMESPACE;
extern const int64 k_XSD_NCNAME;
extern const int64 k_XSD_NEGATIVEINTEGER;
extern const int64 k_XSD_NMTOKEN;
extern const int64 k_XSD_NMTOKENS;
extern const int64 k_XSD_NONNEGATIVEINTEGER;
extern const int64 k_XSD_NONPOSITIVEINTEGER;
extern const int64 k_XSD_NORMALIZEDSTRING;
extern const int64 k_XSD_NOTATION;
extern const int64 k_XSD_POSITIVEINTEGER;
extern const int64 k_XSD_QNAME;
extern const int64 k_XSD_SHORT;
extern const int64 k_XSD_STRING;
extern const int64 k_XSD_TIME;
extern const int64 k_XSD_TOKEN;
extern const int64 k_XSD_UNSIGNEDBYTE;
extern const int64 k_XSD_UNSIGNEDINT;
extern const int64 k_XSD_UNSIGNEDLONG;
extern const int64 k_XSD_UNSIGNEDSHORT;
extern const int64 k_YESEXPR;
extern const bool k_ZEND_THREAD_SAFE;


// Get Constant Table
class hashNodeCon {
public:
  hashNodeCon() {}
  hashNodeCon(int64 h, const char *n, int64 o, int64 t,
              int64 *p) :
    hash(h), name(n), off(o), type(t), next(NULL) {
    if (off > 0) return;
    switch (t) {
    case 2: case 32: case 64: case 128: case 256: case 512: case 65535:
      value = p;
      break;
    default: not_reached();
    }
  }
  int64 hash;
  const char *name;
  int64 off;
  int64 type;
  int64 *value;
  hashNodeCon *next;
};
static hashNodeCon *conMapTable[8192];
static hashNodeCon conBuckets[2116];

void init_builtin_constant_table() {
  const char *conMapData[] = {
      (const char *)"ABDAY_1", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_1,
      (const char *)"ABDAY_2", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_2,
      (const char *)"ABDAY_3", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_3,
      (const char *)"ABDAY_4", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_4,
      (const char *)"ABDAY_5", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_5,
      (const char *)"ABDAY_6", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_6,
      (const char *)"ABDAY_7", (const char *)-1, (const char *)32, (const char *)&k_ABDAY_7,
      (const char *)"ABMON_1", (const char *)-1, (const char *)32, (const char *)&k_ABMON_1,
      (const char *)"ABMON_10", (const char *)-1, (const char *)32, (const char *)&k_ABMON_10,
      (const char *)"ABMON_11", (const char *)-1, (const char *)32, (const char *)&k_ABMON_11,
      (const char *)"ABMON_12", (const char *)-1, (const char *)32, (const char *)&k_ABMON_12,
      (const char *)"ABMON_2", (const char *)-1, (const char *)32, (const char *)&k_ABMON_2,
      (const char *)"ABMON_3", (const char *)-1, (const char *)32, (const char *)&k_ABMON_3,
      (const char *)"ABMON_4", (const char *)-1, (const char *)32, (const char *)&k_ABMON_4,
      (const char *)"ABMON_5", (const char *)-1, (const char *)32, (const char *)&k_ABMON_5,
      (const char *)"ABMON_6", (const char *)-1, (const char *)32, (const char *)&k_ABMON_6,
      (const char *)"ABMON_7", (const char *)-1, (const char *)32, (const char *)&k_ABMON_7,
      (const char *)"ABMON_8", (const char *)-1, (const char *)32, (const char *)&k_ABMON_8,
      (const char *)"ABMON_9", (const char *)-1, (const char *)32, (const char *)&k_ABMON_9,
      (const char *)"AF_INET", (const char *)-1, (const char *)32, (const char *)&k_AF_INET,
      (const char *)"AF_INET6", (const char *)-1, (const char *)32, (const char *)&k_AF_INET6,
      (const char *)"AF_UNIX", (const char *)-1, (const char *)32, (const char *)&k_AF_UNIX,
      (const char *)"ALT_DIGITS", (const char *)-1, (const char *)32, (const char *)&k_ALT_DIGITS,
      (const char *)"AM_STR", (const char *)-1, (const char *)32, (const char *)&k_AM_STR,
      (const char *)"APACHE_MAP", (const char *)-1, (const char *)32, (const char *)&k_APACHE_MAP,
      (const char *)"ASSERT_ACTIVE", (const char *)-1, (const char *)32, (const char *)&k_ASSERT_ACTIVE,
      (const char *)"ASSERT_BAIL", (const char *)-1, (const char *)32, (const char *)&k_ASSERT_BAIL,
      (const char *)"ASSERT_CALLBACK", (const char *)-1, (const char *)32, (const char *)&k_ASSERT_CALLBACK,
      (const char *)"ASSERT_QUIET_EVAL", (const char *)-1, (const char *)32, (const char *)&k_ASSERT_QUIET_EVAL,
      (const char *)"ASSERT_WARNING", (const char *)-1, (const char *)32, (const char *)&k_ASSERT_WARNING,
      (const char *)"CASE_LOWER", (const char *)-1, (const char *)32, (const char *)&k_CASE_LOWER,
      (const char *)"CASE_UPPER", (const char *)-1, (const char *)32, (const char *)&k_CASE_UPPER,
      (const char *)"CHAR_MAX", (const char *)-1, (const char *)32, (const char *)&k_CHAR_MAX,
      (const char *)"CLOCK_MONOTONIC", (const char *)-1, (const char *)32, (const char *)&k_CLOCK_MONOTONIC,
      (const char *)"CLOCK_PROCESS_CPUTIME_ID", (const char *)-1, (const char *)32, (const char *)&k_CLOCK_PROCESS_CPUTIME_ID,
      (const char *)"CLOCK_REALTIME", (const char *)-1, (const char *)32, (const char *)&k_CLOCK_REALTIME,
      (const char *)"CLOCK_THREAD_CPUTIME_ID", (const char *)-1, (const char *)32, (const char *)&k_CLOCK_THREAD_CPUTIME_ID,
      (const char *)"CL_EXPUNGE", (const char *)-1, (const char *)32, (const char *)&k_CL_EXPUNGE,
      (const char *)"CODESET", (const char *)-1, (const char *)32, (const char *)&k_CODESET,
      (const char *)"CONNECTION_ABORTED", (const char *)-1, (const char *)32, (const char *)&k_CONNECTION_ABORTED,
      (const char *)"CONNECTION_NORMAL", (const char *)-1, (const char *)32, (const char *)&k_CONNECTION_NORMAL,
      (const char *)"CONNECTION_TIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_CONNECTION_TIMEOUT,
      (const char *)"COUNT_NORMAL", (const char *)-1, (const char *)32, (const char *)&k_COUNT_NORMAL,
      (const char *)"COUNT_RECURSIVE", (const char *)-1, (const char *)32, (const char *)&k_COUNT_RECURSIVE,
      (const char *)"CP_MOVE", (const char *)-1, (const char *)32, (const char *)&k_CP_MOVE,
      (const char *)"CP_UID", (const char *)-1, (const char *)32, (const char *)&k_CP_UID,
      (const char *)"CREDITS_ALL", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_ALL,
      (const char *)"CREDITS_DOCS", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_DOCS,
      (const char *)"CREDITS_FULLPAGE", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_FULLPAGE,
      (const char *)"CREDITS_GENERAL", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_GENERAL,
      (const char *)"CREDITS_GROUP", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_GROUP,
      (const char *)"CREDITS_MODULES", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_MODULES,
      (const char *)"CREDITS_QA", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_QA,
      (const char *)"CREDITS_SAPI", (const char *)-1, (const char *)32, (const char *)&k_CREDITS_SAPI,
      (const char *)"CRNCYSTR", (const char *)-1, (const char *)32, (const char *)&k_CRNCYSTR,
      (const char *)"CRYPT_BLOWFISH", (const char *)-1, (const char *)32, (const char *)&k_CRYPT_BLOWFISH,
      (const char *)"CRYPT_EXT_DES", (const char *)-1, (const char *)32, (const char *)&k_CRYPT_EXT_DES,
      (const char *)"CRYPT_MD5", (const char *)-1, (const char *)32, (const char *)&k_CRYPT_MD5,
      (const char *)"CRYPT_SALT_LENGTH", (const char *)-1, (const char *)32, (const char *)&k_CRYPT_SALT_LENGTH,
      (const char *)"CRYPT_STD_DES", (const char *)-1, (const char *)32, (const char *)&k_CRYPT_STD_DES,
      (const char *)"CURLAUTH_ANY", (const char *)-1, (const char *)32, (const char *)&k_CURLAUTH_ANY,
      (const char *)"CURLAUTH_ANYSAFE", (const char *)-1, (const char *)32, (const char *)&k_CURLAUTH_ANYSAFE,
      (const char *)"CURLAUTH_BASIC", (const char *)-1, (const char *)32, (const char *)&k_CURLAUTH_BASIC,
      (const char *)"CURLAUTH_DIGEST", (const char *)-1, (const char *)32, (const char *)&k_CURLAUTH_DIGEST,
      (const char *)"CURLAUTH_GSSNEGOTIATE", (const char *)-1, (const char *)32, (const char *)&k_CURLAUTH_GSSNEGOTIATE,
      (const char *)"CURLAUTH_NTLM", (const char *)-1, (const char *)32, (const char *)&k_CURLAUTH_NTLM,
      (const char *)"CURLCLOSEPOLICY_CALLBACK", (const char *)-1, (const char *)32, (const char *)&k_CURLCLOSEPOLICY_CALLBACK,
      (const char *)"CURLCLOSEPOLICY_LEAST_RECENTLY_USED", (const char *)-1, (const char *)32, (const char *)&k_CURLCLOSEPOLICY_LEAST_RECENTLY_USED,
      (const char *)"CURLCLOSEPOLICY_LEAST_TRAFFIC", (const char *)-1, (const char *)32, (const char *)&k_CURLCLOSEPOLICY_LEAST_TRAFFIC,
      (const char *)"CURLCLOSEPOLICY_OLDEST", (const char *)-1, (const char *)32, (const char *)&k_CURLCLOSEPOLICY_OLDEST,
      (const char *)"CURLCLOSEPOLICY_SLOWEST", (const char *)-1, (const char *)32, (const char *)&k_CURLCLOSEPOLICY_SLOWEST,
      (const char *)"CURLE_ABORTED_BY_CALLBACK", (const char *)-1, (const char *)32, (const char *)&k_CURLE_ABORTED_BY_CALLBACK,
      (const char *)"CURLE_BAD_CALLING_ORDER", (const char *)-1, (const char *)32, (const char *)&k_CURLE_BAD_CALLING_ORDER,
      (const char *)"CURLE_BAD_CONTENT_ENCODING", (const char *)-1, (const char *)32, (const char *)&k_CURLE_BAD_CONTENT_ENCODING,
      (const char *)"CURLE_BAD_FUNCTION_ARGUMENT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_BAD_FUNCTION_ARGUMENT,
      (const char *)"CURLE_BAD_PASSWORD_ENTERED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_BAD_PASSWORD_ENTERED,
      (const char *)"CURLE_COULDNT_CONNECT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_COULDNT_CONNECT,
      (const char *)"CURLE_COULDNT_RESOLVE_HOST", (const char *)-1, (const char *)32, (const char *)&k_CURLE_COULDNT_RESOLVE_HOST,
      (const char *)"CURLE_COULDNT_RESOLVE_PROXY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_COULDNT_RESOLVE_PROXY,
      (const char *)"CURLE_FAILED_INIT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FAILED_INIT,
      (const char *)"CURLE_FILESIZE_EXCEEDED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FILESIZE_EXCEEDED,
      (const char *)"CURLE_FILE_COULDNT_READ_FILE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FILE_COULDNT_READ_FILE,
      (const char *)"CURLE_FTP_ACCESS_DENIED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_ACCESS_DENIED,
      (const char *)"CURLE_FTP_BAD_DOWNLOAD_RESUME", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_BAD_DOWNLOAD_RESUME,
      (const char *)"CURLE_FTP_CANT_GET_HOST", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_CANT_GET_HOST,
      (const char *)"CURLE_FTP_CANT_RECONNECT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_CANT_RECONNECT,
      (const char *)"CURLE_FTP_COULDNT_GET_SIZE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_COULDNT_GET_SIZE,
      (const char *)"CURLE_FTP_COULDNT_RETR_FILE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_COULDNT_RETR_FILE,
      (const char *)"CURLE_FTP_COULDNT_SET_ASCII", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_COULDNT_SET_ASCII,
      (const char *)"CURLE_FTP_COULDNT_SET_BINARY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_COULDNT_SET_BINARY,
      (const char *)"CURLE_FTP_COULDNT_STOR_FILE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_COULDNT_STOR_FILE,
      (const char *)"CURLE_FTP_COULDNT_USE_REST", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_COULDNT_USE_REST,
      (const char *)"CURLE_FTP_PORT_FAILED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_PORT_FAILED,
      (const char *)"CURLE_FTP_QUOTE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_QUOTE_ERROR,
      (const char *)"CURLE_FTP_SSL_FAILED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_SSL_FAILED,
      (const char *)"CURLE_FTP_USER_PASSWORD_INCORRECT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_USER_PASSWORD_INCORRECT,
      (const char *)"CURLE_FTP_WEIRD_227_FORMAT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_WEIRD_227_FORMAT,
      (const char *)"CURLE_FTP_WEIRD_PASS_REPLY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_WEIRD_PASS_REPLY,
      (const char *)"CURLE_FTP_WEIRD_PASV_REPLY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_WEIRD_PASV_REPLY,
      (const char *)"CURLE_FTP_WEIRD_SERVER_REPLY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_WEIRD_SERVER_REPLY,
      (const char *)"CURLE_FTP_WEIRD_USER_REPLY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_WEIRD_USER_REPLY,
      (const char *)"CURLE_FTP_WRITE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FTP_WRITE_ERROR,
      (const char *)"CURLE_FUNCTION_NOT_FOUND", (const char *)-1, (const char *)32, (const char *)&k_CURLE_FUNCTION_NOT_FOUND,
      (const char *)"CURLE_GOT_NOTHING", (const char *)-1, (const char *)32, (const char *)&k_CURLE_GOT_NOTHING,
      (const char *)"CURLE_HTTP_NOT_FOUND", (const char *)-1, (const char *)32, (const char *)&k_CURLE_HTTP_NOT_FOUND,
      (const char *)"CURLE_HTTP_PORT_FAILED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_HTTP_PORT_FAILED,
      (const char *)"CURLE_HTTP_POST_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_HTTP_POST_ERROR,
      (const char *)"CURLE_HTTP_RANGE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_HTTP_RANGE_ERROR,
      (const char *)"CURLE_LDAP_CANNOT_BIND", (const char *)-1, (const char *)32, (const char *)&k_CURLE_LDAP_CANNOT_BIND,
      (const char *)"CURLE_LDAP_INVALID_URL", (const char *)-1, (const char *)32, (const char *)&k_CURLE_LDAP_INVALID_URL,
      (const char *)"CURLE_LDAP_SEARCH_FAILED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_LDAP_SEARCH_FAILED,
      (const char *)"CURLE_LIBRARY_NOT_FOUND", (const char *)-1, (const char *)32, (const char *)&k_CURLE_LIBRARY_NOT_FOUND,
      (const char *)"CURLE_MALFORMAT_USER", (const char *)-1, (const char *)32, (const char *)&k_CURLE_MALFORMAT_USER,
      (const char *)"CURLE_OBSOLETE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_OBSOLETE,
      (const char *)"CURLE_OK", (const char *)-1, (const char *)32, (const char *)&k_CURLE_OK,
      (const char *)"CURLE_OPERATION_TIMEOUTED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_OPERATION_TIMEOUTED,
      (const char *)"CURLE_OUT_OF_MEMORY", (const char *)-1, (const char *)32, (const char *)&k_CURLE_OUT_OF_MEMORY,
      (const char *)"CURLE_PARTIAL_FILE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_PARTIAL_FILE,
      (const char *)"CURLE_READ_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_READ_ERROR,
      (const char *)"CURLE_RECV_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_RECV_ERROR,
      (const char *)"CURLE_SEND_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SEND_ERROR,
      (const char *)"CURLE_SHARE_IN_USE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SHARE_IN_USE,
      (const char *)"CURLE_SSL_CACERT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_CACERT,
      (const char *)"CURLE_SSL_CERTPROBLEM", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_CERTPROBLEM,
      (const char *)"CURLE_SSL_CIPHER", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_CIPHER,
      (const char *)"CURLE_SSL_CONNECT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_CONNECT_ERROR,
      (const char *)"CURLE_SSL_ENGINE_NOTFOUND", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_ENGINE_NOTFOUND,
      (const char *)"CURLE_SSL_ENGINE_SETFAILED", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_ENGINE_SETFAILED,
      (const char *)"CURLE_SSL_PEER_CERTIFICATE", (const char *)-1, (const char *)32, (const char *)&k_CURLE_SSL_PEER_CERTIFICATE,
      (const char *)"CURLE_TELNET_OPTION_SYNTAX", (const char *)-1, (const char *)32, (const char *)&k_CURLE_TELNET_OPTION_SYNTAX,
      (const char *)"CURLE_TOO_MANY_REDIRECTS", (const char *)-1, (const char *)32, (const char *)&k_CURLE_TOO_MANY_REDIRECTS,
      (const char *)"CURLE_UNKNOWN_TELNET_OPTION", (const char *)-1, (const char *)32, (const char *)&k_CURLE_UNKNOWN_TELNET_OPTION,
      (const char *)"CURLE_UNSUPPORTED_PROTOCOL", (const char *)-1, (const char *)32, (const char *)&k_CURLE_UNSUPPORTED_PROTOCOL,
      (const char *)"CURLE_URL_MALFORMAT", (const char *)-1, (const char *)32, (const char *)&k_CURLE_URL_MALFORMAT,
      (const char *)"CURLE_URL_MALFORMAT_USER", (const char *)-1, (const char *)32, (const char *)&k_CURLE_URL_MALFORMAT_USER,
      (const char *)"CURLE_WRITE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLE_WRITE_ERROR,
      (const char *)"CURLFTPAUTH_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPAUTH_DEFAULT,
      (const char *)"CURLFTPAUTH_SSL", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPAUTH_SSL,
      (const char *)"CURLFTPAUTH_TLS", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPAUTH_TLS,
      (const char *)"CURLFTPSSL_ALL", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPSSL_ALL,
      (const char *)"CURLFTPSSL_CONTROL", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPSSL_CONTROL,
      (const char *)"CURLFTPSSL_NONE", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPSSL_NONE,
      (const char *)"CURLFTPSSL_TRY", (const char *)-1, (const char *)32, (const char *)&k_CURLFTPSSL_TRY,
      (const char *)"CURLINFO_CONNECT_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_CONNECT_TIME,
      (const char *)"CURLINFO_CONTENT_LENGTH_DOWNLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_CONTENT_LENGTH_DOWNLOAD,
      (const char *)"CURLINFO_CONTENT_LENGTH_UPLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_CONTENT_LENGTH_UPLOAD,
      (const char *)"CURLINFO_CONTENT_TYPE", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_CONTENT_TYPE,
      (const char *)"CURLINFO_EFFECTIVE_URL", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_EFFECTIVE_URL,
      (const char *)"CURLINFO_FILETIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_FILETIME,
      (const char *)"CURLINFO_HEADER_OUT", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_HEADER_OUT,
      (const char *)"CURLINFO_HEADER_SIZE", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_HEADER_SIZE,
      (const char *)"CURLINFO_HTTP_CODE", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_HTTP_CODE,
      (const char *)"CURLINFO_LOCAL_PORT", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_LOCAL_PORT,
      (const char *)"CURLINFO_NAMELOOKUP_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_NAMELOOKUP_TIME,
      (const char *)"CURLINFO_PRETRANSFER_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_PRETRANSFER_TIME,
      (const char *)"CURLINFO_PRIVATE", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_PRIVATE,
      (const char *)"CURLINFO_REDIRECT_COUNT", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_REDIRECT_COUNT,
      (const char *)"CURLINFO_REDIRECT_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_REDIRECT_TIME,
      (const char *)"CURLINFO_REQUEST_SIZE", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_REQUEST_SIZE,
      (const char *)"CURLINFO_SIZE_DOWNLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_SIZE_DOWNLOAD,
      (const char *)"CURLINFO_SIZE_UPLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_SIZE_UPLOAD,
      (const char *)"CURLINFO_SPEED_DOWNLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_SPEED_DOWNLOAD,
      (const char *)"CURLINFO_SPEED_UPLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_SPEED_UPLOAD,
      (const char *)"CURLINFO_SSL_VERIFYRESULT", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_SSL_VERIFYRESULT,
      (const char *)"CURLINFO_STARTTRANSFER_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_STARTTRANSFER_TIME,
      (const char *)"CURLINFO_TOTAL_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLINFO_TOTAL_TIME,
      (const char *)"CURLMSG_DONE", (const char *)-1, (const char *)32, (const char *)&k_CURLMSG_DONE,
      (const char *)"CURLM_BAD_EASY_HANDLE", (const char *)-1, (const char *)32, (const char *)&k_CURLM_BAD_EASY_HANDLE,
      (const char *)"CURLM_BAD_HANDLE", (const char *)-1, (const char *)32, (const char *)&k_CURLM_BAD_HANDLE,
      (const char *)"CURLM_CALL_MULTI_PERFORM", (const char *)-1, (const char *)32, (const char *)&k_CURLM_CALL_MULTI_PERFORM,
      (const char *)"CURLM_INTERNAL_ERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLM_INTERNAL_ERROR,
      (const char *)"CURLM_OK", (const char *)-1, (const char *)32, (const char *)&k_CURLM_OK,
      (const char *)"CURLM_OUT_OF_MEMORY", (const char *)-1, (const char *)32, (const char *)&k_CURLM_OUT_OF_MEMORY,
      (const char *)"CURLOPT_AUTOREFERER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_AUTOREFERER,
      (const char *)"CURLOPT_BINARYTRANSFER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_BINARYTRANSFER,
      (const char *)"CURLOPT_BUFFERSIZE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_BUFFERSIZE,
      (const char *)"CURLOPT_CAINFO", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CAINFO,
      (const char *)"CURLOPT_CAPATH", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CAPATH,
      (const char *)"CURLOPT_CLOSEPOLICY", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CLOSEPOLICY,
      (const char *)"CURLOPT_CONNECTTIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CONNECTTIMEOUT,
      (const char *)"CURLOPT_CONNECTTIMEOUT_MS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CONNECTTIMEOUT_MS,
      (const char *)"CURLOPT_COOKIE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_COOKIE,
      (const char *)"CURLOPT_COOKIEFILE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_COOKIEFILE,
      (const char *)"CURLOPT_COOKIEJAR", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_COOKIEJAR,
      (const char *)"CURLOPT_COOKIESESSION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_COOKIESESSION,
      (const char *)"CURLOPT_CRLF", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CRLF,
      (const char *)"CURLOPT_CUSTOMREQUEST", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_CUSTOMREQUEST,
      (const char *)"CURLOPT_DNS_CACHE_TIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_DNS_CACHE_TIMEOUT,
      (const char *)"CURLOPT_DNS_USE_GLOBAL_CACHE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_DNS_USE_GLOBAL_CACHE,
      (const char *)"CURLOPT_EGDSOCKET", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_EGDSOCKET,
      (const char *)"CURLOPT_ENCODING", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_ENCODING,
      (const char *)"CURLOPT_FAILONERROR", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FAILONERROR,
      (const char *)"CURLOPT_FILE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FILE,
      (const char *)"CURLOPT_FILETIME", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FILETIME,
      (const char *)"CURLOPT_FOLLOWLOCATION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FOLLOWLOCATION,
      (const char *)"CURLOPT_FORBID_REUSE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FORBID_REUSE,
      (const char *)"CURLOPT_FRESH_CONNECT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FRESH_CONNECT,
      (const char *)"CURLOPT_FTPAPPEND", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTPAPPEND,
      (const char *)"CURLOPT_FTPLISTONLY", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTPLISTONLY,
      (const char *)"CURLOPT_FTPPORT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTPPORT,
      (const char *)"CURLOPT_FTPSSLAUTH", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTPSSLAUTH,
      (const char *)"CURLOPT_FTP_CREATE_MISSING_DIRS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTP_CREATE_MISSING_DIRS,
      (const char *)"CURLOPT_FTP_SSL", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTP_SSL,
      (const char *)"CURLOPT_FTP_USE_EPRT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTP_USE_EPRT,
      (const char *)"CURLOPT_FTP_USE_EPSV", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_FTP_USE_EPSV,
      (const char *)"CURLOPT_HEADER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HEADER,
      (const char *)"CURLOPT_HEADERFUNCTION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HEADERFUNCTION,
      (const char *)"CURLOPT_HTTP200ALIASES", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HTTP200ALIASES,
      (const char *)"CURLOPT_HTTPAUTH", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HTTPAUTH,
      (const char *)"CURLOPT_HTTPGET", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HTTPGET,
      (const char *)"CURLOPT_HTTPHEADER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HTTPHEADER,
      (const char *)"CURLOPT_HTTPPROXYTUNNEL", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HTTPPROXYTUNNEL,
      (const char *)"CURLOPT_HTTP_VERSION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_HTTP_VERSION,
      (const char *)"CURLOPT_INFILE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_INFILE,
      (const char *)"CURLOPT_INFILESIZE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_INFILESIZE,
      (const char *)"CURLOPT_INTERFACE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_INTERFACE,
      (const char *)"CURLOPT_IPRESOLVE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_IPRESOLVE,
      (const char *)"CURLOPT_KRB4LEVEL", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_KRB4LEVEL,
      (const char *)"CURLOPT_LOW_SPEED_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_LOW_SPEED_LIMIT,
      (const char *)"CURLOPT_LOW_SPEED_TIME", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_LOW_SPEED_TIME,
      (const char *)"CURLOPT_MAXCONNECTS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_MAXCONNECTS,
      (const char *)"CURLOPT_MAXREDIRS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_MAXREDIRS,
      (const char *)"CURLOPT_MUTE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_MUTE,
      (const char *)"CURLOPT_NETRC", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_NETRC,
      (const char *)"CURLOPT_NOBODY", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_NOBODY,
      (const char *)"CURLOPT_NOPROGRESS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_NOPROGRESS,
      (const char *)"CURLOPT_NOSIGNAL", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_NOSIGNAL,
      (const char *)"CURLOPT_PASSWDFUNCTION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PASSWDFUNCTION,
      (const char *)"CURLOPT_PORT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PORT,
      (const char *)"CURLOPT_POST", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_POST,
      (const char *)"CURLOPT_POSTFIELDS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_POSTFIELDS,
      (const char *)"CURLOPT_POSTQUOTE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_POSTQUOTE,
      (const char *)"CURLOPT_PRIVATE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PRIVATE,
      (const char *)"CURLOPT_PROXY", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PROXY,
      (const char *)"CURLOPT_PROXYAUTH", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PROXYAUTH,
      (const char *)"CURLOPT_PROXYPORT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PROXYPORT,
      (const char *)"CURLOPT_PROXYTYPE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PROXYTYPE,
      (const char *)"CURLOPT_PROXYUSERPWD", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PROXYUSERPWD,
      (const char *)"CURLOPT_PUT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_PUT,
      (const char *)"CURLOPT_QUOTE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_QUOTE,
      (const char *)"CURLOPT_RANDOM_FILE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_RANDOM_FILE,
      (const char *)"CURLOPT_RANGE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_RANGE,
      (const char *)"CURLOPT_READDATA", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_READDATA,
      (const char *)"CURLOPT_READFUNCTION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_READFUNCTION,
      (const char *)"CURLOPT_REFERER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_REFERER,
      (const char *)"CURLOPT_RESUME_FROM", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_RESUME_FROM,
      (const char *)"CURLOPT_RETURNTRANSFER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_RETURNTRANSFER,
      (const char *)"CURLOPT_SSLCERT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLCERT,
      (const char *)"CURLOPT_SSLCERTPASSWD", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLCERTPASSWD,
      (const char *)"CURLOPT_SSLCERTTYPE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLCERTTYPE,
      (const char *)"CURLOPT_SSLENGINE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLENGINE,
      (const char *)"CURLOPT_SSLENGINE_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLENGINE_DEFAULT,
      (const char *)"CURLOPT_SSLKEY", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLKEY,
      (const char *)"CURLOPT_SSLKEYPASSWD", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLKEYPASSWD,
      (const char *)"CURLOPT_SSLKEYTYPE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLKEYTYPE,
      (const char *)"CURLOPT_SSLVERSION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSLVERSION,
      (const char *)"CURLOPT_SSL_CIPHER_LIST", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSL_CIPHER_LIST,
      (const char *)"CURLOPT_SSL_VERIFYHOST", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSL_VERIFYHOST,
      (const char *)"CURLOPT_SSL_VERIFYPEER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_SSL_VERIFYPEER,
      (const char *)"CURLOPT_STDERR", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_STDERR,
      (const char *)"CURLOPT_TCP_NODELAY", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_TCP_NODELAY,
      (const char *)"CURLOPT_TIMECONDITION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_TIMECONDITION,
      (const char *)"CURLOPT_TIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_TIMEOUT,
      (const char *)"CURLOPT_TIMEOUT_MS", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_TIMEOUT_MS,
      (const char *)"CURLOPT_TIMEVALUE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_TIMEVALUE,
      (const char *)"CURLOPT_TRANSFERTEXT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_TRANSFERTEXT,
      (const char *)"CURLOPT_UNRESTRICTED_AUTH", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_UNRESTRICTED_AUTH,
      (const char *)"CURLOPT_UPLOAD", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_UPLOAD,
      (const char *)"CURLOPT_URL", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_URL,
      (const char *)"CURLOPT_USERAGENT", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_USERAGENT,
      (const char *)"CURLOPT_USERPWD", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_USERPWD,
      (const char *)"CURLOPT_VERBOSE", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_VERBOSE,
      (const char *)"CURLOPT_WRITEFUNCTION", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_WRITEFUNCTION,
      (const char *)"CURLOPT_WRITEHEADER", (const char *)-1, (const char *)32, (const char *)&k_CURLOPT_WRITEHEADER,
      (const char *)"CURLPROXY_HTTP", (const char *)-1, (const char *)32, (const char *)&k_CURLPROXY_HTTP,
      (const char *)"CURLPROXY_SOCKS5", (const char *)-1, (const char *)32, (const char *)&k_CURLPROXY_SOCKS5,
      (const char *)"CURLVERSION_NOW", (const char *)-1, (const char *)32, (const char *)&k_CURLVERSION_NOW,
      (const char *)"CURL_HTTP_VERSION_1_0", (const char *)-1, (const char *)32, (const char *)&k_CURL_HTTP_VERSION_1_0,
      (const char *)"CURL_HTTP_VERSION_1_1", (const char *)-1, (const char *)32, (const char *)&k_CURL_HTTP_VERSION_1_1,
      (const char *)"CURL_HTTP_VERSION_NONE", (const char *)-1, (const char *)32, (const char *)&k_CURL_HTTP_VERSION_NONE,
      (const char *)"CURL_IPRESOLVE_V4", (const char *)-1, (const char *)32, (const char *)&k_CURL_IPRESOLVE_V4,
      (const char *)"CURL_IPRESOLVE_V6", (const char *)-1, (const char *)32, (const char *)&k_CURL_IPRESOLVE_V6,
      (const char *)"CURL_IPRESOLVE_WHATEVER", (const char *)-1, (const char *)32, (const char *)&k_CURL_IPRESOLVE_WHATEVER,
      (const char *)"CURL_NETRC_IGNORED", (const char *)-1, (const char *)32, (const char *)&k_CURL_NETRC_IGNORED,
      (const char *)"CURL_NETRC_OPTIONAL", (const char *)-1, (const char *)32, (const char *)&k_CURL_NETRC_OPTIONAL,
      (const char *)"CURL_NETRC_REQUIRED", (const char *)-1, (const char *)32, (const char *)&k_CURL_NETRC_REQUIRED,
      (const char *)"CURL_TIMECOND_IFMODSINCE", (const char *)-1, (const char *)32, (const char *)&k_CURL_TIMECOND_IFMODSINCE,
      (const char *)"CURL_TIMECOND_IFUNMODSINCE", (const char *)-1, (const char *)32, (const char *)&k_CURL_TIMECOND_IFUNMODSINCE,
      (const char *)"CURL_TIMECOND_LASTMOD", (const char *)-1, (const char *)32, (const char *)&k_CURL_TIMECOND_LASTMOD,
      (const char *)"CURL_VERSION_IPV6", (const char *)-1, (const char *)32, (const char *)&k_CURL_VERSION_IPV6,
      (const char *)"CURL_VERSION_KERBEROS4", (const char *)-1, (const char *)32, (const char *)&k_CURL_VERSION_KERBEROS4,
      (const char *)"CURL_VERSION_LIBZ", (const char *)-1, (const char *)32, (const char *)&k_CURL_VERSION_LIBZ,
      (const char *)"CURL_VERSION_SSL", (const char *)-1, (const char *)32, (const char *)&k_CURL_VERSION_SSL,
      (const char *)"DATE_ATOM", (const char *)-1, (const char *)128, (const char *)&k_DATE_ATOM,
      (const char *)"DATE_COOKIE", (const char *)-1, (const char *)128, (const char *)&k_DATE_COOKIE,
      (const char *)"DATE_ISO8601", (const char *)-1, (const char *)128, (const char *)&k_DATE_ISO8601,
      (const char *)"DATE_RFC1036", (const char *)-1, (const char *)128, (const char *)&k_DATE_RFC1036,
      (const char *)"DATE_RFC1123", (const char *)-1, (const char *)128, (const char *)&k_DATE_RFC1123,
      (const char *)"DATE_RFC2822", (const char *)-1, (const char *)128, (const char *)&k_DATE_RFC2822,
      (const char *)"DATE_RFC3339", (const char *)-1, (const char *)128, (const char *)&k_DATE_RFC3339,
      (const char *)"DATE_RFC822", (const char *)-1, (const char *)128, (const char *)&k_DATE_RFC822,
      (const char *)"DATE_RFC850", (const char *)-1, (const char *)128, (const char *)&k_DATE_RFC850,
      (const char *)"DATE_RSS", (const char *)-1, (const char *)128, (const char *)&k_DATE_RSS,
      (const char *)"DATE_W3C", (const char *)-1, (const char *)128, (const char *)&k_DATE_W3C,
      (const char *)"DAY_1", (const char *)-1, (const char *)32, (const char *)&k_DAY_1,
      (const char *)"DAY_2", (const char *)-1, (const char *)32, (const char *)&k_DAY_2,
      (const char *)"DAY_3", (const char *)-1, (const char *)32, (const char *)&k_DAY_3,
      (const char *)"DAY_4", (const char *)-1, (const char *)32, (const char *)&k_DAY_4,
      (const char *)"DAY_5", (const char *)-1, (const char *)32, (const char *)&k_DAY_5,
      (const char *)"DAY_6", (const char *)-1, (const char *)32, (const char *)&k_DAY_6,
      (const char *)"DAY_7", (const char *)-1, (const char *)32, (const char *)&k_DAY_7,
      (const char *)"DEBUG_LOG_AGENT", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_AGENT,
      (const char *)"DEBUG_LOG_ALL", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_ALL,
      (const char *)"DEBUG_LOG_COOKIE", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_COOKIE,
      (const char *)"DEBUG_LOG_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_DEFAULT,
      (const char *)"DEBUG_LOG_IP", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_IP,
      (const char *)"DEBUG_LOG_NONE", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_NONE,
      (const char *)"DEBUG_LOG_POST", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_POST,
      (const char *)"DEBUG_LOG_REFERER", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_REFERER,
      (const char *)"DEBUG_LOG_TRACE", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_TRACE,
      (const char *)"DEBUG_LOG_URL", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_URL,
      (const char *)"DEBUG_LOG_USER", (const char *)-1, (const char *)32, (const char *)&k_DEBUG_LOG_USER,
      (const char *)"DEFAULT_INCLUDE_PATH", (const char *)-1, (const char *)128, (const char *)&k_DEFAULT_INCLUDE_PATH,
      (const char *)"DIRECTORY_SEPARATOR", (const char *)-1, (const char *)128, (const char *)&k_DIRECTORY_SEPARATOR,
      (const char *)"DNS_A", (const char *)-1, (const char *)32, (const char *)&k_DNS_A,
      (const char *)"DNS_A6", (const char *)-1, (const char *)32, (const char *)&k_DNS_A6,
      (const char *)"DNS_AAAA", (const char *)-1, (const char *)32, (const char *)&k_DNS_AAAA,
      (const char *)"DNS_ALL", (const char *)-1, (const char *)32, (const char *)&k_DNS_ALL,
      (const char *)"DNS_ANY", (const char *)-1, (const char *)32, (const char *)&k_DNS_ANY,
      (const char *)"DNS_CNAME", (const char *)-1, (const char *)32, (const char *)&k_DNS_CNAME,
      (const char *)"DNS_HINFO", (const char *)-1, (const char *)32, (const char *)&k_DNS_HINFO,
      (const char *)"DNS_MX", (const char *)-1, (const char *)32, (const char *)&k_DNS_MX,
      (const char *)"DNS_NAPTR", (const char *)-1, (const char *)32, (const char *)&k_DNS_NAPTR,
      (const char *)"DNS_NS", (const char *)-1, (const char *)32, (const char *)&k_DNS_NS,
      (const char *)"DNS_PTR", (const char *)-1, (const char *)32, (const char *)&k_DNS_PTR,
      (const char *)"DNS_SOA", (const char *)-1, (const char *)32, (const char *)&k_DNS_SOA,
      (const char *)"DNS_SRV", (const char *)-1, (const char *)32, (const char *)&k_DNS_SRV,
      (const char *)"DNS_TXT", (const char *)-1, (const char *)32, (const char *)&k_DNS_TXT,
      (const char *)"DOMSTRING_SIZE_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOMSTRING_SIZE_ERR,
      (const char *)"DOM_HIERARCHY_REQUEST_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_HIERARCHY_REQUEST_ERR,
      (const char *)"DOM_INDEX_SIZE_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_INDEX_SIZE_ERR,
      (const char *)"DOM_INUSE_ATTRIBUTE_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_INUSE_ATTRIBUTE_ERR,
      (const char *)"DOM_INVALID_ACCESS_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_INVALID_ACCESS_ERR,
      (const char *)"DOM_INVALID_CHARACTER_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_INVALID_CHARACTER_ERR,
      (const char *)"DOM_INVALID_MODIFICATION_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_INVALID_MODIFICATION_ERR,
      (const char *)"DOM_INVALID_STATE_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_INVALID_STATE_ERR,
      (const char *)"DOM_NAMESPACE_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_NAMESPACE_ERR,
      (const char *)"DOM_NOT_FOUND_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_NOT_FOUND_ERR,
      (const char *)"DOM_NOT_SUPPORTED_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_NOT_SUPPORTED_ERR,
      (const char *)"DOM_NO_DATA_ALLOWED_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_NO_DATA_ALLOWED_ERR,
      (const char *)"DOM_NO_MODIFICATION_ALLOWED_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_NO_MODIFICATION_ALLOWED_ERR,
      (const char *)"DOM_PHP_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_PHP_ERR,
      (const char *)"DOM_SYNTAX_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_SYNTAX_ERR,
      (const char *)"DOM_VALIDATION_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_VALIDATION_ERR,
      (const char *)"DOM_WRONG_DOCUMENT_ERR", (const char *)-1, (const char *)32, (const char *)&k_DOM_WRONG_DOCUMENT_ERR,
      (const char *)"D_FMT", (const char *)-1, (const char *)32, (const char *)&k_D_FMT,
      (const char *)"D_T_FMT", (const char *)-1, (const char *)32, (const char *)&k_D_T_FMT,
      (const char *)"ENC7BIT", (const char *)-1, (const char *)32, (const char *)&k_ENC7BIT,
      (const char *)"ENC8BIT", (const char *)-1, (const char *)32, (const char *)&k_ENC8BIT,
      (const char *)"ENCBASE64", (const char *)-1, (const char *)32, (const char *)&k_ENCBASE64,
      (const char *)"ENCBINARY", (const char *)-1, (const char *)32, (const char *)&k_ENCBINARY,
      (const char *)"ENCOTHER", (const char *)-1, (const char *)32, (const char *)&k_ENCOTHER,
      (const char *)"ENCQUOTEDPRINTABLE", (const char *)-1, (const char *)32, (const char *)&k_ENCQUOTEDPRINTABLE,
      (const char *)"ENT_COMPAT", (const char *)-1, (const char *)32, (const char *)&k_ENT_COMPAT,
      (const char *)"ENT_FB_UTF8", (const char *)-1, (const char *)32, (const char *)&k_ENT_FB_UTF8,
      (const char *)"ENT_FB_UTF8_ONLY", (const char *)-1, (const char *)32, (const char *)&k_ENT_FB_UTF8_ONLY,
      (const char *)"ENT_NOQUOTES", (const char *)-1, (const char *)32, (const char *)&k_ENT_NOQUOTES,
      (const char *)"ENT_QUOTES", (const char *)-1, (const char *)32, (const char *)&k_ENT_QUOTES,
      (const char *)"ERA", (const char *)-1, (const char *)32, (const char *)&k_ERA,
      (const char *)"ERA_D_FMT", (const char *)-1, (const char *)32, (const char *)&k_ERA_D_FMT,
      (const char *)"ERA_D_T_FMT", (const char *)-1, (const char *)32, (const char *)&k_ERA_D_T_FMT,
      (const char *)"ERA_T_FMT", (const char *)-1, (const char *)32, (const char *)&k_ERA_T_FMT,
      (const char *)"EXIF_USE_MBSTRING", (const char *)-1, (const char *)32, (const char *)&k_EXIF_USE_MBSTRING,
      (const char *)"EXTR_IF_EXISTS", (const char *)-1, (const char *)32, (const char *)&k_EXTR_IF_EXISTS,
      (const char *)"EXTR_OVERWRITE", (const char *)-1, (const char *)32, (const char *)&k_EXTR_OVERWRITE,
      (const char *)"EXTR_PREFIX_ALL", (const char *)-1, (const char *)32, (const char *)&k_EXTR_PREFIX_ALL,
      (const char *)"EXTR_PREFIX_IF_EXISTS", (const char *)-1, (const char *)32, (const char *)&k_EXTR_PREFIX_IF_EXISTS,
      (const char *)"EXTR_PREFIX_INVALID", (const char *)-1, (const char *)32, (const char *)&k_EXTR_PREFIX_INVALID,
      (const char *)"EXTR_PREFIX_SAME", (const char *)-1, (const char *)32, (const char *)&k_EXTR_PREFIX_SAME,
      (const char *)"EXTR_REFS", (const char *)-1, (const char *)32, (const char *)&k_EXTR_REFS,
      (const char *)"EXTR_SKIP", (const char *)-1, (const char *)32, (const char *)&k_EXTR_SKIP,
      (const char *)"E_ALL", (const char *)-1, (const char *)32, (const char *)&k_E_ALL,
      (const char *)"E_COMPILE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_E_COMPILE_ERROR,
      (const char *)"E_COMPILE_WARNING", (const char *)-1, (const char *)32, (const char *)&k_E_COMPILE_WARNING,
      (const char *)"E_CORE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_E_CORE_ERROR,
      (const char *)"E_CORE_WARNING", (const char *)-1, (const char *)32, (const char *)&k_E_CORE_WARNING,
      (const char *)"E_DEPRECATED", (const char *)-1, (const char *)32, (const char *)&k_E_DEPRECATED,
      (const char *)"E_ERROR", (const char *)-1, (const char *)32, (const char *)&k_E_ERROR,
      (const char *)"E_NOTICE", (const char *)-1, (const char *)32, (const char *)&k_E_NOTICE,
      (const char *)"E_PARSE", (const char *)-1, (const char *)32, (const char *)&k_E_PARSE,
      (const char *)"E_RECOVERABLE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_E_RECOVERABLE_ERROR,
      (const char *)"E_STRICT", (const char *)-1, (const char *)32, (const char *)&k_E_STRICT,
      (const char *)"E_USER_DEPRECATED", (const char *)-1, (const char *)32, (const char *)&k_E_USER_DEPRECATED,
      (const char *)"E_USER_ERROR", (const char *)-1, (const char *)32, (const char *)&k_E_USER_ERROR,
      (const char *)"E_USER_NOTICE", (const char *)-1, (const char *)32, (const char *)&k_E_USER_NOTICE,
      (const char *)"E_USER_WARNING", (const char *)-1, (const char *)32, (const char *)&k_E_USER_WARNING,
      (const char *)"E_WARNING", (const char *)-1, (const char *)32, (const char *)&k_E_WARNING,
      (const char *)"FALSE", (const char *)-1, (const char *)2, (const char *)&k_FALSE,
      (const char *)"FB_UNSERIALIZE_NONSTRING_VALUE", (const char *)-1, (const char *)32, (const char *)&k_FB_UNSERIALIZE_NONSTRING_VALUE,
      (const char *)"FB_UNSERIALIZE_UNEXPECTED_ARRAY_KEY_TYPE", (const char *)-1, (const char *)32, (const char *)&k_FB_UNSERIALIZE_UNEXPECTED_ARRAY_KEY_TYPE,
      (const char *)"FB_UNSERIALIZE_UNEXPECTED_END", (const char *)-1, (const char *)32, (const char *)&k_FB_UNSERIALIZE_UNEXPECTED_END,
      (const char *)"FB_UNSERIALIZE_UNRECOGNIZED_OBJECT_TYPE", (const char *)-1, (const char *)32, (const char *)&k_FB_UNSERIALIZE_UNRECOGNIZED_OBJECT_TYPE,
      (const char *)"FILE_APPEND", (const char *)-1, (const char *)32, (const char *)&k_FILE_APPEND,
      (const char *)"FILE_IGNORE_NEW_LINES", (const char *)-1, (const char *)32, (const char *)&k_FILE_IGNORE_NEW_LINES,
      (const char *)"FILE_NO_DEFAULT_CONTEXT", (const char *)-1, (const char *)32, (const char *)&k_FILE_NO_DEFAULT_CONTEXT,
      (const char *)"FILE_SKIP_EMPTY_LINES", (const char *)-1, (const char *)32, (const char *)&k_FILE_SKIP_EMPTY_LINES,
      (const char *)"FILE_USE_INCLUDE_PATH", (const char *)-1, (const char *)32, (const char *)&k_FILE_USE_INCLUDE_PATH,
      (const char *)"FNM_CASEFOLD", (const char *)-1, (const char *)32, (const char *)&k_FNM_CASEFOLD,
      (const char *)"FNM_NOESCAPE", (const char *)-1, (const char *)32, (const char *)&k_FNM_NOESCAPE,
      (const char *)"FNM_PATHNAME", (const char *)-1, (const char *)32, (const char *)&k_FNM_PATHNAME,
      (const char *)"FNM_PERIOD", (const char *)-1, (const char *)32, (const char *)&k_FNM_PERIOD,
      (const char *)"FORCE_DEFLATE", (const char *)-1, (const char *)32, (const char *)&k_FORCE_DEFLATE,
      (const char *)"FORCE_GZIP", (const char *)-1, (const char *)32, (const char *)&k_FORCE_GZIP,
      (const char *)"FT_INTERNAL", (const char *)-1, (const char *)32, (const char *)&k_FT_INTERNAL,
      (const char *)"FT_NOT", (const char *)-1, (const char *)32, (const char *)&k_FT_NOT,
      (const char *)"FT_PEEK", (const char *)-1, (const char *)32, (const char *)&k_FT_PEEK,
      (const char *)"FT_PREFETCHTEXT", (const char *)-1, (const char *)32, (const char *)&k_FT_PREFETCHTEXT,
      (const char *)"FT_UID", (const char *)-1, (const char *)32, (const char *)&k_FT_UID,
      (const char *)"GD_BUNDLED", (const char *)-1, (const char *)32, (const char *)&k_GD_BUNDLED,
      (const char *)"GD_EXTRA_VERSION", (const char *)-1, (const char *)128, (const char *)&k_GD_EXTRA_VERSION,
      (const char *)"GD_MAJOR_VERSION", (const char *)-1, (const char *)32, (const char *)&k_GD_MAJOR_VERSION,
      (const char *)"GD_MINOR_VERSION", (const char *)-1, (const char *)32, (const char *)&k_GD_MINOR_VERSION,
      (const char *)"GD_RELEASE_VERSION", (const char *)-1, (const char *)32, (const char *)&k_GD_RELEASE_VERSION,
      (const char *)"GD_VERSION", (const char *)-1, (const char *)128, (const char *)&k_GD_VERSION,
      (const char *)"GLOBAL_STATE_IGNORE", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_STATE_IGNORE,
      (const char *)"GLOBAL_STATE_OVERWRITE", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_STATE_OVERWRITE,
      (const char *)"GLOBAL_STATE_SKIP", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_STATE_SKIP,
      (const char *)"GLOBAL_SYMBOL_CLASS_STATIC", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_CLASS_STATIC,
      (const char *)"GLOBAL_SYMBOL_DYNAMIC_CONSTANT", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_DYNAMIC_CONSTANT,
      (const char *)"GLOBAL_SYMBOL_FILE_INCLUDE", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_FILE_INCLUDE,
      (const char *)"GLOBAL_SYMBOL_GLOBAL_VARIABLE", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_GLOBAL_VARIABLE,
      (const char *)"GLOBAL_SYMBOL_REDECLARED_CLASS", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_REDECLARED_CLASS,
      (const char *)"GLOBAL_SYMBOL_REDECLARED_FUNCTION", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_REDECLARED_FUNCTION,
      (const char *)"GLOBAL_SYMBOL_STATIC_VARIABLE", (const char *)-1, (const char *)32, (const char *)&k_GLOBAL_SYMBOL_STATIC_VARIABLE,
      (const char *)"GLOB_AVAILABLE_FLAGS", (const char *)-1, (const char *)32, (const char *)&k_GLOB_AVAILABLE_FLAGS,
      (const char *)"GLOB_BRACE", (const char *)-1, (const char *)32, (const char *)&k_GLOB_BRACE,
      (const char *)"GLOB_ERR", (const char *)-1, (const char *)32, (const char *)&k_GLOB_ERR,
      (const char *)"GLOB_MARK", (const char *)-1, (const char *)32, (const char *)&k_GLOB_MARK,
      (const char *)"GLOB_NOCHECK", (const char *)-1, (const char *)32, (const char *)&k_GLOB_NOCHECK,
      (const char *)"GLOB_NOESCAPE", (const char *)-1, (const char *)32, (const char *)&k_GLOB_NOESCAPE,
      (const char *)"GLOB_NOSORT", (const char *)-1, (const char *)32, (const char *)&k_GLOB_NOSORT,
      (const char *)"GLOB_ONLYDIR", (const char *)-1, (const char *)32, (const char *)&k_GLOB_ONLYDIR,
      (const char *)"GRAPHEME_EXTR_COUNT", (const char *)-1, (const char *)32, (const char *)&k_GRAPHEME_EXTR_COUNT,
      (const char *)"GRAPHEME_EXTR_MAXBYTES", (const char *)-1, (const char *)32, (const char *)&k_GRAPHEME_EXTR_MAXBYTES,
      (const char *)"GRAPHEME_EXTR_MAXCHARS", (const char *)-1, (const char *)32, (const char *)&k_GRAPHEME_EXTR_MAXCHARS,
      (const char *)"HASH_HMAC", (const char *)-1, (const char *)32, (const char *)&k_HASH_HMAC,
      (const char *)"HPHP_TRIM_CHARLIST", (const char *)-1, (const char *)128, (const char *)&k_HPHP_TRIM_CHARLIST,
      (const char *)"HPHP_VERSION", (const char *)-1, (const char *)128, (const char *)&k_HPHP_VERSION,
      (const char *)"HTML_ENTITIES", (const char *)-1, (const char *)32, (const char *)&k_HTML_ENTITIES,
      (const char *)"HTML_SPECIALCHARS", (const char *)-1, (const char *)32, (const char *)&k_HTML_SPECIALCHARS,
      (const char *)"ICONV_IMPL", (const char *)-1, (const char *)128, (const char *)&k_ICONV_IMPL,
      (const char *)"ICONV_MIME_DECODE_CONTINUE_ON_ERROR", (const char *)-1, (const char *)32, (const char *)&k_ICONV_MIME_DECODE_CONTINUE_ON_ERROR,
      (const char *)"ICONV_MIME_DECODE_STRICT", (const char *)-1, (const char *)32, (const char *)&k_ICONV_MIME_DECODE_STRICT,
      (const char *)"ICONV_VERSION", (const char *)-1, (const char *)128, (const char *)&k_ICONV_VERSION,
      (const char *)"IDNA_CONTAINS_ACE_PREFIX", (const char *)-1, (const char *)32, (const char *)&k_IDNA_CONTAINS_ACE_PREFIX,
      (const char *)"IDNA_CONTAINS_MINUS", (const char *)-1, (const char *)32, (const char *)&k_IDNA_CONTAINS_MINUS,
      (const char *)"IDNA_CONTAINS_NON_LDH", (const char *)-1, (const char *)32, (const char *)&k_IDNA_CONTAINS_NON_LDH,
      (const char *)"IDNA_ICONV_ERROR", (const char *)-1, (const char *)32, (const char *)&k_IDNA_ICONV_ERROR,
      (const char *)"IDNA_INVALID_LENGTH", (const char *)-1, (const char *)32, (const char *)&k_IDNA_INVALID_LENGTH,
      (const char *)"IDNA_MALLOC_ERROR", (const char *)-1, (const char *)32, (const char *)&k_IDNA_MALLOC_ERROR,
      (const char *)"IDNA_NO_ACE_PREFIX", (const char *)-1, (const char *)32, (const char *)&k_IDNA_NO_ACE_PREFIX,
      (const char *)"IDNA_PUNYCODE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_IDNA_PUNYCODE_ERROR,
      (const char *)"IDNA_ROUNDTRIP_VERIFY_ERROR", (const char *)-1, (const char *)32, (const char *)&k_IDNA_ROUNDTRIP_VERIFY_ERROR,
      (const char *)"IDNA_STRINGPREP_ERROR", (const char *)-1, (const char *)32, (const char *)&k_IDNA_STRINGPREP_ERROR,
      (const char *)"IMAGETYPE_BMP", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_BMP,
      (const char *)"IMAGETYPE_GIF", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_GIF,
      (const char *)"IMAGETYPE_ICO", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_ICO,
      (const char *)"IMAGETYPE_IFF", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_IFF,
      (const char *)"IMAGETYPE_JB2", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_JB2,
      (const char *)"IMAGETYPE_JP2", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_JP2,
      (const char *)"IMAGETYPE_JPC", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_JPC,
      (const char *)"IMAGETYPE_JPEG", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_JPEG,
      (const char *)"IMAGETYPE_JPEG2000", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_JPEG2000,
      (const char *)"IMAGETYPE_JPX", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_JPX,
      (const char *)"IMAGETYPE_PNG", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_PNG,
      (const char *)"IMAGETYPE_PSD", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_PSD,
      (const char *)"IMAGETYPE_SWC", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_SWC,
      (const char *)"IMAGETYPE_SWF", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_SWF,
      (const char *)"IMAGETYPE_TIFF_II", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_TIFF_II,
      (const char *)"IMAGETYPE_TIFF_MM", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_TIFF_MM,
      (const char *)"IMAGETYPE_WBMP", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_WBMP,
      (const char *)"IMAGETYPE_XBM", (const char *)-1, (const char *)32, (const char *)&k_IMAGETYPE_XBM,
      (const char *)"IMAP_CLOSETIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_IMAP_CLOSETIMEOUT,
      (const char *)"IMAP_OPENTIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_IMAP_OPENTIMEOUT,
      (const char *)"IMAP_READTIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_IMAP_READTIMEOUT,
      (const char *)"IMAP_WRITETIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_IMAP_WRITETIMEOUT,
      (const char *)"IMG_ARC_CHORD", (const char *)-1, (const char *)32, (const char *)&k_IMG_ARC_CHORD,
      (const char *)"IMG_ARC_EDGED", (const char *)-1, (const char *)32, (const char *)&k_IMG_ARC_EDGED,
      (const char *)"IMG_ARC_NOFILL", (const char *)-1, (const char *)32, (const char *)&k_IMG_ARC_NOFILL,
      (const char *)"IMG_ARC_PIE", (const char *)-1, (const char *)32, (const char *)&k_IMG_ARC_PIE,
      (const char *)"IMG_ARC_ROUNDED", (const char *)-1, (const char *)32, (const char *)&k_IMG_ARC_ROUNDED,
      (const char *)"IMG_COLOR_BRUSHED", (const char *)-1, (const char *)32, (const char *)&k_IMG_COLOR_BRUSHED,
      (const char *)"IMG_COLOR_STYLED", (const char *)-1, (const char *)32, (const char *)&k_IMG_COLOR_STYLED,
      (const char *)"IMG_COLOR_STYLEDBRUSHED", (const char *)-1, (const char *)32, (const char *)&k_IMG_COLOR_STYLEDBRUSHED,
      (const char *)"IMG_COLOR_TILED", (const char *)-1, (const char *)32, (const char *)&k_IMG_COLOR_TILED,
      (const char *)"IMG_COLOR_TRANSPARENT", (const char *)-1, (const char *)32, (const char *)&k_IMG_COLOR_TRANSPARENT,
      (const char *)"IMG_EFFECT_ALPHABLEND", (const char *)-1, (const char *)32, (const char *)&k_IMG_EFFECT_ALPHABLEND,
      (const char *)"IMG_EFFECT_NORMAL", (const char *)-1, (const char *)32, (const char *)&k_IMG_EFFECT_NORMAL,
      (const char *)"IMG_EFFECT_OVERLAY", (const char *)-1, (const char *)32, (const char *)&k_IMG_EFFECT_OVERLAY,
      (const char *)"IMG_EFFECT_REPLACE", (const char *)-1, (const char *)32, (const char *)&k_IMG_EFFECT_REPLACE,
      (const char *)"IMG_FILTER_BRIGHTNESS", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_BRIGHTNESS,
      (const char *)"IMG_FILTER_COLORIZE", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_COLORIZE,
      (const char *)"IMG_FILTER_CONTRAST", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_CONTRAST,
      (const char *)"IMG_FILTER_EDGEDETECT", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_EDGEDETECT,
      (const char *)"IMG_FILTER_EMBOSS", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_EMBOSS,
      (const char *)"IMG_FILTER_GAUSSIAN_BLUR", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_GAUSSIAN_BLUR,
      (const char *)"IMG_FILTER_GRAYSCALE", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_GRAYSCALE,
      (const char *)"IMG_FILTER_MEAN_REMOVAL", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_MEAN_REMOVAL,
      (const char *)"IMG_FILTER_NEGATE", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_NEGATE,
      (const char *)"IMG_FILTER_SELECTIVE_BLUR", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_SELECTIVE_BLUR,
      (const char *)"IMG_FILTER_SMOOTH", (const char *)-1, (const char *)32, (const char *)&k_IMG_FILTER_SMOOTH,
      (const char *)"IMG_GD2_COMPRESSED", (const char *)-1, (const char *)32, (const char *)&k_IMG_GD2_COMPRESSED,
      (const char *)"IMG_GD2_RAW", (const char *)-1, (const char *)32, (const char *)&k_IMG_GD2_RAW,
      (const char *)"IMG_GIF", (const char *)-1, (const char *)32, (const char *)&k_IMG_GIF,
      (const char *)"IMG_JPEG", (const char *)-1, (const char *)32, (const char *)&k_IMG_JPEG,
      (const char *)"IMG_JPG", (const char *)-1, (const char *)32, (const char *)&k_IMG_JPG,
      (const char *)"IMG_PNG", (const char *)-1, (const char *)32, (const char *)&k_IMG_PNG,
      (const char *)"IMG_WBMP", (const char *)-1, (const char *)32, (const char *)&k_IMG_WBMP,
      (const char *)"IMG_XPM", (const char *)-1, (const char *)32, (const char *)&k_IMG_XPM,
      (const char *)"INF", (const char *)-1, (const char *)64, (const char *)&k_INF,
      (const char *)"INFO_ALL", (const char *)-1, (const char *)32, (const char *)&k_INFO_ALL,
      (const char *)"INFO_CONFIGURATION", (const char *)-1, (const char *)32, (const char *)&k_INFO_CONFIGURATION,
      (const char *)"INFO_CREDITS", (const char *)-1, (const char *)32, (const char *)&k_INFO_CREDITS,
      (const char *)"INFO_ENVIRONMENT", (const char *)-1, (const char *)32, (const char *)&k_INFO_ENVIRONMENT,
      (const char *)"INFO_GENERAL", (const char *)-1, (const char *)32, (const char *)&k_INFO_GENERAL,
      (const char *)"INFO_LICENSE", (const char *)-1, (const char *)32, (const char *)&k_INFO_LICENSE,
      (const char *)"INFO_MODULES", (const char *)-1, (const char *)32, (const char *)&k_INFO_MODULES,
      (const char *)"INFO_VARIABLES", (const char *)-1, (const char *)32, (const char *)&k_INFO_VARIABLES,
      (const char *)"INI_ALL", (const char *)-1, (const char *)32, (const char *)&k_INI_ALL,
      (const char *)"INI_PERDIR", (const char *)-1, (const char *)32, (const char *)&k_INI_PERDIR,
      (const char *)"INI_SCANNER_NORMAL", (const char *)-1, (const char *)32, (const char *)&k_INI_SCANNER_NORMAL,
      (const char *)"INI_SCANNER_RAW", (const char *)-1, (const char *)32, (const char *)&k_INI_SCANNER_RAW,
      (const char *)"INI_SYSTEM", (const char *)-1, (const char *)32, (const char *)&k_INI_SYSTEM,
      (const char *)"INI_USER", (const char *)-1, (const char *)32, (const char *)&k_INI_USER,
      (const char *)"INTL_MAX_LOCALE_LEN", (const char *)-1, (const char *)32, (const char *)&k_INTL_MAX_LOCALE_LEN,
      (const char *)"JSON_FB_EXTRA_ESCAPES", (const char *)-1, (const char *)32, (const char *)&k_JSON_FB_EXTRA_ESCAPES,
      (const char *)"JSON_FB_LOOSE", (const char *)-1, (const char *)32, (const char *)&k_JSON_FB_LOOSE,
      (const char *)"JSON_FB_UNLIMITED", (const char *)-1, (const char *)32, (const char *)&k_JSON_FB_UNLIMITED,
      (const char *)"JSON_FORCE_OBJECT", (const char *)-1, (const char *)32, (const char *)&k_JSON_FORCE_OBJECT,
      (const char *)"JSON_HEX_AMP", (const char *)-1, (const char *)32, (const char *)&k_JSON_HEX_AMP,
      (const char *)"JSON_HEX_APOS", (const char *)-1, (const char *)32, (const char *)&k_JSON_HEX_APOS,
      (const char *)"JSON_HEX_QUOT", (const char *)-1, (const char *)32, (const char *)&k_JSON_HEX_QUOT,
      (const char *)"JSON_HEX_TAG", (const char *)-1, (const char *)32, (const char *)&k_JSON_HEX_TAG,
      (const char *)"JSON_NUMERIC_CHECK", (const char *)-1, (const char *)32, (const char *)&k_JSON_NUMERIC_CHECK,
      (const char *)"JSON_PRETTY_PRINT", (const char *)-1, (const char *)32, (const char *)&k_JSON_PRETTY_PRINT,
      (const char *)"JSON_UNESCAPED_SLASHES", (const char *)-1, (const char *)32, (const char *)&k_JSON_UNESCAPED_SLASHES,
      (const char *)"LATT_HASCHILDREN", (const char *)-1, (const char *)32, (const char *)&k_LATT_HASCHILDREN,
      (const char *)"LATT_HASNOCHILDREN", (const char *)-1, (const char *)32, (const char *)&k_LATT_HASNOCHILDREN,
      (const char *)"LATT_MARKED", (const char *)-1, (const char *)32, (const char *)&k_LATT_MARKED,
      (const char *)"LATT_NOINFERIORS", (const char *)-1, (const char *)32, (const char *)&k_LATT_NOINFERIORS,
      (const char *)"LATT_NOSELECT", (const char *)-1, (const char *)32, (const char *)&k_LATT_NOSELECT,
      (const char *)"LATT_REFERRAL", (const char *)-1, (const char *)32, (const char *)&k_LATT_REFERRAL,
      (const char *)"LATT_UNMARKED", (const char *)-1, (const char *)32, (const char *)&k_LATT_UNMARKED,
      (const char *)"LC_ALL", (const char *)-1, (const char *)32, (const char *)&k_LC_ALL,
      (const char *)"LC_COLLATE", (const char *)-1, (const char *)32, (const char *)&k_LC_COLLATE,
      (const char *)"LC_CTYPE", (const char *)-1, (const char *)32, (const char *)&k_LC_CTYPE,
      (const char *)"LC_MESSAGES", (const char *)-1, (const char *)32, (const char *)&k_LC_MESSAGES,
      (const char *)"LC_MONETARY", (const char *)-1, (const char *)32, (const char *)&k_LC_MONETARY,
      (const char *)"LC_NUMERIC", (const char *)-1, (const char *)32, (const char *)&k_LC_NUMERIC,
      (const char *)"LC_TIME", (const char *)-1, (const char *)32, (const char *)&k_LC_TIME,
      (const char *)"LDAP_DEREF_ALWAYS", (const char *)-1, (const char *)32, (const char *)&k_LDAP_DEREF_ALWAYS,
      (const char *)"LDAP_DEREF_FINDING", (const char *)-1, (const char *)32, (const char *)&k_LDAP_DEREF_FINDING,
      (const char *)"LDAP_DEREF_NEVER", (const char *)-1, (const char *)32, (const char *)&k_LDAP_DEREF_NEVER,
      (const char *)"LDAP_DEREF_SEARCHING", (const char *)-1, (const char *)32, (const char *)&k_LDAP_DEREF_SEARCHING,
      (const char *)"LDAP_OPT_CLIENT_CONTROLS", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_CLIENT_CONTROLS,
      (const char *)"LDAP_OPT_DEBUG_LEVEL", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_DEBUG_LEVEL,
      (const char *)"LDAP_OPT_DEREF", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_DEREF,
      (const char *)"LDAP_OPT_ERROR_NUMBER", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_ERROR_NUMBER,
      (const char *)"LDAP_OPT_ERROR_STRING", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_ERROR_STRING,
      (const char *)"LDAP_OPT_HOST_NAME", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_HOST_NAME,
      (const char *)"LDAP_OPT_MATCHED_DN", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_MATCHED_DN,
      (const char *)"LDAP_OPT_PROTOCOL_VERSION", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_PROTOCOL_VERSION,
      (const char *)"LDAP_OPT_REFERRALS", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_REFERRALS,
      (const char *)"LDAP_OPT_RESTART", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_RESTART,
      (const char *)"LDAP_OPT_SERVER_CONTROLS", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_SERVER_CONTROLS,
      (const char *)"LDAP_OPT_SIZELIMIT", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_SIZELIMIT,
      (const char *)"LDAP_OPT_TIMELIMIT", (const char *)-1, (const char *)32, (const char *)&k_LDAP_OPT_TIMELIMIT,
      (const char *)"LIBXML_COMPACT", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_COMPACT,
      (const char *)"LIBXML_DOTTED_VERSION", (const char *)-1, (const char *)128, (const char *)&k_LIBXML_DOTTED_VERSION,
      (const char *)"LIBXML_DTDATTR", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_DTDATTR,
      (const char *)"LIBXML_DTDLOAD", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_DTDLOAD,
      (const char *)"LIBXML_DTDVALID", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_DTDVALID,
      (const char *)"LIBXML_ERR_ERROR", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_ERR_ERROR,
      (const char *)"LIBXML_ERR_FATAL", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_ERR_FATAL,
      (const char *)"LIBXML_ERR_NONE", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_ERR_NONE,
      (const char *)"LIBXML_ERR_WARNING", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_ERR_WARNING,
      (const char *)"LIBXML_NOBLANKS", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOBLANKS,
      (const char *)"LIBXML_NOCDATA", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOCDATA,
      (const char *)"LIBXML_NOEMPTYTAG", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOEMPTYTAG,
      (const char *)"LIBXML_NOENT", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOENT,
      (const char *)"LIBXML_NOERROR", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOERROR,
      (const char *)"LIBXML_NONET", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NONET,
      (const char *)"LIBXML_NOWARNING", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOWARNING,
      (const char *)"LIBXML_NOXMLDECL", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NOXMLDECL,
      (const char *)"LIBXML_NSCLEAN", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_NSCLEAN,
      (const char *)"LIBXML_VERSION", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_VERSION,
      (const char *)"LIBXML_XINCLUDE", (const char *)-1, (const char *)32, (const char *)&k_LIBXML_XINCLUDE,
      (const char *)"LOCK_EX", (const char *)-1, (const char *)32, (const char *)&k_LOCK_EX,
      (const char *)"LOCK_NB", (const char *)-1, (const char *)32, (const char *)&k_LOCK_NB,
      (const char *)"LOCK_SH", (const char *)-1, (const char *)32, (const char *)&k_LOCK_SH,
      (const char *)"LOCK_UN", (const char *)-1, (const char *)32, (const char *)&k_LOCK_UN,
      (const char *)"LOG_ALERT", (const char *)-1, (const char *)32, (const char *)&k_LOG_ALERT,
      (const char *)"LOG_AUTH", (const char *)-1, (const char *)32, (const char *)&k_LOG_AUTH,
      (const char *)"LOG_AUTHPRIV", (const char *)-1, (const char *)32, (const char *)&k_LOG_AUTHPRIV,
      (const char *)"LOG_CONS", (const char *)-1, (const char *)32, (const char *)&k_LOG_CONS,
      (const char *)"LOG_CRIT", (const char *)-1, (const char *)32, (const char *)&k_LOG_CRIT,
      (const char *)"LOG_CRON", (const char *)-1, (const char *)32, (const char *)&k_LOG_CRON,
      (const char *)"LOG_DAEMON", (const char *)-1, (const char *)32, (const char *)&k_LOG_DAEMON,
      (const char *)"LOG_DEBUG", (const char *)-1, (const char *)32, (const char *)&k_LOG_DEBUG,
      (const char *)"LOG_EMERG", (const char *)-1, (const char *)32, (const char *)&k_LOG_EMERG,
      (const char *)"LOG_ERR", (const char *)-1, (const char *)32, (const char *)&k_LOG_ERR,
      (const char *)"LOG_INFO", (const char *)-1, (const char *)32, (const char *)&k_LOG_INFO,
      (const char *)"LOG_KERN", (const char *)-1, (const char *)32, (const char *)&k_LOG_KERN,
      (const char *)"LOG_LOCAL0", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL0,
      (const char *)"LOG_LOCAL1", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL1,
      (const char *)"LOG_LOCAL2", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL2,
      (const char *)"LOG_LOCAL3", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL3,
      (const char *)"LOG_LOCAL4", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL4,
      (const char *)"LOG_LOCAL5", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL5,
      (const char *)"LOG_LOCAL6", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL6,
      (const char *)"LOG_LOCAL7", (const char *)-1, (const char *)32, (const char *)&k_LOG_LOCAL7,
      (const char *)"LOG_LPR", (const char *)-1, (const char *)32, (const char *)&k_LOG_LPR,
      (const char *)"LOG_MAIL", (const char *)-1, (const char *)32, (const char *)&k_LOG_MAIL,
      (const char *)"LOG_NDELAY", (const char *)-1, (const char *)32, (const char *)&k_LOG_NDELAY,
      (const char *)"LOG_NEWS", (const char *)-1, (const char *)32, (const char *)&k_LOG_NEWS,
      (const char *)"LOG_NOTICE", (const char *)-1, (const char *)32, (const char *)&k_LOG_NOTICE,
      (const char *)"LOG_NOWAIT", (const char *)-1, (const char *)32, (const char *)&k_LOG_NOWAIT,
      (const char *)"LOG_ODELAY", (const char *)-1, (const char *)32, (const char *)&k_LOG_ODELAY,
      (const char *)"LOG_PERROR", (const char *)-1, (const char *)32, (const char *)&k_LOG_PERROR,
      (const char *)"LOG_PID", (const char *)-1, (const char *)32, (const char *)&k_LOG_PID,
      (const char *)"LOG_SYSLOG", (const char *)-1, (const char *)32, (const char *)&k_LOG_SYSLOG,
      (const char *)"LOG_USER", (const char *)-1, (const char *)32, (const char *)&k_LOG_USER,
      (const char *)"LOG_UUCP", (const char *)-1, (const char *)32, (const char *)&k_LOG_UUCP,
      (const char *)"LOG_WARNING", (const char *)-1, (const char *)32, (const char *)&k_LOG_WARNING,
      (const char *)"MB_CASE_LOWER", (const char *)-1, (const char *)32, (const char *)&k_MB_CASE_LOWER,
      (const char *)"MB_CASE_TITLE", (const char *)-1, (const char *)32, (const char *)&k_MB_CASE_TITLE,
      (const char *)"MB_CASE_UPPER", (const char *)-1, (const char *)32, (const char *)&k_MB_CASE_UPPER,
      (const char *)"MB_OVERLOAD_MAIL", (const char *)-1, (const char *)32, (const char *)&k_MB_OVERLOAD_MAIL,
      (const char *)"MB_OVERLOAD_REGEX", (const char *)-1, (const char *)32, (const char *)&k_MB_OVERLOAD_REGEX,
      (const char *)"MB_OVERLOAD_STRING", (const char *)-1, (const char *)32, (const char *)&k_MB_OVERLOAD_STRING,
      (const char *)"MCC_ACCESSPOINT_DOWN", (const char *)-1, (const char *)32, (const char *)&k_MCC_ACCESSPOINT_DOWN,
      (const char *)"MCC_ACCESSPOINT_UP", (const char *)-1, (const char *)32, (const char *)&k_MCC_ACCESSPOINT_UP,
      (const char *)"MCC_ARG_COMPRESSION_THRESHOLD", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_COMPRESSION_THRESHOLD,
      (const char *)"MCC_ARG_CONN_NTRIES", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_CONN_NTRIES,
      (const char *)"MCC_ARG_CONN_TMO", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_CONN_TMO,
      (const char *)"MCC_ARG_CONSISTENT_HASHING_PREFIXES", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_CONSISTENT_HASHING_PREFIXES,
      (const char *)"MCC_ARG_DEBUG", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DEBUG,
      (const char *)"MCC_ARG_DEBUG_LOGFILE", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DEBUG_LOGFILE,
      (const char *)"MCC_ARG_DEFAULT_PREFIX", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DEFAULT_PREFIX,
      (const char *)"MCC_ARG_DELETE_PROXY", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DELETE_PROXY,
      (const char *)"MCC_ARG_DGRAM_NTRIES", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DGRAM_NTRIES,
      (const char *)"MCC_ARG_DGRAM_TMO_THRESHOLD", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DGRAM_TMO_THRESHOLD,
      (const char *)"MCC_ARG_DGRAM_TMO_WEIGHT", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_DGRAM_TMO_WEIGHT,
      (const char *)"MCC_ARG_FB_SERIALIZE_ENABLED", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_FB_SERIALIZE_ENABLED,
      (const char *)"MCC_ARG_MIRROR_CFG", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_MIRROR_CFG,
      (const char *)"MCC_ARG_MIRROR_CFG_MODEL", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_MIRROR_CFG_MODEL,
      (const char *)"MCC_ARG_MIRROR_CFG_NAME", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_MIRROR_CFG_NAME,
      (const char *)"MCC_ARG_MIRROR_CFG_SERVERPOOLS", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_MIRROR_CFG_SERVERPOOLS,
      (const char *)"MCC_ARG_NODELAY", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_NODELAY,
      (const char *)"MCC_ARG_NPOOLPREFIX", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_NPOOLPREFIX,
      (const char *)"MCC_ARG_NZLIB_COMPRESSION", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_NZLIB_COMPRESSION,
      (const char *)"MCC_ARG_PERSISTENT", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_PERSISTENT,
      (const char *)"MCC_ARG_POLL_TMO", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_POLL_TMO,
      (const char *)"MCC_ARG_PROXY", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_PROXY,
      (const char *)"MCC_ARG_PROXY_OPS", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_PROXY_OPS,
      (const char *)"MCC_ARG_SERVERS", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_SERVERS,
      (const char *)"MCC_ARG_SERVER_RETRY_TMO_MS", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_SERVER_RETRY_TMO_MS,
      (const char *)"MCC_ARG_TCP_INACTIVITY_TIME", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_TCP_INACTIVITY_TIME,
      (const char *)"MCC_ARG_TMO", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_TMO,
      (const char *)"MCC_ARG_UDP_REPLY_PORTS", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_UDP_REPLY_PORTS,
      (const char *)"MCC_ARG_WINDOW_MAX", (const char *)-1, (const char *)128, (const char *)&k_MCC_ARG_WINDOW_MAX,
      (const char *)"MCC_COMPRESSION_THRESHHOLD", (const char *)-1, (const char *)32, (const char *)&k_MCC_COMPRESSION_THRESHHOLD,
      (const char *)"MCC_CONN_NTRIES", (const char *)-1, (const char *)32, (const char *)&k_MCC_CONN_NTRIES,
      (const char *)"MCC_CONN_TMO_MS", (const char *)-1, (const char *)32, (const char *)&k_MCC_CONN_TMO_MS,
      (const char *)"MCC_CONSISTENCY_IGNORE", (const char *)-1, (const char *)32, (const char *)&k_MCC_CONSISTENCY_IGNORE,
      (const char *)"MCC_CONSISTENCY_MATCH_ALL", (const char *)-1, (const char *)32, (const char *)&k_MCC_CONSISTENCY_MATCH_ALL,
      (const char *)"MCC_CONSISTENCY_MATCH_HITS", (const char *)-1, (const char *)32, (const char *)&k_MCC_CONSISTENCY_MATCH_HITS,
      (const char *)"MCC_CONSISTENCY_MATCH_HITS_SUPERCEDES", (const char *)-1, (const char *)32, (const char *)&k_MCC_CONSISTENCY_MATCH_HITS_SUPERCEDES,
      (const char *)"MCC_DELETE_DELETED", (const char *)-1, (const char *)32, (const char *)&k_MCC_DELETE_DELETED,
      (const char *)"MCC_DELETE_ERROR_LOG", (const char *)-1, (const char *)32, (const char *)&k_MCC_DELETE_ERROR_LOG,
      (const char *)"MCC_DELETE_ERROR_NOLOG", (const char *)-1, (const char *)32, (const char *)&k_MCC_DELETE_ERROR_NOLOG,
      (const char *)"MCC_DELETE_NOTFOUND", (const char *)-1, (const char *)32, (const char *)&k_MCC_DELETE_NOTFOUND,
      (const char *)"MCC_DGRAM_NTRIES", (const char *)-1, (const char *)32, (const char *)&k_MCC_DGRAM_NTRIES,
      (const char *)"MCC_DGRAM_TMO_THRESHOLD", (const char *)-1, (const char *)32, (const char *)&k_MCC_DGRAM_TMO_THRESHOLD,
      (const char *)"MCC_DGRAM_TMO_WEIGHT", (const char *)-1, (const char *)32, (const char *)&k_MCC_DGRAM_TMO_WEIGHT,
      (const char *)"MCC_GET_RECORD_ERRORS", (const char *)-1, (const char *)32, (const char *)&k_MCC_GET_RECORD_ERRORS,
      (const char *)"MCC_HAVE_DEBUG_LOG", (const char *)-1, (const char *)32, (const char *)&k_MCC_HAVE_DEBUG_LOG,
      (const char *)"MCC_HAVE_FB_SERIALIZATION", (const char *)-1, (const char *)32, (const char *)&k_MCC_HAVE_FB_SERIALIZATION,
      (const char *)"MCC_HAVE_ZLIB_COMPRESSION", (const char *)-1, (const char *)32, (const char *)&k_MCC_HAVE_ZLIB_COMPRESSION,
      (const char *)"MCC_IPPROTO_TCP", (const char *)-1, (const char *)32, (const char *)&k_MCC_IPPROTO_TCP,
      (const char *)"MCC_IPPROTO_UDP", (const char *)-1, (const char *)32, (const char *)&k_MCC_IPPROTO_UDP,
      (const char *)"MCC_MTU", (const char *)-1, (const char *)32, (const char *)&k_MCC_MTU,
      (const char *)"MCC_NODELAY", (const char *)-1, (const char *)32, (const char *)&k_MCC_NODELAY,
      (const char *)"MCC_POLL_TMO_US", (const char *)-1, (const char *)32, (const char *)&k_MCC_POLL_TMO_US,
      (const char *)"MCC_POOLPREFIX_LEN", (const char *)-1, (const char *)32, (const char *)&k_MCC_POOLPREFIX_LEN,
      (const char *)"MCC_PORT_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_MCC_PORT_DEFAULT,
      (const char *)"MCC_PROXY_ARITH_OP", (const char *)-1, (const char *)32, (const char *)&k_MCC_PROXY_ARITH_OP,
      (const char *)"MCC_PROXY_DELETE_OP", (const char *)-1, (const char *)32, (const char *)&k_MCC_PROXY_DELETE_OP,
      (const char *)"MCC_PROXY_GET_OP", (const char *)-1, (const char *)32, (const char *)&k_MCC_PROXY_GET_OP,
      (const char *)"MCC_PROXY_UPDATE_OP", (const char *)-1, (const char *)32, (const char *)&k_MCC_PROXY_UPDATE_OP,
      (const char *)"MCC_RXDGRAM_MAX", (const char *)-1, (const char *)32, (const char *)&k_MCC_RXDGRAM_MAX,
      (const char *)"MCC_SERVER_DISABLED", (const char *)-1, (const char *)32, (const char *)&k_MCC_SERVER_DISABLED,
      (const char *)"MCC_SERVER_DOWN", (const char *)-1, (const char *)32, (const char *)&k_MCC_SERVER_DOWN,
      (const char *)"MCC_SERVER_RETRY_TMO_MS", (const char *)-1, (const char *)32, (const char *)&k_MCC_SERVER_RETRY_TMO_MS,
      (const char *)"MCC_SERVER_UP", (const char *)-1, (const char *)32, (const char *)&k_MCC_SERVER_UP,
      (const char *)"MCC_TCP_INACTIVITY_TMO_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_MCC_TCP_INACTIVITY_TMO_DEFAULT,
      (const char *)"MCC_TMO_MS", (const char *)-1, (const char *)32, (const char *)&k_MCC_TMO_MS,
      (const char *)"MCC_UDP_REPLY_PORTS", (const char *)-1, (const char *)32, (const char *)&k_MCC_UDP_REPLY_PORTS,
      (const char *)"MCC_WINDOW_MAX", (const char *)-1, (const char *)32, (const char *)&k_MCC_WINDOW_MAX,
      (const char *)"MCRYPT_3DES", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_3DES,
      (const char *)"MCRYPT_ARCFOUR", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_ARCFOUR,
      (const char *)"MCRYPT_ARCFOUR_IV", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_ARCFOUR_IV,
      (const char *)"MCRYPT_BLOWFISH", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_BLOWFISH,
      (const char *)"MCRYPT_BLOWFISH_COMPAT", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_BLOWFISH_COMPAT,
      (const char *)"MCRYPT_CAST_128", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_CAST_128,
      (const char *)"MCRYPT_CAST_256", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_CAST_256,
      (const char *)"MCRYPT_CRYPT", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_CRYPT,
      (const char *)"MCRYPT_DECRYPT", (const char *)-1, (const char *)32, (const char *)&k_MCRYPT_DECRYPT,
      (const char *)"MCRYPT_DES", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_DES,
      (const char *)"MCRYPT_DEV_RANDOM", (const char *)-1, (const char *)32, (const char *)&k_MCRYPT_DEV_RANDOM,
      (const char *)"MCRYPT_DEV_URANDOM", (const char *)-1, (const char *)32, (const char *)&k_MCRYPT_DEV_URANDOM,
      (const char *)"MCRYPT_ENCRYPT", (const char *)-1, (const char *)32, (const char *)&k_MCRYPT_ENCRYPT,
      (const char *)"MCRYPT_ENIGNA", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_ENIGNA,
      (const char *)"MCRYPT_GOST", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_GOST,
      (const char *)"MCRYPT_IDEA", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_IDEA,
      (const char *)"MCRYPT_LOKI97", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_LOKI97,
      (const char *)"MCRYPT_MARS", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MARS,
      (const char *)"MCRYPT_MODE_CBC", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MODE_CBC,
      (const char *)"MCRYPT_MODE_CFB", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MODE_CFB,
      (const char *)"MCRYPT_MODE_ECB", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MODE_ECB,
      (const char *)"MCRYPT_MODE_NOFB", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MODE_NOFB,
      (const char *)"MCRYPT_MODE_OFB", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MODE_OFB,
      (const char *)"MCRYPT_MODE_STREAM", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_MODE_STREAM,
      (const char *)"MCRYPT_PANAMA", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_PANAMA,
      (const char *)"MCRYPT_RAND", (const char *)-1, (const char *)32, (const char *)&k_MCRYPT_RAND,
      (const char *)"MCRYPT_RC2", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_RC2,
      (const char *)"MCRYPT_RC6", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_RC6,
      (const char *)"MCRYPT_RIJNDAEL_128", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_RIJNDAEL_128,
      (const char *)"MCRYPT_RIJNDAEL_192", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_RIJNDAEL_192,
      (const char *)"MCRYPT_RIJNDAEL_256", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_RIJNDAEL_256,
      (const char *)"MCRYPT_SAFER128", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_SAFER128,
      (const char *)"MCRYPT_SAFER64", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_SAFER64,
      (const char *)"MCRYPT_SAFERPLUS", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_SAFERPLUS,
      (const char *)"MCRYPT_SERPENT", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_SERPENT,
      (const char *)"MCRYPT_SKIPJACK", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_SKIPJACK,
      (const char *)"MCRYPT_THREEWAY", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_THREEWAY,
      (const char *)"MCRYPT_TRIPLEDES", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_TRIPLEDES,
      (const char *)"MCRYPT_TWOFISH", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_TWOFISH,
      (const char *)"MCRYPT_WAKE", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_WAKE,
      (const char *)"MCRYPT_XTEA", (const char *)-1, (const char *)128, (const char *)&k_MCRYPT_XTEA,
      (const char *)"MON_1", (const char *)-1, (const char *)32, (const char *)&k_MON_1,
      (const char *)"MON_10", (const char *)-1, (const char *)32, (const char *)&k_MON_10,
      (const char *)"MON_11", (const char *)-1, (const char *)32, (const char *)&k_MON_11,
      (const char *)"MON_12", (const char *)-1, (const char *)32, (const char *)&k_MON_12,
      (const char *)"MON_2", (const char *)-1, (const char *)32, (const char *)&k_MON_2,
      (const char *)"MON_3", (const char *)-1, (const char *)32, (const char *)&k_MON_3,
      (const char *)"MON_4", (const char *)-1, (const char *)32, (const char *)&k_MON_4,
      (const char *)"MON_5", (const char *)-1, (const char *)32, (const char *)&k_MON_5,
      (const char *)"MON_6", (const char *)-1, (const char *)32, (const char *)&k_MON_6,
      (const char *)"MON_7", (const char *)-1, (const char *)32, (const char *)&k_MON_7,
      (const char *)"MON_8", (const char *)-1, (const char *)32, (const char *)&k_MON_8,
      (const char *)"MON_9", (const char *)-1, (const char *)32, (const char *)&k_MON_9,
      (const char *)"MSG_DONTROUTE", (const char *)-1, (const char *)32, (const char *)&k_MSG_DONTROUTE,
      (const char *)"MSG_EAGAIN", (const char *)-1, (const char *)32, (const char *)&k_MSG_EAGAIN,
      (const char *)"MSG_ENOMSG", (const char *)-1, (const char *)32, (const char *)&k_MSG_ENOMSG,
      (const char *)"MSG_EOF", (const char *)-1, (const char *)32, (const char *)&k_MSG_EOF,
      (const char *)"MSG_EOR", (const char *)-1, (const char *)32, (const char *)&k_MSG_EOR,
      (const char *)"MSG_EXCEPT", (const char *)-1, (const char *)32, (const char *)&k_MSG_EXCEPT,
      (const char *)"MSG_IPC_NOWAIT", (const char *)-1, (const char *)32, (const char *)&k_MSG_IPC_NOWAIT,
      (const char *)"MSG_NOERROR", (const char *)-1, (const char *)32, (const char *)&k_MSG_NOERROR,
      (const char *)"MSG_OOB", (const char *)-1, (const char *)32, (const char *)&k_MSG_OOB,
      (const char *)"MSG_PEEK", (const char *)-1, (const char *)32, (const char *)&k_MSG_PEEK,
      (const char *)"MSG_WAITALL", (const char *)-1, (const char *)32, (const char *)&k_MSG_WAITALL,
      (const char *)"MW_AbsoluteIntent", (const char *)-1, (const char *)32, (const char *)&k_MW_AbsoluteIntent,
      (const char *)"MW_AddCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_AddCompositeOp,
      (const char *)"MW_AddEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_AddEvaluateOperator,
      (const char *)"MW_AddNoisePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_AddNoisePreview,
      (const char *)"MW_AllChannels", (const char *)-1, (const char *)32, (const char *)&k_MW_AllChannels,
      (const char *)"MW_AlphaChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_AlphaChannel,
      (const char *)"MW_AndEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_AndEvaluateOperator,
      (const char *)"MW_AnyStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_AnyStretch,
      (const char *)"MW_AnyStyle", (const char *)-1, (const char *)32, (const char *)&k_MW_AnyStyle,
      (const char *)"MW_AreaResource", (const char *)-1, (const char *)32, (const char *)&k_MW_AreaResource,
      (const char *)"MW_AtopCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_AtopCompositeOp,
      (const char *)"MW_BZipCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_BZipCompression,
      (const char *)"MW_BackgroundDispose", (const char *)-1, (const char *)32, (const char *)&k_MW_BackgroundDispose,
      (const char *)"MW_BesselFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_BesselFilter,
      (const char *)"MW_BevelJoin", (const char *)-1, (const char *)32, (const char *)&k_MW_BevelJoin,
      (const char *)"MW_BilevelType", (const char *)-1, (const char *)32, (const char *)&k_MW_BilevelType,
      (const char *)"MW_BlackChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_BlackChannel,
      (const char *)"MW_BlackmanFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_BlackmanFilter,
      (const char *)"MW_BlendCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_BlendCompositeOp,
      (const char *)"MW_BlobError", (const char *)-1, (const char *)32, (const char *)&k_MW_BlobError,
      (const char *)"MW_BlobFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_BlobFatalError,
      (const char *)"MW_BlobWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_BlobWarning,
      (const char *)"MW_BlueChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_BlueChannel,
      (const char *)"MW_BlurPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_BlurPreview,
      (const char *)"MW_BoxFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_BoxFilter,
      (const char *)"MW_BrightnessPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_BrightnessPreview,
      (const char *)"MW_BumpmapCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_BumpmapCompositeOp,
      (const char *)"MW_ButtCap", (const char *)-1, (const char *)32, (const char *)&k_MW_ButtCap,
      (const char *)"MW_CMYKColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_CMYKColorspace,
      (const char *)"MW_CacheError", (const char *)-1, (const char *)32, (const char *)&k_MW_CacheError,
      (const char *)"MW_CacheFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_CacheFatalError,
      (const char *)"MW_CacheWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_CacheWarning,
      (const char *)"MW_CatromFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_CatromFilter,
      (const char *)"MW_CenterAlign", (const char *)-1, (const char *)32, (const char *)&k_MW_CenterAlign,
      (const char *)"MW_CenterGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_CenterGravity,
      (const char *)"MW_CharPixel", (const char *)-1, (const char *)32, (const char *)&k_MW_CharPixel,
      (const char *)"MW_CharcoalDrawingPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_CharcoalDrawingPreview,
      (const char *)"MW_ClearCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ClearCompositeOp,
      (const char *)"MW_CoderError", (const char *)-1, (const char *)32, (const char *)&k_MW_CoderError,
      (const char *)"MW_CoderFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_CoderFatalError,
      (const char *)"MW_CoderWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_CoderWarning,
      (const char *)"MW_ColorBurnCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ColorBurnCompositeOp,
      (const char *)"MW_ColorDodgeCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ColorDodgeCompositeOp,
      (const char *)"MW_ColorSeparationMatteType", (const char *)-1, (const char *)32, (const char *)&k_MW_ColorSeparationMatteType,
      (const char *)"MW_ColorSeparationType", (const char *)-1, (const char *)32, (const char *)&k_MW_ColorSeparationType,
      (const char *)"MW_ColorizeCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ColorizeCompositeOp,
      (const char *)"MW_ConcatenateMode", (const char *)-1, (const char *)32, (const char *)&k_MW_ConcatenateMode,
      (const char *)"MW_CondensedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_CondensedStretch,
      (const char *)"MW_ConfigureError", (const char *)-1, (const char *)32, (const char *)&k_MW_ConfigureError,
      (const char *)"MW_ConfigureFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_ConfigureFatalError,
      (const char *)"MW_ConfigureWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_ConfigureWarning,
      (const char *)"MW_ConstantVirtualPixelMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_ConstantVirtualPixelMethod,
      (const char *)"MW_CopyBlackCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyBlackCompositeOp,
      (const char *)"MW_CopyBlueCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyBlueCompositeOp,
      (const char *)"MW_CopyCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyCompositeOp,
      (const char *)"MW_CopyCyanCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyCyanCompositeOp,
      (const char *)"MW_CopyGreenCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyGreenCompositeOp,
      (const char *)"MW_CopyMagentaCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyMagentaCompositeOp,
      (const char *)"MW_CopyOpacityCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyOpacityCompositeOp,
      (const char *)"MW_CopyRedCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyRedCompositeOp,
      (const char *)"MW_CopyYellowCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_CopyYellowCompositeOp,
      (const char *)"MW_CorruptImageError", (const char *)-1, (const char *)32, (const char *)&k_MW_CorruptImageError,
      (const char *)"MW_CorruptImageFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_CorruptImageFatalError,
      (const char *)"MW_CorruptImageWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_CorruptImageWarning,
      (const char *)"MW_CubicFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_CubicFilter,
      (const char *)"MW_CyanChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_CyanChannel,
      (const char *)"MW_DarkenCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DarkenCompositeOp,
      (const char *)"MW_DelegateError", (const char *)-1, (const char *)32, (const char *)&k_MW_DelegateError,
      (const char *)"MW_DelegateFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_DelegateFatalError,
      (const char *)"MW_DelegateWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_DelegateWarning,
      (const char *)"MW_DespecklePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_DespecklePreview,
      (const char *)"MW_DifferenceCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DifferenceCompositeOp,
      (const char *)"MW_DiskResource", (const char *)-1, (const char *)32, (const char *)&k_MW_DiskResource,
      (const char *)"MW_DisplaceCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DisplaceCompositeOp,
      (const char *)"MW_DissolveCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DissolveCompositeOp,
      (const char *)"MW_DivideEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_DivideEvaluateOperator,
      (const char *)"MW_DoublePixel", (const char *)-1, (const char *)32, (const char *)&k_MW_DoublePixel,
      (const char *)"MW_DrawError", (const char *)-1, (const char *)32, (const char *)&k_MW_DrawError,
      (const char *)"MW_DrawFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_DrawFatalError,
      (const char *)"MW_DrawWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_DrawWarning,
      (const char *)"MW_DstAtopCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DstAtopCompositeOp,
      (const char *)"MW_DstCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DstCompositeOp,
      (const char *)"MW_DstInCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DstInCompositeOp,
      (const char *)"MW_DstOutCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DstOutCompositeOp,
      (const char *)"MW_DstOverCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_DstOverCompositeOp,
      (const char *)"MW_DullPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_DullPreview,
      (const char *)"MW_EastGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_EastGravity,
      (const char *)"MW_EdgeDetectPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_EdgeDetectPreview,
      (const char *)"MW_EdgeVirtualPixelMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_EdgeVirtualPixelMethod,
      (const char *)"MW_ErrorException", (const char *)-1, (const char *)32, (const char *)&k_MW_ErrorException,
      (const char *)"MW_EvenOddRule", (const char *)-1, (const char *)32, (const char *)&k_MW_EvenOddRule,
      (const char *)"MW_ExclusionCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ExclusionCompositeOp,
      (const char *)"MW_ExpandedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_ExpandedStretch,
      (const char *)"MW_ExtraCondensedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_ExtraCondensedStretch,
      (const char *)"MW_ExtraExpandedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_ExtraExpandedStretch,
      (const char *)"MW_FatalErrorException", (const char *)-1, (const char *)32, (const char *)&k_MW_FatalErrorException,
      (const char *)"MW_FaxCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_FaxCompression,
      (const char *)"MW_FileOpenError", (const char *)-1, (const char *)32, (const char *)&k_MW_FileOpenError,
      (const char *)"MW_FileOpenFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_FileOpenFatalError,
      (const char *)"MW_FileOpenWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_FileOpenWarning,
      (const char *)"MW_FileResource", (const char *)-1, (const char *)32, (const char *)&k_MW_FileResource,
      (const char *)"MW_FillToBorderMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_FillToBorderMethod,
      (const char *)"MW_FloatPixel", (const char *)-1, (const char *)32, (const char *)&k_MW_FloatPixel,
      (const char *)"MW_FloodfillMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_FloodfillMethod,
      (const char *)"MW_ForgetGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_ForgetGravity,
      (const char *)"MW_FrameMode", (const char *)-1, (const char *)32, (const char *)&k_MW_FrameMode,
      (const char *)"MW_GRAYColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_GRAYColorspace,
      (const char *)"MW_GammaPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_GammaPreview,
      (const char *)"MW_GaussianFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_GaussianFilter,
      (const char *)"MW_GaussianNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_GaussianNoise,
      (const char *)"MW_GrayscaleMatteType", (const char *)-1, (const char *)32, (const char *)&k_MW_GrayscaleMatteType,
      (const char *)"MW_GrayscalePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_GrayscalePreview,
      (const char *)"MW_GrayscaleType", (const char *)-1, (const char *)32, (const char *)&k_MW_GrayscaleType,
      (const char *)"MW_GreenChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_GreenChannel,
      (const char *)"MW_Group4Compression", (const char *)-1, (const char *)32, (const char *)&k_MW_Group4Compression,
      (const char *)"MW_HSBColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_HSBColorspace,
      (const char *)"MW_HSLColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_HSLColorspace,
      (const char *)"MW_HWBColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_HWBColorspace,
      (const char *)"MW_HammingFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_HammingFilter,
      (const char *)"MW_HanningFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_HanningFilter,
      (const char *)"MW_HardLightCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_HardLightCompositeOp,
      (const char *)"MW_HermiteFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_HermiteFilter,
      (const char *)"MW_HueCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_HueCompositeOp,
      (const char *)"MW_HuePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_HuePreview,
      (const char *)"MW_ImageError", (const char *)-1, (const char *)32, (const char *)&k_MW_ImageError,
      (const char *)"MW_ImageFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_ImageFatalError,
      (const char *)"MW_ImageWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_ImageWarning,
      (const char *)"MW_ImplodePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_ImplodePreview,
      (const char *)"MW_ImpulseNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_ImpulseNoise,
      (const char *)"MW_InCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_InCompositeOp,
      (const char *)"MW_IndexChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_IndexChannel,
      (const char *)"MW_IntegerPixel", (const char *)-1, (const char *)32, (const char *)&k_MW_IntegerPixel,
      (const char *)"MW_ItalicStyle", (const char *)-1, (const char *)32, (const char *)&k_MW_ItalicStyle,
      (const char *)"MW_JPEGCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_JPEGCompression,
      (const char *)"MW_JPEGPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_JPEGPreview,
      (const char *)"MW_LABColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_LABColorspace,
      (const char *)"MW_LZWCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_LZWCompression,
      (const char *)"MW_LanczosFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_LanczosFilter,
      (const char *)"MW_LaplacianNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_LaplacianNoise,
      (const char *)"MW_LeftAlign", (const char *)-1, (const char *)32, (const char *)&k_MW_LeftAlign,
      (const char *)"MW_LeftShiftEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_LeftShiftEvaluateOperator,
      (const char *)"MW_LightenCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_LightenCompositeOp,
      (const char *)"MW_LineInterlace", (const char *)-1, (const char *)32, (const char *)&k_MW_LineInterlace,
      (const char *)"MW_LineThroughDecoration", (const char *)-1, (const char *)32, (const char *)&k_MW_LineThroughDecoration,
      (const char *)"MW_LongPixel", (const char *)-1, (const char *)32, (const char *)&k_MW_LongPixel,
      (const char *)"MW_LosslessJPEGCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_LosslessJPEGCompression,
      (const char *)"MW_LuminizeCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_LuminizeCompositeOp,
      (const char *)"MW_MagentaChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_MagentaChannel,
      (const char *)"MW_MapResource", (const char *)-1, (const char *)32, (const char *)&k_MW_MapResource,
      (const char *)"MW_MaxEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_MaxEvaluateOperator,
      (const char *)"MW_MaxRGB", (const char *)-1, (const char *)32, (const char *)&k_MW_MaxRGB,
      (const char *)"MW_MeanAbsoluteErrorMetric", (const char *)-1, (const char *)32, (const char *)&k_MW_MeanAbsoluteErrorMetric,
      (const char *)"MW_MeanSquaredErrorMetric", (const char *)-1, (const char *)32, (const char *)&k_MW_MeanSquaredErrorMetric,
      (const char *)"MW_MemoryResource", (const char *)-1, (const char *)32, (const char *)&k_MW_MemoryResource,
      (const char *)"MW_MinEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_MinEvaluateOperator,
      (const char *)"MW_MinusCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_MinusCompositeOp,
      (const char *)"MW_MirrorVirtualPixelMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_MirrorVirtualPixelMethod,
      (const char *)"MW_MissingDelegateError", (const char *)-1, (const char *)32, (const char *)&k_MW_MissingDelegateError,
      (const char *)"MW_MissingDelegateFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_MissingDelegateFatalError,
      (const char *)"MW_MissingDelegateWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_MissingDelegateWarning,
      (const char *)"MW_MitchellFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_MitchellFilter,
      (const char *)"MW_MiterJoin", (const char *)-1, (const char *)32, (const char *)&k_MW_MiterJoin,
      (const char *)"MW_ModulateCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ModulateCompositeOp,
      (const char *)"MW_ModuleError", (const char *)-1, (const char *)32, (const char *)&k_MW_ModuleError,
      (const char *)"MW_ModuleFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_ModuleFatalError,
      (const char *)"MW_ModuleWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_ModuleWarning,
      (const char *)"MW_MonitorError", (const char *)-1, (const char *)32, (const char *)&k_MW_MonitorError,
      (const char *)"MW_MonitorFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_MonitorFatalError,
      (const char *)"MW_MonitorWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_MonitorWarning,
      (const char *)"MW_MultiplicativeGaussianNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_MultiplicativeGaussianNoise,
      (const char *)"MW_MultiplyCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_MultiplyCompositeOp,
      (const char *)"MW_MultiplyEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_MultiplyEvaluateOperator,
      (const char *)"MW_NoCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_NoCompositeOp,
      (const char *)"MW_NoCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_NoCompression,
      (const char *)"MW_NoDecoration", (const char *)-1, (const char *)32, (const char *)&k_MW_NoDecoration,
      (const char *)"MW_NoInterlace", (const char *)-1, (const char *)32, (const char *)&k_MW_NoInterlace,
      (const char *)"MW_NonZeroRule", (const char *)-1, (const char *)32, (const char *)&k_MW_NonZeroRule,
      (const char *)"MW_NoneDispose", (const char *)-1, (const char *)32, (const char *)&k_MW_NoneDispose,
      (const char *)"MW_NormalStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_NormalStretch,
      (const char *)"MW_NormalStyle", (const char *)-1, (const char *)32, (const char *)&k_MW_NormalStyle,
      (const char *)"MW_NorthEastGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_NorthEastGravity,
      (const char *)"MW_NorthGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_NorthGravity,
      (const char *)"MW_NorthWestGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_NorthWestGravity,
      (const char *)"MW_OHTAColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_OHTAColorspace,
      (const char *)"MW_ObjectBoundingBox", (const char *)-1, (const char *)32, (const char *)&k_MW_ObjectBoundingBox,
      (const char *)"MW_ObliqueStyle", (const char *)-1, (const char *)32, (const char *)&k_MW_ObliqueStyle,
      (const char *)"MW_OilPaintPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_OilPaintPreview,
      (const char *)"MW_OpacityChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_OpacityChannel,
      (const char *)"MW_OpaqueOpacity", (const char *)-1, (const char *)32, (const char *)&k_MW_OpaqueOpacity,
      (const char *)"MW_OptimizeType", (const char *)-1, (const char *)32, (const char *)&k_MW_OptimizeType,
      (const char *)"MW_OptionError", (const char *)-1, (const char *)32, (const char *)&k_MW_OptionError,
      (const char *)"MW_OptionFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_OptionFatalError,
      (const char *)"MW_OptionWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_OptionWarning,
      (const char *)"MW_OrEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_OrEvaluateOperator,
      (const char *)"MW_OutCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_OutCompositeOp,
      (const char *)"MW_OverCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_OverCompositeOp,
      (const char *)"MW_OverlayCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_OverlayCompositeOp,
      (const char *)"MW_OverlineDecoration", (const char *)-1, (const char *)32, (const char *)&k_MW_OverlineDecoration,
      (const char *)"MW_PaletteMatteType", (const char *)-1, (const char *)32, (const char *)&k_MW_PaletteMatteType,
      (const char *)"MW_PaletteType", (const char *)-1, (const char *)32, (const char *)&k_MW_PaletteType,
      (const char *)"MW_PartitionInterlace", (const char *)-1, (const char *)32, (const char *)&k_MW_PartitionInterlace,
      (const char *)"MW_PeakAbsoluteErrorMetric", (const char *)-1, (const char *)32, (const char *)&k_MW_PeakAbsoluteErrorMetric,
      (const char *)"MW_PeakSignalToNoiseRatioMetric", (const char *)-1, (const char *)32, (const char *)&k_MW_PeakSignalToNoiseRatioMetric,
      (const char *)"MW_PerceptualIntent", (const char *)-1, (const char *)32, (const char *)&k_MW_PerceptualIntent,
      (const char *)"MW_PixelsPerCentimeterResolution", (const char *)-1, (const char *)32, (const char *)&k_MW_PixelsPerCentimeterResolution,
      (const char *)"MW_PixelsPerInchResolution", (const char *)-1, (const char *)32, (const char *)&k_MW_PixelsPerInchResolution,
      (const char *)"MW_PlaneInterlace", (const char *)-1, (const char *)32, (const char *)&k_MW_PlaneInterlace,
      (const char *)"MW_PlusCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_PlusCompositeOp,
      (const char *)"MW_PointFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_PointFilter,
      (const char *)"MW_PointMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_PointMethod,
      (const char *)"MW_PoissonNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_PoissonNoise,
      (const char *)"MW_PreviousDispose", (const char *)-1, (const char *)32, (const char *)&k_MW_PreviousDispose,
      (const char *)"MW_QuadraticFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_QuadraticFilter,
      (const char *)"MW_QuantizePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_QuantizePreview,
      (const char *)"MW_QuantumRange", (const char *)-1, (const char *)32, (const char *)&k_MW_QuantumRange,
      (const char *)"MW_RGBColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_RGBColorspace,
      (const char *)"MW_RLECompression", (const char *)-1, (const char *)32, (const char *)&k_MW_RLECompression,
      (const char *)"MW_RaisePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_RaisePreview,
      (const char *)"MW_RedChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_RedChannel,
      (const char *)"MW_ReduceNoisePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_ReduceNoisePreview,
      (const char *)"MW_RegistryError", (const char *)-1, (const char *)32, (const char *)&k_MW_RegistryError,
      (const char *)"MW_RegistryFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_RegistryFatalError,
      (const char *)"MW_RegistryWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_RegistryWarning,
      (const char *)"MW_RelativeIntent", (const char *)-1, (const char *)32, (const char *)&k_MW_RelativeIntent,
      (const char *)"MW_ReplaceCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ReplaceCompositeOp,
      (const char *)"MW_ReplaceMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_ReplaceMethod,
      (const char *)"MW_ResetMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_ResetMethod,
      (const char *)"MW_ResourceLimitError", (const char *)-1, (const char *)32, (const char *)&k_MW_ResourceLimitError,
      (const char *)"MW_ResourceLimitFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_ResourceLimitFatalError,
      (const char *)"MW_ResourceLimitWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_ResourceLimitWarning,
      (const char *)"MW_RightAlign", (const char *)-1, (const char *)32, (const char *)&k_MW_RightAlign,
      (const char *)"MW_RightShiftEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_RightShiftEvaluateOperator,
      (const char *)"MW_RollPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_RollPreview,
      (const char *)"MW_RootMeanSquaredErrorMetric", (const char *)-1, (const char *)32, (const char *)&k_MW_RootMeanSquaredErrorMetric,
      (const char *)"MW_RotatePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_RotatePreview,
      (const char *)"MW_RoundCap", (const char *)-1, (const char *)32, (const char *)&k_MW_RoundCap,
      (const char *)"MW_RoundJoin", (const char *)-1, (const char *)32, (const char *)&k_MW_RoundJoin,
      (const char *)"MW_SaturateCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SaturateCompositeOp,
      (const char *)"MW_SaturationIntent", (const char *)-1, (const char *)32, (const char *)&k_MW_SaturationIntent,
      (const char *)"MW_SaturationPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SaturationPreview,
      (const char *)"MW_ScreenCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ScreenCompositeOp,
      (const char *)"MW_SegmentPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SegmentPreview,
      (const char *)"MW_SemiCondensedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_SemiCondensedStretch,
      (const char *)"MW_SemiExpandedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_SemiExpandedStretch,
      (const char *)"MW_SetEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_SetEvaluateOperator,
      (const char *)"MW_ShadePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_ShadePreview,
      (const char *)"MW_SharpenPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SharpenPreview,
      (const char *)"MW_ShearPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_ShearPreview,
      (const char *)"MW_ShortPixel", (const char *)-1, (const char *)32, (const char *)&k_MW_ShortPixel,
      (const char *)"MW_SincFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_SincFilter,
      (const char *)"MW_SoftLightCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SoftLightCompositeOp,
      (const char *)"MW_SolarizePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SolarizePreview,
      (const char *)"MW_SouthEastGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_SouthEastGravity,
      (const char *)"MW_SouthGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_SouthGravity,
      (const char *)"MW_SouthWestGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_SouthWestGravity,
      (const char *)"MW_SpiffPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SpiffPreview,
      (const char *)"MW_SpreadPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SpreadPreview,
      (const char *)"MW_SquareCap", (const char *)-1, (const char *)32, (const char *)&k_MW_SquareCap,
      (const char *)"MW_SrcAtopCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SrcAtopCompositeOp,
      (const char *)"MW_SrcCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SrcCompositeOp,
      (const char *)"MW_SrcInCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SrcInCompositeOp,
      (const char *)"MW_SrcOutCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SrcOutCompositeOp,
      (const char *)"MW_SrcOverCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SrcOverCompositeOp,
      (const char *)"MW_StaticGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_StaticGravity,
      (const char *)"MW_StreamError", (const char *)-1, (const char *)32, (const char *)&k_MW_StreamError,
      (const char *)"MW_StreamFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_StreamFatalError,
      (const char *)"MW_StreamWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_StreamWarning,
      (const char *)"MW_SubtractCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_SubtractCompositeOp,
      (const char *)"MW_SubtractEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_SubtractEvaluateOperator,
      (const char *)"MW_SwirlPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_SwirlPreview,
      (const char *)"MW_ThresholdCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_ThresholdCompositeOp,
      (const char *)"MW_ThresholdPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_ThresholdPreview,
      (const char *)"MW_TileVirtualPixelMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_TileVirtualPixelMethod,
      (const char *)"MW_TransparentColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_TransparentColorspace,
      (const char *)"MW_TransparentOpacity", (const char *)-1, (const char *)32, (const char *)&k_MW_TransparentOpacity,
      (const char *)"MW_TriangleFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_TriangleFilter,
      (const char *)"MW_TrueColorMatteType", (const char *)-1, (const char *)32, (const char *)&k_MW_TrueColorMatteType,
      (const char *)"MW_TrueColorType", (const char *)-1, (const char *)32, (const char *)&k_MW_TrueColorType,
      (const char *)"MW_TypeError", (const char *)-1, (const char *)32, (const char *)&k_MW_TypeError,
      (const char *)"MW_TypeFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_TypeFatalError,
      (const char *)"MW_TypeWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_TypeWarning,
      (const char *)"MW_UltraCondensedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_UltraCondensedStretch,
      (const char *)"MW_UltraExpandedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_UltraExpandedStretch,
      (const char *)"MW_UndefinedAlign", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedAlign,
      (const char *)"MW_UndefinedCap", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedCap,
      (const char *)"MW_UndefinedChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedChannel,
      (const char *)"MW_UndefinedColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedColorspace,
      (const char *)"MW_UndefinedCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedCompositeOp,
      (const char *)"MW_UndefinedCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedCompression,
      (const char *)"MW_UndefinedDecoration", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedDecoration,
      (const char *)"MW_UndefinedDispose", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedDispose,
      (const char *)"MW_UndefinedEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedEvaluateOperator,
      (const char *)"MW_UndefinedException", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedException,
      (const char *)"MW_UndefinedFilter", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedFilter,
      (const char *)"MW_UndefinedGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedGravity,
      (const char *)"MW_UndefinedIntent", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedIntent,
      (const char *)"MW_UndefinedInterlace", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedInterlace,
      (const char *)"MW_UndefinedJoin", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedJoin,
      (const char *)"MW_UndefinedMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedMethod,
      (const char *)"MW_UndefinedMetric", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedMetric,
      (const char *)"MW_UndefinedMode", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedMode,
      (const char *)"MW_UndefinedNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedNoise,
      (const char *)"MW_UndefinedPathUnits", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedPathUnits,
      (const char *)"MW_UndefinedPixel", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedPixel,
      (const char *)"MW_UndefinedPreview", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedPreview,
      (const char *)"MW_UndefinedResolution", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedResolution,
      (const char *)"MW_UndefinedResource", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedResource,
      (const char *)"MW_UndefinedRule", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedRule,
      (const char *)"MW_UndefinedStretch", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedStretch,
      (const char *)"MW_UndefinedStyle", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedStyle,
      (const char *)"MW_UndefinedType", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedType,
      (const char *)"MW_UndefinedVirtualPixelMethod", (const char *)-1, (const char *)32, (const char *)&k_MW_UndefinedVirtualPixelMethod,
      (const char *)"MW_UnderlineDecoration", (const char *)-1, (const char *)32, (const char *)&k_MW_UnderlineDecoration,
      (const char *)"MW_UnframeMode", (const char *)-1, (const char *)32, (const char *)&k_MW_UnframeMode,
      (const char *)"MW_UniformNoise", (const char *)-1, (const char *)32, (const char *)&k_MW_UniformNoise,
      (const char *)"MW_UnrecognizedDispose", (const char *)-1, (const char *)32, (const char *)&k_MW_UnrecognizedDispose,
      (const char *)"MW_UserSpace", (const char *)-1, (const char *)32, (const char *)&k_MW_UserSpace,
      (const char *)"MW_UserSpaceOnUse", (const char *)-1, (const char *)32, (const char *)&k_MW_UserSpaceOnUse,
      (const char *)"MW_WandError", (const char *)-1, (const char *)32, (const char *)&k_MW_WandError,
      (const char *)"MW_WandFatalError", (const char *)-1, (const char *)32, (const char *)&k_MW_WandFatalError,
      (const char *)"MW_WandWarning", (const char *)-1, (const char *)32, (const char *)&k_MW_WandWarning,
      (const char *)"MW_WarningException", (const char *)-1, (const char *)32, (const char *)&k_MW_WarningException,
      (const char *)"MW_WavePreview", (const char *)-1, (const char *)32, (const char *)&k_MW_WavePreview,
      (const char *)"MW_WestGravity", (const char *)-1, (const char *)32, (const char *)&k_MW_WestGravity,
      (const char *)"MW_XYZColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_XYZColorspace,
      (const char *)"MW_XorCompositeOp", (const char *)-1, (const char *)32, (const char *)&k_MW_XorCompositeOp,
      (const char *)"MW_XorEvaluateOperator", (const char *)-1, (const char *)32, (const char *)&k_MW_XorEvaluateOperator,
      (const char *)"MW_YCCColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_YCCColorspace,
      (const char *)"MW_YCbCrColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_YCbCrColorspace,
      (const char *)"MW_YIQColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_YIQColorspace,
      (const char *)"MW_YPbPrColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_YPbPrColorspace,
      (const char *)"MW_YUVColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_YUVColorspace,
      (const char *)"MW_YellowChannel", (const char *)-1, (const char *)32, (const char *)&k_MW_YellowChannel,
      (const char *)"MW_ZipCompression", (const char *)-1, (const char *)32, (const char *)&k_MW_ZipCompression,
      (const char *)"MW_sRGBColorspace", (const char *)-1, (const char *)32, (const char *)&k_MW_sRGBColorspace,
      (const char *)"MYSQLI_ASSOC", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_ASSOC,
      (const char *)"MYSQLI_AUTO_INCREMENT_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_AUTO_INCREMENT_FLAG,
      (const char *)"MYSQLI_BLOB_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_BLOB_FLAG,
      (const char *)"MYSQLI_BOTH", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_BOTH,
      (const char *)"MYSQLI_CLIENT_COMPRESS", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CLIENT_COMPRESS,
      (const char *)"MYSQLI_CLIENT_FOUND_ROWS", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CLIENT_FOUND_ROWS,
      (const char *)"MYSQLI_CLIENT_IGNORE_SPACE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CLIENT_IGNORE_SPACE,
      (const char *)"MYSQLI_CLIENT_INTERACTIVE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CLIENT_INTERACTIVE,
      (const char *)"MYSQLI_CLIENT_NO_SCHEMA", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CLIENT_NO_SCHEMA,
      (const char *)"MYSQLI_CLIENT_SSL", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CLIENT_SSL,
      (const char *)"MYSQLI_CURSOR_TYPE_FOR_UPDATE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CURSOR_TYPE_FOR_UPDATE,
      (const char *)"MYSQLI_CURSOR_TYPE_NO_CURSOR", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CURSOR_TYPE_NO_CURSOR,
      (const char *)"MYSQLI_CURSOR_TYPE_READ_ONLY", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CURSOR_TYPE_READ_ONLY,
      (const char *)"MYSQLI_CURSOR_TYPE_SCROLLABLE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_CURSOR_TYPE_SCROLLABLE,
      (const char *)"MYSQLI_DATA_TRUNCATED", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_DATA_TRUNCATED,
      (const char *)"MYSQLI_GROUP_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_GROUP_FLAG,
      (const char *)"MYSQLI_INIT_COMMAND", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_INIT_COMMAND,
      (const char *)"MYSQLI_MULTIPLE_KEY_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_MULTIPLE_KEY_FLAG,
      (const char *)"MYSQLI_NOT_NULL_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_NOT_NULL_FLAG,
      (const char *)"MYSQLI_NO_DATA", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_NO_DATA,
      (const char *)"MYSQLI_NUM", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_NUM,
      (const char *)"MYSQLI_NUM_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_NUM_FLAG,
      (const char *)"MYSQLI_OPT_CONNECT_TIMEOUT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_OPT_CONNECT_TIMEOUT,
      (const char *)"MYSQLI_OPT_LOCAL_INFILE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_OPT_LOCAL_INFILE,
      (const char *)"MYSQLI_PART_KEY_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_PART_KEY_FLAG,
      (const char *)"MYSQLI_PRI_KEY_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_PRI_KEY_FLAG,
      (const char *)"MYSQLI_READ_DEFAULT_FILE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_READ_DEFAULT_FILE,
      (const char *)"MYSQLI_READ_DEFAULT_GROUP", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_READ_DEFAULT_GROUP,
      (const char *)"MYSQLI_REPORT_ALL", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_REPORT_ALL,
      (const char *)"MYSQLI_REPORT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_REPORT_ERROR,
      (const char *)"MYSQLI_REPORT_INDEX", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_REPORT_INDEX,
      (const char *)"MYSQLI_REPORT_OFF", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_REPORT_OFF,
      (const char *)"MYSQLI_REPORT_STRICT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_REPORT_STRICT,
      (const char *)"MYSQLI_RPL_ADMIN", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_RPL_ADMIN,
      (const char *)"MYSQLI_RPL_MASTER", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_RPL_MASTER,
      (const char *)"MYSQLI_RPL_SLAVE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_RPL_SLAVE,
      (const char *)"MYSQLI_SET_CHARSET_NAME", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_SET_CHARSET_NAME,
      (const char *)"MYSQLI_SET_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_SET_FLAG,
      (const char *)"MYSQLI_STMT_ATTR_CURSOR_TYPE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_STMT_ATTR_CURSOR_TYPE,
      (const char *)"MYSQLI_STMT_ATTR_PREFETCH_ROWS", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_STMT_ATTR_PREFETCH_ROWS,
      (const char *)"MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH,
      (const char *)"MYSQLI_STORE_RESULT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_STORE_RESULT,
      (const char *)"MYSQLI_TIMESTAMP_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TIMESTAMP_FLAG,
      (const char *)"MYSQLI_TYPE_BIT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_BIT,
      (const char *)"MYSQLI_TYPE_BLOB", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_BLOB,
      (const char *)"MYSQLI_TYPE_CHAR", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_CHAR,
      (const char *)"MYSQLI_TYPE_DATE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_DATE,
      (const char *)"MYSQLI_TYPE_DATETIME", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_DATETIME,
      (const char *)"MYSQLI_TYPE_DECIMAL", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_DECIMAL,
      (const char *)"MYSQLI_TYPE_DOUBLE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_DOUBLE,
      (const char *)"MYSQLI_TYPE_ENUM", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_ENUM,
      (const char *)"MYSQLI_TYPE_FLOAT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_FLOAT,
      (const char *)"MYSQLI_TYPE_GEOMETRY", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_GEOMETRY,
      (const char *)"MYSQLI_TYPE_INT24", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_INT24,
      (const char *)"MYSQLI_TYPE_INTERVAL", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_INTERVAL,
      (const char *)"MYSQLI_TYPE_LONG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_LONG,
      (const char *)"MYSQLI_TYPE_LONGLONG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_LONGLONG,
      (const char *)"MYSQLI_TYPE_LONG_BLOB", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_LONG_BLOB,
      (const char *)"MYSQLI_TYPE_MEDIUM_BLOB", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_MEDIUM_BLOB,
      (const char *)"MYSQLI_TYPE_NEWDATE", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_NEWDATE,
      (const char *)"MYSQLI_TYPE_NEWDECIMAL", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_NEWDECIMAL,
      (const char *)"MYSQLI_TYPE_NULL", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_NULL,
      (const char *)"MYSQLI_TYPE_SET", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_SET,
      (const char *)"MYSQLI_TYPE_SHORT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_SHORT,
      (const char *)"MYSQLI_TYPE_STRING", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_STRING,
      (const char *)"MYSQLI_TYPE_TIME", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_TIME,
      (const char *)"MYSQLI_TYPE_TIMESTAMP", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_TIMESTAMP,
      (const char *)"MYSQLI_TYPE_TINY", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_TINY,
      (const char *)"MYSQLI_TYPE_TINY_BLOB", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_TINY_BLOB,
      (const char *)"MYSQLI_TYPE_VAR_STRING", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_VAR_STRING,
      (const char *)"MYSQLI_TYPE_YEAR", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_TYPE_YEAR,
      (const char *)"MYSQLI_UNIQUE_KEY_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_UNIQUE_KEY_FLAG,
      (const char *)"MYSQLI_UNSIGNED_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_UNSIGNED_FLAG,
      (const char *)"MYSQLI_USE_RESULT", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_USE_RESULT,
      (const char *)"MYSQLI_ZEROFILL_FLAG", (const char *)-1, (const char *)32, (const char *)&k_MYSQLI_ZEROFILL_FLAG,
      (const char *)"MYSQL_ASSOC", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_ASSOC,
      (const char *)"MYSQL_BOTH", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_BOTH,
      (const char *)"MYSQL_CLIENT_COMPRESS", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_CLIENT_COMPRESS,
      (const char *)"MYSQL_CLIENT_IGNORE_SPACE", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_CLIENT_IGNORE_SPACE,
      (const char *)"MYSQL_CLIENT_INTERACTIVE", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_CLIENT_INTERACTIVE,
      (const char *)"MYSQL_CLIENT_SSL", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_CLIENT_SSL,
      (const char *)"MYSQL_NUM", (const char *)-1, (const char *)32, (const char *)&k_MYSQL_NUM,
      (const char *)"M_1_PI", (const char *)-1, (const char *)64, (const char *)&k_M_1_PI,
      (const char *)"M_2_PI", (const char *)-1, (const char *)64, (const char *)&k_M_2_PI,
      (const char *)"M_2_SQRTPI", (const char *)-1, (const char *)64, (const char *)&k_M_2_SQRTPI,
      (const char *)"M_E", (const char *)-1, (const char *)64, (const char *)&k_M_E,
      (const char *)"M_EULER", (const char *)-1, (const char *)64, (const char *)&k_M_EULER,
      (const char *)"M_LN10", (const char *)-1, (const char *)64, (const char *)&k_M_LN10,
      (const char *)"M_LN2", (const char *)-1, (const char *)64, (const char *)&k_M_LN2,
      (const char *)"M_LNPI", (const char *)-1, (const char *)64, (const char *)&k_M_LNPI,
      (const char *)"M_LOG10E", (const char *)-1, (const char *)64, (const char *)&k_M_LOG10E,
      (const char *)"M_LOG2E", (const char *)-1, (const char *)64, (const char *)&k_M_LOG2E,
      (const char *)"M_PI", (const char *)-1, (const char *)64, (const char *)&k_M_PI,
      (const char *)"M_PI_2", (const char *)-1, (const char *)64, (const char *)&k_M_PI_2,
      (const char *)"M_PI_4", (const char *)-1, (const char *)64, (const char *)&k_M_PI_4,
      (const char *)"M_SQRT1_2", (const char *)-1, (const char *)64, (const char *)&k_M_SQRT1_2,
      (const char *)"M_SQRT2", (const char *)-1, (const char *)64, (const char *)&k_M_SQRT2,
      (const char *)"M_SQRT3", (const char *)-1, (const char *)64, (const char *)&k_M_SQRT3,
      (const char *)"M_SQRTPI", (const char *)-1, (const char *)64, (const char *)&k_M_SQRTPI,
      (const char *)"NAN", (const char *)-1, (const char *)64, (const char *)&k_NAN,
      (const char *)"NIL", (const char *)-1, (const char *)32, (const char *)&k_NIL,
      (const char *)"NOEXPR", (const char *)-1, (const char *)32, (const char *)&k_NOEXPR,
      (const char *)"NULL", (const char *)-1, (const char *)65535, (const char *)&k_NULL,
      (const char *)"OCI_ASSOC", (const char *)-1, (const char *)32, (const char *)&k_OCI_ASSOC,
      (const char *)"OCI_BOTH", (const char *)-1, (const char *)32, (const char *)&k_OCI_BOTH,
      (const char *)"OCI_B_BFILE", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_BFILE,
      (const char *)"OCI_B_BIN", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_BIN,
      (const char *)"OCI_B_BLOB", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_BLOB,
      (const char *)"OCI_B_CFILEE", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_CFILEE,
      (const char *)"OCI_B_CLOB", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_CLOB,
      (const char *)"OCI_B_CURSOR", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_CURSOR,
      (const char *)"OCI_B_INT", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_INT,
      (const char *)"OCI_B_NTY", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_NTY,
      (const char *)"OCI_B_NUM", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_NUM,
      (const char *)"OCI_B_ROWID", (const char *)-1, (const char *)32, (const char *)&k_OCI_B_ROWID,
      (const char *)"OCI_COMMIT_ON_SUCCESS", (const char *)-1, (const char *)32, (const char *)&k_OCI_COMMIT_ON_SUCCESS,
      (const char *)"OCI_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_OCI_DEFAULT,
      (const char *)"OCI_DESCRIBE_ONLY", (const char *)-1, (const char *)32, (const char *)&k_OCI_DESCRIBE_ONLY,
      (const char *)"OCI_DTYPE_FILE", (const char *)-1, (const char *)32, (const char *)&k_OCI_DTYPE_FILE,
      (const char *)"OCI_DTYPE_LOB", (const char *)-1, (const char *)32, (const char *)&k_OCI_DTYPE_LOB,
      (const char *)"OCI_DTYPE_ROWID", (const char *)-1, (const char *)32, (const char *)&k_OCI_DTYPE_ROWID,
      (const char *)"OCI_D_FILE", (const char *)-1, (const char *)32, (const char *)&k_OCI_D_FILE,
      (const char *)"OCI_D_LOB", (const char *)-1, (const char *)32, (const char *)&k_OCI_D_LOB,
      (const char *)"OCI_D_ROWID", (const char *)-1, (const char *)32, (const char *)&k_OCI_D_ROWID,
      (const char *)"OCI_EXACT_FETCH", (const char *)-1, (const char *)32, (const char *)&k_OCI_EXACT_FETCH,
      (const char *)"OCI_FETCHSTATEMENT_BY_COLUMN", (const char *)-1, (const char *)32, (const char *)&k_OCI_FETCHSTATEMENT_BY_COLUMN,
      (const char *)"OCI_FETCHSTATEMENT_BY_ROW", (const char *)-1, (const char *)32, (const char *)&k_OCI_FETCHSTATEMENT_BY_ROW,
      (const char *)"OCI_LOB_BUFFER_FREE", (const char *)-1, (const char *)32, (const char *)&k_OCI_LOB_BUFFER_FREE,
      (const char *)"OCI_NUM", (const char *)-1, (const char *)32, (const char *)&k_OCI_NUM,
      (const char *)"OCI_RETURN_LOBS", (const char *)-1, (const char *)32, (const char *)&k_OCI_RETURN_LOBS,
      (const char *)"OCI_RETURN_NULLS", (const char *)-1, (const char *)32, (const char *)&k_OCI_RETURN_NULLS,
      (const char *)"OCI_SEEK_CUR", (const char *)-1, (const char *)32, (const char *)&k_OCI_SEEK_CUR,
      (const char *)"OCI_SEEK_END", (const char *)-1, (const char *)32, (const char *)&k_OCI_SEEK_END,
      (const char *)"OCI_SEEK_SET", (const char *)-1, (const char *)32, (const char *)&k_OCI_SEEK_SET,
      (const char *)"OCI_SYSDATE", (const char *)-1, (const char *)128, (const char *)&k_OCI_SYSDATE,
      (const char *)"OCI_SYSDBA", (const char *)-1, (const char *)32, (const char *)&k_OCI_SYSDBA,
      (const char *)"OCI_SYSOPER", (const char *)-1, (const char *)32, (const char *)&k_OCI_SYSOPER,
      (const char *)"OCI_TEMP_BLOB", (const char *)-1, (const char *)32, (const char *)&k_OCI_TEMP_BLOB,
      (const char *)"OCI_TEMP_CLOB", (const char *)-1, (const char *)32, (const char *)&k_OCI_TEMP_CLOB,
      (const char *)"OPENSSL_ALGO_MD2", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_ALGO_MD2,
      (const char *)"OPENSSL_ALGO_MD4", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_ALGO_MD4,
      (const char *)"OPENSSL_ALGO_MD5", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_ALGO_MD5,
      (const char *)"OPENSSL_ALGO_SHA1", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_ALGO_SHA1,
      (const char *)"OPENSSL_CIPHER_3DES", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_CIPHER_3DES,
      (const char *)"OPENSSL_CIPHER_DES", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_CIPHER_DES,
      (const char *)"OPENSSL_CIPHER_RC2_128", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_CIPHER_RC2_128,
      (const char *)"OPENSSL_CIPHER_RC2_40", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_CIPHER_RC2_40,
      (const char *)"OPENSSL_CIPHER_RC2_64", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_CIPHER_RC2_64,
      (const char *)"OPENSSL_KEYTYPE_DH", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_KEYTYPE_DH,
      (const char *)"OPENSSL_KEYTYPE_DSA", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_KEYTYPE_DSA,
      (const char *)"OPENSSL_KEYTYPE_EC", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_KEYTYPE_EC,
      (const char *)"OPENSSL_KEYTYPE_RSA", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_KEYTYPE_RSA,
      (const char *)"OPENSSL_NO_PADDING", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_NO_PADDING,
      (const char *)"OPENSSL_PKCS1_OAEP_PADDING", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_PKCS1_OAEP_PADDING,
      (const char *)"OPENSSL_PKCS1_PADDING", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_PKCS1_PADDING,
      (const char *)"OPENSSL_RAW_DATA", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_RAW_DATA,
      (const char *)"OPENSSL_SSLV23_PADDING", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_SSLV23_PADDING,
      (const char *)"OPENSSL_VERSION_NUMBER", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_VERSION_NUMBER,
      (const char *)"OPENSSL_VERSION_TEXT", (const char *)-1, (const char *)128, (const char *)&k_OPENSSL_VERSION_TEXT,
      (const char *)"OPENSSL_ZERO_PADDING", (const char *)-1, (const char *)32, (const char *)&k_OPENSSL_ZERO_PADDING,
      (const char *)"OP_ANONYMOUS", (const char *)-1, (const char *)32, (const char *)&k_OP_ANONYMOUS,
      (const char *)"OP_DEBUG", (const char *)-1, (const char *)32, (const char *)&k_OP_DEBUG,
      (const char *)"OP_EXPUNGE", (const char *)-1, (const char *)32, (const char *)&k_OP_EXPUNGE,
      (const char *)"OP_HALFOPEN", (const char *)-1, (const char *)32, (const char *)&k_OP_HALFOPEN,
      (const char *)"OP_PROTOTYPE", (const char *)-1, (const char *)32, (const char *)&k_OP_PROTOTYPE,
      (const char *)"OP_READONLY", (const char *)-1, (const char *)32, (const char *)&k_OP_READONLY,
      (const char *)"OP_SECURE", (const char *)-1, (const char *)32, (const char *)&k_OP_SECURE,
      (const char *)"OP_SHORTCACHE", (const char *)-1, (const char *)32, (const char *)&k_OP_SHORTCACHE,
      (const char *)"OP_SILENT", (const char *)-1, (const char *)32, (const char *)&k_OP_SILENT,
      (const char *)"PAGELET_DONE", (const char *)-1, (const char *)32, (const char *)&k_PAGELET_DONE,
      (const char *)"PAGELET_NOT_READY", (const char *)-1, (const char *)32, (const char *)&k_PAGELET_NOT_READY,
      (const char *)"PAGELET_READY", (const char *)-1, (const char *)32, (const char *)&k_PAGELET_READY,
      (const char *)"PATHINFO_BASENAME", (const char *)-1, (const char *)32, (const char *)&k_PATHINFO_BASENAME,
      (const char *)"PATHINFO_DIRNAME", (const char *)-1, (const char *)32, (const char *)&k_PATHINFO_DIRNAME,
      (const char *)"PATHINFO_EXTENSION", (const char *)-1, (const char *)32, (const char *)&k_PATHINFO_EXTENSION,
      (const char *)"PATHINFO_FILENAME", (const char *)-1, (const char *)32, (const char *)&k_PATHINFO_FILENAME,
      (const char *)"PATH_SEPARATOR", (const char *)-1, (const char *)128, (const char *)&k_PATH_SEPARATOR,
      (const char *)"PCRE_VERSION", (const char *)-1, (const char *)128, (const char *)&k_PCRE_VERSION,
      (const char *)"PEAR_EXTENSION_DIR", (const char *)-1, (const char *)128, (const char *)&k_PEAR_EXTENSION_DIR,
      (const char *)"PEAR_INSTALL_DIR", (const char *)-1, (const char *)128, (const char *)&k_PEAR_INSTALL_DIR,
      (const char *)"PHPMCC_NEW_HANDLE", (const char *)-1, (const char *)32, (const char *)&k_PHPMCC_NEW_HANDLE,
      (const char *)"PHPMCC_USED_FAST_PATH", (const char *)-1, (const char *)32, (const char *)&k_PHPMCC_USED_FAST_PATH,
      (const char *)"PHPMCC_USED_SLOW_PATH", (const char *)-1, (const char *)32, (const char *)&k_PHPMCC_USED_SLOW_PATH,
      (const char *)"PHP_BINARY_READ", (const char *)-1, (const char *)32, (const char *)&k_PHP_BINARY_READ,
      (const char *)"PHP_BINDIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_BINDIR,
      (const char *)"PHP_CONFIG_FILE_PATH", (const char *)-1, (const char *)128, (const char *)&k_PHP_CONFIG_FILE_PATH,
      (const char *)"PHP_CONFIG_FILE_SCAN_DIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_CONFIG_FILE_SCAN_DIR,
      (const char *)"PHP_DATADIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_DATADIR,
      (const char *)"PHP_EOL", (const char *)-1, (const char *)128, (const char *)&k_PHP_EOL,
      (const char *)"PHP_EXTENSION_DIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_EXTENSION_DIR,
      (const char *)"PHP_INT_MAX", (const char *)-1, (const char *)32, (const char *)&k_PHP_INT_MAX,
      (const char *)"PHP_INT_SIZE", (const char *)-1, (const char *)32, (const char *)&k_PHP_INT_SIZE,
      (const char *)"PHP_LIBDIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_LIBDIR,
      (const char *)"PHP_LOCALSTATEDIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_LOCALSTATEDIR,
      (const char *)"PHP_NORMAL_READ", (const char *)-1, (const char *)32, (const char *)&k_PHP_NORMAL_READ,
      (const char *)"PHP_OS", (const char *)-1, (const char *)128, (const char *)&k_PHP_OS,
      (const char *)"PHP_OUTPUT_HANDLER_CONT", (const char *)-1, (const char *)32, (const char *)&k_PHP_OUTPUT_HANDLER_CONT,
      (const char *)"PHP_OUTPUT_HANDLER_END", (const char *)-1, (const char *)32, (const char *)&k_PHP_OUTPUT_HANDLER_END,
      (const char *)"PHP_OUTPUT_HANDLER_START", (const char *)-1, (const char *)32, (const char *)&k_PHP_OUTPUT_HANDLER_START,
      (const char *)"PHP_PREFIX", (const char *)-1, (const char *)128, (const char *)&k_PHP_PREFIX,
      (const char *)"PHP_SAPI", (const char *)-1, (const char *)128, (const char *)&k_PHP_SAPI,
      (const char *)"PHP_SHLIB_SUFFIX", (const char *)-1, (const char *)128, (const char *)&k_PHP_SHLIB_SUFFIX,
      (const char *)"PHP_SYSCONFDIR", (const char *)-1, (const char *)128, (const char *)&k_PHP_SYSCONFDIR,
      (const char *)"PHP_URL_FRAGMENT", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_FRAGMENT,
      (const char *)"PHP_URL_HOST", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_HOST,
      (const char *)"PHP_URL_PASS", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_PASS,
      (const char *)"PHP_URL_PATH", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_PATH,
      (const char *)"PHP_URL_PORT", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_PORT,
      (const char *)"PHP_URL_QUERY", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_QUERY,
      (const char *)"PHP_URL_SCHEME", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_SCHEME,
      (const char *)"PHP_URL_USER", (const char *)-1, (const char *)32, (const char *)&k_PHP_URL_USER,
      (const char *)"PHP_VERSION", (const char *)-1, (const char *)128, (const char *)&k_PHP_VERSION,
      (const char *)"PKCS7_BINARY", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_BINARY,
      (const char *)"PKCS7_DETACHED", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_DETACHED,
      (const char *)"PKCS7_NOATTR", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_NOATTR,
      (const char *)"PKCS7_NOCERTS", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_NOCERTS,
      (const char *)"PKCS7_NOCHAIN", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_NOCHAIN,
      (const char *)"PKCS7_NOINTERN", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_NOINTERN,
      (const char *)"PKCS7_NOSIGS", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_NOSIGS,
      (const char *)"PKCS7_NOVERIFY", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_NOVERIFY,
      (const char *)"PKCS7_TEXT", (const char *)-1, (const char *)32, (const char *)&k_PKCS7_TEXT,
      (const char *)"PM_STR", (const char *)-1, (const char *)32, (const char *)&k_PM_STR,
      (const char *)"PNG_ALL_FILTERS", (const char *)-1, (const char *)32, (const char *)&k_PNG_ALL_FILTERS,
      (const char *)"PNG_FILTER_AVG", (const char *)-1, (const char *)32, (const char *)&k_PNG_FILTER_AVG,
      (const char *)"PNG_FILTER_NONE", (const char *)-1, (const char *)32, (const char *)&k_PNG_FILTER_NONE,
      (const char *)"PNG_FILTER_PAETH", (const char *)-1, (const char *)32, (const char *)&k_PNG_FILTER_PAETH,
      (const char *)"PNG_FILTER_SUB", (const char *)-1, (const char *)32, (const char *)&k_PNG_FILTER_SUB,
      (const char *)"PNG_FILTER_UP", (const char *)-1, (const char *)32, (const char *)&k_PNG_FILTER_UP,
      (const char *)"PNG_NO_FILTER", (const char *)-1, (const char *)32, (const char *)&k_PNG_NO_FILTER,
      (const char *)"POSIX_F_OK", (const char *)-1, (const char *)32, (const char *)&k_POSIX_F_OK,
      (const char *)"POSIX_R_OK", (const char *)-1, (const char *)32, (const char *)&k_POSIX_R_OK,
      (const char *)"POSIX_S_IFBLK", (const char *)-1, (const char *)32, (const char *)&k_POSIX_S_IFBLK,
      (const char *)"POSIX_S_IFCHR", (const char *)-1, (const char *)32, (const char *)&k_POSIX_S_IFCHR,
      (const char *)"POSIX_S_IFIFO", (const char *)-1, (const char *)32, (const char *)&k_POSIX_S_IFIFO,
      (const char *)"POSIX_S_IFREG", (const char *)-1, (const char *)32, (const char *)&k_POSIX_S_IFREG,
      (const char *)"POSIX_S_IFSOCK", (const char *)-1, (const char *)32, (const char *)&k_POSIX_S_IFSOCK,
      (const char *)"POSIX_W_OK", (const char *)-1, (const char *)32, (const char *)&k_POSIX_W_OK,
      (const char *)"POSIX_X_OK", (const char *)-1, (const char *)32, (const char *)&k_POSIX_X_OK,
      (const char *)"PREG_BACKTRACK_LIMIT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_PREG_BACKTRACK_LIMIT_ERROR,
      (const char *)"PREG_BAD_UTF8_ERROR", (const char *)-1, (const char *)32, (const char *)&k_PREG_BAD_UTF8_ERROR,
      (const char *)"PREG_GREP_INVERT", (const char *)-1, (const char *)32, (const char *)&k_PREG_GREP_INVERT,
      (const char *)"PREG_INTERNAL_ERROR", (const char *)-1, (const char *)32, (const char *)&k_PREG_INTERNAL_ERROR,
      (const char *)"PREG_NO_ERROR", (const char *)-1, (const char *)32, (const char *)&k_PREG_NO_ERROR,
      (const char *)"PREG_OFFSET_CAPTURE", (const char *)-1, (const char *)32, (const char *)&k_PREG_OFFSET_CAPTURE,
      (const char *)"PREG_PATTERN_ORDER", (const char *)-1, (const char *)32, (const char *)&k_PREG_PATTERN_ORDER,
      (const char *)"PREG_RECURSION_LIMIT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_PREG_RECURSION_LIMIT_ERROR,
      (const char *)"PREG_SET_ORDER", (const char *)-1, (const char *)32, (const char *)&k_PREG_SET_ORDER,
      (const char *)"PREG_SPLIT_DELIM_CAPTURE", (const char *)-1, (const char *)32, (const char *)&k_PREG_SPLIT_DELIM_CAPTURE,
      (const char *)"PREG_SPLIT_NO_EMPTY", (const char *)-1, (const char *)32, (const char *)&k_PREG_SPLIT_NO_EMPTY,
      (const char *)"PREG_SPLIT_OFFSET_CAPTURE", (const char *)-1, (const char *)32, (const char *)&k_PREG_SPLIT_OFFSET_CAPTURE,
      (const char *)"PRIO_PGRP", (const char *)-1, (const char *)32, (const char *)&k_PRIO_PGRP,
      (const char *)"PRIO_PROCESS", (const char *)-1, (const char *)32, (const char *)&k_PRIO_PROCESS,
      (const char *)"PRIO_USER", (const char *)-1, (const char *)32, (const char *)&k_PRIO_USER,
      (const char *)"PSFS_ERR_FATAL", (const char *)-1, (const char *)32, (const char *)&k_PSFS_ERR_FATAL,
      (const char *)"PSFS_FEED_ME", (const char *)-1, (const char *)32, (const char *)&k_PSFS_FEED_ME,
      (const char *)"PSFS_FLAG_FLUSH_CLOSE", (const char *)-1, (const char *)32, (const char *)&k_PSFS_FLAG_FLUSH_CLOSE,
      (const char *)"PSFS_FLAG_FLUSH_INC", (const char *)-1, (const char *)32, (const char *)&k_PSFS_FLAG_FLUSH_INC,
      (const char *)"PSFS_FLAG_NORMAL", (const char *)-1, (const char *)32, (const char *)&k_PSFS_FLAG_NORMAL,
      (const char *)"PSFS_PASS_ON", (const char *)-1, (const char *)32, (const char *)&k_PSFS_PASS_ON,
      (const char *)"RADIXCHAR", (const char *)-1, (const char *)32, (const char *)&k_RADIXCHAR,
      (const char *)"SA_ALL", (const char *)-1, (const char *)32, (const char *)&k_SA_ALL,
      (const char *)"SA_MESSAGES", (const char *)-1, (const char *)32, (const char *)&k_SA_MESSAGES,
      (const char *)"SA_RECENT", (const char *)-1, (const char *)32, (const char *)&k_SA_RECENT,
      (const char *)"SA_UIDNEXT", (const char *)-1, (const char *)32, (const char *)&k_SA_UIDNEXT,
      (const char *)"SA_UIDVALIDITY", (const char *)-1, (const char *)32, (const char *)&k_SA_UIDVALIDITY,
      (const char *)"SA_UNSEEN", (const char *)-1, (const char *)32, (const char *)&k_SA_UNSEEN,
      (const char *)"SEEK_CUR", (const char *)-1, (const char *)32, (const char *)&k_SEEK_CUR,
      (const char *)"SEEK_END", (const char *)-1, (const char *)32, (const char *)&k_SEEK_END,
      (const char *)"SEEK_SET", (const char *)-1, (const char *)32, (const char *)&k_SEEK_SET,
      (const char *)"SE_FREE", (const char *)-1, (const char *)32, (const char *)&k_SE_FREE,
      (const char *)"SE_NOPREFETCH", (const char *)-1, (const char *)32, (const char *)&k_SE_NOPREFETCH,
      (const char *)"SE_UID", (const char *)-1, (const char *)32, (const char *)&k_SE_UID,
      (const char *)"SID", (const char *)((offsetof(SystemGlobals, k_SID) -  offsetof(SystemGlobals, stgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SIGABRT", (const char *)-1, (const char *)32, (const char *)&k_SIGABRT,
      (const char *)"SIGALRM", (const char *)-1, (const char *)32, (const char *)&k_SIGALRM,
      (const char *)"SIGBABY", (const char *)-1, (const char *)32, (const char *)&k_SIGBABY,
      (const char *)"SIGBUS", (const char *)-1, (const char *)32, (const char *)&k_SIGBUS,
      (const char *)"SIGCHLD", (const char *)-1, (const char *)32, (const char *)&k_SIGCHLD,
      (const char *)"SIGCLD", (const char *)-1, (const char *)32, (const char *)&k_SIGCLD,
      (const char *)"SIGCONT", (const char *)-1, (const char *)32, (const char *)&k_SIGCONT,
      (const char *)"SIGFPE", (const char *)-1, (const char *)32, (const char *)&k_SIGFPE,
      (const char *)"SIGHUP", (const char *)-1, (const char *)32, (const char *)&k_SIGHUP,
      (const char *)"SIGILL", (const char *)-1, (const char *)32, (const char *)&k_SIGILL,
      (const char *)"SIGINT", (const char *)-1, (const char *)32, (const char *)&k_SIGINT,
      (const char *)"SIGIO", (const char *)-1, (const char *)32, (const char *)&k_SIGIO,
      (const char *)"SIGIOT", (const char *)-1, (const char *)32, (const char *)&k_SIGIOT,
      (const char *)"SIGKILL", (const char *)-1, (const char *)32, (const char *)&k_SIGKILL,
      (const char *)"SIGPIPE", (const char *)-1, (const char *)32, (const char *)&k_SIGPIPE,
      (const char *)"SIGPOLL", (const char *)-1, (const char *)32, (const char *)&k_SIGPOLL,
      (const char *)"SIGPROF", (const char *)-1, (const char *)32, (const char *)&k_SIGPROF,
      (const char *)"SIGPWR", (const char *)-1, (const char *)32, (const char *)&k_SIGPWR,
      (const char *)"SIGQUIT", (const char *)-1, (const char *)32, (const char *)&k_SIGQUIT,
      (const char *)"SIGSEGV", (const char *)-1, (const char *)32, (const char *)&k_SIGSEGV,
      (const char *)"SIGSTKFLT", (const char *)-1, (const char *)32, (const char *)&k_SIGSTKFLT,
      (const char *)"SIGSTOP", (const char *)-1, (const char *)32, (const char *)&k_SIGSTOP,
      (const char *)"SIGSYS", (const char *)-1, (const char *)32, (const char *)&k_SIGSYS,
      (const char *)"SIGTERM", (const char *)-1, (const char *)32, (const char *)&k_SIGTERM,
      (const char *)"SIGTRAP", (const char *)-1, (const char *)32, (const char *)&k_SIGTRAP,
      (const char *)"SIGTSTP", (const char *)-1, (const char *)32, (const char *)&k_SIGTSTP,
      (const char *)"SIGTTIN", (const char *)-1, (const char *)32, (const char *)&k_SIGTTIN,
      (const char *)"SIGTTOU", (const char *)-1, (const char *)32, (const char *)&k_SIGTTOU,
      (const char *)"SIGURG", (const char *)-1, (const char *)32, (const char *)&k_SIGURG,
      (const char *)"SIGUSR1", (const char *)-1, (const char *)32, (const char *)&k_SIGUSR1,
      (const char *)"SIGUSR2", (const char *)-1, (const char *)32, (const char *)&k_SIGUSR2,
      (const char *)"SIGVTALRM", (const char *)-1, (const char *)32, (const char *)&k_SIGVTALRM,
      (const char *)"SIGWINCH", (const char *)-1, (const char *)32, (const char *)&k_SIGWINCH,
      (const char *)"SIGXCPU", (const char *)-1, (const char *)32, (const char *)&k_SIGXCPU,
      (const char *)"SIGXFSZ", (const char *)-1, (const char *)32, (const char *)&k_SIGXFSZ,
      (const char *)"SIG_DFL", (const char *)-1, (const char *)32, (const char *)&k_SIG_DFL,
      (const char *)"SIG_ERR", (const char *)-1, (const char *)32, (const char *)&k_SIG_ERR,
      (const char *)"SIG_IGN", (const char *)-1, (const char *)32, (const char *)&k_SIG_IGN,
      (const char *)"SOAP_1_1", (const char *)-1, (const char *)32, (const char *)&k_SOAP_1_1,
      (const char *)"SOAP_1_2", (const char *)-1, (const char *)32, (const char *)&k_SOAP_1_2,
      (const char *)"SOAP_ACTOR_NEXT", (const char *)-1, (const char *)32, (const char *)&k_SOAP_ACTOR_NEXT,
      (const char *)"SOAP_ACTOR_NONE", (const char *)-1, (const char *)32, (const char *)&k_SOAP_ACTOR_NONE,
      (const char *)"SOAP_ACTOR_UNLIMATERECEIVER", (const char *)-1, (const char *)32, (const char *)&k_SOAP_ACTOR_UNLIMATERECEIVER,
      (const char *)"SOAP_AUTHENTICATION_BASIC", (const char *)-1, (const char *)32, (const char *)&k_SOAP_AUTHENTICATION_BASIC,
      (const char *)"SOAP_AUTHENTICATION_DIGEST", (const char *)-1, (const char *)32, (const char *)&k_SOAP_AUTHENTICATION_DIGEST,
      (const char *)"SOAP_COMPRESSION_ACCEPT", (const char *)-1, (const char *)32, (const char *)&k_SOAP_COMPRESSION_ACCEPT,
      (const char *)"SOAP_COMPRESSION_DEFLATE", (const char *)-1, (const char *)32, (const char *)&k_SOAP_COMPRESSION_DEFLATE,
      (const char *)"SOAP_COMPRESSION_GZIP", (const char *)-1, (const char *)32, (const char *)&k_SOAP_COMPRESSION_GZIP,
      (const char *)"SOAP_DOCUMENT", (const char *)-1, (const char *)32, (const char *)&k_SOAP_DOCUMENT,
      (const char *)"SOAP_ENCODED", (const char *)-1, (const char *)32, (const char *)&k_SOAP_ENCODED,
      (const char *)"SOAP_ENC_ARRAY", (const char *)-1, (const char *)32, (const char *)&k_SOAP_ENC_ARRAY,
      (const char *)"SOAP_ENC_OBJECT", (const char *)-1, (const char *)32, (const char *)&k_SOAP_ENC_OBJECT,
      (const char *)"SOAP_FUNCTIONS_ALL", (const char *)-1, (const char *)32, (const char *)&k_SOAP_FUNCTIONS_ALL,
      (const char *)"SOAP_LITERAL", (const char *)-1, (const char *)32, (const char *)&k_SOAP_LITERAL,
      (const char *)"SOAP_PERSISTENCE_REQUEST", (const char *)-1, (const char *)32, (const char *)&k_SOAP_PERSISTENCE_REQUEST,
      (const char *)"SOAP_PERSISTENCE_SESSION", (const char *)-1, (const char *)32, (const char *)&k_SOAP_PERSISTENCE_SESSION,
      (const char *)"SOAP_RPC", (const char *)-1, (const char *)32, (const char *)&k_SOAP_RPC,
      (const char *)"SOAP_SINGLE_ELEMENT_ARRAYS", (const char *)-1, (const char *)32, (const char *)&k_SOAP_SINGLE_ELEMENT_ARRAYS,
      (const char *)"SOAP_USE_XSI_ARRAY_TYPE", (const char *)-1, (const char *)32, (const char *)&k_SOAP_USE_XSI_ARRAY_TYPE,
      (const char *)"SOAP_WAIT_ONE_WAY_CALLS", (const char *)-1, (const char *)32, (const char *)&k_SOAP_WAIT_ONE_WAY_CALLS,
      (const char *)"SOCKET_E2BIG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_E2BIG,
      (const char *)"SOCKET_EACCES", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EACCES,
      (const char *)"SOCKET_EADDRINUSE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EADDRINUSE,
      (const char *)"SOCKET_EADDRNOTAVAIL", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EADDRNOTAVAIL,
      (const char *)"SOCKET_EADV", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EADV,
      (const char *)"SOCKET_EAFNOSUPPORT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EAFNOSUPPORT,
      (const char *)"SOCKET_EAGAIN", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EAGAIN,
      (const char *)"SOCKET_EALREADY", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EALREADY,
      (const char *)"SOCKET_EBADE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADE,
      (const char *)"SOCKET_EBADF", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADF,
      (const char *)"SOCKET_EBADFD", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADFD,
      (const char *)"SOCKET_EBADMSG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADMSG,
      (const char *)"SOCKET_EBADR", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADR,
      (const char *)"SOCKET_EBADRQC", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADRQC,
      (const char *)"SOCKET_EBADSLT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBADSLT,
      (const char *)"SOCKET_EBUSY", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EBUSY,
      (const char *)"SOCKET_ECHRNG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ECHRNG,
      (const char *)"SOCKET_ECOMM", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ECOMM,
      (const char *)"SOCKET_ECONNABORTED", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ECONNABORTED,
      (const char *)"SOCKET_ECONNREFUSED", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ECONNREFUSED,
      (const char *)"SOCKET_ECONNRESET", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ECONNRESET,
      (const char *)"SOCKET_EDESTADDRREQ", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EDESTADDRREQ,
      (const char *)"SOCKET_EDQUOT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EDQUOT,
      (const char *)"SOCKET_EEXIST", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EEXIST,
      (const char *)"SOCKET_EFAULT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EFAULT,
      (const char *)"SOCKET_EHOSTDOWN", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EHOSTDOWN,
      (const char *)"SOCKET_EHOSTUNREACH", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EHOSTUNREACH,
      (const char *)"SOCKET_EIDRM", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EIDRM,
      (const char *)"SOCKET_EINPROGRESS", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EINPROGRESS,
      (const char *)"SOCKET_EINTR", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EINTR,
      (const char *)"SOCKET_EINVAL", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EINVAL,
      (const char *)"SOCKET_EIO", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EIO,
      (const char *)"SOCKET_EISCONN", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EISCONN,
      (const char *)"SOCKET_EISDIR", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EISDIR,
      (const char *)"SOCKET_EISNAM", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EISNAM,
      (const char *)"SOCKET_EL2HLT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EL2HLT,
      (const char *)"SOCKET_EL2NSYNC", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EL2NSYNC,
      (const char *)"SOCKET_EL3HLT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EL3HLT,
      (const char *)"SOCKET_EL3RST", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EL3RST,
      (const char *)"SOCKET_ELNRNG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ELNRNG,
      (const char *)"SOCKET_ELOOP", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ELOOP,
      (const char *)"SOCKET_EMEDIUMTYPE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EMEDIUMTYPE,
      (const char *)"SOCKET_EMFILE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EMFILE,
      (const char *)"SOCKET_EMLINK", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EMLINK,
      (const char *)"SOCKET_EMSGSIZE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EMSGSIZE,
      (const char *)"SOCKET_EMULTIHOP", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EMULTIHOP,
      (const char *)"SOCKET_ENAMETOOLONG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENAMETOOLONG,
      (const char *)"SOCKET_ENETDOWN", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENETDOWN,
      (const char *)"SOCKET_ENETRESET", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENETRESET,
      (const char *)"SOCKET_ENETUNREACH", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENETUNREACH,
      (const char *)"SOCKET_ENFILE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENFILE,
      (const char *)"SOCKET_ENOANO", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOANO,
      (const char *)"SOCKET_ENOBUFS", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOBUFS,
      (const char *)"SOCKET_ENOCSI", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOCSI,
      (const char *)"SOCKET_ENODATA", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENODATA,
      (const char *)"SOCKET_ENODEV", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENODEV,
      (const char *)"SOCKET_ENOENT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOENT,
      (const char *)"SOCKET_ENOLCK", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOLCK,
      (const char *)"SOCKET_ENOLINK", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOLINK,
      (const char *)"SOCKET_ENOMEDIUM", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOMEDIUM,
      (const char *)"SOCKET_ENOMEM", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOMEM,
      (const char *)"SOCKET_ENOMSG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOMSG,
      (const char *)"SOCKET_ENONET", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENONET,
      (const char *)"SOCKET_ENOPROTOOPT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOPROTOOPT,
      (const char *)"SOCKET_ENOSPC", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOSPC,
      (const char *)"SOCKET_ENOSR", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOSR,
      (const char *)"SOCKET_ENOSTR", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOSTR,
      (const char *)"SOCKET_ENOSYS", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOSYS,
      (const char *)"SOCKET_ENOTBLK", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTBLK,
      (const char *)"SOCKET_ENOTCONN", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTCONN,
      (const char *)"SOCKET_ENOTDIR", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTDIR,
      (const char *)"SOCKET_ENOTEMPTY", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTEMPTY,
      (const char *)"SOCKET_ENOTSOCK", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTSOCK,
      (const char *)"SOCKET_ENOTTY", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTTY,
      (const char *)"SOCKET_ENOTUNIQ", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENOTUNIQ,
      (const char *)"SOCKET_ENXIO", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ENXIO,
      (const char *)"SOCKET_EOPNOTSUPP", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EOPNOTSUPP,
      (const char *)"SOCKET_EPERM", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EPERM,
      (const char *)"SOCKET_EPFNOSUPPORT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EPFNOSUPPORT,
      (const char *)"SOCKET_EPIPE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EPIPE,
      (const char *)"SOCKET_EPROTO", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EPROTO,
      (const char *)"SOCKET_EPROTONOSUPPORT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EPROTONOSUPPORT,
      (const char *)"SOCKET_EPROTOTYPE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EPROTOTYPE,
      (const char *)"SOCKET_EREMCHG", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EREMCHG,
      (const char *)"SOCKET_EREMOTE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EREMOTE,
      (const char *)"SOCKET_EREMOTEIO", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EREMOTEIO,
      (const char *)"SOCKET_ERESTART", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ERESTART,
      (const char *)"SOCKET_EROFS", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EROFS,
      (const char *)"SOCKET_ESHUTDOWN", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ESHUTDOWN,
      (const char *)"SOCKET_ESOCKTNOSUPPORT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ESOCKTNOSUPPORT,
      (const char *)"SOCKET_ESPIPE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ESPIPE,
      (const char *)"SOCKET_ESRMNT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ESRMNT,
      (const char *)"SOCKET_ESTRPIPE", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ESTRPIPE,
      (const char *)"SOCKET_ETIME", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ETIME,
      (const char *)"SOCKET_ETIMEDOUT", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ETIMEDOUT,
      (const char *)"SOCKET_ETOOMANYREFS", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_ETOOMANYREFS,
      (const char *)"SOCKET_EUNATCH", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EUNATCH,
      (const char *)"SOCKET_EUSERS", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EUSERS,
      (const char *)"SOCKET_EWOULDBLOCK", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EWOULDBLOCK,
      (const char *)"SOCKET_EXDEV", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EXDEV,
      (const char *)"SOCKET_EXFULL", (const char *)-1, (const char *)32, (const char *)&k_SOCKET_EXFULL,
      (const char *)"SOCK_DGRAM", (const char *)-1, (const char *)32, (const char *)&k_SOCK_DGRAM,
      (const char *)"SOCK_RAW", (const char *)-1, (const char *)32, (const char *)&k_SOCK_RAW,
      (const char *)"SOCK_RDM", (const char *)-1, (const char *)32, (const char *)&k_SOCK_RDM,
      (const char *)"SOCK_SEQPACKET", (const char *)-1, (const char *)32, (const char *)&k_SOCK_SEQPACKET,
      (const char *)"SOCK_STREAM", (const char *)-1, (const char *)32, (const char *)&k_SOCK_STREAM,
      (const char *)"SOL_SOCKET", (const char *)-1, (const char *)32, (const char *)&k_SOL_SOCKET,
      (const char *)"SOL_TCP", (const char *)-1, (const char *)32, (const char *)&k_SOL_TCP,
      (const char *)"SOL_UDP", (const char *)-1, (const char *)32, (const char *)&k_SOL_UDP,
      (const char *)"SOMAXCONN", (const char *)-1, (const char *)32, (const char *)&k_SOMAXCONN,
      (const char *)"SORTARRIVAL", (const char *)-1, (const char *)32, (const char *)&k_SORTARRIVAL,
      (const char *)"SORTCC", (const char *)-1, (const char *)32, (const char *)&k_SORTCC,
      (const char *)"SORTDATE", (const char *)-1, (const char *)32, (const char *)&k_SORTDATE,
      (const char *)"SORTFROM", (const char *)-1, (const char *)32, (const char *)&k_SORTFROM,
      (const char *)"SORTSIZE", (const char *)-1, (const char *)32, (const char *)&k_SORTSIZE,
      (const char *)"SORTSUBJECT", (const char *)-1, (const char *)32, (const char *)&k_SORTSUBJECT,
      (const char *)"SORTTO", (const char *)-1, (const char *)32, (const char *)&k_SORTTO,
      (const char *)"SORT_ASC", (const char *)-1, (const char *)32, (const char *)&k_SORT_ASC,
      (const char *)"SORT_DESC", (const char *)-1, (const char *)32, (const char *)&k_SORT_DESC,
      (const char *)"SORT_LOCALE_STRING", (const char *)-1, (const char *)32, (const char *)&k_SORT_LOCALE_STRING,
      (const char *)"SORT_NUMERIC", (const char *)-1, (const char *)32, (const char *)&k_SORT_NUMERIC,
      (const char *)"SORT_REGULAR", (const char *)-1, (const char *)32, (const char *)&k_SORT_REGULAR,
      (const char *)"SORT_STRING", (const char *)-1, (const char *)32, (const char *)&k_SORT_STRING,
      (const char *)"SO_BROADCAST", (const char *)-1, (const char *)32, (const char *)&k_SO_BROADCAST,
      (const char *)"SO_DEBUG", (const char *)-1, (const char *)32, (const char *)&k_SO_DEBUG,
      (const char *)"SO_DONTROUTE", (const char *)-1, (const char *)32, (const char *)&k_SO_DONTROUTE,
      (const char *)"SO_ERROR", (const char *)-1, (const char *)32, (const char *)&k_SO_ERROR,
      (const char *)"SO_FREE", (const char *)-1, (const char *)32, (const char *)&k_SO_FREE,
      (const char *)"SO_KEEPALIVE", (const char *)-1, (const char *)32, (const char *)&k_SO_KEEPALIVE,
      (const char *)"SO_LINGER", (const char *)-1, (const char *)32, (const char *)&k_SO_LINGER,
      (const char *)"SO_NOSERVER", (const char *)-1, (const char *)32, (const char *)&k_SO_NOSERVER,
      (const char *)"SO_OOBINLINE", (const char *)-1, (const char *)32, (const char *)&k_SO_OOBINLINE,
      (const char *)"SO_RCVBUF", (const char *)-1, (const char *)32, (const char *)&k_SO_RCVBUF,
      (const char *)"SO_RCVLOWAT", (const char *)-1, (const char *)32, (const char *)&k_SO_RCVLOWAT,
      (const char *)"SO_RCVTIMEO", (const char *)-1, (const char *)32, (const char *)&k_SO_RCVTIMEO,
      (const char *)"SO_REUSEADDR", (const char *)-1, (const char *)32, (const char *)&k_SO_REUSEADDR,
      (const char *)"SO_SNDBUF", (const char *)-1, (const char *)32, (const char *)&k_SO_SNDBUF,
      (const char *)"SO_SNDLOWAT", (const char *)-1, (const char *)32, (const char *)&k_SO_SNDLOWAT,
      (const char *)"SO_SNDTIMEO", (const char *)-1, (const char *)32, (const char *)&k_SO_SNDTIMEO,
      (const char *)"SO_TYPE", (const char *)-1, (const char *)32, (const char *)&k_SO_TYPE,
      (const char *)"SQLITE3_ASSOC", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_ASSOC,
      (const char *)"SQLITE3_BLOB", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_BLOB,
      (const char *)"SQLITE3_BOTH", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_BOTH,
      (const char *)"SQLITE3_FLOAT", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_FLOAT,
      (const char *)"SQLITE3_INTEGER", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_INTEGER,
      (const char *)"SQLITE3_NULL", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_NULL,
      (const char *)"SQLITE3_NUM", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_NUM,
      (const char *)"SQLITE3_OPEN_CREATE", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_OPEN_CREATE,
      (const char *)"SQLITE3_OPEN_READONLY", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_OPEN_READONLY,
      (const char *)"SQLITE3_OPEN_READWRITE", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_OPEN_READWRITE,
      (const char *)"SQLITE3_TEXT", (const char *)-1, (const char *)32, (const char *)&k_SQLITE3_TEXT,
      (const char *)"SQLT_AFC", (const char *)-1, (const char *)32, (const char *)&k_SQLT_AFC,
      (const char *)"SQLT_AVC", (const char *)-1, (const char *)32, (const char *)&k_SQLT_AVC,
      (const char *)"SQLT_BDOUBLE", (const char *)-1, (const char *)32, (const char *)&k_SQLT_BDOUBLE,
      (const char *)"SQLT_BFILEE", (const char *)-1, (const char *)32, (const char *)&k_SQLT_BFILEE,
      (const char *)"SQLT_BFLOAT", (const char *)-1, (const char *)32, (const char *)&k_SQLT_BFLOAT,
      (const char *)"SQLT_BIN", (const char *)-1, (const char *)32, (const char *)&k_SQLT_BIN,
      (const char *)"SQLT_BLOB", (const char *)-1, (const char *)32, (const char *)&k_SQLT_BLOB,
      (const char *)"SQLT_CFILEE", (const char *)-1, (const char *)32, (const char *)&k_SQLT_CFILEE,
      (const char *)"SQLT_CHR", (const char *)-1, (const char *)32, (const char *)&k_SQLT_CHR,
      (const char *)"SQLT_CLOB", (const char *)-1, (const char *)32, (const char *)&k_SQLT_CLOB,
      (const char *)"SQLT_FLT", (const char *)-1, (const char *)32, (const char *)&k_SQLT_FLT,
      (const char *)"SQLT_INT", (const char *)-1, (const char *)32, (const char *)&k_SQLT_INT,
      (const char *)"SQLT_LBI", (const char *)-1, (const char *)32, (const char *)&k_SQLT_LBI,
      (const char *)"SQLT_LNG", (const char *)-1, (const char *)32, (const char *)&k_SQLT_LNG,
      (const char *)"SQLT_LVC", (const char *)-1, (const char *)32, (const char *)&k_SQLT_LVC,
      (const char *)"SQLT_NTY", (const char *)-1, (const char *)32, (const char *)&k_SQLT_NTY,
      (const char *)"SQLT_NUM", (const char *)-1, (const char *)32, (const char *)&k_SQLT_NUM,
      (const char *)"SQLT_ODT", (const char *)-1, (const char *)32, (const char *)&k_SQLT_ODT,
      (const char *)"SQLT_RDD", (const char *)-1, (const char *)32, (const char *)&k_SQLT_RDD,
      (const char *)"SQLT_RSET", (const char *)-1, (const char *)32, (const char *)&k_SQLT_RSET,
      (const char *)"SQLT_STR", (const char *)-1, (const char *)32, (const char *)&k_SQLT_STR,
      (const char *)"SQLT_UIN", (const char *)-1, (const char *)32, (const char *)&k_SQLT_UIN,
      (const char *)"SQLT_VCS", (const char *)-1, (const char *)32, (const char *)&k_SQLT_VCS,
      (const char *)"STDERR", (const char *)-1, (const char *)512, (const char *)&BuiltinFiles::GetSTDERR,
      (const char *)"STDIN", (const char *)-1, (const char *)512, (const char *)&BuiltinFiles::GetSTDIN,
      (const char *)"STDOUT", (const char *)-1, (const char *)512, (const char *)&BuiltinFiles::GetSTDOUT,
      (const char *)"STREAM_CLIENT_ASYNC_CONNECT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CLIENT_ASYNC_CONNECT,
      (const char *)"STREAM_CLIENT_CONNECT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CLIENT_CONNECT,
      (const char *)"STREAM_CLIENT_PERSISTENT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CLIENT_PERSISTENT,
      (const char *)"STREAM_CRYPTO_METHOD_SSLv23_CLIENT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_SSLv23_CLIENT,
      (const char *)"STREAM_CRYPTO_METHOD_SSLv23_SERVER", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_SSLv23_SERVER,
      (const char *)"STREAM_CRYPTO_METHOD_SSLv2_CLIENT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_SSLv2_CLIENT,
      (const char *)"STREAM_CRYPTO_METHOD_SSLv2_SERVER", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_SSLv2_SERVER,
      (const char *)"STREAM_CRYPTO_METHOD_SSLv3_CLIENT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_SSLv3_CLIENT,
      (const char *)"STREAM_CRYPTO_METHOD_SSLv3_SERVER", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_SSLv3_SERVER,
      (const char *)"STREAM_CRYPTO_METHOD_TLS_CLIENT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_TLS_CLIENT,
      (const char *)"STREAM_CRYPTO_METHOD_TLS_SERVER", (const char *)-1, (const char *)32, (const char *)&k_STREAM_CRYPTO_METHOD_TLS_SERVER,
      (const char *)"STREAM_ENFORCE_SAFE_MODE", (const char *)-1, (const char *)32, (const char *)&k_STREAM_ENFORCE_SAFE_MODE,
      (const char *)"STREAM_FILTER_ALL", (const char *)-1, (const char *)32, (const char *)&k_STREAM_FILTER_ALL,
      (const char *)"STREAM_FILTER_READ", (const char *)-1, (const char *)32, (const char *)&k_STREAM_FILTER_READ,
      (const char *)"STREAM_FILTER_WRITE", (const char *)-1, (const char *)32, (const char *)&k_STREAM_FILTER_WRITE,
      (const char *)"STREAM_IGNORE_URL", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IGNORE_URL,
      (const char *)"STREAM_IPPROTO_ICMP", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IPPROTO_ICMP,
      (const char *)"STREAM_IPPROTO_IP", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IPPROTO_IP,
      (const char *)"STREAM_IPPROTO_RAW", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IPPROTO_RAW,
      (const char *)"STREAM_IPPROTO_TCP", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IPPROTO_TCP,
      (const char *)"STREAM_IPPROTO_UDP", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IPPROTO_UDP,
      (const char *)"STREAM_IS_URL", (const char *)-1, (const char *)32, (const char *)&k_STREAM_IS_URL,
      (const char *)"STREAM_MKDIR_RECURSIVE", (const char *)-1, (const char *)32, (const char *)&k_STREAM_MKDIR_RECURSIVE,
      (const char *)"STREAM_MUST_SEEK", (const char *)-1, (const char *)32, (const char *)&k_STREAM_MUST_SEEK,
      (const char *)"STREAM_NOTIFY_AUTH_REQUIRED", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_AUTH_REQUIRED,
      (const char *)"STREAM_NOTIFY_AUTH_RESULT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_AUTH_RESULT,
      (const char *)"STREAM_NOTIFY_COMPLETED", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_COMPLETED,
      (const char *)"STREAM_NOTIFY_CONNECT", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_CONNECT,
      (const char *)"STREAM_NOTIFY_FAILURE", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_FAILURE,
      (const char *)"STREAM_NOTIFY_FILE_SIZE_IS", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_FILE_SIZE_IS,
      (const char *)"STREAM_NOTIFY_MIME_TYPE_IS", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_MIME_TYPE_IS,
      (const char *)"STREAM_NOTIFY_PROGRESS", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_PROGRESS,
      (const char *)"STREAM_NOTIFY_REDIRECTED", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_REDIRECTED,
      (const char *)"STREAM_NOTIFY_RESOLVE", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_RESOLVE,
      (const char *)"STREAM_NOTIFY_SEVERITY_ERR", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_SEVERITY_ERR,
      (const char *)"STREAM_NOTIFY_SEVERITY_INFO", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_SEVERITY_INFO,
      (const char *)"STREAM_NOTIFY_SEVERITY_WARN", (const char *)-1, (const char *)32, (const char *)&k_STREAM_NOTIFY_SEVERITY_WARN,
      (const char *)"STREAM_OOB", (const char *)-1, (const char *)32, (const char *)&k_STREAM_OOB,
      (const char *)"STREAM_PEEK", (const char *)-1, (const char *)32, (const char *)&k_STREAM_PEEK,
      (const char *)"STREAM_PF_INET", (const char *)-1, (const char *)32, (const char *)&k_STREAM_PF_INET,
      (const char *)"STREAM_PF_INET6", (const char *)-1, (const char *)32, (const char *)&k_STREAM_PF_INET6,
      (const char *)"STREAM_PF_UNIX", (const char *)-1, (const char *)32, (const char *)&k_STREAM_PF_UNIX,
      (const char *)"STREAM_REPORT_ERRORS", (const char *)-1, (const char *)32, (const char *)&k_STREAM_REPORT_ERRORS,
      (const char *)"STREAM_SERVER_BIND", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SERVER_BIND,
      (const char *)"STREAM_SERVER_LISTEN", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SERVER_LISTEN,
      (const char *)"STREAM_SHUT_RD", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SHUT_RD,
      (const char *)"STREAM_SHUT_RDWR", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SHUT_RDWR,
      (const char *)"STREAM_SHUT_WR", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SHUT_WR,
      (const char *)"STREAM_SOCK_DGRAM", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SOCK_DGRAM,
      (const char *)"STREAM_SOCK_RAW", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SOCK_RAW,
      (const char *)"STREAM_SOCK_RDM", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SOCK_RDM,
      (const char *)"STREAM_SOCK_SEQPACKET", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SOCK_SEQPACKET,
      (const char *)"STREAM_SOCK_STREAM", (const char *)-1, (const char *)32, (const char *)&k_STREAM_SOCK_STREAM,
      (const char *)"STREAM_URL_STAT_LINK", (const char *)-1, (const char *)32, (const char *)&k_STREAM_URL_STAT_LINK,
      (const char *)"STREAM_URL_STAT_QUIET", (const char *)-1, (const char *)32, (const char *)&k_STREAM_URL_STAT_QUIET,
      (const char *)"STREAM_USE_PATH", (const char *)-1, (const char *)32, (const char *)&k_STREAM_USE_PATH,
      (const char *)"STR_PAD_BOTH", (const char *)-1, (const char *)32, (const char *)&k_STR_PAD_BOTH,
      (const char *)"STR_PAD_LEFT", (const char *)-1, (const char *)32, (const char *)&k_STR_PAD_LEFT,
      (const char *)"STR_PAD_RIGHT", (const char *)-1, (const char *)32, (const char *)&k_STR_PAD_RIGHT,
      (const char *)"ST_SET", (const char *)-1, (const char *)32, (const char *)&k_ST_SET,
      (const char *)"ST_SILENT", (const char *)-1, (const char *)32, (const char *)&k_ST_SILENT,
      (const char *)"ST_UID", (const char *)-1, (const char *)32, (const char *)&k_ST_UID,
      (const char *)"SUNFUNCS_RET_DOUBLE", (const char *)-1, (const char *)32, (const char *)&k_SUNFUNCS_RET_DOUBLE,
      (const char *)"SUNFUNCS_RET_STRING", (const char *)-1, (const char *)32, (const char *)&k_SUNFUNCS_RET_STRING,
      (const char *)"SUNFUNCS_RET_TIMESTAMP", (const char *)-1, (const char *)32, (const char *)&k_SUNFUNCS_RET_TIMESTAMP,
      (const char *)"TAINT_ALL", (const char *)-1, (const char *)32, (const char *)&k_TAINT_ALL,
      (const char *)"TAINT_HTML", (const char *)-1, (const char *)32, (const char *)&k_TAINT_HTML,
      (const char *)"TAINT_MUTATED", (const char *)-1, (const char *)32, (const char *)&k_TAINT_MUTATED,
      (const char *)"TAINT_NONE", (const char *)-1, (const char *)32, (const char *)&k_TAINT_NONE,
      (const char *)"TAINT_SHELL", (const char *)-1, (const char *)32, (const char *)&k_TAINT_SHELL,
      (const char *)"TAINT_SQL", (const char *)-1, (const char *)32, (const char *)&k_TAINT_SQL,
      (const char *)"TAINT_TRACE_HTML", (const char *)-1, (const char *)32, (const char *)&k_TAINT_TRACE_HTML,
      (const char *)"TAINT_TRACE_SELF", (const char *)-1, (const char *)32, (const char *)&k_TAINT_TRACE_SELF,
      (const char *)"THOUSEP", (const char *)-1, (const char *)32, (const char *)&k_THOUSEP,
      (const char *)"TRUE", (const char *)-1, (const char *)2, (const char *)&k_TRUE,
      (const char *)"TYPEAPPLICATION", (const char *)-1, (const char *)32, (const char *)&k_TYPEAPPLICATION,
      (const char *)"TYPEAUDIO", (const char *)-1, (const char *)32, (const char *)&k_TYPEAUDIO,
      (const char *)"TYPEIMAGE", (const char *)-1, (const char *)32, (const char *)&k_TYPEIMAGE,
      (const char *)"TYPEMESSAGE", (const char *)-1, (const char *)32, (const char *)&k_TYPEMESSAGE,
      (const char *)"TYPEMODEL", (const char *)-1, (const char *)32, (const char *)&k_TYPEMODEL,
      (const char *)"TYPEMULTIPART", (const char *)-1, (const char *)32, (const char *)&k_TYPEMULTIPART,
      (const char *)"TYPEOTHER", (const char *)-1, (const char *)32, (const char *)&k_TYPEOTHER,
      (const char *)"TYPETEXT", (const char *)-1, (const char *)32, (const char *)&k_TYPETEXT,
      (const char *)"TYPEVIDEO", (const char *)-1, (const char *)32, (const char *)&k_TYPEVIDEO,
      (const char *)"T_ABSTRACT", (const char *)-1, (const char *)32, (const char *)&k_T_ABSTRACT,
      (const char *)"T_AND_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_AND_EQUAL,
      (const char *)"T_ARRAY", (const char *)-1, (const char *)32, (const char *)&k_T_ARRAY,
      (const char *)"T_ARRAY_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_ARRAY_CAST,
      (const char *)"T_AS", (const char *)-1, (const char *)32, (const char *)&k_T_AS,
      (const char *)"T_BAD_CHARACTER", (const char *)-1, (const char *)32, (const char *)&k_T_BAD_CHARACTER,
      (const char *)"T_BOOLEAN_AND", (const char *)-1, (const char *)32, (const char *)&k_T_BOOLEAN_AND,
      (const char *)"T_BOOLEAN_OR", (const char *)-1, (const char *)32, (const char *)&k_T_BOOLEAN_OR,
      (const char *)"T_BOOL_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_BOOL_CAST,
      (const char *)"T_BREAK", (const char *)-1, (const char *)32, (const char *)&k_T_BREAK,
      (const char *)"T_CASE", (const char *)-1, (const char *)32, (const char *)&k_T_CASE,
      (const char *)"T_CATCH", (const char *)-1, (const char *)32, (const char *)&k_T_CATCH,
      (const char *)"T_CHARACTER", (const char *)-1, (const char *)32, (const char *)&k_T_CHARACTER,
      (const char *)"T_CLASS", (const char *)-1, (const char *)32, (const char *)&k_T_CLASS,
      (const char *)"T_CLASS_C", (const char *)-1, (const char *)32, (const char *)&k_T_CLASS_C,
      (const char *)"T_CLONE", (const char *)-1, (const char *)32, (const char *)&k_T_CLONE,
      (const char *)"T_CLOSE_TAG", (const char *)-1, (const char *)32, (const char *)&k_T_CLOSE_TAG,
      (const char *)"T_COMMENT", (const char *)-1, (const char *)32, (const char *)&k_T_COMMENT,
      (const char *)"T_CONCAT_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_CONCAT_EQUAL,
      (const char *)"T_CONST", (const char *)-1, (const char *)32, (const char *)&k_T_CONST,
      (const char *)"T_CONSTANT_ENCAPSED_STRING", (const char *)-1, (const char *)32, (const char *)&k_T_CONSTANT_ENCAPSED_STRING,
      (const char *)"T_CONTINUE", (const char *)-1, (const char *)32, (const char *)&k_T_CONTINUE,
      (const char *)"T_CURLY_OPEN", (const char *)-1, (const char *)32, (const char *)&k_T_CURLY_OPEN,
      (const char *)"T_DEC", (const char *)-1, (const char *)32, (const char *)&k_T_DEC,
      (const char *)"T_DECLARE", (const char *)-1, (const char *)32, (const char *)&k_T_DECLARE,
      (const char *)"T_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_T_DEFAULT,
      (const char *)"T_DIR", (const char *)-1, (const char *)32, (const char *)&k_T_DIR,
      (const char *)"T_DIV_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_DIV_EQUAL,
      (const char *)"T_DNUMBER", (const char *)-1, (const char *)32, (const char *)&k_T_DNUMBER,
      (const char *)"T_DO", (const char *)-1, (const char *)32, (const char *)&k_T_DO,
      (const char *)"T_DOC_COMMENT", (const char *)-1, (const char *)32, (const char *)&k_T_DOC_COMMENT,
      (const char *)"T_DOLLAR_OPEN_CURLY_BRACES", (const char *)-1, (const char *)32, (const char *)&k_T_DOLLAR_OPEN_CURLY_BRACES,
      (const char *)"T_DOUBLE_ARROW", (const char *)-1, (const char *)32, (const char *)&k_T_DOUBLE_ARROW,
      (const char *)"T_DOUBLE_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_DOUBLE_CAST,
      (const char *)"T_DOUBLE_COLON", (const char *)-1, (const char *)32, (const char *)&k_T_DOUBLE_COLON,
      (const char *)"T_ECHO", (const char *)-1, (const char *)32, (const char *)&k_T_ECHO,
      (const char *)"T_ELSE", (const char *)-1, (const char *)32, (const char *)&k_T_ELSE,
      (const char *)"T_ELSEIF", (const char *)-1, (const char *)32, (const char *)&k_T_ELSEIF,
      (const char *)"T_EMPTY", (const char *)-1, (const char *)32, (const char *)&k_T_EMPTY,
      (const char *)"T_ENCAPSED_AND_WHITESPACE", (const char *)-1, (const char *)32, (const char *)&k_T_ENCAPSED_AND_WHITESPACE,
      (const char *)"T_ENDDECLARE", (const char *)-1, (const char *)32, (const char *)&k_T_ENDDECLARE,
      (const char *)"T_ENDFOR", (const char *)-1, (const char *)32, (const char *)&k_T_ENDFOR,
      (const char *)"T_ENDFOREACH", (const char *)-1, (const char *)32, (const char *)&k_T_ENDFOREACH,
      (const char *)"T_ENDIF", (const char *)-1, (const char *)32, (const char *)&k_T_ENDIF,
      (const char *)"T_ENDSWITCH", (const char *)-1, (const char *)32, (const char *)&k_T_ENDSWITCH,
      (const char *)"T_ENDWHILE", (const char *)-1, (const char *)32, (const char *)&k_T_ENDWHILE,
      (const char *)"T_END_HEREDOC", (const char *)-1, (const char *)32, (const char *)&k_T_END_HEREDOC,
      (const char *)"T_EVAL", (const char *)-1, (const char *)32, (const char *)&k_T_EVAL,
      (const char *)"T_EXIT", (const char *)-1, (const char *)32, (const char *)&k_T_EXIT,
      (const char *)"T_EXTENDS", (const char *)-1, (const char *)32, (const char *)&k_T_EXTENDS,
      (const char *)"T_FILE", (const char *)-1, (const char *)32, (const char *)&k_T_FILE,
      (const char *)"T_FINAL", (const char *)-1, (const char *)32, (const char *)&k_T_FINAL,
      (const char *)"T_FMT", (const char *)-1, (const char *)32, (const char *)&k_T_FMT,
      (const char *)"T_FMT_AMPM", (const char *)-1, (const char *)32, (const char *)&k_T_FMT_AMPM,
      (const char *)"T_FOR", (const char *)-1, (const char *)32, (const char *)&k_T_FOR,
      (const char *)"T_FOREACH", (const char *)-1, (const char *)32, (const char *)&k_T_FOREACH,
      (const char *)"T_FUNCTION", (const char *)-1, (const char *)32, (const char *)&k_T_FUNCTION,
      (const char *)"T_FUNC_C", (const char *)-1, (const char *)32, (const char *)&k_T_FUNC_C,
      (const char *)"T_GLOBAL", (const char *)-1, (const char *)32, (const char *)&k_T_GLOBAL,
      (const char *)"T_GOTO", (const char *)-1, (const char *)32, (const char *)&k_T_GOTO,
      (const char *)"T_HALT_COMPILER", (const char *)-1, (const char *)32, (const char *)&k_T_HALT_COMPILER,
      (const char *)"T_IF", (const char *)-1, (const char *)32, (const char *)&k_T_IF,
      (const char *)"T_IMPLEMENTS", (const char *)-1, (const char *)32, (const char *)&k_T_IMPLEMENTS,
      (const char *)"T_INC", (const char *)-1, (const char *)32, (const char *)&k_T_INC,
      (const char *)"T_INCLUDE", (const char *)-1, (const char *)32, (const char *)&k_T_INCLUDE,
      (const char *)"T_INCLUDE_ONCE", (const char *)-1, (const char *)32, (const char *)&k_T_INCLUDE_ONCE,
      (const char *)"T_INLINE_HTML", (const char *)-1, (const char *)32, (const char *)&k_T_INLINE_HTML,
      (const char *)"T_INSTANCEOF", (const char *)-1, (const char *)32, (const char *)&k_T_INSTANCEOF,
      (const char *)"T_INTERFACE", (const char *)-1, (const char *)32, (const char *)&k_T_INTERFACE,
      (const char *)"T_INT_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_INT_CAST,
      (const char *)"T_ISSET", (const char *)-1, (const char *)32, (const char *)&k_T_ISSET,
      (const char *)"T_IS_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_IS_EQUAL,
      (const char *)"T_IS_GREATER_OR_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_IS_GREATER_OR_EQUAL,
      (const char *)"T_IS_IDENTICAL", (const char *)-1, (const char *)32, (const char *)&k_T_IS_IDENTICAL,
      (const char *)"T_IS_NOT_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_IS_NOT_EQUAL,
      (const char *)"T_IS_NOT_IDENTICAL", (const char *)-1, (const char *)32, (const char *)&k_T_IS_NOT_IDENTICAL,
      (const char *)"T_IS_SMALLER_OR_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_IS_SMALLER_OR_EQUAL,
      (const char *)"T_LINE", (const char *)-1, (const char *)32, (const char *)&k_T_LINE,
      (const char *)"T_LIST", (const char *)-1, (const char *)32, (const char *)&k_T_LIST,
      (const char *)"T_LNUMBER", (const char *)-1, (const char *)32, (const char *)&k_T_LNUMBER,
      (const char *)"T_LOGICAL_AND", (const char *)-1, (const char *)32, (const char *)&k_T_LOGICAL_AND,
      (const char *)"T_LOGICAL_OR", (const char *)-1, (const char *)32, (const char *)&k_T_LOGICAL_OR,
      (const char *)"T_LOGICAL_XOR", (const char *)-1, (const char *)32, (const char *)&k_T_LOGICAL_XOR,
      (const char *)"T_METHOD_C", (const char *)-1, (const char *)32, (const char *)&k_T_METHOD_C,
      (const char *)"T_MINUS_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_MINUS_EQUAL,
      (const char *)"T_MOD_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_MOD_EQUAL,
      (const char *)"T_MUL_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_MUL_EQUAL,
      (const char *)"T_NAMESPACE", (const char *)-1, (const char *)32, (const char *)&k_T_NAMESPACE,
      (const char *)"T_NEW", (const char *)-1, (const char *)32, (const char *)&k_T_NEW,
      (const char *)"T_NS_C", (const char *)-1, (const char *)32, (const char *)&k_T_NS_C,
      (const char *)"T_NS_SEPARATOR", (const char *)-1, (const char *)32, (const char *)&k_T_NS_SEPARATOR,
      (const char *)"T_NUM_STRING", (const char *)-1, (const char *)32, (const char *)&k_T_NUM_STRING,
      (const char *)"T_OBJECT_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_OBJECT_CAST,
      (const char *)"T_OBJECT_OPERATOR", (const char *)-1, (const char *)32, (const char *)&k_T_OBJECT_OPERATOR,
      (const char *)"T_OPEN_TAG", (const char *)-1, (const char *)32, (const char *)&k_T_OPEN_TAG,
      (const char *)"T_OPEN_TAG_WITH_ECHO", (const char *)-1, (const char *)32, (const char *)&k_T_OPEN_TAG_WITH_ECHO,
      (const char *)"T_OR_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_OR_EQUAL,
      (const char *)"T_PAAMAYIM_NEKUDOTAYIM", (const char *)-1, (const char *)32, (const char *)&k_T_PAAMAYIM_NEKUDOTAYIM,
      (const char *)"T_PLUS_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_PLUS_EQUAL,
      (const char *)"T_PRINT", (const char *)-1, (const char *)32, (const char *)&k_T_PRINT,
      (const char *)"T_PRIVATE", (const char *)-1, (const char *)32, (const char *)&k_T_PRIVATE,
      (const char *)"T_PROTECTED", (const char *)-1, (const char *)32, (const char *)&k_T_PROTECTED,
      (const char *)"T_PUBLIC", (const char *)-1, (const char *)32, (const char *)&k_T_PUBLIC,
      (const char *)"T_REQUIRE", (const char *)-1, (const char *)32, (const char *)&k_T_REQUIRE,
      (const char *)"T_REQUIRE_ONCE", (const char *)-1, (const char *)32, (const char *)&k_T_REQUIRE_ONCE,
      (const char *)"T_RETURN", (const char *)-1, (const char *)32, (const char *)&k_T_RETURN,
      (const char *)"T_SL", (const char *)-1, (const char *)32, (const char *)&k_T_SL,
      (const char *)"T_SL_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_SL_EQUAL,
      (const char *)"T_SR", (const char *)-1, (const char *)32, (const char *)&k_T_SR,
      (const char *)"T_SR_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_SR_EQUAL,
      (const char *)"T_START_HEREDOC", (const char *)-1, (const char *)32, (const char *)&k_T_START_HEREDOC,
      (const char *)"T_STATIC", (const char *)-1, (const char *)32, (const char *)&k_T_STATIC,
      (const char *)"T_STRING", (const char *)-1, (const char *)32, (const char *)&k_T_STRING,
      (const char *)"T_STRING_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_STRING_CAST,
      (const char *)"T_STRING_VARNAME", (const char *)-1, (const char *)32, (const char *)&k_T_STRING_VARNAME,
      (const char *)"T_SWITCH", (const char *)-1, (const char *)32, (const char *)&k_T_SWITCH,
      (const char *)"T_THROW", (const char *)-1, (const char *)32, (const char *)&k_T_THROW,
      (const char *)"T_TRY", (const char *)-1, (const char *)32, (const char *)&k_T_TRY,
      (const char *)"T_UNSET", (const char *)-1, (const char *)32, (const char *)&k_T_UNSET,
      (const char *)"T_UNSET_CAST", (const char *)-1, (const char *)32, (const char *)&k_T_UNSET_CAST,
      (const char *)"T_USE", (const char *)-1, (const char *)32, (const char *)&k_T_USE,
      (const char *)"T_VAR", (const char *)-1, (const char *)32, (const char *)&k_T_VAR,
      (const char *)"T_VARIABLE", (const char *)-1, (const char *)32, (const char *)&k_T_VARIABLE,
      (const char *)"T_WHILE", (const char *)-1, (const char *)32, (const char *)&k_T_WHILE,
      (const char *)"T_WHITESPACE", (const char *)-1, (const char *)32, (const char *)&k_T_WHITESPACE,
      (const char *)"T_XOR_EQUAL", (const char *)-1, (const char *)32, (const char *)&k_T_XOR_EQUAL,
      (const char *)"UCOL_ALTERNATE_HANDLING", (const char *)-1, (const char *)32, (const char *)&k_UCOL_ALTERNATE_HANDLING,
      (const char *)"UCOL_CASE_FIRST", (const char *)-1, (const char *)32, (const char *)&k_UCOL_CASE_FIRST,
      (const char *)"UCOL_CASE_LEVEL", (const char *)-1, (const char *)32, (const char *)&k_UCOL_CASE_LEVEL,
      (const char *)"UCOL_DEFAULT", (const char *)-1, (const char *)32, (const char *)&k_UCOL_DEFAULT,
      (const char *)"UCOL_DEFAULT_STRENGTH", (const char *)-1, (const char *)32, (const char *)&k_UCOL_DEFAULT_STRENGTH,
      (const char *)"UCOL_FRENCH_COLLATION", (const char *)-1, (const char *)32, (const char *)&k_UCOL_FRENCH_COLLATION,
      (const char *)"UCOL_HIRAGANA_QUATERNARY_MODE", (const char *)-1, (const char *)32, (const char *)&k_UCOL_HIRAGANA_QUATERNARY_MODE,
      (const char *)"UCOL_IDENTICAL", (const char *)-1, (const char *)32, (const char *)&k_UCOL_IDENTICAL,
      (const char *)"UCOL_LOWER_FIRST", (const char *)-1, (const char *)32, (const char *)&k_UCOL_LOWER_FIRST,
      (const char *)"UCOL_NON_IGNORABLE", (const char *)-1, (const char *)32, (const char *)&k_UCOL_NON_IGNORABLE,
      (const char *)"UCOL_NORMALIZATION_MODE", (const char *)-1, (const char *)32, (const char *)&k_UCOL_NORMALIZATION_MODE,
      (const char *)"UCOL_NUMERIC_COLLATION", (const char *)-1, (const char *)32, (const char *)&k_UCOL_NUMERIC_COLLATION,
      (const char *)"UCOL_OFF", (const char *)-1, (const char *)32, (const char *)&k_UCOL_OFF,
      (const char *)"UCOL_ON", (const char *)-1, (const char *)32, (const char *)&k_UCOL_ON,
      (const char *)"UCOL_PRIMARY", (const char *)-1, (const char *)32, (const char *)&k_UCOL_PRIMARY,
      (const char *)"UCOL_QUATERNARY", (const char *)-1, (const char *)32, (const char *)&k_UCOL_QUATERNARY,
      (const char *)"UCOL_SECONDARY", (const char *)-1, (const char *)32, (const char *)&k_UCOL_SECONDARY,
      (const char *)"UCOL_SHIFTED", (const char *)-1, (const char *)32, (const char *)&k_UCOL_SHIFTED,
      (const char *)"UCOL_STRENGTH", (const char *)-1, (const char *)32, (const char *)&k_UCOL_STRENGTH,
      (const char *)"UCOL_TERTIARY", (const char *)-1, (const char *)32, (const char *)&k_UCOL_TERTIARY,
      (const char *)"UCOL_UPPER_FIRST", (const char *)-1, (const char *)32, (const char *)&k_UCOL_UPPER_FIRST,
      (const char *)"ULOC_ACTUAL_LOCALE", (const char *)-1, (const char *)32, (const char *)&k_ULOC_ACTUAL_LOCALE,
      (const char *)"ULOC_VALID_LOCALE", (const char *)-1, (const char *)32, (const char *)&k_ULOC_VALID_LOCALE,
      (const char *)"UNKNOWN_TYPE", (const char *)-1, (const char *)32, (const char *)&k_UNKNOWN_TYPE,
      (const char *)"UPLOAD_ERR_CANT_WRITE", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_CANT_WRITE,
      (const char *)"UPLOAD_ERR_EXTENSION", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_EXTENSION,
      (const char *)"UPLOAD_ERR_FORM_SIZE", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_FORM_SIZE,
      (const char *)"UPLOAD_ERR_INI_SIZE", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_INI_SIZE,
      (const char *)"UPLOAD_ERR_NO_FILE", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_NO_FILE,
      (const char *)"UPLOAD_ERR_NO_TMP_DIR", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_NO_TMP_DIR,
      (const char *)"UPLOAD_ERR_OK", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_OK,
      (const char *)"UPLOAD_ERR_PARTIAL", (const char *)-1, (const char *)32, (const char *)&k_UPLOAD_ERR_PARTIAL,
      (const char *)"U_AMBIGUOUS_ALIAS_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_AMBIGUOUS_ALIAS_WARNING,
      (const char *)"U_BAD_VARIABLE_DEFINITION", (const char *)-1, (const char *)32, (const char *)&k_U_BAD_VARIABLE_DEFINITION,
      (const char *)"U_BRK_ASSIGN_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_ASSIGN_ERROR,
      (const char *)"U_BRK_ERROR_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_ERROR_LIMIT,
      (const char *)"U_BRK_ERROR_START", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_ERROR_START,
      (const char *)"U_BRK_HEX_DIGITS_EXPECTED", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_HEX_DIGITS_EXPECTED,
      (const char *)"U_BRK_INIT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_INIT_ERROR,
      (const char *)"U_BRK_INTERNAL_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_INTERNAL_ERROR,
      (const char *)"U_BRK_MALFORMED_RULE_TAG", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_MALFORMED_RULE_TAG,
      (const char *)"U_BRK_MISMATCHED_PAREN", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_MISMATCHED_PAREN,
      (const char *)"U_BRK_NEW_LINE_IN_QUOTED_STRING", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_NEW_LINE_IN_QUOTED_STRING,
      (const char *)"U_BRK_RULE_EMPTY_SET", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_RULE_EMPTY_SET,
      (const char *)"U_BRK_RULE_SYNTAX", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_RULE_SYNTAX,
      (const char *)"U_BRK_SEMICOLON_EXPECTED", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_SEMICOLON_EXPECTED,
      (const char *)"U_BRK_UNCLOSED_SET", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_UNCLOSED_SET,
      (const char *)"U_BRK_UNDEFINED_VARIABLE", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_UNDEFINED_VARIABLE,
      (const char *)"U_BRK_UNRECOGNIZED_OPTION", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_UNRECOGNIZED_OPTION,
      (const char *)"U_BRK_VARIABLE_REDFINITION", (const char *)-1, (const char *)32, (const char *)&k_U_BRK_VARIABLE_REDFINITION,
      (const char *)"U_BUFFER_OVERFLOW_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_BUFFER_OVERFLOW_ERROR,
      (const char *)"U_CE_NOT_FOUND_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_CE_NOT_FOUND_ERROR,
      (const char *)"U_COLLATOR_VERSION_MISMATCH", (const char *)-1, (const char *)32, (const char *)&k_U_COLLATOR_VERSION_MISMATCH,
      (const char *)"U_DIFFERENT_UCA_VERSION", (const char *)-1, (const char *)32, (const char *)&k_U_DIFFERENT_UCA_VERSION,
      (const char *)"U_ENUM_OUT_OF_SYNC_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_ENUM_OUT_OF_SYNC_ERROR,
      (const char *)"U_ERROR_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_ERROR_LIMIT,
      (const char *)"U_ERROR_WARNING_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_ERROR_WARNING_LIMIT,
      (const char *)"U_ERROR_WARNING_START", (const char *)-1, (const char *)32, (const char *)&k_U_ERROR_WARNING_START,
      (const char *)"U_FILE_ACCESS_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_FILE_ACCESS_ERROR,
      (const char *)"U_FMT_PARSE_ERROR_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_FMT_PARSE_ERROR_LIMIT,
      (const char *)"U_FMT_PARSE_ERROR_START", (const char *)-1, (const char *)32, (const char *)&k_U_FMT_PARSE_ERROR_START,
      (const char *)"U_ILLEGAL_ARGUMENT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_ILLEGAL_ARGUMENT_ERROR,
      (const char *)"U_ILLEGAL_CHARACTER", (const char *)-1, (const char *)32, (const char *)&k_U_ILLEGAL_CHARACTER,
      (const char *)"U_ILLEGAL_CHAR_FOUND", (const char *)-1, (const char *)32, (const char *)&k_U_ILLEGAL_CHAR_FOUND,
      (const char *)"U_ILLEGAL_CHAR_IN_SEGMENT", (const char *)-1, (const char *)32, (const char *)&k_U_ILLEGAL_CHAR_IN_SEGMENT,
      (const char *)"U_ILLEGAL_ESCAPE_SEQUENCE", (const char *)-1, (const char *)32, (const char *)&k_U_ILLEGAL_ESCAPE_SEQUENCE,
      (const char *)"U_ILLEGAL_PAD_POSITION", (const char *)-1, (const char *)32, (const char *)&k_U_ILLEGAL_PAD_POSITION,
      (const char *)"U_INDEX_OUTOFBOUNDS_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_INDEX_OUTOFBOUNDS_ERROR,
      (const char *)"U_INTERNAL_PROGRAM_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_INTERNAL_PROGRAM_ERROR,
      (const char *)"U_INTERNAL_TRANSLITERATOR_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_INTERNAL_TRANSLITERATOR_ERROR,
      (const char *)"U_INVALID_CHAR_FOUND", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_CHAR_FOUND,
      (const char *)"U_INVALID_FORMAT_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_FORMAT_ERROR,
      (const char *)"U_INVALID_FUNCTION", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_FUNCTION,
      (const char *)"U_INVALID_ID", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_ID,
      (const char *)"U_INVALID_PROPERTY_PATTERN", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_PROPERTY_PATTERN,
      (const char *)"U_INVALID_RBT_SYNTAX", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_RBT_SYNTAX,
      (const char *)"U_INVALID_STATE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_STATE_ERROR,
      (const char *)"U_INVALID_TABLE_FILE", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_TABLE_FILE,
      (const char *)"U_INVALID_TABLE_FORMAT", (const char *)-1, (const char *)32, (const char *)&k_U_INVALID_TABLE_FORMAT,
      (const char *)"U_INVARIANT_CONVERSION_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_INVARIANT_CONVERSION_ERROR,
      (const char *)"U_MALFORMED_EXPONENTIAL_PATTERN", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_EXPONENTIAL_PATTERN,
      (const char *)"U_MALFORMED_PRAGMA", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_PRAGMA,
      (const char *)"U_MALFORMED_RULE", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_RULE,
      (const char *)"U_MALFORMED_SET", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_SET,
      (const char *)"U_MALFORMED_SYMBOL_REFERENCE", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_SYMBOL_REFERENCE,
      (const char *)"U_MALFORMED_UNICODE_ESCAPE", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_UNICODE_ESCAPE,
      (const char *)"U_MALFORMED_VARIABLE_DEFINITION", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_VARIABLE_DEFINITION,
      (const char *)"U_MALFORMED_VARIABLE_REFERENCE", (const char *)-1, (const char *)32, (const char *)&k_U_MALFORMED_VARIABLE_REFERENCE,
      (const char *)"U_MEMORY_ALLOCATION_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_MEMORY_ALLOCATION_ERROR,
      (const char *)"U_MESSAGE_PARSE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_MESSAGE_PARSE_ERROR,
      (const char *)"U_MISMATCHED_SEGMENT_DELIMITERS", (const char *)-1, (const char *)32, (const char *)&k_U_MISMATCHED_SEGMENT_DELIMITERS,
      (const char *)"U_MISPLACED_ANCHOR_START", (const char *)-1, (const char *)32, (const char *)&k_U_MISPLACED_ANCHOR_START,
      (const char *)"U_MISPLACED_COMPOUND_FILTER", (const char *)-1, (const char *)32, (const char *)&k_U_MISPLACED_COMPOUND_FILTER,
      (const char *)"U_MISPLACED_CURSOR_OFFSET", (const char *)-1, (const char *)32, (const char *)&k_U_MISPLACED_CURSOR_OFFSET,
      (const char *)"U_MISPLACED_QUANTIFIER", (const char *)-1, (const char *)32, (const char *)&k_U_MISPLACED_QUANTIFIER,
      (const char *)"U_MISSING_OPERATOR", (const char *)-1, (const char *)32, (const char *)&k_U_MISSING_OPERATOR,
      (const char *)"U_MISSING_RESOURCE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_MISSING_RESOURCE_ERROR,
      (const char *)"U_MISSING_SEGMENT_CLOSE", (const char *)-1, (const char *)32, (const char *)&k_U_MISSING_SEGMENT_CLOSE,
      (const char *)"U_MULTIPLE_ANTE_CONTEXTS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_ANTE_CONTEXTS,
      (const char *)"U_MULTIPLE_COMPOUND_FILTERS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_COMPOUND_FILTERS,
      (const char *)"U_MULTIPLE_CURSORS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_CURSORS,
      (const char *)"U_MULTIPLE_DECIMAL_SEPARATORS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_DECIMAL_SEPARATORS,
      (const char *)"U_MULTIPLE_DECIMAL_SEPERATORS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_DECIMAL_SEPERATORS,
      (const char *)"U_MULTIPLE_EXPONENTIAL_SYMBOLS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_EXPONENTIAL_SYMBOLS,
      (const char *)"U_MULTIPLE_PAD_SPECIFIERS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_PAD_SPECIFIERS,
      (const char *)"U_MULTIPLE_PERCENT_SYMBOLS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_PERCENT_SYMBOLS,
      (const char *)"U_MULTIPLE_PERMILL_SYMBOLS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_PERMILL_SYMBOLS,
      (const char *)"U_MULTIPLE_POST_CONTEXTS", (const char *)-1, (const char *)32, (const char *)&k_U_MULTIPLE_POST_CONTEXTS,
      (const char *)"U_NO_SPACE_AVAILABLE", (const char *)-1, (const char *)32, (const char *)&k_U_NO_SPACE_AVAILABLE,
      (const char *)"U_NO_WRITE_PERMISSION", (const char *)-1, (const char *)32, (const char *)&k_U_NO_WRITE_PERMISSION,
      (const char *)"U_PARSE_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_PARSE_ERROR,
      (const char *)"U_PARSE_ERROR_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_PARSE_ERROR_LIMIT,
      (const char *)"U_PARSE_ERROR_START", (const char *)-1, (const char *)32, (const char *)&k_U_PARSE_ERROR_START,
      (const char *)"U_PATTERN_SYNTAX_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_PATTERN_SYNTAX_ERROR,
      (const char *)"U_PRIMARY_TOO_LONG_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_PRIMARY_TOO_LONG_ERROR,
      (const char *)"U_REGEX_BAD_ESCAPE_SEQUENCE", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_BAD_ESCAPE_SEQUENCE,
      (const char *)"U_REGEX_BAD_INTERVAL", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_BAD_INTERVAL,
      (const char *)"U_REGEX_ERROR_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_ERROR_LIMIT,
      (const char *)"U_REGEX_ERROR_START", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_ERROR_START,
      (const char *)"U_REGEX_INTERNAL_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_INTERNAL_ERROR,
      (const char *)"U_REGEX_INVALID_BACK_REF", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_INVALID_BACK_REF,
      (const char *)"U_REGEX_INVALID_FLAG", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_INVALID_FLAG,
      (const char *)"U_REGEX_INVALID_STATE", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_INVALID_STATE,
      (const char *)"U_REGEX_LOOK_BEHIND_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_LOOK_BEHIND_LIMIT,
      (const char *)"U_REGEX_MAX_LT_MIN", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_MAX_LT_MIN,
      (const char *)"U_REGEX_MISMATCHED_PAREN", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_MISMATCHED_PAREN,
      (const char *)"U_REGEX_NUMBER_TOO_BIG", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_NUMBER_TOO_BIG,
      (const char *)"U_REGEX_PROPERTY_SYNTAX", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_PROPERTY_SYNTAX,
      (const char *)"U_REGEX_RULE_SYNTAX", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_RULE_SYNTAX,
      (const char *)"U_REGEX_SET_CONTAINS_STRING", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_SET_CONTAINS_STRING,
      (const char *)"U_REGEX_UNIMPLEMENTED", (const char *)-1, (const char *)32, (const char *)&k_U_REGEX_UNIMPLEMENTED,
      (const char *)"U_RESOURCE_TYPE_MISMATCH", (const char *)-1, (const char *)32, (const char *)&k_U_RESOURCE_TYPE_MISMATCH,
      (const char *)"U_RULE_MASK_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_RULE_MASK_ERROR,
      (const char *)"U_SAFECLONE_ALLOCATED_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_SAFECLONE_ALLOCATED_WARNING,
      (const char *)"U_SORT_KEY_TOO_SHORT_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_SORT_KEY_TOO_SHORT_WARNING,
      (const char *)"U_STANDARD_ERROR_LIMIT", (const char *)-1, (const char *)32, (const char *)&k_U_STANDARD_ERROR_LIMIT,
      (const char *)"U_STATE_OLD_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_STATE_OLD_WARNING,
      (const char *)"U_STATE_TOO_OLD_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_STATE_TOO_OLD_ERROR,
      (const char *)"U_STRINGPREP_CHECK_BIDI_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_STRINGPREP_CHECK_BIDI_ERROR,
      (const char *)"U_STRINGPREP_PROHIBITED_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_STRINGPREP_PROHIBITED_ERROR,
      (const char *)"U_STRINGPREP_UNASSIGNED_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_STRINGPREP_UNASSIGNED_ERROR,
      (const char *)"U_STRING_NOT_TERMINATED_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_STRING_NOT_TERMINATED_WARNING,
      (const char *)"U_TOO_MANY_ALIASES_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_TOO_MANY_ALIASES_ERROR,
      (const char *)"U_TRAILING_BACKSLASH", (const char *)-1, (const char *)32, (const char *)&k_U_TRAILING_BACKSLASH,
      (const char *)"U_TRUNCATED_CHAR_FOUND", (const char *)-1, (const char *)32, (const char *)&k_U_TRUNCATED_CHAR_FOUND,
      (const char *)"U_UNCLOSED_SEGMENT", (const char *)-1, (const char *)32, (const char *)&k_U_UNCLOSED_SEGMENT,
      (const char *)"U_UNDEFINED_SEGMENT_REFERENCE", (const char *)-1, (const char *)32, (const char *)&k_U_UNDEFINED_SEGMENT_REFERENCE,
      (const char *)"U_UNDEFINED_VARIABLE", (const char *)-1, (const char *)32, (const char *)&k_U_UNDEFINED_VARIABLE,
      (const char *)"U_UNEXPECTED_TOKEN", (const char *)-1, (const char *)32, (const char *)&k_U_UNEXPECTED_TOKEN,
      (const char *)"U_UNMATCHED_BRACES", (const char *)-1, (const char *)32, (const char *)&k_U_UNMATCHED_BRACES,
      (const char *)"U_UNQUOTED_SPECIAL", (const char *)-1, (const char *)32, (const char *)&k_U_UNQUOTED_SPECIAL,
      (const char *)"U_UNSUPPORTED_ATTRIBUTE", (const char *)-1, (const char *)32, (const char *)&k_U_UNSUPPORTED_ATTRIBUTE,
      (const char *)"U_UNSUPPORTED_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_UNSUPPORTED_ERROR,
      (const char *)"U_UNSUPPORTED_ESCAPE_SEQUENCE", (const char *)-1, (const char *)32, (const char *)&k_U_UNSUPPORTED_ESCAPE_SEQUENCE,
      (const char *)"U_UNSUPPORTED_PROPERTY", (const char *)-1, (const char *)32, (const char *)&k_U_UNSUPPORTED_PROPERTY,
      (const char *)"U_UNTERMINATED_QUOTE", (const char *)-1, (const char *)32, (const char *)&k_U_UNTERMINATED_QUOTE,
      (const char *)"U_USELESS_COLLATOR_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_USELESS_COLLATOR_ERROR,
      (const char *)"U_USING_DEFAULT_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_USING_DEFAULT_WARNING,
      (const char *)"U_USING_FALLBACK_WARNING", (const char *)-1, (const char *)32, (const char *)&k_U_USING_FALLBACK_WARNING,
      (const char *)"U_VARIABLE_RANGE_EXHAUSTED", (const char *)-1, (const char *)32, (const char *)&k_U_VARIABLE_RANGE_EXHAUSTED,
      (const char *)"U_VARIABLE_RANGE_OVERLAP", (const char *)-1, (const char *)32, (const char *)&k_U_VARIABLE_RANGE_OVERLAP,
      (const char *)"U_ZERO_ERROR", (const char *)-1, (const char *)32, (const char *)&k_U_ZERO_ERROR,
      (const char *)"WNOHANG", (const char *)-1, (const char *)32, (const char *)&k_WNOHANG,
      (const char *)"WSDL_CACHE_BOTH", (const char *)-1, (const char *)32, (const char *)&k_WSDL_CACHE_BOTH,
      (const char *)"WSDL_CACHE_DISK", (const char *)-1, (const char *)32, (const char *)&k_WSDL_CACHE_DISK,
      (const char *)"WSDL_CACHE_MEMORY", (const char *)-1, (const char *)32, (const char *)&k_WSDL_CACHE_MEMORY,
      (const char *)"WSDL_CACHE_NONE", (const char *)-1, (const char *)32, (const char *)&k_WSDL_CACHE_NONE,
      (const char *)"WUNTRACED", (const char *)-1, (const char *)32, (const char *)&k_WUNTRACED,
      (const char *)"X509_PURPOSE_ANY", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_ANY,
      (const char *)"X509_PURPOSE_CRL_SIGN", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_CRL_SIGN,
      (const char *)"X509_PURPOSE_NS_SSL_SERVER", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_NS_SSL_SERVER,
      (const char *)"X509_PURPOSE_SMIME_ENCRYPT", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_SMIME_ENCRYPT,
      (const char *)"X509_PURPOSE_SMIME_SIGN", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_SMIME_SIGN,
      (const char *)"X509_PURPOSE_SSL_CLIENT", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_SSL_CLIENT,
      (const char *)"X509_PURPOSE_SSL_SERVER", (const char *)-1, (const char *)32, (const char *)&k_X509_PURPOSE_SSL_SERVER,
      (const char *)"XHPROF_FLAGS_CPU", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_CPU,
      (const char *)"XHPROF_FLAGS_MALLOC", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_MALLOC,
      (const char *)"XHPROF_FLAGS_MEASURE_XHPROF_DISABLE", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_MEASURE_XHPROF_DISABLE,
      (const char *)"XHPROF_FLAGS_MEMORY", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_MEMORY,
      (const char *)"XHPROF_FLAGS_NO_BUILTINS", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_NO_BUILTINS,
      (const char *)"XHPROF_FLAGS_TRACE", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_TRACE,
      (const char *)"XHPROF_FLAGS_VTSC", (const char *)-1, (const char *)32, (const char *)&k_XHPROF_FLAGS_VTSC,
      (const char *)"XML_ATTRIBUTE_CDATA", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_CDATA,
      (const char *)"XML_ATTRIBUTE_DECL_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_DECL_NODE,
      (const char *)"XML_ATTRIBUTE_ENTITY", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_ENTITY,
      (const char *)"XML_ATTRIBUTE_ENUMERATION", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_ENUMERATION,
      (const char *)"XML_ATTRIBUTE_ID", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_ID,
      (const char *)"XML_ATTRIBUTE_IDREF", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_IDREF,
      (const char *)"XML_ATTRIBUTE_IDREFS", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_IDREFS,
      (const char *)"XML_ATTRIBUTE_NMTOKEN", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_NMTOKEN,
      (const char *)"XML_ATTRIBUTE_NMTOKENS", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_NMTOKENS,
      (const char *)"XML_ATTRIBUTE_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_NODE,
      (const char *)"XML_ATTRIBUTE_NOTATION", (const char *)-1, (const char *)32, (const char *)&k_XML_ATTRIBUTE_NOTATION,
      (const char *)"XML_CDATA_SECTION_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_CDATA_SECTION_NODE,
      (const char *)"XML_COMMENT_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_COMMENT_NODE,
      (const char *)"XML_DOCUMENT_FRAG_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_DOCUMENT_FRAG_NODE,
      (const char *)"XML_DOCUMENT_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_DOCUMENT_NODE,
      (const char *)"XML_DOCUMENT_TYPE_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_DOCUMENT_TYPE_NODE,
      (const char *)"XML_DTD_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_DTD_NODE,
      (const char *)"XML_ELEMENT_DECL_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ELEMENT_DECL_NODE,
      (const char *)"XML_ELEMENT_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ELEMENT_NODE,
      (const char *)"XML_ENTITY_DECL_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ENTITY_DECL_NODE,
      (const char *)"XML_ENTITY_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ENTITY_NODE,
      (const char *)"XML_ENTITY_REF_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_ENTITY_REF_NODE,
      (const char *)"XML_ERROR_ASYNC_ENTITY", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_ASYNC_ENTITY,
      (const char *)"XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF,
      (const char *)"XML_ERROR_BAD_CHAR_REF", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_BAD_CHAR_REF,
      (const char *)"XML_ERROR_BINARY_ENTITY_REF", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_BINARY_ENTITY_REF,
      (const char *)"XML_ERROR_DUPLICATE_ATTRIBUTE", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_DUPLICATE_ATTRIBUTE,
      (const char *)"XML_ERROR_EXTERNAL_ENTITY_HANDLING", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_EXTERNAL_ENTITY_HANDLING,
      (const char *)"XML_ERROR_INCORRECT_ENCODING", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_INCORRECT_ENCODING,
      (const char *)"XML_ERROR_INVALID_TOKEN", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_INVALID_TOKEN,
      (const char *)"XML_ERROR_JUNK_AFTER_DOC_ELEMENT", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_JUNK_AFTER_DOC_ELEMENT,
      (const char *)"XML_ERROR_MISPLACED_XML_PI", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_MISPLACED_XML_PI,
      (const char *)"XML_ERROR_NONE", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_NONE,
      (const char *)"XML_ERROR_NO_ELEMENTS", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_NO_ELEMENTS,
      (const char *)"XML_ERROR_NO_MEMORY", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_NO_MEMORY,
      (const char *)"XML_ERROR_PARAM_ENTITY_REF", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_PARAM_ENTITY_REF,
      (const char *)"XML_ERROR_PARTIAL_CHAR", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_PARTIAL_CHAR,
      (const char *)"XML_ERROR_RECURSIVE_ENTITY_REF", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_RECURSIVE_ENTITY_REF,
      (const char *)"XML_ERROR_SYNTAX", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_SYNTAX,
      (const char *)"XML_ERROR_TAG_MISMATCH", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_TAG_MISMATCH,
      (const char *)"XML_ERROR_UNCLOSED_CDATA_SECTION", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_UNCLOSED_CDATA_SECTION,
      (const char *)"XML_ERROR_UNCLOSED_TOKEN", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_UNCLOSED_TOKEN,
      (const char *)"XML_ERROR_UNDEFINED_ENTITY", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_UNDEFINED_ENTITY,
      (const char *)"XML_ERROR_UNKNOWN_ENCODING", (const char *)-1, (const char *)32, (const char *)&k_XML_ERROR_UNKNOWN_ENCODING,
      (const char *)"XML_HTML_DOCUMENT_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_HTML_DOCUMENT_NODE,
      (const char *)"XML_LOCAL_NAMESPACE", (const char *)-1, (const char *)32, (const char *)&k_XML_LOCAL_NAMESPACE,
      (const char *)"XML_NAMESPACE_DECL_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_NAMESPACE_DECL_NODE,
      (const char *)"XML_NOTATION_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_NOTATION_NODE,
      (const char *)"XML_OPTION_CASE_FOLDING", (const char *)-1, (const char *)32, (const char *)&k_XML_OPTION_CASE_FOLDING,
      (const char *)"XML_OPTION_SKIP_TAGSTART", (const char *)-1, (const char *)32, (const char *)&k_XML_OPTION_SKIP_TAGSTART,
      (const char *)"XML_OPTION_SKIP_WHITE", (const char *)-1, (const char *)32, (const char *)&k_XML_OPTION_SKIP_WHITE,
      (const char *)"XML_OPTION_TARGET_ENCODING", (const char *)-1, (const char *)32, (const char *)&k_XML_OPTION_TARGET_ENCODING,
      (const char *)"XML_PI_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_PI_NODE,
      (const char *)"XML_SAX_IMPL", (const char *)-1, (const char *)128, (const char *)&k_XML_SAX_IMPL,
      (const char *)"XML_TEXT_NODE", (const char *)-1, (const char *)32, (const char *)&k_XML_TEXT_NODE,
      (const char *)"XSD_1999_NAMESPACE", (const char *)-1, (const char *)128, (const char *)&k_XSD_1999_NAMESPACE,
      (const char *)"XSD_1999_TIMEINSTANT", (const char *)-1, (const char *)32, (const char *)&k_XSD_1999_TIMEINSTANT,
      (const char *)"XSD_ANYTYPE", (const char *)-1, (const char *)32, (const char *)&k_XSD_ANYTYPE,
      (const char *)"XSD_ANYURI", (const char *)-1, (const char *)32, (const char *)&k_XSD_ANYURI,
      (const char *)"XSD_ANYXML", (const char *)-1, (const char *)32, (const char *)&k_XSD_ANYXML,
      (const char *)"XSD_BASE64BINARY", (const char *)-1, (const char *)32, (const char *)&k_XSD_BASE64BINARY,
      (const char *)"XSD_BOOLEAN", (const char *)-1, (const char *)32, (const char *)&k_XSD_BOOLEAN,
      (const char *)"XSD_BYTE", (const char *)-1, (const char *)32, (const char *)&k_XSD_BYTE,
      (const char *)"XSD_DATE", (const char *)-1, (const char *)32, (const char *)&k_XSD_DATE,
      (const char *)"XSD_DATETIME", (const char *)-1, (const char *)32, (const char *)&k_XSD_DATETIME,
      (const char *)"XSD_DECIMAL", (const char *)-1, (const char *)32, (const char *)&k_XSD_DECIMAL,
      (const char *)"XSD_DOUBLE", (const char *)-1, (const char *)32, (const char *)&k_XSD_DOUBLE,
      (const char *)"XSD_DURATION", (const char *)-1, (const char *)32, (const char *)&k_XSD_DURATION,
      (const char *)"XSD_ENTITIES", (const char *)-1, (const char *)32, (const char *)&k_XSD_ENTITIES,
      (const char *)"XSD_ENTITY", (const char *)-1, (const char *)32, (const char *)&k_XSD_ENTITY,
      (const char *)"XSD_FLOAT", (const char *)-1, (const char *)32, (const char *)&k_XSD_FLOAT,
      (const char *)"XSD_GDAY", (const char *)-1, (const char *)32, (const char *)&k_XSD_GDAY,
      (const char *)"XSD_GMONTH", (const char *)-1, (const char *)32, (const char *)&k_XSD_GMONTH,
      (const char *)"XSD_GMONTHDAY", (const char *)-1, (const char *)32, (const char *)&k_XSD_GMONTHDAY,
      (const char *)"XSD_GYEAR", (const char *)-1, (const char *)32, (const char *)&k_XSD_GYEAR,
      (const char *)"XSD_GYEARMONTH", (const char *)-1, (const char *)32, (const char *)&k_XSD_GYEARMONTH,
      (const char *)"XSD_HEXBINARY", (const char *)-1, (const char *)32, (const char *)&k_XSD_HEXBINARY,
      (const char *)"XSD_ID", (const char *)-1, (const char *)32, (const char *)&k_XSD_ID,
      (const char *)"XSD_IDREF", (const char *)-1, (const char *)32, (const char *)&k_XSD_IDREF,
      (const char *)"XSD_IDREFS", (const char *)-1, (const char *)32, (const char *)&k_XSD_IDREFS,
      (const char *)"XSD_INT", (const char *)-1, (const char *)32, (const char *)&k_XSD_INT,
      (const char *)"XSD_INTEGER", (const char *)-1, (const char *)32, (const char *)&k_XSD_INTEGER,
      (const char *)"XSD_LANGUAGE", (const char *)-1, (const char *)32, (const char *)&k_XSD_LANGUAGE,
      (const char *)"XSD_LONG", (const char *)-1, (const char *)32, (const char *)&k_XSD_LONG,
      (const char *)"XSD_NAME", (const char *)-1, (const char *)32, (const char *)&k_XSD_NAME,
      (const char *)"XSD_NAMESPACE", (const char *)-1, (const char *)128, (const char *)&k_XSD_NAMESPACE,
      (const char *)"XSD_NCNAME", (const char *)-1, (const char *)32, (const char *)&k_XSD_NCNAME,
      (const char *)"XSD_NEGATIVEINTEGER", (const char *)-1, (const char *)32, (const char *)&k_XSD_NEGATIVEINTEGER,
      (const char *)"XSD_NMTOKEN", (const char *)-1, (const char *)32, (const char *)&k_XSD_NMTOKEN,
      (const char *)"XSD_NMTOKENS", (const char *)-1, (const char *)32, (const char *)&k_XSD_NMTOKENS,
      (const char *)"XSD_NONNEGATIVEINTEGER", (const char *)-1, (const char *)32, (const char *)&k_XSD_NONNEGATIVEINTEGER,
      (const char *)"XSD_NONPOSITIVEINTEGER", (const char *)-1, (const char *)32, (const char *)&k_XSD_NONPOSITIVEINTEGER,
      (const char *)"XSD_NORMALIZEDSTRING", (const char *)-1, (const char *)32, (const char *)&k_XSD_NORMALIZEDSTRING,
      (const char *)"XSD_NOTATION", (const char *)-1, (const char *)32, (const char *)&k_XSD_NOTATION,
      (const char *)"XSD_POSITIVEINTEGER", (const char *)-1, (const char *)32, (const char *)&k_XSD_POSITIVEINTEGER,
      (const char *)"XSD_QNAME", (const char *)-1, (const char *)32, (const char *)&k_XSD_QNAME,
      (const char *)"XSD_SHORT", (const char *)-1, (const char *)32, (const char *)&k_XSD_SHORT,
      (const char *)"XSD_STRING", (const char *)-1, (const char *)32, (const char *)&k_XSD_STRING,
      (const char *)"XSD_TIME", (const char *)-1, (const char *)32, (const char *)&k_XSD_TIME,
      (const char *)"XSD_TOKEN", (const char *)-1, (const char *)32, (const char *)&k_XSD_TOKEN,
      (const char *)"XSD_UNSIGNEDBYTE", (const char *)-1, (const char *)32, (const char *)&k_XSD_UNSIGNEDBYTE,
      (const char *)"XSD_UNSIGNEDINT", (const char *)-1, (const char *)32, (const char *)&k_XSD_UNSIGNEDINT,
      (const char *)"XSD_UNSIGNEDLONG", (const char *)-1, (const char *)32, (const char *)&k_XSD_UNSIGNEDLONG,
      (const char *)"XSD_UNSIGNEDSHORT", (const char *)-1, (const char *)32, (const char *)&k_XSD_UNSIGNEDSHORT,
      (const char *)"YESEXPR", (const char *)-1, (const char *)32, (const char *)&k_YESEXPR,
      (const char *)"ZEND_THREAD_SAFE", (const char *)-1, (const char *)2, (const char *)&k_ZEND_THREAD_SAFE,
    NULL, NULL, NULL, NULL
  };
  hashNodeCon *b = conBuckets;
  for (const char **s = conMapData; *s; s++, b++) {
    const char *name = *s++;
    int64 off = (int64)(*s++);
    int64 type = (int64)(*s++);
    int64 *p = (int64*)(*s);
    int64 hash = hash_string(name, strlen(name));
    hashNodeCon *node =
      new(b) hashNodeCon(hash, name, off, type, p);
    int h = hash & 8191;
    if (conMapTable[h]) node->next = conMapTable[h];
    conMapTable[h] = node;
  }
}

static const hashNodeCon *
findCon(const char *name, int64 hash) {
  for (const hashNodeCon *p = conMapTable[hash & 8191]; p; p = p->next) {
    if (p->hash == hash && !strcmp(p->name, name)) return p;
  }
  return NULL;
}
ConstantType check_constant(CStrRef name) {
  const char *s = name.data();
  const hashNodeCon *p = findCon(s, name->hash());
  if (!p) return NoneBuiltinConstant;
  if (p->off > 0) return DynamicBuiltinConstant;
  if (strcmp(s, "STDIN") == 0 ||
      strcmp(s, "STDOUT") == 0 ||
      strcmp(s, "STDERR") == 0) {
    return StdioBuiltinConstant;
  }
  return StaticBuiltinConstant;
}
Variant get_builtin_constant(CStrRef name, bool error) {
  DECLARE_SYSTEM_GLOBALS(g);
  const char* s = name.data();
  const hashNodeCon *p = findCon(name.data(), name->hash());
  if (!p) {
    if (error) raise_notice("Use of undefined constant %s - assumed '%s'", s, s);
    return name;
  }
  if (p->off < 0) {
    switch (p->type) {
    case 2: return *(bool*)(p->value);
    case 32: return *(int64*)(p->value);
    case 64: return *(double*)(p->value);
    case 128: return *(StaticString*)(p->value);
    case 256: return *(StaticArray*)(p->value);
    case 512: { CVarRef (*f)()=(CVarRef(*)())(p->value); return (*f)(); }
    case 65535: return *(Variant*)(p->value);
    default: not_reached();
    }
  }
  return getDynamicConstant(g->stgv_Variant[p->off-1], name);
}

///////////////////////////////////////////////////////////////////////////////
}
