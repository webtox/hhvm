
#ifndef __GENERATED_cls_ReflectionMethod_h73cea799__
#define __GENERATED_cls_ReflectionMethod_h73cea799__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern StaticStringProxy s_sys_ssp00000000;
#ifndef s_sys_ss00000000
#define s_sys_ss00000000 (*(StaticString *)(&s_sys_ssp00000000))
#endif

extern VariantProxy s_sys_svsp00000000;
#ifndef s_sys_svs00000000
#define s_sys_svs00000000 (*(Variant *)&s_sys_svsp00000000)
#endif

/* SRC: classes/reflection.php line 1694 */
FORWARD_DECLARE_CLASS(ReflectionMethod);
extern const ObjectStaticCallbacks cw_ReflectionMethod;
class c_ReflectionMethod : public c_ReflectionFunctionAbstract {
  public:

  // Properties
  Variant m_name;
  Variant m_class;

  // Destructor
  ~c_ReflectionMethod() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionMethod, ReflectionMethod, ReflectionFunctionAbstract)
  static const ClassPropTable os_prop_table;
  c_ReflectionMethod(const ObjectStaticCallbacks *cb = &cw_ReflectionMethod) : c_ReflectionFunctionAbstract(cb), m_name(Variant::nullInit), m_class(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_cls, Variant v_name = NAMSTR(s_sys_ss00000000, ""));
  public: c_ReflectionMethod *create(CVarRef v_cls, CVarRef v_name = NAMVAR(s_sys_svs00000000, ""));
  public: String t___tostring();
  public: static Variant t_export(Variant v_cls, CVarRef v_name, CVarRef v_ret = false_varNR);
  public: Variant t_invoke(int num_args, CVarRef v_obj, Array args = Array());
  public: Variant t_invokeargs(CVarRef v_obj, CVarRef v_args);
  public: bool t_isfinal();
  public: bool t_isabstract();
  public: bool t_ispublic();
  public: bool t_isprivate();
  public: bool t_isprotected();
  public: bool t_isstatic();
  public: bool t_isconstructor();
  public: bool t_isdestructor();
  public: Variant t_getmodifiers();
  public: Variant t_getclosure();
  public: Variant t_getdeclaringclass();
  public: Variant t_getattribute(CVarRef v_name);
  public: Variant t_getattributes();
  public: Variant t_getattributerecursive(CVarRef v_name);
  public: Variant t_getattributesrecursive();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(invoke);
  DECLARE_METHOD_INVOKE_HELPERS(invokeargs);
  DECLARE_METHOD_INVOKE_HELPERS(isfinal);
  DECLARE_METHOD_INVOKE_HELPERS(isabstract);
  DECLARE_METHOD_INVOKE_HELPERS(ispublic);
  DECLARE_METHOD_INVOKE_HELPERS(isprivate);
  DECLARE_METHOD_INVOKE_HELPERS(isprotected);
  DECLARE_METHOD_INVOKE_HELPERS(isstatic);
  DECLARE_METHOD_INVOKE_HELPERS(isconstructor);
  DECLARE_METHOD_INVOKE_HELPERS(isdestructor);
  DECLARE_METHOD_INVOKE_HELPERS(getmodifiers);
  DECLARE_METHOD_INVOKE_HELPERS(getclosure);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattributes);
  DECLARE_METHOD_INVOKE_HELPERS(getattributerecursive);
  DECLARE_METHOD_INVOKE_HELPERS(getattributesrecursive);
};
ObjectData *coo_ReflectionMethod() NEVER_INLINE;
extern const int64 q_ReflectionMethod$$IS_STATIC;
extern const int64 q_ReflectionMethod$$IS_PUBLIC;
extern const int64 q_ReflectionMethod$$IS_PROTECTED;
extern const int64 q_ReflectionMethod$$IS_PRIVATE;
extern const int64 q_ReflectionMethod$$IS_ABSTRACT;
extern const int64 q_ReflectionMethod$$IS_FINAL;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionMethod_h73cea799__
