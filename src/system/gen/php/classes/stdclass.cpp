
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/stdclass.fws.h>
#include <php/classes/stdclass.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/stdclass.php line 8 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(__PHP_Incomplete_Class)
extern const InstanceOfInfo cw___PHP_Incomplete_Class$$instanceof_table[] = {
  {0x4E24D694,1,"__PHP_Incomplete_Class",&cw___PHP_Incomplete_Class},
};
const int cw___PHP_Incomplete_Class$$instanceof_index[] = {
  1,
  0,-1,
};
extern const InstanceOfInfo cw___PHP_Incomplete_Class$$instanceof_table[];
extern const int cw___PHP_Incomplete_Class$$instanceof_index[];
const ObjectStaticCallbacks cw___PHP_Incomplete_Class = {
  (ObjectData*(*)(ObjectData*))coo___PHP_Incomplete_Class,
  0,0,
  cw___PHP_Incomplete_Class$$instanceof_table,cw___PHP_Incomplete_Class$$instanceof_index,
  &c___PHP_Incomplete_Class::s_class_name,
  &c___PHP_Incomplete_Class::os_prop_table,0,0,0,0x0,
  &c___PHP_Incomplete_Class::s_cls
};
/* SRC: classes/stdclass.php line 4 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(stdClass)
extern const InstanceOfInfo cw_stdClass$$instanceof_table[] = {
  {0x78BA13F7,1,"stdClass",&cw_stdClass},
};
const int cw_stdClass$$instanceof_index[] = {
  1,
  -1,0,
};
extern const InstanceOfInfo cw_stdClass$$instanceof_table[];
extern const int cw_stdClass$$instanceof_index[];
const ObjectStaticCallbacks cw_stdClass = {
  (ObjectData*(*)(ObjectData*))coo_stdClass,
  0,0,
  cw_stdClass$$instanceof_table,cw_stdClass$$instanceof_index,
  &c_stdClass::s_class_name,
  0,0,0,0,0x0,
  &c_stdClass::s_cls
};
ObjectData *coo___PHP_Incomplete_Class() {
  return NEWOBJ(c___PHP_Incomplete_Class)();
}
ObjectData *coo_stdClass() {
  return NEWOBJ(c_stdClass)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x03D6D541,0,0,0,68,-1,GET_PROPERTY_OFFSET(c___PHP_Incomplete_Class, m___PHP_Incomplete_Class_Name),&NAMSTR(s_sys_ss360b4ac7, "__PHP_Incomplete_Class_Name") },

};
static const int cpt_hash_entries[] = {
  // __PHP_Incomplete_Class hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // __PHP_Incomplete_Class lists
  -1,
  -1,
  -1,
};
const ClassPropTable c___PHP_Incomplete_Class::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
