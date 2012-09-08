
#ifndef __GENERATED_cls_ReflectionFunction_h566cb4e2__
#define __GENERATED_cls_ReflectionFunction_h566cb4e2__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 490 */
FORWARD_DECLARE_CLASS(ReflectionFunction);
extern const ObjectStaticCallbacks cw_ReflectionFunction;
class c_ReflectionFunction : public c_ReflectionFunctionAbstract {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionFunction, ReflectionFunction, ReflectionFunctionAbstract)
  static const ClassPropTable os_prop_table;
  c_ReflectionFunction(const ObjectStaticCallbacks *cb = &cw_ReflectionFunction) : c_ReflectionFunctionAbstract(cb) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_name);
  public: c_ReflectionFunction *create(CVarRef v_name);
  public: String t___tostring();
  public: static Variant t_export(CVarRef v_name, CVarRef v_ret = false_varNR);
  public: Variant t_invoke(int num_args, Array args = Array());
  public: Variant t_invokeargs(CVarRef v_args);
  public: Variant t_getattribute(CVarRef v_name);
  public: Variant t_getattributes();
  public: Variant t_getattributerecursive(CVarRef v_name);
  public: Variant t_getattributesrecursive();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(invoke);
  DECLARE_METHOD_INVOKE_HELPERS(invokeargs);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattributes);
  DECLARE_METHOD_INVOKE_HELPERS(getattributerecursive);
  DECLARE_METHOD_INVOKE_HELPERS(getattributesrecursive);
};
ObjectData *coo_ReflectionFunction() NEVER_INLINE;
extern const int64 q_ReflectionFunction$$IS_DEPRECATED;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionFunction_h566cb4e2__
