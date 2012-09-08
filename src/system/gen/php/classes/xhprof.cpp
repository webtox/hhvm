
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/xhprof.fws.h>
#include <php/classes/xhprof.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/xhprof.php line 6 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(XhprofFrame)
extern const InstanceOfInfo cw_XhprofFrame$$instanceof_table[] = {
  {0x33ED12FD,1,"XhprofFrame",&cw_XhprofFrame},
};
const int cw_XhprofFrame$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_XhprofFrame$$__destruct = { (void*)&c_XhprofFrame::i___destruct, (void*)&c_XhprofFrame::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XhprofFrame$$__construct = { (void*)&c_XhprofFrame::i___construct, (void*)&c_XhprofFrame::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_XhprofFrame::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_XhprofFrame::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_XhprofFrame::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_XhprofFrame::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("XhprofFrame::__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_XhprofFrame$$call_info_table[] = {
  { 0x229C615F, 0, 11, "__construct", &ci_XhprofFrame$$__construct },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_XhprofFrame$$__destruct },
};
extern const int cw_XhprofFrame$$call_info_index[] = {
  3,
  -1,-1,-1,0,
};
c_XhprofFrame *c_XhprofFrame::create(CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_name);
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_XhprofFrame$$call_info_table[];
extern const int cw_XhprofFrame$$call_info_index[];
extern const InstanceOfInfo cw_XhprofFrame$$instanceof_table[];
extern const int cw_XhprofFrame$$instanceof_index[];
const ObjectStaticCallbacks cw_XhprofFrame = {
  (ObjectData*(*)(ObjectData*))coo_XhprofFrame,
  cw_XhprofFrame$$call_info_table,cw_XhprofFrame$$call_info_index,
  cw_XhprofFrame$$instanceof_table,cw_XhprofFrame$$instanceof_index,
  &c_XhprofFrame::s_class_name,
  0,&ci_XhprofFrame$$__construct,0,0,0x0,
  &c_XhprofFrame::s_cls
};
/* SRC: classes/xhprof.php line 7 */
void c_XhprofFrame::t___construct(Variant v_name) {
  x_xhprof_frame_begin(toString(v_name));
}
namespace hphp_impl_splitter {}
/* SRC: classes/xhprof.php line 10 */
Variant c_XhprofFrame::t___destruct() {
  x_xhprof_frame_end();
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_XhprofFrame() {
  return NEWOBJ(c_XhprofFrame)();
}

///////////////////////////////////////////////////////////////////////////////
}
