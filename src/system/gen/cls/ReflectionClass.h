
#ifndef __GENERATED_cls_ReflectionClass_h74d8c830__
#define __GENERATED_cls_ReflectionClass_h74d8c830__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const VarNR &s_sys_svi5830e7c6;

FORWARD_DECLARE_CLASS(ReflectionMethod);
FORWARD_DECLARE_CLASS(ReflectionProperty);

/* SRC: classes/reflection.php line 586 */
FORWARD_DECLARE_CLASS(ReflectionClass);
extern const ObjectStaticCallbacks cw_ReflectionClass;
class c_ReflectionClass : public ExtObjectData {
  public:

  // Properties
  Variant m_name;
  Variant m_info;

  // Destructor
  ~c_ReflectionClass() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionClass, ReflectionClass, ObjectData)
  static const ClassPropTable os_prop_table;
  c_ReflectionClass(const ObjectStaticCallbacks *cb = &cw_ReflectionClass) : ExtObjectData(cb), m_name(Variant::nullInit), m_info(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_name);
  public: c_ReflectionClass *create(CVarRef v_name);
  public: Variant t_fetch(CVarRef v_what);
  public: static Variant t_fetch_recur(CVarRef v_name);
  public: bool t_check(CVarRef v_what);
  public: bool t_test(CVarRef v_what, CVarRef v_name);
  public: String t___tostring();
  public: static Variant t_export(CVarRef v_name, CVarRef v_ret = false_varNR);
  public: Variant t_getname();
  public: bool t_isinternal();
  public: bool t_isuserdefined();
  public: bool t_isinstantiable();
  public: bool t_hasconstant(CVarRef v_name);
  public: bool t_hasmethod(CVarRef v_name);
  public: bool t_hasproperty(CVarRef v_name);
  public: Variant t_getfilename();
  public: Variant t_getstartline();
  public: Variant t_getendline();
  public: Variant t_getdoccomment();
  public: Variant t_getconstructor();
  public: p_ReflectionMethod t_getmethod(CVarRef v_name);
  public: Array t_getmethods(CVarRef v_filter = NAMVAR(s_sys_svi5830e7c6, 65535LL));
  public: p_ReflectionProperty t_getproperty(CVarRef v_name);
  public: Array t_getproperties(CVarRef v_filter = NAMVAR(s_sys_svi5830e7c6, 65535LL));
  public: Variant t_getconstants();
  public: Variant t_getconstant(CVarRef v_name);
  public: Array t_getinterfaces();
  public: Array t_gettraits();
  public: Array t_getinterfacenames();
  public: Array t_gettraitnames();
  public: Array t_gettraitaliases();
  public: bool t_isinterface();
  public: bool t_isabstract();
  public: bool t_isfinal();
  public: bool t_istrait();
  public: Variant t_getmodifiers();
  public: bool t_isinstance(CVarRef v_obj);
  public: Object t_newinstance(int num_args, Array args = Array());
  public: Object t_newinstanceargs(CVarRef v_args);
  public: Variant t_getparentclass();
  public: Variant t_issubclassof(Variant v_cls);
  public: Array t_getstaticproperties();
  public: Variant t_getstaticpropertyvalue(CVarRef v_name, CVarRef v_default = null_variant);
  public: void t_setstaticpropertyvalue(CVarRef v_name, CVarRef v_value);
  public: Array t_getdefaultproperties();
  public: Variant t_isiterateable();
  public: bool t_implementsinterface(Variant v_cls);
  public: Variant t_getextension();
  public: Variant t_getextensionname();
  public: Variant t_getattribute(CVarRef v_name);
  public: Variant t_getattributes();
  public: Variant t_getattributerecursive(CVarRef v_name);
  public: Variant t_getattributesrecursive();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(fetch);
  DECLARE_METHOD_INVOKE_HELPERS(fetch_recur);
  DECLARE_METHOD_INVOKE_HELPERS(check);
  DECLARE_METHOD_INVOKE_HELPERS(test);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
  DECLARE_METHOD_INVOKE_HELPERS(isinternal);
  DECLARE_METHOD_INVOKE_HELPERS(isuserdefined);
  DECLARE_METHOD_INVOKE_HELPERS(isinstantiable);
  DECLARE_METHOD_INVOKE_HELPERS(hasconstant);
  DECLARE_METHOD_INVOKE_HELPERS(hasmethod);
  DECLARE_METHOD_INVOKE_HELPERS(hasproperty);
  DECLARE_METHOD_INVOKE_HELPERS(getfilename);
  DECLARE_METHOD_INVOKE_HELPERS(getstartline);
  DECLARE_METHOD_INVOKE_HELPERS(getendline);
  DECLARE_METHOD_INVOKE_HELPERS(getdoccomment);
  DECLARE_METHOD_INVOKE_HELPERS(getconstructor);
  DECLARE_METHOD_INVOKE_HELPERS(getmethod);
  DECLARE_METHOD_INVOKE_HELPERS(getmethods);
  DECLARE_METHOD_INVOKE_HELPERS(getproperty);
  DECLARE_METHOD_INVOKE_HELPERS(getproperties);
  DECLARE_METHOD_INVOKE_HELPERS(getconstants);
  DECLARE_METHOD_INVOKE_HELPERS(getconstant);
  DECLARE_METHOD_INVOKE_HELPERS(getinterfaces);
  DECLARE_METHOD_INVOKE_HELPERS(gettraits);
  DECLARE_METHOD_INVOKE_HELPERS(getinterfacenames);
  DECLARE_METHOD_INVOKE_HELPERS(gettraitnames);
  DECLARE_METHOD_INVOKE_HELPERS(gettraitaliases);
  DECLARE_METHOD_INVOKE_HELPERS(isinterface);
  DECLARE_METHOD_INVOKE_HELPERS(isabstract);
  DECLARE_METHOD_INVOKE_HELPERS(isfinal);
  DECLARE_METHOD_INVOKE_HELPERS(istrait);
  DECLARE_METHOD_INVOKE_HELPERS(getmodifiers);
  DECLARE_METHOD_INVOKE_HELPERS(isinstance);
  DECLARE_METHOD_INVOKE_HELPERS(newinstance);
  DECLARE_METHOD_INVOKE_HELPERS(newinstanceargs);
  DECLARE_METHOD_INVOKE_HELPERS(getparentclass);
  DECLARE_METHOD_INVOKE_HELPERS(issubclassof);
  DECLARE_METHOD_INVOKE_HELPERS(getstaticproperties);
  DECLARE_METHOD_INVOKE_HELPERS(getstaticpropertyvalue);
  DECLARE_METHOD_INVOKE_HELPERS(setstaticpropertyvalue);
  DECLARE_METHOD_INVOKE_HELPERS(getdefaultproperties);
  DECLARE_METHOD_INVOKE_HELPERS(isiterateable);
  DECLARE_METHOD_INVOKE_HELPERS(implementsinterface);
  DECLARE_METHOD_INVOKE_HELPERS(getextension);
  DECLARE_METHOD_INVOKE_HELPERS(getextensionname);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattributes);
  DECLARE_METHOD_INVOKE_HELPERS(getattributerecursive);
  DECLARE_METHOD_INVOKE_HELPERS(getattributesrecursive);
};
ObjectData *coo_ReflectionClass() NEVER_INLINE;
extern const int64 q_ReflectionClass$$IS_IMPLICIT_ABSTRACT;
extern const int64 q_ReflectionClass$$IS_EXPLICIT_ABSTRACT;
extern const int64 q_ReflectionClass$$IS_FINAL;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionClass_h74d8c830__
