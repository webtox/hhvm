
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/globals/symbols.fws.h>
#include <php/globals/symbols.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
Variant pm_php$globals$symbols_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::globals/symbols.php, pm_php$globals$symbols_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  Variant &v_argc ATTRIBUTE_UNUSED = g->GV(argc);
  Variant &v_argv ATTRIBUTE_UNUSED = g->GV(argv);
  Variant &v__SERVER ATTRIBUTE_UNUSED = g->GV(_SERVER);
  Variant &v__GET ATTRIBUTE_UNUSED = g->GV(_GET);
  Variant &v__POST ATTRIBUTE_UNUSED = g->GV(_POST);
  Variant &v__COOKIE ATTRIBUTE_UNUSED = g->GV(_COOKIE);
  Variant &v__FILES ATTRIBUTE_UNUSED = g->GV(_FILES);
  Variant &v__ENV ATTRIBUTE_UNUSED = g->GV(_ENV);
  Variant &v__REQUEST ATTRIBUTE_UNUSED = g->GV(_REQUEST);
  Variant &v__SESSION ATTRIBUTE_UNUSED = g->GV(_SESSION);
  Variant &v_HTTP_RAW_POST_DATA ATTRIBUTE_UNUSED = g->GV(HTTP_RAW_POST_DATA);
  Variant &v_http_response_header ATTRIBUTE_UNUSED = g->GV(http_response_header);

  setNull(v_argc);
  setNull(v_argv);
  setNull(v__SERVER);
  setNull(v__GET);
  setNull(v__POST);
  setNull(v__COOKIE);
  setNull(v__FILES);
  setNull(v__ENV);
  setNull(v__REQUEST);
  setNull(v__SESSION);
  v__SERVER = s_sys_sa00000000;
  v__GET = s_sys_sa00000000;
  v__POST = s_sys_sa00000000;
  v__COOKIE = s_sys_sa00000000;
  v__FILES = s_sys_sa00000000;
  v__ENV = s_sys_sa00000000;
  v__REQUEST = s_sys_sa00000000;
  v__SESSION = s_sys_sa00000000;
  setNull(v_HTTP_RAW_POST_DATA);
  setNull(v_http_response_header);
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
