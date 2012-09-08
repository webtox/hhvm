
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/splobjectstorage.fws.h>
#include <php/classes/splobjectstorage.h>

// Dependencies
#include <php/classes/iterator.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/splobjectstorage.php line 12 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SplObjectStorage)
extern const InstanceOfInfo cw_SplObjectStorage$$instanceof_table[] = {
  {0x5EE263D1,0,"Countable",(const ObjectStaticCallbacks*)2},
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
  {0x7BA7A64F,1,"SplObjectStorage",&cw_SplObjectStorage},
};
const int cw_SplObjectStorage$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,2,3,

};
extern const CallInfo ci_SplObjectStorage$$current = { (void*)&c_SplObjectStorage::i_current, (void*)&c_SplObjectStorage::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$attach = { (void*)&c_SplObjectStorage::i_attach, (void*)&c_SplObjectStorage::ifa_attach, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$count = { (void*)&c_SplObjectStorage::i_count, (void*)&c_SplObjectStorage::ifa_count, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$key = { (void*)&c_SplObjectStorage::i_key, (void*)&c_SplObjectStorage::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$contains = { (void*)&c_SplObjectStorage::i_contains, (void*)&c_SplObjectStorage::ifa_contains, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$valid = { (void*)&c_SplObjectStorage::i_valid, (void*)&c_SplObjectStorage::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$rewind = { (void*)&c_SplObjectStorage::i_rewind, (void*)&c_SplObjectStorage::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$detach = { (void*)&c_SplObjectStorage::i_detach, (void*)&c_SplObjectStorage::ifa_detach, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplObjectStorage$$next = { (void*)&c_SplObjectStorage::i_next, (void*)&c_SplObjectStorage::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_SplObjectStorage::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_SplObjectStorage::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_SplObjectStorage::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_SplObjectStorage::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_SplObjectStorage::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_SplObjectStorage::i_count(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_count);
}
Variant c_SplObjectStorage::i_contains(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_contains);
}
Variant c_SplObjectStorage::i_attach(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_attach);
}
Variant c_SplObjectStorage::i_detach(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_detach);
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
  return (self->t_count());
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_contains(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_contains, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_contains(arg0));
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_attach(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_attach, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_attach(arg0), null);
}
Variant NEVER_INLINE c_SplObjectStorage::ifa_detach(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_detach, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_detach(arg0), null);
}
extern const MethodCallInfoTable cw_SplObjectStorage$$call_info_table[] = {
  { 0x54808C44, 1, 5, "valid", &ci_SplObjectStorage$$valid },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_SplObjectStorage$$rewind },
  { 0x6B88A4AC, 1, 6, "attach", &ci_SplObjectStorage$$attach },
  { 0x65104D10, 0, 5, "count", &ci_SplObjectStorage$$count },
  { 0x7A22D290, 1, 8, "contains", &ci_SplObjectStorage$$contains },
  { 0x024E8C51, 1, 3, "key", &ci_SplObjectStorage$$key },
  { 0x6BA9A695, 1, 6, "detach", &ci_SplObjectStorage$$detach },
  { 0x3B8102B8, 1, 4, "next", &ci_SplObjectStorage$$next },
  { 0x046B21DC, 1, 7, "current", &ci_SplObjectStorage$$current },
};
extern const int cw_SplObjectStorage$$call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,-1,
  -1,-1,1,-1,2,-1,-1,-1,
  3,5,-1,-1,-1,6,-1,-1,
  7,-1,-1,-1,8,-1,-1,-1,

};
extern const MethodCallInfoTable cw_SplObjectStorage$$call_info_table[];
extern const int cw_SplObjectStorage$$call_info_index[];
extern const InstanceOfInfo cw_SplObjectStorage$$instanceof_table[];
extern const int cw_SplObjectStorage$$instanceof_index[];
const ObjectStaticCallbacks cw_SplObjectStorage = {
  (ObjectData*(*)(ObjectData*))coo_SplObjectStorage,
  cw_SplObjectStorage$$call_info_table,cw_SplObjectStorage$$call_info_index,
  cw_SplObjectStorage$$instanceof_table,cw_SplObjectStorage$$instanceof_index,
  &c_SplObjectStorage::s_class_name,
  &c_SplObjectStorage::os_prop_table,0,0,0,0x0,
  &c_SplObjectStorage::s_cls
};
void c_SplObjectStorage::init() {
  m_storage = s_sys_sa00000000;
}
/* SRC: classes/splobjectstorage.php line 24 */
void c_SplObjectStorage::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::rewind);
  ObjectData *obj_tmp UNUSED;
  x_rewind(toObject(m_storage));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 37 */
bool c_SplObjectStorage::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::valid);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((x_key(ref(m_storage))));
    return !same(tmp0, false);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 50 */
int64 c_SplObjectStorage::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::key);
  ObjectData *obj_tmp UNUSED;
  return m_index;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 62 */
Variant c_SplObjectStorage::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::current);
  ObjectData *obj_tmp UNUSED;
  return x_current(ref(m_storage));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 74 */
void c_SplObjectStorage::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::next);
  ObjectData *obj_tmp UNUSED;
  x_next(ref(m_storage));
  m_index++;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 87 */
int64 c_SplObjectStorage::t_count() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::count);
  ObjectData *obj_tmp UNUSED;
  return x_count(m_storage);
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 102 */
bool c_SplObjectStorage::t_contains(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::contains);
  Variant v_object;

  ObjectData *obj_tmp UNUSED;
  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_object);
          {
            if (same(v_object, v_obj)) {
              {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 124 */
void c_SplObjectStorage::t_attach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::attach);
  ObjectData *obj_tmp UNUSED;
  if ((x_is_object(v_obj) && !(t_contains(v_obj)))) {
    {
      m_storage.append((v_obj));
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 140 */
void c_SplObjectStorage::t_detach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::detach);
  Primitive v_idx = 0;
  Variant v_object;

  ObjectData *obj_tmp UNUSED;
  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_object);
          v_idx.assignVal(iter3.first());
          {
            if (same(v_object, v_obj)) {
              {
                m_storage.weakRemove(v_idx);
                {
                  MethodCallPackage mcp0;
                  mcp0.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss141ca25f, "rewind"), 0x5E27AF6A);
                  const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                  (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_SplObjectStorage() {
  return NEWOBJ(c_SplObjectStorage)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sys_sva00000000,
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x7E2B6DC3,1,0,18,65,-1,GET_PROPERTY_OFFSET(c_SplObjectStorage, m_storage),&NAMSTR(s_sys_ss78cb1b27, "\000SplObjectStorage\000storage") },
  {0x43880CAE,0,1,18,65,3,GET_PROPERTY_OFFSET(c_SplObjectStorage, m_index),&NAMSTR(s_sys_ss6f33be8d, "\000SplObjectStorage\000index") },

};
static const int cpt_hash_entries[] = {
  // SplObjectStorage hash
  -1,-1,-1,0,-1,-1,1,-1,
  // SplObjectStorage lists
  0,1,-1,
  -1,
  -1,
};
const ClassPropTable c_SplObjectStorage::os_prop_table = {
  7,0,-1,-1,-1,-1,11,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
