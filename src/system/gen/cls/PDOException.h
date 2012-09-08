
#ifndef __GENERATED_cls_PDOException_h1d7a3e4e__
#define __GENERATED_cls_PDOException_h1d7a3e4e__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/Exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 346 */
FORWARD_DECLARE_CLASS(PDOException);
extern const ObjectStaticCallbacks cw_PDOException;
class c_PDOException : public c_Exception {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(PDOException, PDOException, Exception)
  c_PDOException(const ObjectStaticCallbacks *cb = &cw_PDOException) : c_Exception(cb) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct();
  public: c_PDOException *create();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
ObjectData *coo_PDOException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_PDOException_h1d7a3e4e__
