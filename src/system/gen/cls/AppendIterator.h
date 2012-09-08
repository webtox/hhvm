
#ifndef __GENERATED_cls_AppendIterator_h34b70f7d__
#define __GENERATED_cls_AppendIterator_h34b70f7d__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/OuterIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

FORWARD_DECLARE_CLASS(ArrayIterator);

/* SRC: classes/iterator.php line 802 */
FORWARD_DECLARE_CLASS(AppendIterator);
extern const ObjectStaticCallbacks cw_AppendIterator;
class c_AppendIterator : public ExtObjectData {
  public:

  // Properties
  p_ArrayIterator m_iterators;

  // Destructor
  ~c_AppendIterator() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(AppendIterator, AppendIterator, ObjectData)
  static const ClassPropTable os_prop_table;
  c_AppendIterator(const ObjectStaticCallbacks *cb = &cw_AppendIterator) : ExtObjectData(cb) {
    setAttribute(HasCall);
    if (!hhvm) setAttribute(NoDestructor);
  }
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct();
  public: c_AppendIterator *create();
  public: void t_append(CVarRef v_it);
  public: Variant t_getinneriterator();
  public: void t_rewind();
  public: bool t_valid();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: Variant t___call(Variant v_func, Variant v_params);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(append);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
};
ObjectData *coo_AppendIterator() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_AppendIterator_h34b70f7d__
