
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/splfile.fws.h>
#include <php/classes/splfile.h>

// Dependencies
#include <php/classes/iterator.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/splfile.php line 384 */
const int64 q_SplFileObject$$DROP_NEW_LINE = 1LL;
const int64 q_SplFileObject$$READ_AHEAD = 2LL;
const int64 q_SplFileObject$$SKIP_EMPTY = 6LL;
const int64 q_SplFileObject$$READ_CSV = 8LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SplFileObject)
extern const InstanceOfInfo cw_SplFileObject$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x2259EDD2,1,"SplFileObject",&cw_SplFileObject},
  {0x0AF036D3,0,"RecursiveIterator",(const ObjectStaticCallbacks*)2},
  {0x6145DC43,1,"SeekableIterator",(const ObjectStaticCallbacks*)2},
  {0x7E923FA7,1,"SplFileInfo",&cw_SplFileInfo},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_SplFileObject$$instanceof_index[] = {
  15,
  -1,0,1,2,-1,-1,-1,4,
  -1,-1,-1,-1,-1,-1,5,-1,

};
extern const CallInfo ci_SplFileObject$$getmaxlinelen = { (void*)&c_SplFileObject::i_getmaxlinelen, (void*)&c_SplFileObject::ifa_getmaxlinelen, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fseek = { (void*)&c_SplFileObject::i_fseek, (void*)&c_SplFileObject::ifa_fseek, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$key = { (void*)&c_SplFileObject::i_key, (void*)&c_SplFileObject::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$haschildren = { (void*)&c_SplFileObject::i_haschildren, (void*)&c_SplFileObject::ifa_haschildren, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$getcsvcontrol = { (void*)&c_SplFileObject::i_getcsvcontrol, (void*)&c_SplFileObject::ifa_getcsvcontrol, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$setmaxlinelen = { (void*)&c_SplFileObject::i_setmaxlinelen, (void*)&c_SplFileObject::ifa_setmaxlinelen, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fflush = { (void*)&c_SplFileObject::i_fflush, (void*)&c_SplFileObject::ifa_fflush, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fgetc = { (void*)&c_SplFileObject::i_fgetc, (void*)&c_SplFileObject::ifa_fgetc, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fgetcsv = { (void*)&c_SplFileObject::i_fgetcsv, (void*)&c_SplFileObject::ifa_fgetcsv, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$getflags = { (void*)&c_SplFileObject::i_getflags, (void*)&c_SplFileObject::ifa_getflags, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$next = { (void*)&c_SplFileObject::i_next, (void*)&c_SplFileObject::ifa_next, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$__construct = { (void*)&c_SplFileObject::i___construct, (void*)&c_SplFileObject::ifa___construct, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$setflags = { (void*)&c_SplFileObject::i_setflags, (void*)&c_SplFileObject::ifa_setflags, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$setcsvcontrol = { (void*)&c_SplFileObject::i_setcsvcontrol, (void*)&c_SplFileObject::ifa_setcsvcontrol, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$ftruncate = { (void*)&c_SplFileObject::i_ftruncate, (void*)&c_SplFileObject::ifa_ftruncate, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$seek = { (void*)&c_SplFileObject::i_seek, (void*)&c_SplFileObject::ifa_seek, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$current = { (void*)&c_SplFileObject::i_current, (void*)&c_SplFileObject::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fstat = { (void*)&c_SplFileObject::i_fstat, (void*)&c_SplFileObject::ifa_fstat, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fgetss = { (void*)&c_SplFileObject::i_fgetss, (void*)&c_SplFileObject::ifa_fgetss, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fgets = { (void*)&c_SplFileObject::i_fgets, (void*)&c_SplFileObject::ifa_fgets, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fwrite = { (void*)&c_SplFileObject::i_fwrite, (void*)&c_SplFileObject::ifa_fwrite, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fpassthru = { (void*)&c_SplFileObject::i_fpassthru, (void*)&c_SplFileObject::ifa_fpassthru, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$fscanf = { (void*)&c_SplFileObject::i_fscanf, (void*)&c_SplFileObject::ifa_fscanf, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$valid = { (void*)&c_SplFileObject::i_valid, (void*)&c_SplFileObject::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$eof = { (void*)&c_SplFileObject::i_eof, (void*)&c_SplFileObject::ifa_eof, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$flock = { (void*)&c_SplFileObject::i_flock, (void*)&c_SplFileObject::ifa_flock, 2, 4, 0x0000000000000002LL};
extern const CallInfo ci_SplFileObject$$ftell = { (void*)&c_SplFileObject::i_ftell, (void*)&c_SplFileObject::ifa_ftell, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$getchildren = { (void*)&c_SplFileObject::i_getchildren, (void*)&c_SplFileObject::ifa_getchildren, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileObject$$rewind = { (void*)&c_SplFileObject::i_rewind, (void*)&c_SplFileObject::ifa_rewind, 0, 4, 0x0000000000000000LL};
Variant c_SplFileObject::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SplFileObject::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_SplFileObject::i_eof(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_eof);
}
Variant c_SplFileObject::i_fflush(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fflush);
}
Variant c_SplFileObject::i_fgetc(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fgetc);
}
Variant c_SplFileObject::i_fgetcsv(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fgetcsv);
}
Variant c_SplFileObject::i_fgets(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fgets);
}
Variant c_SplFileObject::i_fgetss(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fgetss);
}
Variant c_SplFileObject::i_flock(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_flock);
}
Variant c_SplFileObject::i_fpassthru(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fpassthru);
}
Variant c_SplFileObject::i_fscanf(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_fscanf, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("SplFileObject::fscanf", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_fscanf(count, arg0, p));
  }
}
Variant c_SplFileObject::i_fseek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fseek);
}
Variant c_SplFileObject::i_fstat(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fstat);
}
Variant c_SplFileObject::i_ftell(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_ftell);
}
Variant c_SplFileObject::i_ftruncate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_ftruncate);
}
Variant c_SplFileObject::i_fwrite(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fwrite);
}
Variant c_SplFileObject::i_getchildren(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getchildren);
}
Variant c_SplFileObject::i_getcsvcontrol(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getcsvcontrol);
}
Variant c_SplFileObject::i_getflags(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getflags);
}
Variant c_SplFileObject::i_getmaxlinelen(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmaxlinelen);
}
Variant c_SplFileObject::i_haschildren(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_haschildren);
}
Variant c_SplFileObject::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_SplFileObject::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_SplFileObject::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_SplFileObject::i_seek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_seek);
}
Variant c_SplFileObject::i_setcsvcontrol(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setcsvcontrol);
}
Variant c_SplFileObject::i_setflags(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setflags);
}
Variant c_SplFileObject::i_setmaxlinelen(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setmaxlinelen);
}
Variant c_SplFileObject::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant NEVER_INLINE c_SplFileObject::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("SplFileObject::__construct", count, 1, 4, 2);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  return (self->t___construct(arg0, arg1, arg2, arg3), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_SplFileObject::ifa_eof(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_eof, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::eof", 0, 1);
  return (self->t_eof());
}
Variant NEVER_INLINE c_SplFileObject::ifa_fflush(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fflush, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::fflush", 0, 1);
  return (self->t_fflush());
}
Variant NEVER_INLINE c_SplFileObject::ifa_fgetc(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fgetc, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::fgetc", 0, 1);
  return (self->t_fgetc());
}
Variant NEVER_INLINE c_SplFileObject::ifa_fgetcsv(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fgetcsv, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("SplFileObject::fgetcsv", 3, 1);
  if (count <= 0) return (self->t_fgetcsv());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_fgetcsv(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_fgetcsv(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_fgetcsv(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SplFileObject::ifa_fgets(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fgets, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::fgets", 0, 1);
  return (self->t_fgets());
}
Variant NEVER_INLINE c_SplFileObject::ifa_fgetss(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fgetss, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplFileObject::fgetss", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_fgetss(arg0));
}
Variant NEVER_INLINE c_SplFileObject::ifa_flock(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_flock, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("SplFileObject::flock", count, 2, 2, 1);
  CVarRef arg0(a0);
  VRefParam arg1(vref(a1));
  return (self->t_flock(arg0, arg1));
}
Variant NEVER_INLINE c_SplFileObject::ifa_fpassthru(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fpassthru, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::fpassthru", 0, 1);
  return (self->t_fpassthru());
}
Variant NEVER_INLINE c_SplFileObject::ifa_fscanf(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fscanf, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("SplFileObject::fscanf", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_fscanf(count, arg0, p));
}
Variant NEVER_INLINE c_SplFileObject::ifa_fseek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fseek, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("SplFileObject::fseek", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_fseek(arg0, arg1));
}
Variant NEVER_INLINE c_SplFileObject::ifa_fstat(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fstat, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::fstat", 0, 1);
  return (self->t_fstat());
}
Variant NEVER_INLINE c_SplFileObject::ifa_ftell(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ftell, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::ftell", 0, 1);
  return (self->t_ftell());
}
Variant NEVER_INLINE c_SplFileObject::ifa_ftruncate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ftruncate, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplFileObject::ftruncate", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_ftruncate(arg0));
}
Variant NEVER_INLINE c_SplFileObject::ifa_fwrite(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fwrite, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("SplFileObject::fwrite", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_fwrite(arg0, arg1));
}
Variant NEVER_INLINE c_SplFileObject::ifa_getchildren(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getchildren, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::getChildren", 0, 1);
  return (self->t_getchildren());
}
Variant NEVER_INLINE c_SplFileObject::ifa_getcsvcontrol(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcsvcontrol, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::getCsvControl", 0, 1);
  return (self->t_getcsvcontrol());
}
Variant NEVER_INLINE c_SplFileObject::ifa_getflags(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getflags, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::getFlags", 0, 1);
  return (self->t_getflags());
}
Variant NEVER_INLINE c_SplFileObject::ifa_getmaxlinelen(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmaxlinelen, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::getMaxLineLen", 0, 1);
  return (self->t_getmaxlinelen());
}
Variant NEVER_INLINE c_SplFileObject::ifa_haschildren(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_haschildren, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::hasChildren", 0, 1);
  return (self->t_haschildren());
}
Variant NEVER_INLINE c_SplFileObject::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_SplFileObject::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_seek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_seek, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplFileObject::seek", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_seek(arg0), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_setcsvcontrol(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setcsvcontrol, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("SplFileObject::setCsvControl", 3, 1);
  if (count <= 0) return (self->t_setcsvcontrol(), null);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_setcsvcontrol(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_setcsvcontrol(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t_setcsvcontrol(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_setflags(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setflags, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplFileObject::setFlags", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setflags(arg0), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_setmaxlinelen(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setmaxlinelen, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplFileObject::setMaxLineLen", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setmaxlinelen(arg0), null);
}
Variant NEVER_INLINE c_SplFileObject::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_SplFileObject);
  }
  c_SplFileObject *self ATTRIBUTE_UNUSED (static_cast<c_SplFileObject*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileObject::valid", 0, 1);
  return (self->t_valid());
}
extern const MethodCallInfoTable cw_SplFileObject$$call_info_table[] = {
  { 0x22E33F00, 1, 5, "fgetc", &ci_SplFileObject$$fgetc },
  { 0x412AEFC3, 0, 3, "eof", &ci_SplFileObject$$eof },
  { 0x6CD9D043, 1, 9, "ftruncate", &ci_SplFileObject$$ftruncate },
  { 0x54808C44, 1, 5, "valid", &ci_SplFileObject$$valid },
  { 0x4E7E9F86, 1, 5, "flock", &ci_SplFileObject$$flock },
  { 0x1F600049, 1, 5, "fseek", &ci_SplFileObject$$fseek },
  { 0x1D522E0A, 1, 8, "setFlags", &ci_SplFileObject$$setflags },
  { 0x5741664E, 1, 7, "fgetcsv", &ci_SplFileObject$$fgetcsv },
  { 0x28EC520F, 1, 11, "getChildren", &ci_SplFileObject$$getchildren },
  { 0x7905ACD0, 1, 13, "setCsvControl", &ci_SplFileObject$$setcsvcontrol },
  { 0x024E8C51, 1, 3, "key", &ci_SplFileObject$$key },
  { 0x5A397C15, 1, 11, "hasChildren", &ci_SplFileObject$$haschildren },
  { 0x6AF27F9A, 0, 6, "fflush", &ci_SplFileObject$$fflush },
  { 0x10FE9CDA, 1, 13, "getMaxLineLen", &ci_SplFileObject$$getmaxlinelen },
  { 0x4B7E339B, 1, 9, "fpassthru", &ci_SplFileObject$$fpassthru },
  { 0x046B21DC, 1, 7, "current", &ci_SplFileObject$$current },
  { 0x1D3A541E, 1, 6, "fgetss", &ci_SplFileObject$$fgetss },
  { 0x229C615F, 1, 11, "__construct", &ci_SplFileObject$$__construct },
  { 0x75AD17E1, 1, 8, "getFlags", &ci_SplFileObject$$getflags },
  { 0x64A6D962, 1, 13, "getCsvControl", &ci_SplFileObject$$getcsvcontrol },
  { 0x06B77923, 1, 6, "fscanf", &ci_SplFileObject$$fscanf },
  { 0x192CE465, 1, 6, "fwrite", &ci_SplFileObject$$fwrite },
  { 0x77054C67, 1, 4, "seek", &ci_SplFileObject$$seek },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_SplFileObject$$rewind },
  { 0x37C16CAD, 1, 5, "ftell", &ci_SplFileObject$$ftell },
  { 0x7F18FDF3, 1, 5, "fgets", &ci_SplFileObject$$fgets },
  { 0x0E43D437, 1, 13, "setMaxLineLen", &ci_SplFileObject$$setmaxlinelen },
  { 0x2322E838, 0, 5, "fstat", &ci_SplFileObject$$fstat },
  { 0x3B8102B8, 1, 4, "next", &ci_SplFileObject$$next },
};
extern const int cw_SplFileObject$$call_info_index[] = {
  63,
  0,-1,-1,1,3,-1,4,-1,
  -1,5,6,-1,-1,-1,7,8,
  9,10,-1,-1,-1,11,-1,-1,
  -1,-1,12,14,15,-1,16,17,
  -1,18,19,20,-1,21,-1,22,
  -1,-1,23,-1,-1,24,-1,-1,
  -1,-1,-1,25,-1,-1,-1,26,
  27,-1,-1,-1,-1,-1,-1,-1,

};
c_SplFileObject *c_SplFileObject::create(CVarRef v_filename, CVarRef v_open_mode //  = NAMVAR(s_sys_svs0d42ecf6, "r")
, CVarRef v_use_include_path //  = false_varNR
, CVarRef v_context //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_filename, v_open_mode, v_use_include_path, v_context);
  return this;
}
extern const MethodCallInfoTable cw_SplFileObject$$call_info_table[];
extern const int cw_SplFileObject$$call_info_index[];
extern const InstanceOfInfo cw_SplFileObject$$instanceof_table[];
extern const int cw_SplFileObject$$instanceof_index[];
const ObjectStaticCallbacks cw_SplFileObject = {
  (ObjectData*(*)(ObjectData*))coo_SplFileObject,
  cw_SplFileObject$$call_info_table,cw_SplFileObject$$call_info_index,
  cw_SplFileObject$$instanceof_table,cw_SplFileObject$$instanceof_index,
  &c_SplFileObject::s_class_name,
  &c_SplFileObject::os_prop_table,&ci_SplFileObject$$__construct,0,&cw_SplFileInfo,0x0,
  &c_SplFileObject::s_cls
};
/* SRC: classes/splfile.php line 392 */
void c_SplFileObject::t___construct(Variant v_filename, Variant v_open_mode //  = NAMSTR(s_sys_ss0d42ecf6, "r")
, Variant v_use_include_path //  = false
, Variant v_context //  = null
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::__construct);
  x_hphp_splfileobject___construct(GET_THIS_TYPED(SplFileObject), toString(v_filename), toString(v_open_mode), toBoolean(v_use_include_path), v_context);
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 410 */
Variant c_SplFileObject::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::current);
  return x_hphp_splfileobject_current(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 422 */
bool c_SplFileObject::t_eof() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::eof);
  return x_hphp_splfileobject_eof(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 434 */
bool c_SplFileObject::t_fflush() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fflush);
  return x_hphp_splfileobject_fflush(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 452 */
String c_SplFileObject::t_fgetc() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fgetc);
  return x_hphp_splfileobject_fgetc(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 482 */
Variant c_SplFileObject::t_fgetcsv(CVarRef v_delimiter //  = NAMVAR(s_sys_svs5332baa7, ",")
, CVarRef v_enclosure //  = NAMVAR(s_sys_svs7e5fc106, "\"")
, CVarRef v_escape //  = NAMVAR(s_sys_svs559e789f, "\\")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fgetcsv);
  return x_hphp_splfileobject_fgetcsv(GET_THIS_TYPED(SplFileObject), toString(v_delimiter), toString(v_enclosure), toString(v_escape));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 497 */
String c_SplFileObject::t_fgets() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fgets);
  return x_hphp_splfileobject_fgets(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 517 */
String c_SplFileObject::t_fgetss(CVarRef v_allowable_tags) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fgetss);
  return x_hphp_splfileobject_fgetss(GET_THIS_TYPED(SplFileObject), toString(v_allowable_tags));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 537 */
bool c_SplFileObject::t_flock(CVarRef v_operation, VRefParam rv_wouldblock) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::flock);
  Variant &v_wouldblock ATTRIBUTE_UNUSED = rv_wouldblock;
  return x_hphp_splfileobject_flock(GET_THIS_TYPED(SplFileObject), ref(v_wouldblock));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 555 */
int64 c_SplFileObject::t_fpassthru() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fpassthru);
  return x_hphp_splfileobject_fpassthru(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 579 */
Variant c_SplFileObject::t_fscanf(int num_args, CVarRef v_format, Array args /* = Array() */) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fscanf);
  int64 v_argc = 0;
  Array v_argv;

  {
    int64 tmp0((num_args));
    v_argc = tmp0;
  }
  {
    const Array &tmp0((func_get_args(num_args, Array(ArrayInit(1, ArrayInit::vectorInit).set(v_format).create()),args)));
    v_argv = tmp0;
  }
  return x_hphp_splfileobject_fscanf(v_argc, GET_THIS_TYPED(SplFileObject), toString(v_format), VarNR(v_argv));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 607 */
int64 c_SplFileObject::t_fseek(CVarRef v_offset, CVarRef v_whence) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fseek);
  return x_hphp_splfileobject_fseek(GET_THIS_TYPED(SplFileObject), toInt64(v_offset), toInt64(v_whence));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 621 */
Variant c_SplFileObject::t_fstat() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fstat);
  return x_hphp_splfileobject_fstat(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 635 */
int64 c_SplFileObject::t_ftell() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::ftell);
  return x_hphp_splfileobject_ftell(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 655 */
bool c_SplFileObject::t_ftruncate(CVarRef v_size) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::ftruncate);
  return x_hphp_splfileobject_ftruncate(GET_THIS_TYPED(SplFileObject), toInt64(v_size));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 673 */
int64 c_SplFileObject::t_fwrite(CVarRef v_str, CVarRef v_length) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::fwrite);
  return x_hphp_splfileobject_fwrite(GET_THIS_TYPED(SplFileObject), toString(v_str), toInt64(v_length));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 685 */
Variant c_SplFileObject::t_getchildren() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::getChildren);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 699 */
Variant c_SplFileObject::t_getcsvcontrol() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::getCsvControl);
  return x_hphp_splfileobject_getcvscontrol(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 711 */
int64 c_SplFileObject::t_getflags() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::getFlags);
  return x_hphp_splfileobject_getflags(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 725 */
int64 c_SplFileObject::t_getmaxlinelen() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::getMaxLineLen);
  return x_hphp_splfileobject_getmaxlinelen(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 738 */
bool c_SplFileObject::t_haschildren() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::hasChildren);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 754 */
int64 c_SplFileObject::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::key);
  return x_hphp_splfileobject_key(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 766 */
void c_SplFileObject::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::next);
  x_hphp_splfileobject_next(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 778 */
void c_SplFileObject::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::rewind);
  x_hphp_splfileobject_rewind(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 792 */
void c_SplFileObject::t_seek(CVarRef v_line_pos) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::seek);
  x_hphp_splfileobject_seek(GET_THIS_TYPED(SplFileObject), toInt64(v_line_pos));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 809 */
void c_SplFileObject::t_setcsvcontrol(CVarRef v_delimiter //  = NAMVAR(s_sys_svs5332baa7, ",")
, CVarRef v_enclosure //  = NAMVAR(s_sys_svs7e5fc106, "\"")
, CVarRef v_escape //  = NAMVAR(s_sys_svs559e789f, "\\")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::setCsvControl);
  x_hphp_splfileobject_setcsvcontrol(GET_THIS_TYPED(SplFileObject), toString(v_delimiter), toString(v_enclosure), toString(v_escape));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 825 */
void c_SplFileObject::t_setflags(CVarRef v_flags) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::setFlags);
  x_hphp_splfileobject_setflags(GET_THIS_TYPED(SplFileObject), toInt64(v_flags));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 840 */
void c_SplFileObject::t_setmaxlinelen(CVarRef v_max_len) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::setMaxLineLen);
  x_hphp_splfileobject_setmaxlinelen(GET_THIS_TYPED(SplFileObject), toInt64(v_max_len));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 852 */
bool c_SplFileObject::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileObject, SplFileObject::valid);
  return x_hphp_splfileobject_valid(GET_THIS_TYPED(SplFileObject));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 11 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SplFileInfo)
extern const InstanceOfInfo cw_SplFileInfo$$instanceof_table[] = {
  {0x7E923FA7,1,"SplFileInfo",&cw_SplFileInfo},
};
const int cw_SplFileInfo$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_SplFileInfo$$getsize = { (void*)&c_SplFileInfo::i_getsize, (void*)&c_SplFileInfo::ifa_getsize, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getrealpath = { (void*)&c_SplFileInfo::i_getrealpath, (void*)&c_SplFileInfo::ifa_getrealpath, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getgroup = { (void*)&c_SplFileInfo::i_getgroup, (void*)&c_SplFileInfo::ifa_getgroup, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$__tostring = { (void*)&c_SplFileInfo::i___tostring, (void*)&c_SplFileInfo::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getfileinfo = { (void*)&c_SplFileInfo::i_getfileinfo, (void*)&c_SplFileInfo::ifa_getfileinfo, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$isexecutable = { (void*)&c_SplFileInfo::i_isexecutable, (void*)&c_SplFileInfo::ifa_isexecutable, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getinode = { (void*)&c_SplFileInfo::i_getinode, (void*)&c_SplFileInfo::ifa_getinode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getpathname = { (void*)&c_SplFileInfo::i_getpathname, (void*)&c_SplFileInfo::ifa_getpathname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getpath = { (void*)&c_SplFileInfo::i_getpath, (void*)&c_SplFileInfo::ifa_getpath, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getpathinfo = { (void*)&c_SplFileInfo::i_getpathinfo, (void*)&c_SplFileInfo::ifa_getpathinfo, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$gettype = { (void*)&c_SplFileInfo::i_gettype, (void*)&c_SplFileInfo::ifa_gettype, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$__construct = { (void*)&c_SplFileInfo::i___construct, (void*)&c_SplFileInfo::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$islink = { (void*)&c_SplFileInfo::i_islink, (void*)&c_SplFileInfo::ifa_islink, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getatime = { (void*)&c_SplFileInfo::i_getatime, (void*)&c_SplFileInfo::ifa_getatime, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$isdir = { (void*)&c_SplFileInfo::i_isdir, (void*)&c_SplFileInfo::ifa_isdir, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getowner = { (void*)&c_SplFileInfo::i_getowner, (void*)&c_SplFileInfo::ifa_getowner, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getfilename = { (void*)&c_SplFileInfo::i_getfilename, (void*)&c_SplFileInfo::ifa_getfilename, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$isfile = { (void*)&c_SplFileInfo::i_isfile, (void*)&c_SplFileInfo::ifa_isfile, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$iswritable = { (void*)&c_SplFileInfo::i_iswritable, (void*)&c_SplFileInfo::ifa_iswritable, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$setinfoclass = { (void*)&c_SplFileInfo::i_setinfoclass, (void*)&c_SplFileInfo::ifa_setinfoclass, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$isreadable = { (void*)&c_SplFileInfo::i_isreadable, (void*)&c_SplFileInfo::ifa_isreadable, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getbasename = { (void*)&c_SplFileInfo::i_getbasename, (void*)&c_SplFileInfo::ifa_getbasename, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$openfile = { (void*)&c_SplFileInfo::i_openfile, (void*)&c_SplFileInfo::ifa_openfile, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getlinktarget = { (void*)&c_SplFileInfo::i_getlinktarget, (void*)&c_SplFileInfo::ifa_getlinktarget, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getperms = { (void*)&c_SplFileInfo::i_getperms, (void*)&c_SplFileInfo::ifa_getperms, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getmtime = { (void*)&c_SplFileInfo::i_getmtime, (void*)&c_SplFileInfo::ifa_getmtime, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$getctime = { (void*)&c_SplFileInfo::i_getctime, (void*)&c_SplFileInfo::ifa_getctime, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SplFileInfo$$setfileclass = { (void*)&c_SplFileInfo::i_setfileclass, (void*)&c_SplFileInfo::ifa_setfileclass, 1, 4, 0x0000000000000000LL};
Variant c_SplFileInfo::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SplFileInfo::i_getpath(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getpath);
}
Variant c_SplFileInfo::i_getfilename(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfilename);
}
Variant c_SplFileInfo::i_getfileinfo(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfileinfo);
}
Variant c_SplFileInfo::i_getbasename(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getbasename);
}
Variant c_SplFileInfo::i_getpathname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getpathname);
}
Variant c_SplFileInfo::i_getpathinfo(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getpathinfo);
}
Variant c_SplFileInfo::i_getperms(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getperms);
}
Variant c_SplFileInfo::i_getinode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinode);
}
Variant c_SplFileInfo::i_getsize(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getsize);
}
Variant c_SplFileInfo::i_getowner(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getowner);
}
Variant c_SplFileInfo::i_getgroup(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getgroup);
}
Variant c_SplFileInfo::i_getatime(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getatime);
}
Variant c_SplFileInfo::i_getmtime(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmtime);
}
Variant c_SplFileInfo::i_getctime(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getctime);
}
Variant c_SplFileInfo::i_gettype(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettype);
}
Variant c_SplFileInfo::i_iswritable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_iswritable);
}
Variant c_SplFileInfo::i_isreadable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isreadable);
}
Variant c_SplFileInfo::i_isexecutable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isexecutable);
}
Variant c_SplFileInfo::i_isfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isfile);
}
Variant c_SplFileInfo::i_isdir(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdir);
}
Variant c_SplFileInfo::i_islink(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_islink);
}
Variant c_SplFileInfo::i_getlinktarget(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getlinktarget);
}
Variant c_SplFileInfo::i_getrealpath(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getrealpath);
}
Variant c_SplFileInfo::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_SplFileInfo::i_openfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_openfile);
}
Variant c_SplFileInfo::i_setfileclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setfileclass);
}
Variant c_SplFileInfo::i_setinfoclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setinfoclass);
}
Variant NEVER_INLINE c_SplFileInfo::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplFileInfo::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getpath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getpath, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getPath", 0, 1);
  return (self->t_getpath());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getfilename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfilename, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getFilename", 0, 1);
  return (self->t_getfilename());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getfileinfo(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfileinfo, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("SplFileInfo::getFileInfo", 1, 1);
  if (count <= 0) return (self->t_getfileinfo());
  CVarRef arg0(a0);
  return (self->t_getfileinfo(arg0));
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getbasename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getbasename, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("SplFileInfo::getBasename", 1, 1);
  if (count <= 0) return (self->t_getbasename());
  CVarRef arg0(a0);
  return (self->t_getbasename(arg0));
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getpathname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getpathname, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getPathname", 0, 1);
  return (self->t_getpathname());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getpathinfo(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getpathinfo, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("SplFileInfo::getPathInfo", 1, 1);
  if (count <= 0) return (self->t_getpathinfo());
  CVarRef arg0(a0);
  return (self->t_getpathinfo(arg0));
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getperms(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getperms, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getPerms", 0, 1);
  return (self->t_getperms());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getinode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinode, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getInode", 0, 1);
  return (self->t_getinode());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getsize(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getsize, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getSize", 0, 1);
  return (self->t_getsize());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getowner(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getowner, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getOwner", 0, 1);
  return (self->t_getowner());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getgroup(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getgroup, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getGroup", 0, 1);
  return (self->t_getgroup());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getatime(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getatime, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getATime", 0, 1);
  return (self->t_getatime());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getmtime(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmtime, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getMTime", 0, 1);
  return (self->t_getmtime());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getctime(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getctime, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getCTime", 0, 1);
  return (self->t_getctime());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_gettype(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettype, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getType", 0, 1);
  return (self->t_gettype());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_iswritable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_iswritable, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::isWritable", 0, 1);
  return (self->t_iswritable());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_isreadable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isreadable, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::isReadable", 0, 1);
  return (self->t_isreadable());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_isexecutable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexecutable, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::isExecutable", 0, 1);
  return (self->t_isexecutable());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_isfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isfile, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::isFile", 0, 1);
  return (self->t_isfile());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_isdir(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdir, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::isDir", 0, 1);
  return (self->t_isdir());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_islink(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_islink, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::isLink", 0, 1);
  return (self->t_islink());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getlinktarget(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getlinktarget, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getLinkTarget", 0, 1);
  return (self->t_getlinktarget());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_getrealpath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getrealpath, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::getRealPath", 0, 1);
  return (self->t_getrealpath());
}
Variant NEVER_INLINE c_SplFileInfo::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplFileInfo::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_SplFileInfo::ifa_openfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_openfile, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("SplFileInfo::openFile", 3, 1);
  if (count <= 0) return (self->t_openfile());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_openfile(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_openfile(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_openfile(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SplFileInfo::ifa_setfileclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setfileclass, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("SplFileInfo::setFileClass", 1, 1);
  if (count <= 0) return (self->t_setfileclass(), null);
  CVarRef arg0(a0);
  return (self->t_setfileclass(arg0), null);
}
Variant NEVER_INLINE c_SplFileInfo::ifa_setinfoclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setinfoclass, coo_SplFileInfo);
  }
  c_SplFileInfo *self ATTRIBUTE_UNUSED (static_cast<c_SplFileInfo*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("SplFileInfo::setInfoClass", 1, 1);
  if (count <= 0) return (self->t_setinfoclass(), null);
  CVarRef arg0(a0);
  return (self->t_setinfoclass(arg0), null);
}
extern const MethodCallInfoTable cw_SplFileInfo$$call_info_table[] = {
  { 0x25D241C5, 1, 12, "setInfoClass", &ci_SplFileInfo$$setinfoclass },
  { 0x0AF50F06, 0, 7, "getType", &ci_SplFileInfo$$gettype },
  { 0x44934786, 1, 11, "getRealPath", &ci_SplFileInfo$$getrealpath },
  { 0x48EFEC08, 1, 5, "isDir", &ci_SplFileInfo$$isdir },
  { 0x3CD2604A, 1, 8, "getInode", &ci_SplFileInfo$$getinode },
  { 0x6D39474D, 1, 11, "getFilename", &ci_SplFileInfo$$getfilename },
  { 0x2D4BE48E, 1, 8, "getOwner", &ci_SplFileInfo$$getowner },
  { 0x69401C4F, 1, 10, "isReadable", &ci_SplFileInfo$$isreadable },
  { 0x14B34A13, 1, 10, "__toString", &ci_SplFileInfo$$__tostring },
  { 0x72C51C58, 1, 6, "isLink", &ci_SplFileInfo$$islink },
  { 0x6731E29C, 1, 11, "getBasename", &ci_SplFileInfo$$getbasename },
  { 0x60465F1D, 1, 6, "isFile", &ci_SplFileInfo$$isfile },
  { 0x229C615F, 0, 11, "__construct", &ci_SplFileInfo$$__construct },
  { 0x3553C59F, 1, 8, "getATime", &ci_SplFileInfo$$getatime },
  { 0x38463A63, 1, 10, "isWritable", &ci_SplFileInfo$$iswritable },
  { 0x29CC4DA5, 1, 12, "setFileClass", &ci_SplFileInfo$$setfileclass },
  { 0x5B16AFE7, 1, 11, "getPathInfo", &ci_SplFileInfo$$getpathinfo },
  { 0x6D03A6EA, 0, 7, "getSize", &ci_SplFileInfo$$getsize },
  { 0x2565D86A, 1, 8, "getGroup", &ci_SplFileInfo$$getgroup },
  { 0x375513AB, 1, 13, "getLinkTarget", &ci_SplFileInfo$$getlinktarget },
  { 0x5D0078AF, 1, 8, "getCTime", &ci_SplFileInfo$$getctime },
  { 0x4992EE74, 1, 8, "getMTime", &ci_SplFileInfo$$getmtime },
  { 0x48BDFE35, 1, 8, "openFile", &ci_SplFileInfo$$openfile },
  { 0x43D924F8, 1, 11, "getPathname", &ci_SplFileInfo$$getpathname },
  { 0x2A0CCB7A, 1, 12, "isExecutable", &ci_SplFileInfo$$isexecutable },
  { 0x37A06E7D, 1, 8, "getPerms", &ci_SplFileInfo$$getperms },
  { 0x4162243F, 0, 7, "getPath", &ci_SplFileInfo$$getpath },
  { 0x79D4923F, 1, 11, "getFileInfo", &ci_SplFileInfo$$getfileinfo },
};
extern const int cw_SplFileInfo$$call_info_index[] = {
  63,
  -1,-1,-1,-1,-1,0,1,-1,
  3,-1,4,-1,-1,5,6,7,
  -1,-1,-1,8,-1,-1,-1,-1,
  9,-1,-1,-1,10,11,-1,12,
  -1,-1,-1,14,-1,15,-1,16,
  -1,-1,17,19,-1,-1,-1,20,
  -1,-1,-1,-1,21,22,-1,-1,
  23,-1,24,-1,-1,25,-1,26,

};
c_SplFileInfo *c_SplFileInfo::create(CVarRef v_file_name) {
  CountableHelper h(this);
  init();
  t___construct(v_file_name);
  return this;
}
extern const MethodCallInfoTable cw_SplFileInfo$$call_info_table[];
extern const int cw_SplFileInfo$$call_info_index[];
extern const InstanceOfInfo cw_SplFileInfo$$instanceof_table[];
extern const int cw_SplFileInfo$$instanceof_index[];
const ObjectStaticCallbacks cw_SplFileInfo = {
  (ObjectData*(*)(ObjectData*))coo_SplFileInfo,
  cw_SplFileInfo$$call_info_table,cw_SplFileInfo$$call_info_index,
  cw_SplFileInfo$$instanceof_table,cw_SplFileInfo$$instanceof_index,
  &c_SplFileInfo::s_class_name,
  &c_SplFileInfo::os_prop_table,&ci_SplFileInfo$$__construct,0,0,0x0,
  &c_SplFileInfo::s_cls
};
/* SRC: classes/splfile.php line 14 */
void c_SplFileInfo::t___construct(Variant v_file_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::__construct);
  x_hphp_splfileinfo___construct(GET_THIS_TYPED(SplFileInfo), toString(v_file_name));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 27 */
String c_SplFileInfo::t_getpath() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getPath);
  return x_hphp_splfileinfo_getpath(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 39 */
String c_SplFileInfo::t_getfilename() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getFilename);
  return x_hphp_splfileinfo_getfilename(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 53 */
Object c_SplFileInfo::t_getfileinfo(CVarRef v_class_name //  = NAMVAR(s_sys_svs00000000, "")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getFileInfo);
  return x_hphp_splfileinfo_getfileinfo(GET_THIS_TYPED(SplFileInfo), toString(v_class_name));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 68 */
String c_SplFileInfo::t_getbasename(CVarRef v_suffix //  = NAMVAR(s_sys_svs00000000, "")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getBasename);
  return x_hphp_splfileinfo_getbasename(GET_THIS_TYPED(SplFileInfo), toString(v_suffix));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 80 */
String c_SplFileInfo::t_getpathname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getPathname);
  return x_hphp_splfileinfo_getpathname(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 95 */
Object c_SplFileInfo::t_getpathinfo(CVarRef v_class_name //  = NAMVAR(s_sys_svs00000000, "")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getPathInfo);
  return x_hphp_splfileinfo_getpathinfo(GET_THIS_TYPED(SplFileInfo), toString(v_class_name));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 107 */
int64 c_SplFileInfo::t_getperms() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getPerms);
  return x_hphp_splfileinfo_getperms(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 119 */
int64 c_SplFileInfo::t_getinode() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getInode);
  return x_hphp_splfileinfo_getinode(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 131 */
int64 c_SplFileInfo::t_getsize() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getSize);
  return x_hphp_splfileinfo_getsize(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 143 */
int64 c_SplFileInfo::t_getowner() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getOwner);
  return x_hphp_splfileinfo_getowner(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 155 */
int64 c_SplFileInfo::t_getgroup() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getGroup);
  return x_hphp_splfileinfo_getgroup(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 167 */
int64 c_SplFileInfo::t_getatime() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getATime);
  return x_hphp_splfileinfo_getatime(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 181 */
int64 c_SplFileInfo::t_getmtime() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getMTime);
  return x_hphp_splfileinfo_getmtime(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 194 */
int64 c_SplFileInfo::t_getctime() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getCTime);
  return x_hphp_splfileinfo_getctime(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 207 */
String c_SplFileInfo::t_gettype() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getType);
  return x_hphp_splfileinfo_gettype(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 219 */
bool c_SplFileInfo::t_iswritable() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::isWritable);
  return x_hphp_splfileinfo_iswritable(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 231 */
bool c_SplFileInfo::t_isreadable() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::isReadable);
  return x_hphp_splfileinfo_isreadable(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 243 */
bool c_SplFileInfo::t_isexecutable() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::isExecutable);
  return x_hphp_splfileinfo_isexecutable(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 257 */
bool c_SplFileInfo::t_isfile() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::isFile);
  return x_hphp_splfileinfo_isfile(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 269 */
bool c_SplFileInfo::t_isdir() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::isDir);
  return x_hphp_splfileinfo_isdir(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 282 */
bool c_SplFileInfo::t_islink() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::isLink);
  return x_hphp_splfileinfo_islink(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 297 */
String c_SplFileInfo::t_getlinktarget() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getLinkTarget);
  return x_hphp_splfileinfo_getlinktarget(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 310 */
Variant c_SplFileInfo::t_getrealpath() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::getRealPath);
  return x_hphp_splfileinfo_getrealpath(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 314 */
String c_SplFileInfo::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::__toString);
  return x_hphp_splfileinfo___tostring(GET_THIS_TYPED(SplFileInfo));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 338 */
Object c_SplFileInfo::t_openfile(CVarRef v_mode //  = NAMVAR(s_sys_svs0d42ecf6, "r")
, CVarRef v_use_include_path //  = false_varNR
, CVarRef v_context //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::openFile);
  return x_hphp_splfileinfo_openfile(GET_THIS_TYPED(SplFileInfo), toString(v_mode), toBoolean(v_use_include_path), v_context);
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 356 */
void c_SplFileInfo::t_setfileclass(CVarRef v_class_name //  = NAMVAR(s_sys_svs5d909898, "SplFileObject")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::setFileClass);
  x_hphp_splfileinfo_setfileclass(GET_THIS_TYPED(SplFileInfo), toString(v_class_name));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splfile.php line 372 */
void c_SplFileInfo::t_setinfoclass(CVarRef v_class_name //  = NAMVAR(s_sys_svs114a58e9, "SplFileInfo")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplFileInfo, SplFileInfo::setInfoClass);
  x_hphp_splfileinfo_setinfoclass(GET_THIS_TYPED(SplFileInfo), toString(v_class_name));
}
namespace hphp_impl_splitter {}
ObjectData *coo_SplFileObject() {
  return NEWOBJ(c_SplFileObject)();
}
ObjectData *coo_SplFileInfo() {
  return NEWOBJ(c_SplFileInfo)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
  (int64)&NAMVAR(s_sys_svi4d7e8e12, 6LL),
  (int64)&NAMVAR(s_sys_svic3578135, 8LL),
  (int64)&NAMVAR(s_sys_svib794f8ce, 1LL),
  (int64)&NAMVAR(s_sys_svi90d5f98c, 2LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x7D792BB7,0,0,13,65,-1,GET_PROPERTY_OFFSET(c_SplFileInfo, m_rsrc),&NAMSTR(s_sys_ss25b53cd5, "\000SplFileInfo\000rsrc") },

  {0x3563E232,1,1,0,100,3,0,&NAMSTR(s_sys_ss3563e232, "SKIP_EMPTY") },
  {0x0A6DEC13,0,2,0,100,3,0,&NAMSTR(s_sys_ss0a6dec13, "READ_CSV") },
  {0x24BDAC64,1,3,0,100,3,0,&NAMSTR(s_sys_ss24bdac64, "DROP_NEW_LINE") },
  {0x7D94431E,-3,4,0,100,3,0,&NAMSTR(s_sys_ss7d94431e, "READ_AHEAD") },

};
static const int cpt_hash_entries[] = {
  // SplFileInfo hash
  -1,-1,-1,-1,-1,-1,-1,0,
  // SplFileInfo lists
  0,-1,
  -1,
  -1,
  // SplFileObject hash
  -1,3,-1,2,1,0,-1,-1,
  // SplFileObject lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_SplFileInfo::os_prop_table = {
  7,0,-1,-1,-1,-1,10,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_SplFileObject::os_prop_table = {
  -1,-1,-1,-1,7,2,1,0,
  cpt_hash_entries+20,&c_SplFileInfo::os_prop_table,cpt_table_entries+1,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
