
#ifndef __GENERATED_cls_Exception_h22b3de5c__
#define __GENERATED_cls_Exception_h22b3de5c__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern StaticStringProxy s_sys_ssp00000000;
#ifndef s_sys_ss00000000
#define s_sys_ss00000000 (*(StaticString *)(&s_sys_ssp00000000))
#endif

extern const VarNR &s_sys_svif01bca90;

extern VariantProxy s_sys_svsp00000000;
#ifndef s_sys_svs00000000
#define s_sys_svs00000000 (*(Variant *)&s_sys_svsp00000000)
#endif

/* SRC: classes/exception.php line 10 */
FORWARD_DECLARE_CLASS(Exception);
extern const ObjectStaticCallbacks cw_Exception;
class c_Exception : public ExtObjectData {
  public:

  // Properties
  Variant m_message;
  Variant m_code;
  Variant m_previous;
  Variant m_file;
  Variant m_line;
  Variant m_trace;
  bool m_inited;

  // Destructor
  ~c_Exception() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(Exception, Exception, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Exception(const ObjectStaticCallbacks *cb = &cw_Exception) : ExtObjectData(cb), m_previous(Variant::nullInit), m_file(Variant::nullInit), m_line(Variant::nullInit), m_trace(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  void init();
  public: void t___init__();
  public: void t___construct(Variant v_message = NAMSTR(s_sys_ss00000000, ""), Variant v_code = 0LL, Variant v_previous = null);
  public: c_Exception *create(CVarRef v_message = NAMVAR(s_sys_svs00000000, ""), CVarRef v_code = NAMVAR(s_sys_svif01bca90, 0LL), CVarRef v_previous = null_variant);
  public: Variant t_getmessage();
  public: Variant t_getprevious();
  public: void t_setprevious(CVarRef v_previous);
  public: void t_setpreviouschain(CVarRef v_previous);
  public: Variant t_getcode();
  public: Variant t_getfile();
  public: Variant t_getline();
  public: Variant t_gettrace();
  public: String t_gettraceasstring();
  public: String t___tostring();
  public: void t_inittrace();
  public: static Variant t_gettraceoptions();
  public: static void t_settraceoptions(CVarRef v_opts);
  DECLARE_METHOD_INVOKE_HELPERS(__init__);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getmessage);
  DECLARE_METHOD_INVOKE_HELPERS(getprevious);
  DECLARE_METHOD_INVOKE_HELPERS(setprevious);
  DECLARE_METHOD_INVOKE_HELPERS(setpreviouschain);
  DECLARE_METHOD_INVOKE_HELPERS(getcode);
  DECLARE_METHOD_INVOKE_HELPERS(getfile);
  DECLARE_METHOD_INVOKE_HELPERS(getline);
  DECLARE_METHOD_INVOKE_HELPERS(gettrace);
  DECLARE_METHOD_INVOKE_HELPERS(gettraceasstring);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(inittrace);
  DECLARE_METHOD_INVOKE_HELPERS(gettraceoptions);
  DECLARE_METHOD_INVOKE_HELPERS(settraceoptions);
};
ObjectData *coo_Exception() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Exception_h22b3de5c__
