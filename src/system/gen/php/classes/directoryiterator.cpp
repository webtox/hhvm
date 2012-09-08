
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/directoryiterator.fws.h>
#include <php/classes/directoryiterator.h>

// Dependencies
#include <php/classes/exception.h>
#include <php/classes/iterator.h>
#include <php/classes/splfile.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/directoryiterator.php line 122 */
const int64 q_RecursiveDirectoryIterator$$CURRENT_AS_SELF = 0LL;
const int64 q_RecursiveDirectoryIterator$$CURRENT_AS_FILEINFO = 16LL;
const int64 q_RecursiveDirectoryIterator$$CURRENT_AS_PATHNAME = 32LL;
const int64 q_RecursiveDirectoryIterator$$KEY_AS_PATHNAME = 0LL;
const int64 q_RecursiveDirectoryIterator$$KEY_AS_FILENAME = 256LL;
const int64 q_RecursiveDirectoryIterator$$NEW_CURRENT_AND_KEY = 272LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(RecursiveDirectoryIterator)
extern const InstanceOfInfo cw_RecursiveDirectoryIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x0AF036D3,0,"RecursiveIterator",(const ObjectStaticCallbacks*)2},
  {0x6145DC43,1,"SeekableIterator",(const ObjectStaticCallbacks*)2},
  {0x7E923FA7,1,"SplFileInfo",&cw_SplFileInfo},
  {0x431A6ED8,1,"RecursiveDirectoryIterator",&cw_RecursiveDirectoryIterator},
  {0x17E8A15E,0,"DirectoryIterator",&cw_DirectoryIterator},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_RecursiveDirectoryIterator$$instanceof_index[] = {
  15,
  -1,0,-1,1,-1,-1,-1,3,
  4,-1,-1,-1,-1,-1,5,-1,

};
extern const CallInfo ci_RecursiveDirectoryIterator$$haschildren = { (void*)&c_RecursiveDirectoryIterator::i_haschildren, (void*)&c_RecursiveDirectoryIterator::ifa_haschildren, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$seek = { (void*)&c_RecursiveDirectoryIterator::i_seek, (void*)&c_RecursiveDirectoryIterator::ifa_seek, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$getsubpathname = { (void*)&c_RecursiveDirectoryIterator::i_getsubpathname, (void*)&c_RecursiveDirectoryIterator::ifa_getsubpathname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$__construct = { (void*)&c_RecursiveDirectoryIterator::i___construct, (void*)&c_RecursiveDirectoryIterator::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$getchildren = { (void*)&c_RecursiveDirectoryIterator::i_getchildren, (void*)&c_RecursiveDirectoryIterator::ifa_getchildren, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$__tostring = { (void*)&c_RecursiveDirectoryIterator::i___tostring, (void*)&c_RecursiveDirectoryIterator::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$current = { (void*)&c_RecursiveDirectoryIterator::i_current, (void*)&c_RecursiveDirectoryIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$next = { (void*)&c_RecursiveDirectoryIterator::i_next, (void*)&c_RecursiveDirectoryIterator::ifa_next, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$getsubpath = { (void*)&c_RecursiveDirectoryIterator::i_getsubpath, (void*)&c_RecursiveDirectoryIterator::ifa_getsubpath, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$valid = { (void*)&c_RecursiveDirectoryIterator::i_valid, (void*)&c_RecursiveDirectoryIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$rewind = { (void*)&c_RecursiveDirectoryIterator::i_rewind, (void*)&c_RecursiveDirectoryIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_RecursiveDirectoryIterator$$key = { (void*)&c_RecursiveDirectoryIterator::i_key, (void*)&c_RecursiveDirectoryIterator::ifa_key, 0, 4, 0x0000000000000000LL};
Variant c_RecursiveDirectoryIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_RecursiveDirectoryIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_RecursiveDirectoryIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_RecursiveDirectoryIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_RecursiveDirectoryIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_RecursiveDirectoryIterator::i_seek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_seek);
}
Variant c_RecursiveDirectoryIterator::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_RecursiveDirectoryIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_RecursiveDirectoryIterator::i_haschildren(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_haschildren);
}
Variant c_RecursiveDirectoryIterator::i_getchildren(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getchildren);
}
Variant c_RecursiveDirectoryIterator::i_getsubpath(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getsubpath);
}
Variant c_RecursiveDirectoryIterator::i_getsubpathname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getsubpathname);
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("RecursiveDirectoryIterator::__construct", count, 1, 2, 2);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_seek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_seek, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("RecursiveDirectoryIterator::seek", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_seek(arg0), null);
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_haschildren(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_haschildren, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::hasChildren", 0, 1);
  return (self->t_haschildren());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_getchildren(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getchildren, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::getChildren", 0, 1);
  return (self->t_getchildren());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_getsubpath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getsubpath, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::getSubPath", 0, 1);
  return (self->t_getsubpath());
}
Variant NEVER_INLINE c_RecursiveDirectoryIterator::ifa_getsubpathname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getsubpathname, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::getSubPathname", 0, 1);
  return (self->t_getsubpathname());
}
extern const MethodCallInfoTable cw_RecursiveDirectoryIterator$$call_info_table[] = {
  { 0x54808C44, 1, 5, "valid", &ci_RecursiveDirectoryIterator$$valid },
  { 0x77054C67, 1, 4, "seek", &ci_RecursiveDirectoryIterator$$seek },
  { 0x0ED3A809, 1, 14, "getSubPathname", &ci_RecursiveDirectoryIterator$$getsubpathname },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_RecursiveDirectoryIterator$$rewind },
  { 0x28EC520F, 1, 11, "getChildren", &ci_RecursiveDirectoryIterator$$getchildren },
  { 0x024E8C51, 1, 3, "key", &ci_RecursiveDirectoryIterator$$key },
  { 0x14B34A13, 1, 10, "__toString", &ci_RecursiveDirectoryIterator$$__tostring },
  { 0x5A397C15, 1, 11, "hasChildren", &ci_RecursiveDirectoryIterator$$haschildren },
  { 0x3B8102B8, 1, 4, "next", &ci_RecursiveDirectoryIterator$$next },
  { 0x76B5E27B, 1, 10, "getSubPath", &ci_RecursiveDirectoryIterator$$getsubpath },
  { 0x046B21DC, 1, 7, "current", &ci_RecursiveDirectoryIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_RecursiveDirectoryIterator$$__construct },
};
extern const int cw_RecursiveDirectoryIterator$$call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,1,
  -1,2,3,-1,-1,-1,-1,4,
  -1,5,-1,6,-1,7,-1,-1,
  8,-1,-1,9,10,-1,-1,11,

};
c_RecursiveDirectoryIterator *c_RecursiveDirectoryIterator::create(CVarRef v_path, CVarRef v_flags //  = NAMVAR(s_sys_svi86af027e, 16LL) /* RecursiveDirectoryIterator::CURRENT_AS_FILEINFO */
) {
  CountableHelper h(this);
  init();
  t___construct(v_path, v_flags);
  return this;
}
extern const MethodCallInfoTable cw_RecursiveDirectoryIterator$$call_info_table[];
extern const int cw_RecursiveDirectoryIterator$$call_info_index[];
extern const InstanceOfInfo cw_RecursiveDirectoryIterator$$instanceof_table[];
extern const int cw_RecursiveDirectoryIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_RecursiveDirectoryIterator = {
  (ObjectData*(*)(ObjectData*))coo_RecursiveDirectoryIterator,
  cw_RecursiveDirectoryIterator$$call_info_table,cw_RecursiveDirectoryIterator$$call_info_index,
  cw_RecursiveDirectoryIterator$$instanceof_table,cw_RecursiveDirectoryIterator$$instanceof_index,
  &c_RecursiveDirectoryIterator::s_class_name,
  &c_RecursiveDirectoryIterator::os_prop_table,&ci_RecursiveDirectoryIterator$$__construct,0,&cw_DirectoryIterator,0x0,
  &c_RecursiveDirectoryIterator::s_cls
};
/* SRC: classes/directoryiterator.php line 132 */
void c_RecursiveDirectoryIterator::t___construct(Variant v_path, Variant v_flags //  = 16LL /* RecursiveDirectoryIterator::CURRENT_AS_FILEINFO */
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::__construct);
  if (!(x_hphp_recursivedirectoryiterator___construct(GET_THIS_TYPED(RecursiveDirectoryIterator), toString(v_path), toInt64(v_flags)))) {
    {
      {
        p_UnexpectedValueException tmp0 = coo_UnexpectedValueException();
        throw_exception(((c_UnexpectedValueException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ss70ea8ac1, "RecursiveDirectoryIterator::__construct("), toString(v_path), NAMSTR(s_sys_ss7b6412d4, "): failed to open dir"))), tmp0));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 140 */
Variant c_RecursiveDirectoryIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::current);
  return x_hphp_recursivedirectoryiterator_current(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 152 */
Variant c_RecursiveDirectoryIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::key);
  return x_hphp_recursivedirectoryiterator_key(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 164 */
void c_RecursiveDirectoryIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::next);
  x_hphp_recursivedirectoryiterator_next(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 176 */
void c_RecursiveDirectoryIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::rewind);
  x_hphp_recursivedirectoryiterator_rewind(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 180 */
void c_RecursiveDirectoryIterator::t_seek(CVarRef v_position) {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::seek);
  x_hphp_recursivedirectoryiterator_seek(GET_THIS_TYPED(RecursiveDirectoryIterator), toInt64(v_position));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 184 */
String c_RecursiveDirectoryIterator::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::__toString);
  return x_hphp_recursivedirectoryiterator___tostring(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 188 */
bool c_RecursiveDirectoryIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::valid);
  return x_hphp_recursivedirectoryiterator_valid(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 201 */
bool c_RecursiveDirectoryIterator::t_haschildren() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::hasChildren);
  return x_hphp_recursivedirectoryiterator_haschildren(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 214 */
Object c_RecursiveDirectoryIterator::t_getchildren() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::getChildren);
  return x_hphp_recursivedirectoryiterator_getchildren(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 228 */
String c_RecursiveDirectoryIterator::t_getsubpath() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::getSubPath);
  return x_hphp_recursivedirectoryiterator_getsubpath(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 242 */
String c_RecursiveDirectoryIterator::t_getsubpathname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::getSubPathname);
  return x_hphp_recursivedirectoryiterator_getsubpathname(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 11 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DirectoryIterator)
extern const InstanceOfInfo cw_DirectoryIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x6145DC43,1,"SeekableIterator",(const ObjectStaticCallbacks*)2},
  {0x7E923FA7,1,"SplFileInfo",&cw_SplFileInfo},
  {0x17E8A15E,0,"DirectoryIterator",&cw_DirectoryIterator},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_DirectoryIterator$$instanceof_index[] = {
  15,
  -1,0,-1,1,-1,-1,-1,2,
  -1,-1,-1,-1,-1,-1,3,-1,

};
extern const CallInfo ci_DirectoryIterator$$seek = { (void*)&c_DirectoryIterator::i_seek, (void*)&c_DirectoryIterator::ifa_seek, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$current = { (void*)&c_DirectoryIterator::i_current, (void*)&c_DirectoryIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$isdot = { (void*)&c_DirectoryIterator::i_isdot, (void*)&c_DirectoryIterator::ifa_isdot, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$__tostring = { (void*)&c_DirectoryIterator::i___tostring, (void*)&c_DirectoryIterator::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$key = { (void*)&c_DirectoryIterator::i_key, (void*)&c_DirectoryIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$valid = { (void*)&c_DirectoryIterator::i_valid, (void*)&c_DirectoryIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$__construct = { (void*)&c_DirectoryIterator::i___construct, (void*)&c_DirectoryIterator::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$rewind = { (void*)&c_DirectoryIterator::i_rewind, (void*)&c_DirectoryIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DirectoryIterator$$next = { (void*)&c_DirectoryIterator::i_next, (void*)&c_DirectoryIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_DirectoryIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DirectoryIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_DirectoryIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_DirectoryIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_DirectoryIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_DirectoryIterator::i_seek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_seek);
}
Variant c_DirectoryIterator::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_DirectoryIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_DirectoryIterator::i_isdot(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdot);
}
Variant NEVER_INLINE c_DirectoryIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("DirectoryIterator::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_seek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_seek, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("DirectoryIterator::seek", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_seek(arg0), null);
}
Variant NEVER_INLINE c_DirectoryIterator::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_DirectoryIterator::ifa_isdot(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdot, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::isDot", 0, 1);
  return (self->t_isdot());
}
extern const MethodCallInfoTable cw_DirectoryIterator$$call_info_table[] = {
  { 0x54808C44, 1, 5, "valid", &ci_DirectoryIterator$$valid },
  { 0x77054C67, 1, 4, "seek", &ci_DirectoryIterator$$seek },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_DirectoryIterator$$rewind },
  { 0x024E8C51, 1, 3, "key", &ci_DirectoryIterator$$key },
  { 0x14B34A13, 1, 10, "__toString", &ci_DirectoryIterator$$__tostring },
  { 0x378DA5F4, 1, 5, "isDot", &ci_DirectoryIterator$$isdot },
  { 0x3B8102B8, 1, 4, "next", &ci_DirectoryIterator$$next },
  { 0x046B21DC, 1, 7, "current", &ci_DirectoryIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_DirectoryIterator$$__construct },
};
extern const int cw_DirectoryIterator$$call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,1,
  -1,-1,2,-1,-1,-1,-1,-1,
  -1,3,-1,4,5,-1,-1,-1,
  6,-1,-1,-1,7,-1,-1,8,

};
c_DirectoryIterator *c_DirectoryIterator::create(CVarRef v_path) {
  CountableHelper h(this);
  init();
  t___construct(v_path);
  return this;
}
extern const MethodCallInfoTable cw_DirectoryIterator$$call_info_table[];
extern const int cw_DirectoryIterator$$call_info_index[];
extern const InstanceOfInfo cw_DirectoryIterator$$instanceof_table[];
extern const int cw_DirectoryIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_DirectoryIterator = {
  (ObjectData*(*)(ObjectData*))coo_DirectoryIterator,
  cw_DirectoryIterator$$call_info_table,cw_DirectoryIterator$$call_info_index,
  cw_DirectoryIterator$$instanceof_table,cw_DirectoryIterator$$instanceof_index,
  &c_DirectoryIterator::s_class_name,
  &c_SplFileInfo::os_prop_table,&ci_DirectoryIterator$$__construct,0,&cw_SplFileInfo,0x0,
  &c_DirectoryIterator::s_cls
};
/* SRC: classes/directoryiterator.php line 14 */
void c_DirectoryIterator::t___construct(Variant v_path) {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::__construct);
  if (!(x_hphp_directoryiterator___construct(GET_THIS_TYPED(DirectoryIterator), toString(v_path)))) {
    {
      {
        p_UnexpectedValueException tmp0 = coo_UnexpectedValueException();
        throw_exception(((c_UnexpectedValueException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ss5d233bb0, "DirectoryIterator::__construct("), toString(v_path), NAMSTR(s_sys_ss7b6412d4, "): failed to open dir"))), tmp0));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 29 */
Variant c_DirectoryIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::current);
  return x_hphp_directoryiterator_current(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 41 */
Variant c_DirectoryIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::key);
  return x_hphp_directoryiterator_key(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 53 */
void c_DirectoryIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::next);
  x_hphp_directoryiterator_next(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 65 */
void c_DirectoryIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::rewind);
  x_hphp_directoryiterator_rewind(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 79 */
void c_DirectoryIterator::t_seek(CVarRef v_position) {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::seek);
  x_hphp_directoryiterator_seek(GET_THIS_TYPED(DirectoryIterator), toInt64(v_position));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 83 */
String c_DirectoryIterator::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::__toString);
  return x_hphp_directoryiterator___tostring(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 96 */
bool c_DirectoryIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::valid);
  return x_hphp_directoryiterator_valid(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 109 */
bool c_DirectoryIterator::t_isdot() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::isDot);
  return x_hphp_directoryiterator_isdot(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
ObjectData *coo_RecursiveDirectoryIterator() {
  return NEWOBJ(c_RecursiveDirectoryIterator)();
}
ObjectData *coo_DirectoryIterator() {
  return NEWOBJ(c_DirectoryIterator)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_sys_svi6af020b2, 256LL),
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
  (int64)&NAMVAR(s_sys_svi71a5b5e7, 272LL),
  (int64)&NAMVAR(s_sys_svi86af027e, 16LL),
  (int64)&NAMVAR(s_sys_svif2a1fb10, 32LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x11ED8F50,2,0,0,100,3,0,&NAMSTR(s_sys_ss11ed8f50, "KEY_AS_FILENAME") },
  {0x3118FCF1,-1,1,0,100,3,0,&NAMSTR(s_sys_ss3118fcf1, "KEY_AS_PATHNAME") },
  {0x52157D84,0,2,0,100,3,0,&NAMSTR(s_sys_ss52157d84, "NEW_CURRENT_AND_KEY") },
  {0x277C8E85,1,1,0,100,3,0,&NAMSTR(s_sys_ss277c8e85, "CURRENT_AS_SELF") },
  {0x3D51E7F6,1,3,0,100,3,0,&NAMSTR(s_sys_ss3d51e7f6, "CURRENT_AS_FILEINFO") },
  {0x45121E5F,-4,4,0,100,3,0,&NAMSTR(s_sys_ss45121e5f, "CURRENT_AS_PATHNAME") },

};
static const int cpt_hash_entries[] = {
  // RecursiveDirectoryIterator hash
  5,-1,-1,-1,-1,-1,-1,-1,-1,4,3,2,-1,-1,1,0,
  // RecursiveDirectoryIterator lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_RecursiveDirectoryIterator::os_prop_table = {
  -1,-1,-1,-1,15,3,1,0,
  cpt_hash_entries+16,&c_SplFileInfo::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
