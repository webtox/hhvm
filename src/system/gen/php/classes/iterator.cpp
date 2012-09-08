
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/iterator.fws.h>
#include <php/classes/iterator.h>

// Dependencies
#include <php/classes/arrayaccess.h>
#include <php/classes/exception.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/iterator.php line 345 */
const int64 q_ArrayIterator$$STD_PROP_LIST = 1LL;
const int64 q_ArrayIterator$$ARRAY_AS_PROPS = 2LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ArrayIterator)
extern const InstanceOfInfo cw_ArrayIterator$$instanceof_table[] = {
  {0x5EE263D1,0,"Countable",(const ObjectStaticCallbacks*)2},
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x3BF89873,0,"ArrayIterator",&cw_ArrayIterator},
  {0x6145DC43,1,"SeekableIterator",(const ObjectStaticCallbacks*)2},
  {0x3FCD6F0B,1,"ArrayAccess",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_ArrayIterator$$instanceof_index[] = {
  15,
  -1,0,-1,2,-1,-1,-1,-1,
  -1,-1,-1,4,-1,-1,5,-1,

};
extern const CallInfo ci_ArrayIterator$$offsetunset = { (void*)&c_ArrayIterator::i_offsetunset, (void*)&c_ArrayIterator::ifa_offsetunset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$natcasesort = { (void*)&c_ArrayIterator::i_natcasesort, (void*)&c_ArrayIterator::ifa_natcasesort, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$offsetexists = { (void*)&c_ArrayIterator::i_offsetexists, (void*)&c_ArrayIterator::ifa_offsetexists, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$uksort = { (void*)&c_ArrayIterator::i_uksort, (void*)&c_ArrayIterator::ifa_uksort, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$asort = { (void*)&c_ArrayIterator::i_asort, (void*)&c_ArrayIterator::ifa_asort, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$seek = { (void*)&c_ArrayIterator::i_seek, (void*)&c_ArrayIterator::ifa_seek, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$ksort = { (void*)&c_ArrayIterator::i_ksort, (void*)&c_ArrayIterator::ifa_ksort, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$__construct = { (void*)&c_ArrayIterator::i___construct, (void*)&c_ArrayIterator::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$getflags = { (void*)&c_ArrayIterator::i_getflags, (void*)&c_ArrayIterator::ifa_getflags, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$current = { (void*)&c_ArrayIterator::i_current, (void*)&c_ArrayIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$next = { (void*)&c_ArrayIterator::i_next, (void*)&c_ArrayIterator::ifa_next, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$count = { (void*)&c_ArrayIterator::i_count, (void*)&c_ArrayIterator::ifa_count, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$valid = { (void*)&c_ArrayIterator::i_valid, (void*)&c_ArrayIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$uasort = { (void*)&c_ArrayIterator::i_uasort, (void*)&c_ArrayIterator::ifa_uasort, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$rewind = { (void*)&c_ArrayIterator::i_rewind, (void*)&c_ArrayIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$offsetget = { (void*)&c_ArrayIterator::i_offsetget, (void*)&c_ArrayIterator::ifa_offsetget, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$append = { (void*)&c_ArrayIterator::i_append, (void*)&c_ArrayIterator::ifa_append, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$natsort = { (void*)&c_ArrayIterator::i_natsort, (void*)&c_ArrayIterator::ifa_natsort, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$key = { (void*)&c_ArrayIterator::i_key, (void*)&c_ArrayIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$setflags = { (void*)&c_ArrayIterator::i_setflags, (void*)&c_ArrayIterator::ifa_setflags, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$offsetset = { (void*)&c_ArrayIterator::i_offsetset, (void*)&c_ArrayIterator::ifa_offsetset, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ArrayIterator$$getarraycopy = { (void*)&c_ArrayIterator::i_getarraycopy, (void*)&c_ArrayIterator::ifa_getarraycopy, 0, 4, 0x0000000000000000LL};
Variant c_ArrayIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ArrayIterator::i_append(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_append);
}
Variant c_ArrayIterator::i_asort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_asort);
}
Variant c_ArrayIterator::i_count(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_count);
}
Variant c_ArrayIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_ArrayIterator::i_getarraycopy(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getarraycopy);
}
Variant c_ArrayIterator::i_getflags(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getflags);
}
Variant c_ArrayIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_ArrayIterator::i_ksort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_ksort);
}
Variant c_ArrayIterator::i_natcasesort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_natcasesort);
}
Variant c_ArrayIterator::i_natsort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_natsort);
}
Variant c_ArrayIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_ArrayIterator::i_offsetexists(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetexists);
}
Variant c_ArrayIterator::i_offsetget(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetget);
}
Variant c_ArrayIterator::i_offsetset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetset);
}
Variant c_ArrayIterator::i_offsetunset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetunset);
}
Variant c_ArrayIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_ArrayIterator::i_seek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_seek);
}
Variant c_ArrayIterator::i_setflags(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setflags);
}
Variant c_ArrayIterator::i_uasort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_uasort);
}
Variant c_ArrayIterator::i_uksort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_uksort);
}
Variant c_ArrayIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant NEVER_INLINE c_ArrayIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ArrayIterator::__construct", count, 1, 2, 2);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_ArrayIterator::ifa_append(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::append", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_append(arg0), null);
}
Variant NEVER_INLINE c_ArrayIterator::ifa_asort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_asort, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::asort", 0, 1);
  return (self->t_asort());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::count", 0, 1);
  return (self->t_count());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_getarraycopy(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getarraycopy, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::getArrayCopy", 0, 1);
  return (self->t_getarraycopy());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_getflags(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getflags, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::getFlags", 0, 1);
  return (self->t_getflags());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_ksort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ksort, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::ksort", 0, 1);
  return (self->t_ksort());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_natcasesort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_natcasesort, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::natcasesort", 0, 1);
  return (self->t_natcasesort());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_natsort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_natsort, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::natsort", 0, 1);
  return (self->t_natsort());
}
Variant NEVER_INLINE c_ArrayIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_ArrayIterator::ifa_offsetexists(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetexists, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::offsetExists", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_offsetexists(arg0));
}
Variant NEVER_INLINE c_ArrayIterator::ifa_offsetget(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetget, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::offsetGet", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_offsetget(arg0));
}
Variant NEVER_INLINE c_ArrayIterator::ifa_offsetset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetset, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ArrayIterator::offsetSet", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_offsetset(arg0, arg1));
}
Variant NEVER_INLINE c_ArrayIterator::ifa_offsetunset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetunset, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::offsetUnset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_offsetunset(arg0));
}
Variant NEVER_INLINE c_ArrayIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_ArrayIterator::ifa_seek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_seek, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::seek", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_seek(arg0), null);
}
Variant NEVER_INLINE c_ArrayIterator::ifa_setflags(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setflags, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::setFlags", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setflags(arg0), null);
}
Variant NEVER_INLINE c_ArrayIterator::ifa_uasort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_uasort, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::uasort", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_uasort(arg0));
}
Variant NEVER_INLINE c_ArrayIterator::ifa_uksort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_uksort, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ArrayIterator::uksort", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_uksort(arg0));
}
Variant NEVER_INLINE c_ArrayIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_ArrayIterator);
  }
  c_ArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_ArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ArrayIterator::valid", 0, 1);
  return (self->t_valid());
}
extern const MethodCallInfoTable cw_ArrayIterator$$call_info_table[] = {
  { 0x742FC700, 1, 12, "offsetExists", &ci_ArrayIterator$$offsetexists },
  { 0x2DC69EC2, 1, 6, "append", &ci_ArrayIterator$$append },
  { 0x271BE6C4, 0, 6, "uksort", &ci_ArrayIterator$$uksort },
  { 0x54808C44, 1, 5, "valid", &ci_ArrayIterator$$valid },
  { 0x486E8646, 1, 11, "natcasesort", &ci_ArrayIterator$$natcasesort },
  { 0x1D522E0A, 1, 8, "setFlags", &ci_ArrayIterator$$setflags },
  { 0x65104D10, 1, 5, "count", &ci_ArrayIterator$$count },
  { 0x024E8C51, 1, 3, "key", &ci_ArrayIterator$$key },
  { 0x1A74FB18, 0, 5, "ksort", &ci_ArrayIterator$$ksort },
  { 0x74404498, 1, 9, "offsetGet", &ci_ArrayIterator$$offsetget },
  { 0x046B21DC, 1, 7, "current", &ci_ArrayIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_ArrayIterator$$__construct },
  { 0x02B6FD60, 1, 6, "uasort", &ci_ArrayIterator$$uasort },
  { 0x32DFD461, 0, 12, "getArrayCopy", &ci_ArrayIterator$$getarraycopy },
  { 0x75AD17E1, 1, 8, "getFlags", &ci_ArrayIterator$$getflags },
  { 0x77054C67, 1, 4, "seek", &ci_ArrayIterator$$seek },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_ArrayIterator$$rewind },
  { 0x23442BEE, 1, 5, "asort", &ci_ArrayIterator$$asort },
  { 0x2CE0DEB3, 1, 7, "natsort", &ci_ArrayIterator$$natsort },
  { 0x3B8102B8, 0, 4, "next", &ci_ArrayIterator$$next },
  { 0x248AF738, 1, 9, "offsetSet", &ci_ArrayIterator$$offsetset },
  { 0x66369ABA, 1, 11, "offsetUnset", &ci_ArrayIterator$$offsetunset },
};
extern const int cw_ArrayIterator$$call_info_index[] = {
  63,
  0,-1,1,-1,2,-1,4,-1,
  -1,-1,5,-1,-1,-1,-1,-1,
  6,7,-1,-1,-1,-1,-1,-1,
  8,-1,-1,-1,10,-1,-1,11,
  12,13,-1,-1,-1,-1,-1,15,
  -1,-1,16,-1,-1,-1,17,-1,
  -1,-1,-1,18,-1,-1,-1,-1,
  19,-1,21,-1,-1,-1,-1,-1,

};
c_ArrayIterator *c_ArrayIterator::create(CVarRef v_array, CVarRef v_flags //  = NAMVAR(s_sys_svif01bca90, 0LL)
) {
  CountableHelper h(this);
  init();
  t___construct(v_array, v_flags);
  return this;
}
extern const MethodCallInfoTable cw_ArrayIterator$$call_info_table[];
extern const int cw_ArrayIterator$$call_info_index[];
extern const InstanceOfInfo cw_ArrayIterator$$instanceof_table[];
extern const int cw_ArrayIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_ArrayIterator = {
  (ObjectData*(*)(ObjectData*))coo_ArrayIterator,
  cw_ArrayIterator$$call_info_table,cw_ArrayIterator$$call_info_index,
  cw_ArrayIterator$$instanceof_table,cw_ArrayIterator$$instanceof_index,
  &c_ArrayIterator::s_class_name,
  &c_ArrayIterator::os_prop_table,&ci_ArrayIterator$$__construct,0,0,0x0,
  &c_ArrayIterator::s_cls
};
/* SRC: classes/iterator.php line 352 */
void c_ArrayIterator::t___construct(Variant v_array, Variant v_flags //  = 0LL
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::__construct);
  ObjectData *obj_tmp UNUSED;
  m_arr.assignVal(v_array);
  m_flags.assignVal(v_flags);
  x_reset(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 369 */
void c_ArrayIterator::t_append(CVarRef v_value) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::append);
  ObjectData *obj_tmp UNUSED;
  m_arr.append((v_value));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 382 */
bool c_ArrayIterator::t_asort() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::asort);
  ObjectData *obj_tmp UNUSED;
  return x_asort(ref(m_arr), toInt32(m_flags));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 396 */
int64 c_ArrayIterator::t_count() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::count);
  ObjectData *obj_tmp UNUSED;
  return x_count(m_arr);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 408 */
Variant c_ArrayIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::current);
  ObjectData *obj_tmp UNUSED;
  return x_current(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 422 */
Variant c_ArrayIterator::t_getarraycopy() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::getArrayCopy);
  ObjectData *obj_tmp UNUSED;
  return m_arr;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 435 */
Variant c_ArrayIterator::t_getflags() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::getFlags);
  ObjectData *obj_tmp UNUSED;
  return m_flags;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 447 */
Variant c_ArrayIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::key);
  ObjectData *obj_tmp UNUSED;
  return x_key(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 460 */
bool c_ArrayIterator::t_ksort() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::ksort);
  ObjectData *obj_tmp UNUSED;
  return x_ksort(ref(m_arr), toInt32(m_flags));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 474 */
Variant c_ArrayIterator::t_natcasesort() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::natcasesort);
  ObjectData *obj_tmp UNUSED;
  return x_natcasesort(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 488 */
Variant c_ArrayIterator::t_natsort() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::natsort);
  ObjectData *obj_tmp UNUSED;
  return x_natsort(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 500 */
void c_ArrayIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::next);
  ObjectData *obj_tmp UNUSED;
  x_next(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 515 */
bool c_ArrayIterator::t_offsetexists(CVarRef v_index) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::offsetExists);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_arr, v_index);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 530 */
Variant c_ArrayIterator::t_offsetget(Variant v_index) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::offsetGet);
  ObjectData *obj_tmp UNUSED;
  return m_arr.rvalAt(v_index, AccessFlags::Error);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 530 */
Variant &c_ArrayIterator::___offsetget_lval(Variant v_index) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::offsetGet);
  Variant &v = get_system_globals()->__lvalProxy;
  v = t_offsetget(v_index);
  return v;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 546 */
Variant c_ArrayIterator::t_offsetset(CVarRef v_index, CVarRef v_newval) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::offsetSet);
  ObjectData *obj_tmp UNUSED;
  m_arr.set(v_index, (v_newval));
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 561 */
Variant c_ArrayIterator::t_offsetunset(CVarRef v_index) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::offsetUnset);
  ObjectData *obj_tmp UNUSED;
  m_arr.weakRemove(v_index);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 573 */
void c_ArrayIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::rewind);
  ObjectData *obj_tmp UNUSED;
  x_reset(ref(m_arr));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 586 */
void c_ArrayIterator::t_seek(CVarRef v_position) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::seek);
  int64 v_i = 0;

  ObjectData *obj_tmp UNUSED;
  x_reset(ref(m_arr));
  {
    LOOP_COUNTER(1);
    for (v_i = 0LL; (less(v_i, v_position)); v_i++) {
      LOOP_COUNTER_CHECK(1);
      {
        if (!(toBoolean(x_next(ref(m_arr))))) {
          {
            break;
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 609 */
void c_ArrayIterator::t_setflags(CVarRef v_flags) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::setFlags);
  ObjectData *obj_tmp UNUSED;
  m_flags.assignVal(v_flags);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 626 */
bool c_ArrayIterator::t_uasort(CVarRef v_cmp_function) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::uasort);
  ObjectData *obj_tmp UNUSED;
  return x_uasort(ref(m_arr), v_cmp_function);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 643 */
bool c_ArrayIterator::t_uksort(CVarRef v_cmp_function) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::uksort);
  ObjectData *obj_tmp UNUSED;
  return x_uksort(ref(m_arr), v_cmp_function);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 655 */
bool c_ArrayIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ArrayIterator, ArrayIterator::valid);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((x_key(ref(m_arr))));
    return !(x_is_null(tmp0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 715 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(FilterIterator)
extern const InstanceOfInfo cw_FilterIterator$$instanceof_table[] = {
  {0x67488231,0,"FilterIterator",&cw_FilterIterator},
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x443AFA34,1,"IteratorIterator",&cw_IteratorIterator},
  {0x2C8E528D,1,"OuterIterator",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_FilterIterator$$instanceof_index[] = {
  15,
  -1,0,-1,-1,2,-1,-1,-1,
  -1,-1,-1,-1,-1,3,4,-1,

};
Variant c_FilterIterator::doCall(Variant v_name, Variant v_arguments, bool fatal) {
  return t___call(v_name, !v_arguments.isNull() ? v_arguments : Variant(Array::Create()));
}
extern const CallInfo ci_FilterIterator$$__call = { (void*)&c_FilterIterator::i___call, (void*)&c_FilterIterator::ifa___call, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$current = { (void*)&c_FilterIterator::i_current, (void*)&c_FilterIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$fetch = { (void*)&c_FilterIterator::i_fetch, (void*)&c_FilterIterator::ifa_fetch, 0, 132, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$__clone = { (void*)&c_FilterIterator::i___clone, (void*)&c_FilterIterator::ifa___clone, 0, 68, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$key = { (void*)&c_FilterIterator::i_key, (void*)&c_FilterIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$getinneriterator = { (void*)&c_FilterIterator::i_getinneriterator, (void*)&c_FilterIterator::ifa_getinneriterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$valid = { (void*)&c_FilterIterator::i_valid, (void*)&c_FilterIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$__construct = { (void*)&c_FilterIterator::i___construct, (void*)&c_FilterIterator::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$rewind = { (void*)&c_FilterIterator::i_rewind, (void*)&c_FilterIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FilterIterator$$next = { (void*)&c_FilterIterator::i_next, (void*)&c_FilterIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_FilterIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_FilterIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_FilterIterator::i_fetch(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetch);
}
Variant c_FilterIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_FilterIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_FilterIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_FilterIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_FilterIterator::i___clone(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___clone);
}
Variant c_FilterIterator::i_getinneriterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinneriterator);
}
Variant c_FilterIterator::i___call(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___call);
}
Variant NEVER_INLINE c_FilterIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("FilterIterator::__construct", "iterator", 1);
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("FilterIterator::__construct", 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_FilterIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_FilterIterator::ifa_fetch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetch, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::fetch", 0, 1);
  return (self->t_fetch(), null);
}
Variant NEVER_INLINE c_FilterIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_FilterIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_FilterIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_FilterIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_FilterIterator::ifa___clone(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___clone, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::__clone", 0, 1);
  return (self->t___clone());
}
Variant NEVER_INLINE c_FilterIterator::ifa_getinneriterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinneriterator, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FilterIterator::getInnerIterator", 0, 1);
  return (self->t_getinneriterator());
}
Variant NEVER_INLINE c_FilterIterator::ifa___call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___call, coo_FilterIterator);
  }
  c_FilterIterator *self ATTRIBUTE_UNUSED (static_cast<c_FilterIterator*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("FilterIterator::__call", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___call(arg0, arg1));
}
extern const MethodCallInfoTable cw_FilterIterator$$call_info_table[] = {
  { 0x54808C44, 0, 5, "valid", &ci_FilterIterator$$valid },
  { 0x309C7424, 1, 16, "getInnerIterator", &ci_FilterIterator$$getinneriterator },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_FilterIterator$$rewind },
  { 0x53CEEB6C, 1, 6, "__call", &ci_FilterIterator$$__call },
  { 0x024E8C51, 1, 3, "key", &ci_FilterIterator$$key },
  { 0x3B8102B8, 1, 4, "next", &ci_FilterIterator$$next },
  { 0x3B90B0FB, 0, 5, "fetch", &ci_FilterIterator$$fetch },
  { 0x0004BE9B, 1, 7, "__clone", &ci_FilterIterator$$__clone },
  { 0x046B21DC, 1, 7, "current", &ci_FilterIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_FilterIterator$$__construct },
};
extern const int cw_FilterIterator$$call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,-1,
  -1,-1,2,-1,3,-1,-1,-1,
  -1,4,-1,-1,-1,-1,-1,-1,
  5,-1,-1,6,8,-1,-1,9,

};
c_FilterIterator *c_FilterIterator::create(CVarRef v_it) {
  CountableHelper h(this);
  init();
  t___construct(v_it);
  return this;
}
extern const MethodCallInfoTable cw_FilterIterator$$call_info_table[];
extern const int cw_FilterIterator$$call_info_index[];
extern const InstanceOfInfo cw_FilterIterator$$instanceof_table[];
extern const int cw_FilterIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_FilterIterator = {
  (ObjectData*(*)(ObjectData*))coo_FilterIterator,
  cw_FilterIterator$$call_info_table,cw_FilterIterator$$call_info_index,
  cw_FilterIterator$$instanceof_table,cw_FilterIterator$$instanceof_index,
  &c_FilterIterator::s_class_name,
  &c_FilterIterator::os_prop_table,&ci_FilterIterator$$__construct,0,&cw_IteratorIterator,0x80,
  &c_FilterIterator::s_cls
};
/* SRC: classes/iterator.php line 718 */
void c_FilterIterator::t___construct(Variant v_it) {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::__construct);
  if(!v_it.instanceof(NAMSTR(s_sys_ss2fd353cc, "iterator"))) {
    throw_unexpected_argument_type(1,"FilterIterator::__construct()","iterator",v_it);
    return;
  }
  ObjectData *obj_tmp UNUSED;
  m_it.assignVal(v_it);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 722 */
void c_FilterIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::rewind);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_it;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss141ca25f, "rewind"), 0x5E27AF6A);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
  }
  t_fetch();
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 727 */
/* SRC: classes/iterator.php line 729 */
void c_FilterIterator::t_fetch() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::fetch);
  ObjectData *obj_tmp UNUSED;
  LOOP_COUNTER(1);
  {
    while (true) {
      {
        MethodCallPackage mcp0;
        CVarRef obj0 = m_it;
        mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        if (!(toBoolean((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)))) break;
      }
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            MethodCallPackage mcp1;
            mcp1.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss6352645d, "accept"), 0x2052FD88);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
          }
          if (tmp0) {
            {
              return;
            }
          }
        }
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = m_it;
          mcp0.methodCall((obj0), NAMSTR(s_sys_ss50652d33, "next"), 0x3B8102B8);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 738 */
void c_FilterIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::next);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_it;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss50652d33, "next"), 0x3B8102B8);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
  }
  t_fetch();
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 743 */
Variant c_FilterIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::valid);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_it;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 747 */
Variant c_FilterIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::key);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_it;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss12e90587, "key"), 0x024E8C51);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 751 */
Variant c_FilterIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::current);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_it;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss33a5c1b3, "current"), 0x046B21DC);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 755 */
Variant c_FilterIterator::t___clone() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::__clone);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 759 */
Variant c_FilterIterator::t_getinneriterator() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::getInnerIterator);
  ObjectData *obj_tmp UNUSED;
  return m_it;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 763 */
Variant c_FilterIterator::t___call(Variant v_func, Variant v_params) {
  INSTANCE_METHOD_INJECTION_BUILTIN(FilterIterator, FilterIterator::__call);
  ObjectData *obj_tmp UNUSED;
  return x_call_user_func_array(VarNR(Array(ArrayInit(2).set(m_it).set(v_func).create())), toArray(v_params));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 802 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(AppendIterator)
extern const InstanceOfInfo cw_AppendIterator$$instanceof_table[] = {
  {0x549781C8,1,"AppendIterator",&cw_AppendIterator},
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x2C8E528D,1,"OuterIterator",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_AppendIterator$$instanceof_index[] = {
  7,
  0,1,-1,-1,-1,2,3,-1,

};
Variant c_AppendIterator::doCall(Variant v_name, Variant v_arguments, bool fatal) {
  return t___call(v_name, !v_arguments.isNull() ? v_arguments : Variant(Array::Create()));
}
extern const CallInfo ci_AppendIterator$$__call = { (void*)&c_AppendIterator::i___call, (void*)&c_AppendIterator::ifa___call, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$current = { (void*)&c_AppendIterator::i_current, (void*)&c_AppendIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$key = { (void*)&c_AppendIterator::i_key, (void*)&c_AppendIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$getinneriterator = { (void*)&c_AppendIterator::i_getinneriterator, (void*)&c_AppendIterator::ifa_getinneriterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$valid = { (void*)&c_AppendIterator::i_valid, (void*)&c_AppendIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$append = { (void*)&c_AppendIterator::i_append, (void*)&c_AppendIterator::ifa_append, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$__construct = { (void*)&c_AppendIterator::i___construct, (void*)&c_AppendIterator::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$rewind = { (void*)&c_AppendIterator::i_rewind, (void*)&c_AppendIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_AppendIterator$$next = { (void*)&c_AppendIterator::i_next, (void*)&c_AppendIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_AppendIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_AppendIterator::i_append(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_append);
}
Variant c_AppendIterator::i_getinneriterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinneriterator);
}
Variant c_AppendIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_AppendIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_AppendIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_AppendIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_AppendIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_AppendIterator::i___call(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___call);
}
Variant NEVER_INLINE c_AppendIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::__construct", 0, 2);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_AppendIterator::ifa_append(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("AppendIterator::append", "iterator", 1);
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("AppendIterator::append", 1, 1);
  CVarRef arg0(a0);
  return (self->t_append(arg0), null);
}
Variant NEVER_INLINE c_AppendIterator::ifa_getinneriterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinneriterator, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::getInnerIterator", 0, 1);
  return (self->t_getinneriterator());
}
Variant NEVER_INLINE c_AppendIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_AppendIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_AppendIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_AppendIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_AppendIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("AppendIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_AppendIterator::ifa___call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___call, coo_AppendIterator);
  }
  c_AppendIterator *self ATTRIBUTE_UNUSED (static_cast<c_AppendIterator*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("AppendIterator::__call", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___call(arg0, arg1));
}
extern const MethodCallInfoTable cw_AppendIterator$$call_info_table[] = {
  { 0x2DC69EC2, 1, 6, "append", &ci_AppendIterator$$append },
  { 0x309C7424, 0, 16, "getInnerIterator", &ci_AppendIterator$$getinneriterator },
  { 0x54808C44, 1, 5, "valid", &ci_AppendIterator$$valid },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_AppendIterator$$rewind },
  { 0x53CEEB6C, 1, 6, "__call", &ci_AppendIterator$$__call },
  { 0x024E8C51, 1, 3, "key", &ci_AppendIterator$$key },
  { 0x3B8102B8, 1, 4, "next", &ci_AppendIterator$$next },
  { 0x046B21DC, 1, 7, "current", &ci_AppendIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_AppendIterator$$__construct },
};
extern const int cw_AppendIterator$$call_info_index[] = {
  31,
  -1,-1,0,-1,1,-1,-1,-1,
  -1,-1,3,-1,4,-1,-1,-1,
  -1,5,-1,-1,-1,-1,-1,-1,
  6,-1,-1,-1,7,-1,-1,8,

};
c_AppendIterator *c_AppendIterator::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_AppendIterator$$call_info_table[];
extern const int cw_AppendIterator$$call_info_index[];
extern const InstanceOfInfo cw_AppendIterator$$instanceof_table[];
extern const int cw_AppendIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_AppendIterator = {
  (ObjectData*(*)(ObjectData*))coo_AppendIterator,
  cw_AppendIterator$$call_info_table,cw_AppendIterator$$call_info_index,
  cw_AppendIterator$$instanceof_table,cw_AppendIterator$$instanceof_index,
  &c_AppendIterator::s_class_name,
  &c_AppendIterator::os_prop_table,&ci_AppendIterator$$__construct,0,0,0x80,
  &c_AppendIterator::s_cls
};
/* SRC: classes/iterator.php line 805 */
void c_AppendIterator::t___construct() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::__construct);
  ObjectData *obj_tmp UNUSED;
  {
    const p_ArrayIterator &tmp0((p_ArrayIterator(((c_ArrayIterator*)coo_ArrayIterator())->create(s_sys_sa00000000))));
    m_iterators = tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 820 */
void c_AppendIterator::t_append(CVarRef v_it) {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::append);
  if(!v_it.instanceof(NAMSTR(s_sys_ss2fd353cc, "iterator"))) {
    throw_unexpected_argument_type(1,"AppendIterator::append()","iterator",v_it);
    return;
  }
  ObjectData *obj_tmp UNUSED;
  m_iterators->t_append(v_it);
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 834 */
Variant c_AppendIterator::t_getinneriterator() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::getInnerIterator);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CObjRef obj0 = m_iterators;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss33a5c1b3, "current"), 0x046B21DC);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 848 */
void c_AppendIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::rewind);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CObjRef obj0 = m_iterators;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss141ca25f, "rewind"), 0x5E27AF6A);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
  }
  {
    bool tmp0;
    {
      MethodCallPackage mcp1;
      CObjRef obj1 = m_iterators;
      mcp1.methodCall((obj1), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
    }
    if (tmp0) {
      {
        {
          MethodCallPackage mcp1;
          mcp1.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          MethodCallPackage mcp0;
          CVarRef obj0 = (mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0);
          mcp0.methodCall((obj0), NAMSTR(s_sys_ss141ca25f, "rewind"), 0x5E27AF6A);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 864 */
bool c_AppendIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::valid);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CObjRef obj0 = m_iterators;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    bool tmp1 = (toBoolean((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)));
    if (tmp1) {
      MethodCallPackage mcp3;
      mcp3.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
      const CallInfo *cit3 ATTRIBUTE_UNUSED = mcp3.ci;
      MethodCallPackage mcp2;
      CVarRef obj2 = (mcp3.bindClass(fi)->getMeth0Args())(mcp3, 0);
      mcp2.methodCall((obj2), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
      const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
      tmp1 = (toBoolean((mcp2.bindClass(fi)->getMeth0Args())(mcp2, 0)));
    }
    return tmp1;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 877 */
Variant c_AppendIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::current);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CObjRef obj0 = m_iterators;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1;
    if (toBoolean((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0))) {
      MethodCallPackage mcp3;
      mcp3.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
      const CallInfo *cit3 ATTRIBUTE_UNUSED = mcp3.ci;
      MethodCallPackage mcp2;
      CVarRef obj2 = (mcp3.bindClass(fi)->getMeth0Args())(mcp3, 0);
      mcp2.methodCall((obj2), NAMSTR(s_sys_ss33a5c1b3, "current"), 0x046B21DC);
      const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
      tmp1 = ((mcp2.bindClass(fi)->getMeth0Args())(mcp2, 0));
    } else {
      tmp1 = (null);
    }
    return tmp1;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 895 */
Variant c_AppendIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::key);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CObjRef obj0 = m_iterators;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1;
    if (toBoolean((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0))) {
      MethodCallPackage mcp3;
      mcp3.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
      const CallInfo *cit3 ATTRIBUTE_UNUSED = mcp3.ci;
      MethodCallPackage mcp2;
      CVarRef obj2 = (mcp3.bindClass(fi)->getMeth0Args())(mcp3, 0);
      mcp2.methodCall((obj2), NAMSTR(s_sys_ss12e90587, "key"), 0x024E8C51);
      const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
      tmp1 = ((mcp2.bindClass(fi)->getMeth0Args())(mcp2, 0));
    } else {
      tmp1 = (null);
    }
    return tmp1;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 909 */
void c_AppendIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::next);
  ObjectData *obj_tmp UNUSED;
  {
    bool tmp0;
    {
      MethodCallPackage mcp1;
      CObjRef obj1 = m_iterators;
      mcp1.methodCall((obj1), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (!(toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0))));
    }
    if (tmp0) {
      {
        return;
      }
    }
  }
  {
    MethodCallPackage mcp1;
    mcp1.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    MethodCallPackage mcp0;
    CVarRef obj0 = (mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0);
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss50652d33, "next"), 0x3B8102B8);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
  }
  {
    bool tmp0;
    {
      MethodCallPackage mcp2;
      mcp2.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
      const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
      MethodCallPackage mcp1;
      CVarRef obj1 = (mcp2.bindClass(fi)->getMeth0Args())(mcp2, 0);
      mcp1.methodCall((obj1), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
    }
    if (tmp0) {
      {
        return;
      }
    }
  }
  {
    MethodCallPackage mcp0;
    CObjRef obj0 = m_iterators;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss50652d33, "next"), 0x3B8102B8);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
  }
  LOOP_COUNTER(1);
  {
    while (true) {
      {
        MethodCallPackage mcp0;
        CObjRef obj0 = m_iterators;
        mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        if (!(toBoolean((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)))) break;
      }
      LOOP_COUNTER_CHECK(1);
      {
        {
          MethodCallPackage mcp1;
          mcp1.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          MethodCallPackage mcp0;
          CVarRef obj0 = (mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0);
          mcp0.methodCall((obj0), NAMSTR(s_sys_ss141ca25f, "rewind"), 0x5E27AF6A);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
        }
        {
          bool tmp0;
          {
            MethodCallPackage mcp2;
            mcp2.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
            const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
            MethodCallPackage mcp1;
            CVarRef obj1 = (mcp2.bindClass(fi)->getMeth0Args())(mcp2, 0);
            mcp1.methodCall((obj1), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
          }
          if (tmp0) {
            {
              return;
            }
          }
        }
        {
          MethodCallPackage mcp0;
          CObjRef obj0 = m_iterators;
          mcp0.methodCall((obj0), NAMSTR(s_sys_ss50652d33, "next"), 0x3B8102B8);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 927 */
Variant c_AppendIterator::t___call(Variant v_func, Variant v_params) {
  INSTANCE_METHOD_INJECTION_BUILTIN(AppendIterator, AppendIterator::__call);
  {
    ArrayInit tmp0(2);
    MethodCallPackage mcp1;
    mcp1.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss37eff1c8, "getInnerIterator"), 0x309C7424);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    const Variant &tmp2(((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
    tmp0.set(tmp2);
    tmp0.set(v_func);
    const Array &tmp3((Array(tmp0)));
    return x_call_user_func_array(VarNR(tmp3), toArray(v_params));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 661 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(IteratorIterator)
extern const InstanceOfInfo cw_IteratorIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x443AFA34,1,"IteratorIterator",&cw_IteratorIterator},
  {0x2C8E528D,1,"OuterIterator",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_IteratorIterator$$instanceof_index[] = {
  7,
  -1,0,-1,-1,1,2,3,-1,

};
Variant c_IteratorIterator::doCall(Variant v_name, Variant v_arguments, bool fatal) {
  return t___call(v_name, !v_arguments.isNull() ? v_arguments : Variant(Array::Create()));
}
extern const CallInfo ci_IteratorIterator$$__call = { (void*)&c_IteratorIterator::i___call, (void*)&c_IteratorIterator::ifa___call, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$current = { (void*)&c_IteratorIterator::i_current, (void*)&c_IteratorIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$key = { (void*)&c_IteratorIterator::i_key, (void*)&c_IteratorIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$getinneriterator = { (void*)&c_IteratorIterator::i_getinneriterator, (void*)&c_IteratorIterator::ifa_getinneriterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$valid = { (void*)&c_IteratorIterator::i_valid, (void*)&c_IteratorIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$rewind = { (void*)&c_IteratorIterator::i_rewind, (void*)&c_IteratorIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$__construct = { (void*)&c_IteratorIterator::i___construct, (void*)&c_IteratorIterator::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_IteratorIterator$$next = { (void*)&c_IteratorIterator::i_next, (void*)&c_IteratorIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_IteratorIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_IteratorIterator::i_getinneriterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinneriterator);
}
Variant c_IteratorIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_IteratorIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_IteratorIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_IteratorIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_IteratorIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_IteratorIterator::i___call(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___call);
}
Variant NEVER_INLINE c_IteratorIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("IteratorIterator::__construct", "traversable", 1);
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("IteratorIterator::__construct", 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_IteratorIterator::ifa_getinneriterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinneriterator, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("IteratorIterator::getInnerIterator", 0, 1);
  return (self->t_getinneriterator());
}
Variant NEVER_INLINE c_IteratorIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("IteratorIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_IteratorIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("IteratorIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_IteratorIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("IteratorIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_IteratorIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("IteratorIterator::next", 0, 1);
  return (self->t_next());
}
Variant NEVER_INLINE c_IteratorIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("IteratorIterator::rewind", 0, 1);
  return (self->t_rewind());
}
Variant NEVER_INLINE c_IteratorIterator::ifa___call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___call, coo_IteratorIterator);
  }
  c_IteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_IteratorIterator*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("IteratorIterator::__call", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___call(arg0, arg1));
}
extern const MethodCallInfoTable cw_IteratorIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_IteratorIterator$$key },
  { 0x309C7424, 0, 16, "getInnerIterator", &ci_IteratorIterator$$getinneriterator },
  { 0x54808C44, 1, 5, "valid", &ci_IteratorIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_IteratorIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_IteratorIterator$$rewind },
  { 0x046B21DC, 0, 7, "current", &ci_IteratorIterator$$current },
  { 0x53CEEB6C, 1, 6, "__call", &ci_IteratorIterator$$__call },
  { 0x229C615F, 1, 11, "__construct", &ci_IteratorIterator$$__construct },
};
extern const int cw_IteratorIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  3,-1,4,-1,5,-1,-1,7,

};
c_IteratorIterator *c_IteratorIterator::create(CVarRef v_iterator) {
  CountableHelper h(this);
  init();
  t___construct(v_iterator);
  return this;
}
extern const MethodCallInfoTable cw_IteratorIterator$$call_info_table[];
extern const int cw_IteratorIterator$$call_info_index[];
extern const InstanceOfInfo cw_IteratorIterator$$instanceof_table[];
extern const int cw_IteratorIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_IteratorIterator = {
  (ObjectData*(*)(ObjectData*))coo_IteratorIterator,
  cw_IteratorIterator$$call_info_table,cw_IteratorIterator$$call_info_index,
  cw_IteratorIterator$$instanceof_table,cw_IteratorIterator$$instanceof_index,
  &c_IteratorIterator::s_class_name,
  &c_IteratorIterator::os_prop_table,&ci_IteratorIterator$$__construct,0,0,0x80,
  &c_IteratorIterator::s_cls
};
/* SRC: classes/iterator.php line 664 */
void c_IteratorIterator::t___construct(Variant v_iterator) {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::__construct);
  if(!v_iterator.instanceof(NAMSTR(s_sys_ss238f312b, "traversable"))) {
    throw_unexpected_argument_type(1,"IteratorIterator::__construct()","traversable",v_iterator);
    return;
  }
  ObjectData *obj_tmp UNUSED;
  if (instanceOf(v_iterator, NAMSTR(s_sys_ss204330ec, "IteratorAggregate"))) {
    {
      {
        MethodCallPackage mcp0;
        CVarRef obj0 = v_iterator;
        mcp0.methodCall((obj0), NAMSTR(s_sys_ss7e98adf4, "getIterator"), 0x32A12503);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        Variant tmp1(((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)));
        v_iterator.assignVal(tmp1);
      }
    }
  }
  if (instanceOf(v_iterator, NAMSTR(s_sys_ss464ebfff, "Iterator"))) {
    {
      m_iterator.assignVal(v_iterator);
    }
  }
  else {
    {
      throw_exception(p_Exception(((c_Exception*)coo_Exception())->create(NAMSTR(s_sys_ss13bb6e5b, "Need to pass a Traversable that is convertable to an iterator"))));
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 676 */
Variant c_IteratorIterator::t_getinneriterator() {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::getInnerIterator);
  ObjectData *obj_tmp UNUSED;
  return m_iterator;
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 680 */
Variant c_IteratorIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::valid);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_iterator;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss1943cbf4, "valid"), 0x54808C44);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 684 */
Variant c_IteratorIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::key);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_iterator;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss12e90587, "key"), 0x024E8C51);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 688 */
Variant c_IteratorIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::current);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_iterator;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss33a5c1b3, "current"), 0x046B21DC);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 692 */
Variant c_IteratorIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::next);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_iterator;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss50652d33, "next"), 0x3B8102B8);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 696 */
Variant c_IteratorIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::rewind);
  ObjectData *obj_tmp UNUSED;
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = m_iterator;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss141ca25f, "rewind"), 0x5E27AF6A);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 700 */
Variant c_IteratorIterator::t___call(Variant v_func, Variant v_params) {
  INSTANCE_METHOD_INJECTION_BUILTIN(IteratorIterator, IteratorIterator::__call);
  ObjectData *obj_tmp UNUSED;
  return x_call_user_func_array(VarNR(Array(ArrayInit(2).set(m_iterator).set(v_func).create())), toArray(v_params));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 244 */
const int64 q_RecursiveIteratorIterator$$LEAVES_ONLY = 0LL;
const int64 q_RecursiveIteratorIterator$$SELF_FIRST = 1LL;
const int64 q_RecursiveIteratorIterator$$CHILD_FIRST = 2LL;
const int64 q_RecursiveIteratorIterator$$CATCH_GET_CHILD = 16LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(RecursiveIteratorIterator)
extern const InstanceOfInfo cw_RecursiveIteratorIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x5E2EAA32,1,"RecursiveIteratorIterator",&cw_RecursiveIteratorIterator},
  {0x2C8E528D,1,"OuterIterator",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_RecursiveIteratorIterator$$instanceof_index[] = {
  7,
  -1,0,1,-1,-1,2,3,-1,

};
extern const CallInfo ci_RecursiveIteratorIterator$$current = { (void*)&c_RecursiveIteratorIterator::i_current, (void*)&c_RecursiveIteratorIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveIteratorIterator$$key = { (void*)&c_RecursiveIteratorIterator::i_key, (void*)&c_RecursiveIteratorIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveIteratorIterator$$getinneriterator = { (void*)&c_RecursiveIteratorIterator::i_getinneriterator, (void*)&c_RecursiveIteratorIterator::ifa_getinneriterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveIteratorIterator$$valid = { (void*)&c_RecursiveIteratorIterator::i_valid, (void*)&c_RecursiveIteratorIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveIteratorIterator$$rewind = { (void*)&c_RecursiveIteratorIterator::i_rewind, (void*)&c_RecursiveIteratorIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveIteratorIterator$$__construct = { (void*)&c_RecursiveIteratorIterator::i___construct, (void*)&c_RecursiveIteratorIterator::ifa___construct, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveIteratorIterator$$next = { (void*)&c_RecursiveIteratorIterator::i_next, (void*)&c_RecursiveIteratorIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_RecursiveIteratorIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_RecursiveIteratorIterator::i_getinneriterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinneriterator);
}
Variant c_RecursiveIteratorIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_RecursiveIteratorIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_RecursiveIteratorIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_RecursiveIteratorIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_RecursiveIteratorIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("RecursiveIteratorIterator::__construct", count, 1, 3, 2);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa_getinneriterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinneriterator, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveIteratorIterator::getInnerIterator", 0, 1);
  return (self->t_getinneriterator());
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveIteratorIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveIteratorIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveIteratorIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveIteratorIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_RecursiveIteratorIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_RecursiveIteratorIterator);
  }
  c_RecursiveIteratorIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveIteratorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveIteratorIterator::valid", 0, 1);
  return (self->t_valid());
}
extern const MethodCallInfoTable cw_RecursiveIteratorIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_RecursiveIteratorIterator$$key },
  { 0x309C7424, 0, 16, "getInnerIterator", &ci_RecursiveIteratorIterator$$getinneriterator },
  { 0x54808C44, 1, 5, "valid", &ci_RecursiveIteratorIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_RecursiveIteratorIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_RecursiveIteratorIterator$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_RecursiveIteratorIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_RecursiveIteratorIterator$$__construct },
};
extern const int cw_RecursiveIteratorIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  3,-1,4,-1,5,-1,-1,6,

};
c_RecursiveIteratorIterator *c_RecursiveIteratorIterator::create(CVarRef v_iterator, CVarRef v_mode //  = NAMVAR(s_sys_svif01bca90, 0LL) /* RecursiveIteratorIterator::LEAVES_ONLY */
, CVarRef v_flags //  = NAMVAR(s_sys_svif01bca90, 0LL)
) {
  CountableHelper h(this);
  init();
  t___construct(v_iterator, v_mode, v_flags);
  return this;
}
extern const MethodCallInfoTable cw_RecursiveIteratorIterator$$call_info_table[];
extern const int cw_RecursiveIteratorIterator$$call_info_index[];
extern const InstanceOfInfo cw_RecursiveIteratorIterator$$instanceof_table[];
extern const int cw_RecursiveIteratorIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_RecursiveIteratorIterator = {
  (ObjectData*(*)(ObjectData*))coo_RecursiveIteratorIterator,
  cw_RecursiveIteratorIterator$$call_info_table,cw_RecursiveIteratorIterator$$call_info_index,
  cw_RecursiveIteratorIterator$$instanceof_table,cw_RecursiveIteratorIterator$$instanceof_index,
  &c_RecursiveIteratorIterator::s_class_name,
  &c_RecursiveIteratorIterator::os_prop_table,&ci_RecursiveIteratorIterator$$__construct,0,0,0x0,
  &c_RecursiveIteratorIterator::s_cls
};
/* SRC: classes/iterator.php line 253 */
void c_RecursiveIteratorIterator::t___construct(Variant v_iterator, Variant v_mode //  = 0LL /* RecursiveIteratorIterator::LEAVES_ONLY */
, Variant v_flags //  = 0LL
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::__construct);
  x_hphp_recursiveiteratoriterator___construct(GET_THIS_TYPED(RecursiveIteratorIterator), toObject(v_iterator), toInt64(v_mode), toInt64(v_flags));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 269 */
Object c_RecursiveIteratorIterator::t_getinneriterator() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::getInnerIterator);
  return x_hphp_recursiveiteratoriterator_getinneriterator(GET_THIS_TYPED(RecursiveIteratorIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 280 */
Variant c_RecursiveIteratorIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::current);
  return x_hphp_recursiveiteratoriterator_current(GET_THIS_TYPED(RecursiveIteratorIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 291 */
Variant c_RecursiveIteratorIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::key);
  return x_hphp_recursiveiteratoriterator_key(GET_THIS_TYPED(RecursiveIteratorIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 302 */
void c_RecursiveIteratorIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::next);
  x_hphp_recursiveiteratoriterator_next(GET_THIS_TYPED(RecursiveIteratorIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 313 */
void c_RecursiveIteratorIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::rewind);
  x_hphp_recursiveiteratoriterator_rewind(GET_THIS_TYPED(RecursiveIteratorIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/iterator.php line 325 */
bool c_RecursiveIteratorIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveIteratorIterator, RecursiveIteratorIterator::valid);
  return x_hphp_recursiveiteratoriterator_valid(GET_THIS_TYPED(RecursiveIteratorIterator));
}
namespace hphp_impl_splitter {}
ObjectData *coo_ArrayIterator() {
  return NEWOBJ(c_ArrayIterator)();
}
ObjectData *coo_FilterIterator() {
  return NEWOBJ(c_FilterIterator)();
}
ObjectData *coo_AppendIterator() {
  return NEWOBJ(c_AppendIterator)();
}
ObjectData *coo_IteratorIterator() {
  return NEWOBJ(c_IteratorIterator)();
}
ObjectData *coo_RecursiveIteratorIterator() {
  return NEWOBJ(c_RecursiveIteratorIterator)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
  (int64)&NAMVAR(s_sys_svib794f8ce, 1LL),
  (int64)&NAMVAR(s_sys_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
  (int64)&NAMVAR(s_sys_svi86af027e, 16LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x1F14FF71,0,0,16,65,9,GET_PROPERTY_OFFSET(c_AppendIterator, m_iterators),&NAMSTR(s_sys_ss33fce46e, "\000AppendIterator\000iterators") },

  {0x225FC80C,1,1,0,100,3,0,&NAMSTR(s_sys_ss225fc80c, "STD_PROP_LIST") },
  {0x48DB5B17,0,2,0,100,3,0,&NAMSTR(s_sys_ss48db5b17, "ARRAY_AS_PROPS") },

  {0x06AFCBFB,0,0,3,66,-1,GET_PROPERTY_OFFSET(c_ArrayIterator, m_flags),&NAMSTR(s_sys_ss6f8d07eb, "\000*\000flags") },
  {0x09B92EA5,-1,0,3,66,-1,GET_PROPERTY_OFFSET(c_ArrayIterator, m_arr),&NAMSTR(s_sys_ss747206d2, "\000*\000arr") },

  {0x0B506749,0,0,16,65,-1,GET_PROPERTY_OFFSET(c_FilterIterator, m_it),&NAMSTR(s_sys_ss44be4990, "\000FilterIterator\000it") },

  {0x4AF9D29E,0,0,18,65,-1,GET_PROPERTY_OFFSET(c_IteratorIterator, m_iterator),&NAMSTR(s_sys_ss0c1ec20c, "\000IteratorIterator\000iterator") },

  {0x1B5C1FD1,2,2,0,100,3,0,&NAMSTR(s_sys_ss1b5c1fd1, "CHILD_FIRST") },
  {0x44B24F6C,2,3,0,36,3,0,&NAMSTR(s_sys_ss44b24f6c, "LEAVES_ONLY") },
  {0x55655AA4,0,4,0,100,3,0,&NAMSTR(s_sys_ss55655aa4, "CATCH_GET_CHILD") },
  {0x683D2285,-3,1,0,100,3,0,&NAMSTR(s_sys_ss683d2285, "SELF_FIRST") },

  {0x7D792BB7,0,0,27,65,-1,GET_PROPERTY_OFFSET(c_RecursiveIteratorIterator, m_rsrc),&NAMSTR(s_sys_ss246080da, "\000RecursiveIteratorIterator\000rsrc") },

};
static const int cpt_hash_entries[] = {
  // AppendIterator hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // AppendIterator lists
  0,-1,
  -1,
  -1,
  // ArrayIterator hash
  1,-1,-1,0,-1,-1,-1,-1,
  -1,-1,-1,2,-1,3,-1,-1,
  // ArrayIterator lists
  3,2,-1,
  -1,
  -1,
  // FilterIterator hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // FilterIterator lists
  0,-1,
  -1,
  -1,
  // IteratorIterator hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // IteratorIterator lists
  0,-1,
  -1,
  -1,
  // RecursiveIteratorIterator hash
  -1,-1,3,1,-1,-1,0,-1,
  -1,-1,-1,-1,-1,-1,-1,4,
  // RecursiveIteratorIterator lists
  4,-1,
  -1,
  -1,
};
const ClassPropTable c_AppendIterator::os_prop_table = {
  7,0,-1,-1,-1,-1,10,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_ArrayIterator::os_prop_table = {
  7,3,-1,-1,7,0,11,0,
  cpt_hash_entries+20,0,cpt_table_entries+1,cpt_static_inits
};
const ClassPropTable c_FilterIterator::os_prop_table = {
  7,0,-1,-1,-1,-1,10,0,
  cpt_hash_entries+33,&c_IteratorIterator::os_prop_table,cpt_table_entries+5,cpt_static_inits
};
const ClassPropTable c_IteratorIterator::os_prop_table = {
  7,0,-1,-1,-1,-1,10,0,
  cpt_hash_entries+45,0,cpt_table_entries+6,cpt_static_inits
};
const ClassPropTable c_RecursiveIteratorIterator::os_prop_table = {
  7,4,-1,-1,7,1,10,0,
  cpt_hash_entries+65,0,cpt_table_entries+7,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
