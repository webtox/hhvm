
#ifndef __GENERATED_cls_ReflectionExtension_h04b2b41d__
#define __GENERATED_cls_ReflectionExtension_h04b2b41d__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 1991 */
FORWARD_DECLARE_CLASS(ReflectionExtension);
extern const ObjectStaticCallbacks cw_ReflectionExtension;
class c_ReflectionExtension : public ExtObjectData {
  public:

  // Properties
  Variant m_name;
  Array m_info;

  // Destructor
  ~c_ReflectionExtension() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionExtension, ReflectionExtension, ObjectData)
  static const ClassPropTable os_prop_table;
  c_ReflectionExtension(const ObjectStaticCallbacks *cb = &cw_ReflectionExtension) : ExtObjectData(cb), m_name(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_name);
  public: c_ReflectionExtension *create(CVarRef v_name);
  public: String t___tostring();
  public: static Variant t_export(CVarRef v_name, CVarRef v_ret = false_varNR);
  public: Variant t_getname();
  public: Variant t_getversion();
  public: Variant t_getfunctions();
  public: Variant t_getconstants();
  public: Variant t_getinientries();
  public: Variant t_getclasses();
  public: Array t_getclassnames();
  public: Variant t_info();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
  DECLARE_METHOD_INVOKE_HELPERS(getversion);
  DECLARE_METHOD_INVOKE_HELPERS(getfunctions);
  DECLARE_METHOD_INVOKE_HELPERS(getconstants);
  DECLARE_METHOD_INVOKE_HELPERS(getinientries);
  DECLARE_METHOD_INVOKE_HELPERS(getclasses);
  DECLARE_METHOD_INVOKE_HELPERS(getclassnames);
  DECLARE_METHOD_INVOKE_HELPERS(info);
};
ObjectData *coo_ReflectionExtension() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionExtension_h04b2b41d__
