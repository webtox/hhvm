
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/reflection.fws.h>
#include <php/classes/reflection.h>

// Dependencies
#include <php/classes/exception.h>
#include <php/classes/stdclass.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/reflection.php line 277 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionFunctionAbstract)
extern const InstanceOfInfo cw_ReflectionFunctionAbstract$$instanceof_table[] = {
  {0x35281082,1,"ReflectionFunctionAbstract",&cw_ReflectionFunctionAbstract},
};
const int cw_ReflectionFunctionAbstract$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_ReflectionFunctionAbstract$$getname = { (void*)&c_ReflectionFunctionAbstract::i_getname, (void*)&c_ReflectionFunctionAbstract::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getstaticvariables = { (void*)&c_ReflectionFunctionAbstract::i_getstaticvariables, (void*)&c_ReflectionFunctionAbstract::ifa_getstaticvariables, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$isuserdefined = { (void*)&c_ReflectionFunctionAbstract::i_isuserdefined, (void*)&c_ReflectionFunctionAbstract::ifa_isuserdefined, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getclosure = { (void*)&c_ReflectionFunctionAbstract::i_getclosure, (void*)&c_ReflectionFunctionAbstract::ifa_getclosure, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getfilename = { (void*)&c_ReflectionFunctionAbstract::i_getfilename, (void*)&c_ReflectionFunctionAbstract::ifa_getfilename, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$isinternal = { (void*)&c_ReflectionFunctionAbstract::i_isinternal, (void*)&c_ReflectionFunctionAbstract::ifa_isinternal, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getstartline = { (void*)&c_ReflectionFunctionAbstract::i_getstartline, (void*)&c_ReflectionFunctionAbstract::ifa_getstartline, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getparameters = { (void*)&c_ReflectionFunctionAbstract::i_getparameters, (void*)&c_ReflectionFunctionAbstract::ifa_getparameters, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getendline = { (void*)&c_ReflectionFunctionAbstract::i_getendline, (void*)&c_ReflectionFunctionAbstract::ifa_getendline, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$returnsreference = { (void*)&c_ReflectionFunctionAbstract::i_returnsreference, (void*)&c_ReflectionFunctionAbstract::ifa_returnsreference, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getnumberofrequiredparameters = { (void*)&c_ReflectionFunctionAbstract::i_getnumberofrequiredparameters, (void*)&c_ReflectionFunctionAbstract::ifa_getnumberofrequiredparameters, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getnumberofparameters = { (void*)&c_ReflectionFunctionAbstract::i_getnumberofparameters, (void*)&c_ReflectionFunctionAbstract::ifa_getnumberofparameters, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunctionAbstract$$getdoccomment = { (void*)&c_ReflectionFunctionAbstract::i_getdoccomment, (void*)&c_ReflectionFunctionAbstract::ifa_getdoccomment, 0, 4, 0x0000000000000000LL};
Variant c_ReflectionFunctionAbstract::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_ReflectionFunctionAbstract::i_isinternal(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isinternal);
}
Variant c_ReflectionFunctionAbstract::i_getclosure(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getclosure);
}
Variant c_ReflectionFunctionAbstract::i_isuserdefined(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isuserdefined);
}
Variant c_ReflectionFunctionAbstract::i_getfilename(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfilename);
}
Variant c_ReflectionFunctionAbstract::i_getstartline(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstartline);
}
Variant c_ReflectionFunctionAbstract::i_getendline(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getendline);
}
Variant c_ReflectionFunctionAbstract::i_getdoccomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdoccomment);
}
Variant c_ReflectionFunctionAbstract::i_getstaticvariables(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstaticvariables);
}
Variant c_ReflectionFunctionAbstract::i_returnsreference(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_returnsreference);
}
Variant c_ReflectionFunctionAbstract::i_getparameters(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getparameters);
}
Variant c_ReflectionFunctionAbstract::i_getnumberofparameters(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getnumberofparameters);
}
Variant c_ReflectionFunctionAbstract::i_getnumberofrequiredparameters(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getnumberofrequiredparameters);
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getName", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_isinternal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isinternal, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::isInternal", 0, 1);
  return (self->t_isinternal());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getclosure(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getclosure, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getClosure", 0, 1);
  return (self->t_getclosure());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_isuserdefined(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isuserdefined, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::isUserDefined", 0, 1);
  return (self->t_isuserdefined());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getfilename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfilename, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getFileName", 0, 1);
  return (self->t_getfilename());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getstartline(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstartline, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getStartLine", 0, 1);
  return (self->t_getstartline());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getendline(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getendline, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getEndLine", 0, 1);
  return (self->t_getendline());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getdoccomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdoccomment, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getDocComment", 0, 1);
  return (self->t_getdoccomment());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getstaticvariables(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstaticvariables, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getStaticVariables", 0, 1);
  return (self->t_getstaticvariables());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_returnsreference(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_returnsreference, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::returnsReference", 0, 1);
  return (self->t_returnsreference());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getparameters(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getparameters, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getParameters", 0, 1);
  return (self->t_getparameters());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getnumberofparameters(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getnumberofparameters, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getNumberOfParameters", 0, 1);
  return (self->t_getnumberofparameters());
}
Variant NEVER_INLINE c_ReflectionFunctionAbstract::ifa_getnumberofrequiredparameters(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getnumberofrequiredparameters, coo_ReflectionFunctionAbstract);
  }
  c_ReflectionFunctionAbstract *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunctionAbstract*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunctionAbstract::getNumberOfRequiredParameters", 0, 1);
  return (self->t_getnumberofrequiredparameters());
}
extern const MethodCallInfoTable cw_ReflectionFunctionAbstract$$call_info_table[] = {
  { 0x49A03560, 1, 21, "getNumberOfParameters", &ci_ReflectionFunctionAbstract$$getnumberofparameters },
  { 0x5BFA6221, 1, 29, "getNumberOfRequiredParameters", &ci_ReflectionFunctionAbstract$$getnumberofrequiredparameters },
  { 0x3DB05EE2, 1, 10, "getClosure", &ci_ReflectionFunctionAbstract$$getclosure },
  { 0x2E7D4164, 0, 13, "isUserDefined", &ci_ReflectionFunctionAbstract$$isuserdefined },
  { 0x1CB1CB04, 1, 12, "getStartLine", &ci_ReflectionFunctionAbstract$$getstartline },
  { 0x4C198965, 1, 7, "getName", &ci_ReflectionFunctionAbstract$$getname },
  { 0x4A3329A8, 0, 18, "getStaticVariables", &ci_ReflectionFunctionAbstract$$getstaticvariables },
  { 0x276D2668, 1, 16, "returnsReference", &ci_ReflectionFunctionAbstract$$returnsreference },
  { 0x6D39474D, 0, 11, "getFileName", &ci_ReflectionFunctionAbstract$$getfilename },
  { 0x32C2A32D, 1, 13, "getParameters", &ci_ReflectionFunctionAbstract$$getparameters },
  { 0x035C64CF, 1, 10, "isInternal", &ci_ReflectionFunctionAbstract$$isinternal },
  { 0x07BC4570, 1, 10, "getEndLine", &ci_ReflectionFunctionAbstract$$getendline },
  { 0x5A56ADF8, 1, 13, "getDocComment", &ci_ReflectionFunctionAbstract$$getdoccomment },
};
extern const int cw_ReflectionFunctionAbstract$$call_info_index[] = {
  31,
  0,1,2,-1,3,5,-1,-1,
  6,-1,-1,-1,-1,8,-1,10,
  11,-1,-1,-1,-1,-1,-1,-1,
  12,-1,-1,-1,-1,-1,-1,-1,

};
extern const MethodCallInfoTable cw_ReflectionFunctionAbstract$$call_info_table[];
extern const int cw_ReflectionFunctionAbstract$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionFunctionAbstract$$instanceof_table[];
extern const int cw_ReflectionFunctionAbstract$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionFunctionAbstract = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionFunctionAbstract,
  cw_ReflectionFunctionAbstract$$call_info_table,cw_ReflectionFunctionAbstract$$call_info_index,
  cw_ReflectionFunctionAbstract$$instanceof_table,cw_ReflectionFunctionAbstract$$instanceof_index,
  &c_ReflectionFunctionAbstract::s_class_name,
  &c_ReflectionFunctionAbstract::os_prop_table,0,0,0,0x0,
  &c_ReflectionFunctionAbstract::s_cls
};
/* SRC: classes/reflection.php line 290 */
Variant c_ReflectionFunctionAbstract::t_getname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getName);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 305 */
bool c_ReflectionFunctionAbstract::t_isinternal() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::isInternal);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss1332a8ac, "internal"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 309 */
Variant c_ReflectionFunctionAbstract::t_getclosure() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getClosure);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss4cd61020, "closure"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 324 */
bool c_ReflectionFunctionAbstract::t_isuserdefined() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::isUserDefined);
  ObjectData *obj_tmp UNUSED;
  {
    return !(isset(m_info, NAMSTR(s_sys_ss1332a8ac, "internal"), true));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 338 */
Variant c_ReflectionFunctionAbstract::t_getfilename() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getFileName);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss0ce7db5b, "file"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 352 */
Variant c_ReflectionFunctionAbstract::t_getstartline() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getStartLine);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss54c67725, "line1"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 367 */
Variant c_ReflectionFunctionAbstract::t_getendline() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getEndLine);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss3efe32a8, "line2"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 381 */
Variant c_ReflectionFunctionAbstract::t_getdoccomment() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getDocComment);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss1cfa17a6, "doc"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 396 */
Variant c_ReflectionFunctionAbstract::t_getstaticvariables() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getStaticVariables);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss5be7a94a, "static_variables"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 411 */
bool c_ReflectionFunctionAbstract::t_returnsreference() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::returnsReference);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss134fd5fa, "ref"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 426 */
Array c_ReflectionFunctionAbstract::t_getparameters() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getParameters);
  Array v_ret;
  Primitive v_name = 0;
  Variant v_info;
  p_ReflectionParameter v_param;

  ObjectData *obj_tmp UNUSED;
  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = m_info.rvalAt(NAMSTR(s_sys_ss1f20ac62, "params"), AccessFlags::Error_Key);
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_info);
      v_name.assignVal(iter3.first());
      {
        {
          const p_ReflectionParameter &tmp0((p_ReflectionParameter(((c_ReflectionParameter*)coo_ReflectionParameter())->create(null, null))));
          v_param = tmp0;
        }
        {
          (obj_tmp = v_param.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionParameter*)obj_tmp)->m_info)).assignVal(v_info);
        }
        v_ret.append((VarNR(v_param)));
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 448 */
int64 c_ReflectionFunctionAbstract::t_getnumberofparameters() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getNumberOfParameters);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss1f20ac62, "params"), AccessFlags::Error_Key)));
    return x_count(tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 464 */
int64 c_ReflectionFunctionAbstract::t_getnumberofrequiredparameters() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunctionAbstract, ReflectionFunctionAbstract::getNumberOfRequiredParameters);
  int64 v_count = 0;
  Array v_params;
  Primitive v_name = 0;
  Variant v_param;

  v_count = 0LL;
  {
    const Array &tmp0((t_getparameters()));
    v_params = tmp0;
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_params.begin(s_class_name); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_param);
      v_name.assignVal(iter3.first());
      {
        {
          bool tmp0;
          {
            MethodCallPackage mcp1;
            CVarRef obj1 = v_param;
            mcp1.methodCall((obj1), NAMSTR(s_sys_ss6d9ef7e5, "isOptional"), 0x3AB22735);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
          }
          if (tmp0) {
            {
              break;
            }
          }
        }
        v_count++;
      }
    }
  }
  return v_count;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 18 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionException)
extern const InstanceOfInfo cw_ReflectionException$$instanceof_table[] = {
  {0x5DE95538,0,"ReflectionException",&cw_ReflectionException},
  {0x00B66A94,1,"Exception",&cw_Exception},
};
const int cw_ReflectionException$$instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_ReflectionException$$instanceof_table[];
extern const int cw_ReflectionException$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionException = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionException,
  0,0,
  cw_ReflectionException$$instanceof_table,cw_ReflectionException$$instanceof_index,
  &c_ReflectionException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_Exception,0x0,
  &c_ReflectionException::s_cls
};
/* SRC: classes/reflection.php line 1403 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionObject)
extern const InstanceOfInfo cw_ReflectionObject$$instanceof_table[] = {
  {0x1254DD7A,1,"ReflectionObject",&cw_ReflectionObject},
  {0x6AE2E71D,0,"ReflectionClass",&cw_ReflectionClass},
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
};
const int cw_ReflectionObject$$instanceof_index[] = {
  7,
  -1,-1,0,-1,-1,1,-1,-1,

};
extern const CallInfo ci_ReflectionObject$$export = { (void*)&c_ReflectionObject::i_export, (void*)&c_ReflectionObject::ifa_export, 2, 12, 0x0000000000000000LL};
Variant c_ReflectionObject::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant NEVER_INLINE c_ReflectionObject::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ReflectionObject::export", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (c_ReflectionObject::t_export(arg0));
  CVarRef arg1(a1);
  return (c_ReflectionObject::t_export(arg0, arg1));
}
extern const MethodCallInfoTable cw_ReflectionObject$$call_info_table[] = {
  { 0x498E70E8, 1, 6, "export", &ci_ReflectionObject$$export },
};
extern const int cw_ReflectionObject$$call_info_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_ReflectionClass$$__construct;
extern const MethodCallInfoTable cw_ReflectionObject$$call_info_table[];
extern const int cw_ReflectionObject$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionObject$$instanceof_table[];
extern const int cw_ReflectionObject$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionObject = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionObject,
  cw_ReflectionObject$$call_info_table,cw_ReflectionObject$$call_info_index,
  cw_ReflectionObject$$instanceof_table,cw_ReflectionObject$$instanceof_index,
  &c_ReflectionObject::s_class_name,
  &c_ReflectionClass::os_prop_table,&ci_ReflectionClass$$__construct,0,&cw_ReflectionClass,0x0,
  &c_ReflectionObject::s_cls
};
/* SRC: classes/reflection.php line 1420 */
Variant c_ReflectionObject::t_export(Variant v_obj, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionObject, ReflectionObject::export);
  String v_str;

  {
    p_ReflectionObject tmp0 = coo_ReflectionObject();
    ((c_ReflectionObject*)tmp0.get()->create(v_obj));
    v_obj = tmp0;
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1694 */
const int64 q_ReflectionMethod$$IS_STATIC = 1LL;
const int64 q_ReflectionMethod$$IS_PUBLIC = 256LL;
const int64 q_ReflectionMethod$$IS_PROTECTED = 512LL;
const int64 q_ReflectionMethod$$IS_PRIVATE = 1024LL;
const int64 q_ReflectionMethod$$IS_ABSTRACT = 2LL;
const int64 q_ReflectionMethod$$IS_FINAL = 4LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionMethod)
extern const InstanceOfInfo cw_ReflectionMethod$$instanceof_table[] = {
  {0x728E44B0,1,"ReflectionMethod",&cw_ReflectionMethod},
  {0x35281082,1,"ReflectionFunctionAbstract",&cw_ReflectionFunctionAbstract},
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
};
const int cw_ReflectionMethod$$instanceof_index[] = {
  7,
  0,-1,1,-1,-1,2,-1,-1,

};
extern const CallInfo ci_ReflectionMethod$$getdeclaringclass = { (void*)&c_ReflectionMethod::i_getdeclaringclass, (void*)&c_ReflectionMethod::ifa_getdeclaringclass, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$getattribute = { (void*)&c_ReflectionMethod::i_getattribute, (void*)&c_ReflectionMethod::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$getmodifiers = { (void*)&c_ReflectionMethod::i_getmodifiers, (void*)&c_ReflectionMethod::ifa_getmodifiers, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$getattributes = { (void*)&c_ReflectionMethod::i_getattributes, (void*)&c_ReflectionMethod::ifa_getattributes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isabstract = { (void*)&c_ReflectionMethod::i_isabstract, (void*)&c_ReflectionMethod::ifa_isabstract, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isprotected = { (void*)&c_ReflectionMethod::i_isprotected, (void*)&c_ReflectionMethod::ifa_isprotected, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$getclosure = { (void*)&c_ReflectionMethod::i_getclosure, (void*)&c_ReflectionMethod::ifa_getclosure, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$ispublic = { (void*)&c_ReflectionMethod::i_ispublic, (void*)&c_ReflectionMethod::ifa_ispublic, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isprivate = { (void*)&c_ReflectionMethod::i_isprivate, (void*)&c_ReflectionMethod::ifa_isprivate, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$export = { (void*)&c_ReflectionMethod::i_export, (void*)&c_ReflectionMethod::ifa_export, 3, 12, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$__construct = { (void*)&c_ReflectionMethod::i___construct, (void*)&c_ReflectionMethod::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isdestructor = { (void*)&c_ReflectionMethod::i_isdestructor, (void*)&c_ReflectionMethod::ifa_isdestructor, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isconstructor = { (void*)&c_ReflectionMethod::i_isconstructor, (void*)&c_ReflectionMethod::ifa_isconstructor, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$__tostring = { (void*)&c_ReflectionMethod::i___tostring, (void*)&c_ReflectionMethod::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$invoke = { (void*)&c_ReflectionMethod::i_invoke, (void*)&c_ReflectionMethod::ifa_invoke, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isfinal = { (void*)&c_ReflectionMethod::i_isfinal, (void*)&c_ReflectionMethod::ifa_isfinal, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$getattributerecursive = { (void*)&c_ReflectionMethod::i_getattributerecursive, (void*)&c_ReflectionMethod::ifa_getattributerecursive, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$getattributesrecursive = { (void*)&c_ReflectionMethod::i_getattributesrecursive, (void*)&c_ReflectionMethod::ifa_getattributesrecursive, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$isstatic = { (void*)&c_ReflectionMethod::i_isstatic, (void*)&c_ReflectionMethod::ifa_isstatic, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionMethod$$invokeargs = { (void*)&c_ReflectionMethod::i_invokeargs, (void*)&c_ReflectionMethod::ifa_invokeargs, 2, 4, 0x0000000000000000LL};
Variant c_ReflectionMethod::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ReflectionMethod::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_ReflectionMethod::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant c_ReflectionMethod::i_invoke(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_invoke, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("ReflectionMethod::invoke", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_invoke(count, arg0, p));
  }
}
Variant c_ReflectionMethod::i_invokeargs(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_invokeargs);
}
Variant c_ReflectionMethod::i_isfinal(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isfinal);
}
Variant c_ReflectionMethod::i_isabstract(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isabstract);
}
Variant c_ReflectionMethod::i_ispublic(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_ispublic);
}
Variant c_ReflectionMethod::i_isprivate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isprivate);
}
Variant c_ReflectionMethod::i_isprotected(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isprotected);
}
Variant c_ReflectionMethod::i_isstatic(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isstatic);
}
Variant c_ReflectionMethod::i_isconstructor(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isconstructor);
}
Variant c_ReflectionMethod::i_isdestructor(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdestructor);
}
Variant c_ReflectionMethod::i_getmodifiers(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmodifiers);
}
Variant c_ReflectionMethod::i_getclosure(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getclosure);
}
Variant c_ReflectionMethod::i_getdeclaringclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdeclaringclass);
}
Variant c_ReflectionMethod::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_ReflectionMethod::i_getattributes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributes);
}
Variant c_ReflectionMethod::i_getattributerecursive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributerecursive);
}
Variant c_ReflectionMethod::i_getattributesrecursive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributesrecursive);
}
Variant NEVER_INLINE c_ReflectionMethod::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ReflectionMethod::__construct", count, 1, 2, 2);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_ReflectionMethod::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("ReflectionMethod::export", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (c_ReflectionMethod::t_export(arg0, arg1));
  CVarRef arg2(a2);
  return (c_ReflectionMethod::t_export(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_invoke(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_invoke, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("ReflectionMethod::invoke", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_invoke(count, arg0, p));
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_invokeargs(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_invokeargs, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ReflectionMethod::invokeArgs", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_invokeargs(arg0, arg1));
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isfinal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isfinal, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isFinal", 0, 1);
  return (self->t_isfinal());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isabstract(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isabstract, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isAbstract", 0, 1);
  return (self->t_isabstract());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_ispublic(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ispublic, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isPublic", 0, 1);
  return (self->t_ispublic());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isprivate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isprivate, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isPrivate", 0, 1);
  return (self->t_isprivate());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isprotected(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isprotected, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isProtected", 0, 1);
  return (self->t_isprotected());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isstatic(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isstatic, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isStatic", 0, 1);
  return (self->t_isstatic());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isconstructor(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isconstructor, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isConstructor", 0, 1);
  return (self->t_isconstructor());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_isdestructor(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdestructor, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::isDestructor", 0, 1);
  return (self->t_isdestructor());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getmodifiers(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmodifiers, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::getModifiers", 0, 1);
  return (self->t_getmodifiers());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getclosure(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getclosure, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::getClosure", 0, 1);
  return (self->t_getclosure());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getdeclaringclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdeclaringclass, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::getDeclaringClass", 0, 1);
  return (self->t_getdeclaringclass());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionMethod::getAttribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getattributes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributes, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::getAttributes", 0, 1);
  return (self->t_getattributes());
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getattributerecursive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributerecursive, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionMethod::getAttributeRecursive", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattributerecursive(arg0));
}
Variant NEVER_INLINE c_ReflectionMethod::ifa_getattributesrecursive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributesrecursive, coo_ReflectionMethod);
  }
  c_ReflectionMethod *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionMethod*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionMethod::getAttributesRecursive", 0, 1);
  return (self->t_getattributesrecursive());
}
extern const MethodCallInfoTable cw_ReflectionMethod$$call_info_table[] = {
  { 0x2DE2FF41, 1, 21, "getAttributeRecursive", &ci_ReflectionMethod$$getattributerecursive },
  { 0x76199942, 1, 6, "invoke", &ci_ReflectionMethod$$invoke },
  { 0x723103C4, 1, 10, "invokeArgs", &ci_ReflectionMethod$$invokeargs },
  { 0x6327F607, 1, 12, "isDestructor", &ci_ReflectionMethod$$isdestructor },
  { 0x14B34A13, 1, 10, "__toString", &ci_ReflectionMethod$$__tostring },
  { 0x491D6014, 1, 12, "getModifiers", &ci_ReflectionMethod$$getmodifiers },
  { 0x68CC0B19, 1, 8, "isStatic", &ci_ReflectionMethod$$isstatic },
  { 0x229C615F, 1, 11, "__construct", &ci_ReflectionMethod$$__construct },
  { 0x3DB05EE2, 1, 10, "getClosure", &ci_ReflectionMethod$$getclosure },
  { 0x559D6063, 1, 17, "getDeclaringClass", &ci_ReflectionMethod$$getdeclaringclass },
  { 0x498E70E8, 0, 6, "export", &ci_ReflectionMethod$$export },
  { 0x6612FC28, 1, 12, "getAttribute", &ci_ReflectionMethod$$getattribute },
  { 0x10477CEA, 1, 11, "isProtected", &ci_ReflectionMethod$$isprotected },
  { 0x43D795AE, 1, 7, "isFinal", &ci_ReflectionMethod$$isfinal },
  { 0x5E2F636F, 1, 9, "isPrivate", &ci_ReflectionMethod$$isprivate },
  { 0x4DAC1376, 1, 13, "getAttributes", &ci_ReflectionMethod$$getattributes },
  { 0x5A32FDB7, 1, 10, "isAbstract", &ci_ReflectionMethod$$isabstract },
  { 0x5C5CAC7A, 1, 13, "isConstructor", &ci_ReflectionMethod$$isconstructor },
  { 0x58723B7C, 1, 8, "isPublic", &ci_ReflectionMethod$$ispublic },
  { 0x7330583D, 1, 22, "getAttributesRecursive", &ci_ReflectionMethod$$getattributesrecursive },
};
extern const int cw_ReflectionMethod$$call_info_index[] = {
  63,
  -1,0,1,-1,2,-1,-1,3,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,4,5,-1,-1,-1,
  -1,6,-1,-1,-1,-1,-1,7,
  -1,-1,8,9,-1,-1,-1,-1,
  10,-1,12,-1,-1,-1,13,14,
  -1,-1,-1,-1,-1,-1,15,16,
  -1,-1,17,-1,18,19,-1,-1,

};
c_ReflectionMethod *c_ReflectionMethod::create(CVarRef v_cls, CVarRef v_name //  = NAMVAR(s_sys_svs00000000, "")
) {
  CountableHelper h(this);
  init();
  t___construct(v_cls, v_name);
  return this;
}
extern const MethodCallInfoTable cw_ReflectionMethod$$call_info_table[];
extern const int cw_ReflectionMethod$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionMethod$$instanceof_table[];
extern const int cw_ReflectionMethod$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionMethod = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionMethod,
  cw_ReflectionMethod$$call_info_table,cw_ReflectionMethod$$call_info_index,
  cw_ReflectionMethod$$instanceof_table,cw_ReflectionMethod$$instanceof_index,
  &c_ReflectionMethod::s_class_name,
  &c_ReflectionMethod::os_prop_table,&ci_ReflectionMethod$$__construct,0,&cw_ReflectionFunctionAbstract,0x0,
  &c_ReflectionMethod::s_cls
};
/* SRC: classes/reflection.php line 1706 */
void c_ReflectionMethod::t___construct(Variant v_cls, Variant v_name //  = NAMSTR(s_sys_ss00000000, "")
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::__construct);
  Variant v_arr;
  Array v_method;

  ObjectData *obj_tmp UNUSED;
  if ((!(toBoolean(v_name)) && x_is_string(v_cls))) {
    {
      {
        const Variant &tmp0((x_explode(NAMSTR(s_sys_ss019481f3, "::"), toString(v_cls))));
        v_arr.assignVal(tmp0);
      }
      {
        bool tmp0;
        {
          int64 tmp1((x_count(v_arr)));
          tmp0 = (equal(tmp1, 2LL));
        }
        if (tmp0) {
          {
            {
              const Variant &tmp0((v_arr.rvalAt(0LL, AccessFlags::Error)));
              v_cls.assignVal(tmp0);
            }
            {
              const Variant &tmp0((v_arr.rvalAt(1LL, AccessFlags::Error)));
              v_name.assignVal(tmp0);
            }
          }
        }
      }
    }
  }
  if ((toBoolean(v_cls) && toBoolean(v_name))) {
    {
      {
        const Array &tmp0((x_hphp_get_method_info(v_cls, v_name)));
        v_method = tmp0;
      }
      if (!(toBoolean(v_method))) {
        {
          {
            p_ReflectionException tmp0 = coo_ReflectionException();
            throw_exception(((c_ReflectionException*)tmp0.get()->create(concat5(NAMSTR(s_sys_ss5c6e02c2, "Method "), toString(v_cls), NAMSTR(s_sys_ss019481f3, "::"), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
          }
        }
      }
      m_info = v_method;
      {
        const Variant &tmp0((v_method.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key)));
        m_name.assignVal(tmp0);
      }
      {
        const Variant &tmp0((v_method.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key)));
        m_class.assignVal(tmp0);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1726 */
String c_ReflectionMethod::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::__toString);
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1748 */
Variant c_ReflectionMethod::t_export(Variant v_cls, CVarRef v_name, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::export);
  Variant v_obj;
  String v_str;

  if (!(x_is_object(v_cls))) {
    {
      {
        p_ReflectionClass tmp0 = coo_ReflectionClass();
        ((c_ReflectionClass*)tmp0.get()->create(v_cls));
        v_cls = tmp0;
      }
    }
  }
  else {
    {
      {
        p_ReflectionClass tmp0 = coo_ReflectionClass();
        const Variant &tmp1((x_get_class(v_cls)));
        ((c_ReflectionClass*)tmp0.get()->create(tmp1));
        v_cls = tmp0;
      }
    }
  }
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = v_cls;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss4dbb2d67, "getMethod"), 0x53A3B5B6);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_name)));
    v_obj.assignVal(tmp1);
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1773 */
Variant c_ReflectionMethod::t_invoke(int num_args, CVarRef v_obj, Array args /* = Array() */) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::invoke);
  Variant v_args;

  ObjectData *obj_tmp UNUSED;
  {
    const Array &tmp0((func_get_args(num_args, Array(ArrayInit(1, ArrayInit::vectorInit).set(v_obj).create()),args)));
    v_args = tmp0;
  }
  x_array_shift(ref(v_args));
  {
    Variant tmp0((v_obj));
    const String &tmp1((toString(m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
    const String &tmp2((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
    return x_hphp_invoke_method(tmp0, tmp1, tmp2, toArray(v_args));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1794 */
Variant c_ReflectionMethod::t_invokeargs(CVarRef v_obj, CVarRef v_args) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::invokeArgs);
  ObjectData *obj_tmp UNUSED;
  {
    Variant tmp0((v_obj));
    const String &tmp1((toString(m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
    const String &tmp2((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
    const Array &tmp3((toArray(x_array_values(v_args))));
    return x_hphp_invoke_method(tmp0, tmp1, tmp2, tmp3);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1807 */
bool c_ReflectionMethod::t_isfinal() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isFinal);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss2145036e, "final"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1820 */
bool c_ReflectionMethod::t_isabstract() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isAbstract);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss12c8a8a6, "abstract"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1832 */
bool c_ReflectionMethod::t_ispublic() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isPublic);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss750cda3b, "access"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss4ce85288, "public"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1845 */
bool c_ReflectionMethod::t_isprivate() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isPrivate);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss750cda3b, "access"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss6781f7da, "private"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1858 */
bool c_ReflectionMethod::t_isprotected() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isProtected);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss750cda3b, "access"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss1fb56979, "protected"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1870 */
bool c_ReflectionMethod::t_isstatic() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isStatic);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss708d205d, "static"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1883 */
bool c_ReflectionMethod::t_isconstructor() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isConstructor);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss6fecb9dd, "constructor"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1896 */
bool c_ReflectionMethod::t_isdestructor() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::isDestructor);
  {
    const Variant &tmp0((t_getname()));
    return equal(tmp0, NAMSTR(s_sys_ss25a7f4f9, "__destruct"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1918 */
Variant c_ReflectionMethod::t_getmodifiers() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getModifiers);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss1f244c80, "modifiers"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1922 */
Variant c_ReflectionMethod::t_getclosure() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getClosure);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss4cd61020, "closure"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1936 */
Variant c_ReflectionMethod::t_getdeclaringclass() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getDeclaringClass);
  ObjectData *obj_tmp UNUSED;
  if (empty(m_info, NAMSTR(s_sys_ss482dbd12, "class"), true)) {
    {
      return null;
    }
  }
  {
    p_ReflectionClass tmp0 = coo_ReflectionClass();
    const Variant &tmp1((m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key)));
    return ((c_ReflectionClass*)tmp0.get()->create(tmp1), tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1943 */
Variant c_ReflectionMethod::t_getattribute(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getAttribute);
  Variant v_attrs;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key)));
    v_attrs.assignVal(tmp0);
  }
  {
    return (isset(v_attrs, v_name) ? ((Variant)(v_attrs.rvalAt(v_name, AccessFlags::Error))) : ((Variant)(null)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1948 */
Variant c_ReflectionMethod::t_getattributes() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getAttributes);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1952 */
Variant c_ReflectionMethod::t_getattributerecursive(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getAttributeRecursive);
  Variant v_attrs;
  Variant v_p;
  p_ReflectionMethod v_rm;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key)));
    v_attrs.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_attrs, v_name));
    }
    if (tmp0) {
      {
        return v_attrs.rvalAt(v_name, AccessFlags::Error);
      }
    }
  }
  {
    const Variant &tmp0((x_get_parent_class(m_class)));
    v_p.assignVal(tmp0);
  }
  if (same(v_p, false)) {
    {
      return null;
    }
  }
  {
    p_ReflectionMethod tmp0 = coo_ReflectionMethod();
    ((c_ReflectionMethod*)tmp0.get()->create(v_p, m_name));
    v_rm = tmp0;
  }
  if (v_rm->t_isprivate()) {
    {
      return null;
    }
  }
  return v_rm->t_getattributerecursive(v_name);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1968 */
Variant c_ReflectionMethod::t_getattributesrecursive() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionMethod, ReflectionMethod::getAttributesRecursive);
  Variant v_attrs;
  Variant v_p;
  p_ReflectionMethod v_rm;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key)));
    v_attrs.assignVal(tmp0);
  }
  {
    const Variant &tmp0((x_get_parent_class(m_class)));
    v_p.assignVal(tmp0);
  }
  if (!same(v_p, false)) {
    {
      {
        p_ReflectionMethod tmp0 = coo_ReflectionMethod();
        ((c_ReflectionMethod*)tmp0.get()->create(v_p, m_name));
        v_rm = tmp0;
      }
      if (!(v_rm->t_isprivate())) {
        {
          {
            const Variant &tmp0((v_rm->t_getattributesrecursive()));
            v_attrs += tmp0;
          }
        }
      }
    }
  }
  return v_attrs;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1441 */
const int64 q_ReflectionProperty$$IS_STATIC = 1LL;
const int64 q_ReflectionProperty$$IS_PUBLIC = 256LL;
const int64 q_ReflectionProperty$$IS_PROTECTED = 512LL;
const int64 q_ReflectionProperty$$IS_PRIVATE = 1024LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionProperty)
extern const InstanceOfInfo cw_ReflectionProperty$$instanceof_table[] = {
  {0x3DB659E4,1,"ReflectionProperty",&cw_ReflectionProperty},
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
};
const int cw_ReflectionProperty$$instanceof_index[] = {
  3,
  0,1,-1,-1,
};
extern const CallInfo ci_ReflectionProperty$$getdeclaringclass = { (void*)&c_ReflectionProperty::i_getdeclaringclass, (void*)&c_ReflectionProperty::ifa_getdeclaringclass, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$getmodifiers = { (void*)&c_ReflectionProperty::i_getmodifiers, (void*)&c_ReflectionProperty::ifa_getmodifiers, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$getname = { (void*)&c_ReflectionProperty::i_getname, (void*)&c_ReflectionProperty::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$setaccessible = { (void*)&c_ReflectionProperty::i_setaccessible, (void*)&c_ReflectionProperty::ifa_setaccessible, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$isprotected = { (void*)&c_ReflectionProperty::i_isprotected, (void*)&c_ReflectionProperty::ifa_isprotected, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$setvalue = { (void*)&c_ReflectionProperty::i_setvalue, (void*)&c_ReflectionProperty::ifa_setvalue, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$isdefault = { (void*)&c_ReflectionProperty::i_isdefault, (void*)&c_ReflectionProperty::ifa_isdefault, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$ispublic = { (void*)&c_ReflectionProperty::i_ispublic, (void*)&c_ReflectionProperty::ifa_ispublic, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$isprivate = { (void*)&c_ReflectionProperty::i_isprivate, (void*)&c_ReflectionProperty::ifa_isprivate, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$export = { (void*)&c_ReflectionProperty::i_export, (void*)&c_ReflectionProperty::ifa_export, 3, 12, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$getvalue = { (void*)&c_ReflectionProperty::i_getvalue, (void*)&c_ReflectionProperty::ifa_getvalue, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$__construct = { (void*)&c_ReflectionProperty::i___construct, (void*)&c_ReflectionProperty::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$__tostring = { (void*)&c_ReflectionProperty::i___tostring, (void*)&c_ReflectionProperty::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$isstatic = { (void*)&c_ReflectionProperty::i_isstatic, (void*)&c_ReflectionProperty::ifa_isstatic, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionProperty$$getdoccomment = { (void*)&c_ReflectionProperty::i_getdoccomment, (void*)&c_ReflectionProperty::ifa_getdoccomment, 0, 4, 0x0000000000000000LL};
Variant c_ReflectionProperty::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ReflectionProperty::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_ReflectionProperty::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant c_ReflectionProperty::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_ReflectionProperty::i_ispublic(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_ispublic);
}
Variant c_ReflectionProperty::i_isprivate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isprivate);
}
Variant c_ReflectionProperty::i_isprotected(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isprotected);
}
Variant c_ReflectionProperty::i_isstatic(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isstatic);
}
Variant c_ReflectionProperty::i_isdefault(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdefault);
}
Variant c_ReflectionProperty::i_setaccessible(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setaccessible);
}
Variant c_ReflectionProperty::i_getmodifiers(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmodifiers);
}
Variant c_ReflectionProperty::i_getvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getvalue);
}
Variant c_ReflectionProperty::i_setvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setvalue);
}
Variant c_ReflectionProperty::i_getdeclaringclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdeclaringclass);
}
Variant c_ReflectionProperty::i_getdoccomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdoccomment);
}
Variant NEVER_INLINE c_ReflectionProperty::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ReflectionProperty::__construct", count, 2, 2, 2);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_ReflectionProperty::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("ReflectionProperty::export", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (c_ReflectionProperty::t_export(arg0, arg1));
  CVarRef arg2(a2);
  return (c_ReflectionProperty::t_export(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::getName", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_ispublic(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ispublic, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::isPublic", 0, 1);
  return (self->t_ispublic());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_isprivate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isprivate, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::isPrivate", 0, 1);
  return (self->t_isprivate());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_isprotected(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isprotected, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::isProtected", 0, 1);
  return (self->t_isprotected());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_isstatic(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isstatic, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::isStatic", 0, 1);
  return (self->t_isstatic());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_isdefault(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdefault, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::isDefault", 0, 1);
  return (self->t_isdefault());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_setaccessible(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setaccessible, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionProperty::setAccessible", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setaccessible(arg0), null);
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_getmodifiers(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmodifiers, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::getModifiers", 0, 1);
  return (self->t_getmodifiers());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_getvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getvalue, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("ReflectionProperty::getValue", 1, 1);
  if (count <= 0) return (self->t_getvalue());
  CVarRef arg0(a0);
  return (self->t_getvalue(arg0));
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_setvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setvalue, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ReflectionProperty::setValue", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setvalue(arg0, arg1), null);
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_getdeclaringclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdeclaringclass, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::getDeclaringClass", 0, 1);
  return (self->t_getdeclaringclass());
}
Variant NEVER_INLINE c_ReflectionProperty::ifa_getdoccomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdoccomment, coo_ReflectionProperty);
  }
  c_ReflectionProperty *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionProperty*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionProperty::getDocComment", 0, 1);
  return (self->t_getdoccomment());
}
extern const MethodCallInfoTable cw_ReflectionProperty$$call_info_table[] = {
  { 0x75B8C5A2, 1, 13, "setAccessible", &ci_ReflectionProperty$$setaccessible },
  { 0x340997E3, 0, 8, "getValue", &ci_ReflectionProperty$$getvalue },
  { 0x559D6063, 1, 17, "getDeclaringClass", &ci_ReflectionProperty$$getdeclaringclass },
  { 0x4C198965, 1, 7, "getName", &ci_ReflectionProperty$$getname },
  { 0x498E70E8, 1, 6, "export", &ci_ReflectionProperty$$export },
  { 0x10477CEA, 1, 11, "isProtected", &ci_ReflectionProperty$$isprotected },
  { 0x5E2F636F, 1, 9, "isPrivate", &ci_ReflectionProperty$$isprivate },
  { 0x14B34A13, 1, 10, "__toString", &ci_ReflectionProperty$$__tostring },
  { 0x491D6014, 1, 12, "getModifiers", &ci_ReflectionProperty$$getmodifiers },
  { 0x7AB11F15, 0, 9, "isDefault", &ci_ReflectionProperty$$isdefault },
  { 0x008C8DB5, 1, 8, "setValue", &ci_ReflectionProperty$$setvalue },
  { 0x5A56ADF8, 1, 13, "getDocComment", &ci_ReflectionProperty$$getdoccomment },
  { 0x68CC0B19, 1, 8, "isStatic", &ci_ReflectionProperty$$isstatic },
  { 0x58723B7C, 1, 8, "isPublic", &ci_ReflectionProperty$$ispublic },
  { 0x229C615F, 1, 11, "__construct", &ci_ReflectionProperty$$__construct },
};
extern const int cw_ReflectionProperty$$call_info_index[] = {
  31,
  -1,-1,0,1,-1,3,-1,-1,
  4,-1,5,-1,-1,-1,-1,6,
  -1,-1,-1,7,8,9,-1,-1,
  11,12,-1,-1,13,-1,-1,14,

};
c_ReflectionProperty *c_ReflectionProperty::create(CVarRef v_cls, CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_cls, v_name);
  return this;
}
extern const MethodCallInfoTable cw_ReflectionProperty$$call_info_table[];
extern const int cw_ReflectionProperty$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionProperty$$instanceof_table[];
extern const int cw_ReflectionProperty$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionProperty = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionProperty,
  cw_ReflectionProperty$$call_info_table,cw_ReflectionProperty$$call_info_index,
  cw_ReflectionProperty$$instanceof_table,cw_ReflectionProperty$$instanceof_index,
  &c_ReflectionProperty::s_class_name,
  &c_ReflectionProperty::os_prop_table,&ci_ReflectionProperty$$__construct,0,0,0x0,
  &c_ReflectionProperty::s_cls
};
/* SRC: classes/reflection.php line 1451 */
void c_ReflectionProperty::t___construct(Variant v_cls, Variant v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::__construct);
  Variant v_prop;

  ObjectData *obj_tmp UNUSED;
  if ((toBoolean(v_cls) && toBoolean(v_name))) {
    {
      if (!(x_is_object(v_cls))) {
        {
          {
            p_ReflectionClass tmp0 = coo_ReflectionClass();
            ((c_ReflectionClass*)tmp0.get()->create(v_cls));
            v_cls = tmp0;
          }
        }
      }
      else {
        {
          {
            p_ReflectionClass tmp0 = coo_ReflectionClass();
            const Variant &tmp1((x_get_class(v_cls)));
            ((c_ReflectionClass*)tmp0.get()->create(tmp1));
            v_cls = tmp0;
          }
        }
      }
      {
        MethodCallPackage mcp0;
        CVarRef obj0 = v_cls;
        mcp0.methodCall((obj0), NAMSTR(s_sys_ss5029c1ac, "getProperty"), 0x7B023047);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_name)));
        v_prop.assignVal(tmp1);
      }
      if (toBoolean(v_prop)) {
        {
          {
            const Variant &tmp0((v_prop.o_getPublic(NAMSTR(s_sys_ss33988b3e, "info"), true)));
            m_info.assignVal(tmp0);
          }
          {
            const Variant &tmp0((v_prop.o_getPublic(NAMSTR(s_sys_ss5c3cbddc, "name"), true)));
            m_name.assignVal(tmp0);
          }
          {
            const Variant &tmp0((v_prop.o_getPublic(NAMSTR(s_sys_ss482dbd12, "class"), true)));
            m_class.assignVal(tmp0);
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1467 */
String c_ReflectionProperty::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::__toString);
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1484 */
Variant c_ReflectionProperty::t_export(Variant v_cls, CVarRef v_name, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::export);
  Variant v_obj;
  String v_str;

  if (!(x_is_object(v_cls))) {
    {
      {
        p_ReflectionClass tmp0 = coo_ReflectionClass();
        ((c_ReflectionClass*)tmp0.get()->create(v_cls));
        v_cls = tmp0;
      }
    }
  }
  else {
    {
      {
        p_ReflectionClass tmp0 = coo_ReflectionClass();
        const Variant &tmp1((x_get_class(v_cls)));
        ((c_ReflectionClass*)tmp0.get()->create(tmp1));
        v_cls = tmp0;
      }
    }
  }
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = v_cls;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss5029c1ac, "getProperty"), 0x7B023047);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_name)));
    v_obj.assignVal(tmp1);
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1507 */
Variant c_ReflectionProperty::t_getname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::getName);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1520 */
bool c_ReflectionProperty::t_ispublic() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::isPublic);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss750cda3b, "access"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss4ce85288, "public"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1533 */
bool c_ReflectionProperty::t_isprivate() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::isPrivate);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss750cda3b, "access"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss6781f7da, "private"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1546 */
bool c_ReflectionProperty::t_isprotected() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::isProtected);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss750cda3b, "access"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss1fb56979, "protected"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1559 */
bool c_ReflectionProperty::t_isstatic() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::isStatic);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss708d205d, "static"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1573 */
Variant c_ReflectionProperty::t_isdefault() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::isDefault);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss570270cc, "default"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1587 */
void c_ReflectionProperty::t_setaccessible(CVarRef v_accessible) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::setAccessible);
  throw_exception(p_ReflectionException(((c_ReflectionException*)coo_ReflectionException())->create(NAMSTR(s_sys_ss782f565f, "ReflectionProperty::setAccessible is not supported"))));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1601 */
Variant c_ReflectionProperty::t_getmodifiers() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::getModifiers);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss1f244c80, "modifiers"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1617 */
Variant c_ReflectionProperty::t_getvalue(CVarRef v_obj //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::getValue);
  ObjectData *obj_tmp UNUSED;
  if (t_isstatic()) {
    {
      {
        const String &tmp0((toString(m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
        const String &tmp1((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
        return x_hphp_get_static_property(tmp0, tmp1);
      }
    }
  }
  if (toBoolean(v_obj)) {
    {
      {
        const Object &tmp0((toObject(v_obj)));
        const String &tmp1((toString(m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
        const String &tmp2((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
        return x_hphp_get_property(tmp0, tmp1, tmp2);
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1642 */
void c_ReflectionProperty::t_setvalue(CVarRef v_obj, CVarRef v_value) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::setValue);
  ObjectData *obj_tmp UNUSED;
  if (t_isstatic()) {
    {
      {
        const String &tmp0((toString(m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
        const String &tmp1((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
        x_hphp_set_static_property(tmp0, tmp1, v_value);
      }
    }
  }
  else {
    {
      {
        const Object &tmp0((toObject(v_obj)));
        const String &tmp1((toString(m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
        const String &tmp2((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
        x_hphp_set_property(tmp0, tmp1, tmp2, v_value);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1662 */
Variant c_ReflectionProperty::t_getdeclaringclass() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::getDeclaringClass);
  ObjectData *obj_tmp UNUSED;
  if (empty(m_info, NAMSTR(s_sys_ss482dbd12, "class"), true)) {
    {
      return null;
    }
  }
  {
    p_ReflectionClass tmp0 = coo_ReflectionClass();
    const Variant &tmp1((m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key)));
    return ((c_ReflectionClass*)tmp0.get()->create(tmp1), tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1679 */
Variant c_ReflectionProperty::t_getdoccomment() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionProperty, ReflectionProperty::getDocComment);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss1cfa17a6, "doc"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 490 */
const int64 q_ReflectionFunction$$IS_DEPRECATED = 262144LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionFunction)
extern const InstanceOfInfo cw_ReflectionFunction$$instanceof_table[] = {
  {0x1574EC09,1,"ReflectionFunction",&cw_ReflectionFunction},
  {0x35281082,1,"ReflectionFunctionAbstract",&cw_ReflectionFunctionAbstract},
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
};
const int cw_ReflectionFunction$$instanceof_index[] = {
  7,
  -1,0,1,-1,-1,2,-1,-1,

};
extern const CallInfo ci_ReflectionFunction$$export = { (void*)&c_ReflectionFunction::i_export, (void*)&c_ReflectionFunction::ifa_export, 2, 12, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$getattributesrecursive = { (void*)&c_ReflectionFunction::i_getattributesrecursive, (void*)&c_ReflectionFunction::ifa_getattributesrecursive, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$getattributerecursive = { (void*)&c_ReflectionFunction::i_getattributerecursive, (void*)&c_ReflectionFunction::ifa_getattributerecursive, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$getattributes = { (void*)&c_ReflectionFunction::i_getattributes, (void*)&c_ReflectionFunction::ifa_getattributes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$invoke = { (void*)&c_ReflectionFunction::i_invoke, (void*)&c_ReflectionFunction::ifa_invoke, 0, 5, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$__tostring = { (void*)&c_ReflectionFunction::i___tostring, (void*)&c_ReflectionFunction::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$getattribute = { (void*)&c_ReflectionFunction::i_getattribute, (void*)&c_ReflectionFunction::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$invokeargs = { (void*)&c_ReflectionFunction::i_invokeargs, (void*)&c_ReflectionFunction::ifa_invokeargs, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionFunction$$__construct = { (void*)&c_ReflectionFunction::i___construct, (void*)&c_ReflectionFunction::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_ReflectionFunction::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ReflectionFunction::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_ReflectionFunction::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant c_ReflectionFunction::i_invoke(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_invoke, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  const Array &p(count > 0 ? ArrayUtil::EnsureIntKeys(params) : Array());
  return (self->t_invoke(count, p));
}
Variant c_ReflectionFunction::i_invokeargs(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_invokeargs);
}
Variant c_ReflectionFunction::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_ReflectionFunction::i_getattributes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributes);
}
Variant c_ReflectionFunction::i_getattributerecursive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributerecursive);
}
Variant c_ReflectionFunction::i_getattributesrecursive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributesrecursive);
}
Variant NEVER_INLINE c_ReflectionFunction::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionFunction::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_ReflectionFunction::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunction::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ReflectionFunction::export", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (c_ReflectionFunction::t_export(arg0));
  CVarRef arg1(a1);
  return (c_ReflectionFunction::t_export(arg0, arg1));
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_invoke(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_invoke, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  Array p;
  if (count >= 1) p.append(a0);
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_invoke(count, p));
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_invokeargs(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_invokeargs, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionFunction::invokeArgs", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_invokeargs(arg0));
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionFunction::getAttribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_getattributes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributes, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunction::getAttributes", 0, 1);
  return (self->t_getattributes());
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_getattributerecursive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributerecursive, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionFunction::getAttributeRecursive", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattributerecursive(arg0));
}
Variant NEVER_INLINE c_ReflectionFunction::ifa_getattributesrecursive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributesrecursive, coo_ReflectionFunction);
  }
  c_ReflectionFunction *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionFunction*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionFunction::getAttributesRecursive", 0, 1);
  return (self->t_getattributesrecursive());
}
extern const MethodCallInfoTable cw_ReflectionFunction$$call_info_table[] = {
  { 0x2DE2FF41, 1, 21, "getAttributeRecursive", &ci_ReflectionFunction$$getattributerecursive },
  { 0x76199942, 1, 6, "invoke", &ci_ReflectionFunction$$invoke },
  { 0x723103C4, 1, 10, "invokeArgs", &ci_ReflectionFunction$$invokeargs },
  { 0x498E70E8, 0, 6, "export", &ci_ReflectionFunction$$export },
  { 0x6612FC28, 1, 12, "getAttribute", &ci_ReflectionFunction$$getattribute },
  { 0x14B34A13, 1, 10, "__toString", &ci_ReflectionFunction$$__tostring },
  { 0x4DAC1376, 1, 13, "getAttributes", &ci_ReflectionFunction$$getattributes },
  { 0x7330583D, 1, 22, "getAttributesRecursive", &ci_ReflectionFunction$$getattributesrecursive },
  { 0x229C615F, 1, 11, "__construct", &ci_ReflectionFunction$$__construct },
};
extern const int cw_ReflectionFunction$$call_info_index[] = {
  31,
  -1,0,1,-1,2,-1,-1,-1,
  3,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,5,-1,-1,6,-1,
  -1,-1,-1,-1,-1,7,-1,8,

};
c_ReflectionFunction *c_ReflectionFunction::create(CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_name);
  return this;
}
extern const MethodCallInfoTable cw_ReflectionFunction$$call_info_table[];
extern const int cw_ReflectionFunction$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionFunction$$instanceof_table[];
extern const int cw_ReflectionFunction$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionFunction = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionFunction,
  cw_ReflectionFunction$$call_info_table,cw_ReflectionFunction$$call_info_index,
  cw_ReflectionFunction$$instanceof_table,cw_ReflectionFunction$$instanceof_index,
  &c_ReflectionFunction::s_class_name,
  &c_ReflectionFunction::os_prop_table,&ci_ReflectionFunction$$__construct,0,&cw_ReflectionFunctionAbstract,0x0,
  &c_ReflectionFunction::s_cls
};
/* SRC: classes/reflection.php line 494 */
void c_ReflectionFunction::t___construct(Variant v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::__construct);
  ObjectData *obj_tmp UNUSED;
  {
    const Array &tmp0((x_hphp_get_function_info(toString(v_name))));
    m_info = tmp0;
  }
  if (empty(m_info)) {
    {
      {
        p_ReflectionException tmp0 = coo_ReflectionException();
        throw_exception(((c_ReflectionException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ss185d885e, "Function "), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 501 */
String c_ReflectionFunction::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::__toString);
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 522 */
Variant c_ReflectionFunction::t_export(CVarRef v_name, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::export);
  p_ReflectionFunction v_obj;
  String v_str;

  {
    p_ReflectionFunction tmp0 = coo_ReflectionFunction();
    ((c_ReflectionFunction*)tmp0.get()->create(v_name));
    v_obj = tmp0;
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 538 */
Variant c_ReflectionFunction::t_invoke(int num_args, Array args /* = Array() */) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::invoke);
  Array v_args;

  ObjectData *obj_tmp UNUSED;
  {
    const Array &tmp0(((args.isNull() ? Array::Create() : args)));
    v_args = tmp0;
  }
  {
    const String &tmp0((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
    return x_hphp_invoke(tmp0, v_args);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 553 */
Variant c_ReflectionFunction::t_invokeargs(CVarRef v_args) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::invokeArgs);
  ObjectData *obj_tmp UNUSED;
  {
    const String &tmp0((toString(m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key))));
    const Array &tmp1((toArray(x_array_values(v_args))));
    return x_hphp_invoke(tmp0, tmp1);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 557 */
Variant c_ReflectionFunction::t_getattribute(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::getAttribute);
  Variant v_attrs;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key)));
    v_attrs.assignVal(tmp0);
  }
  {
    return (isset(v_attrs, v_name) ? ((Variant)(v_attrs.rvalAt(v_name, AccessFlags::Error))) : ((Variant)(null)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 562 */
Variant c_ReflectionFunction::t_getattributes() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::getAttributes);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 566 */
Variant c_ReflectionFunction::t_getattributerecursive(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::getAttributeRecursive);
  Variant v_attrs;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key)));
    v_attrs.assignVal(tmp0);
  }
  {
    return (isset(v_attrs, v_name) ? ((Variant)(v_attrs.rvalAt(v_name, AccessFlags::Error))) : ((Variant)(null)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 571 */
Variant c_ReflectionFunction::t_getattributesrecursive() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionFunction, ReflectionFunction::getAttributesRecursive);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 586 */
const int64 q_ReflectionClass$$IS_IMPLICIT_ABSTRACT = 16LL;
const int64 q_ReflectionClass$$IS_EXPLICIT_ABSTRACT = 32LL;
const int64 q_ReflectionClass$$IS_FINAL = 64LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionClass)
extern const InstanceOfInfo cw_ReflectionClass$$instanceof_table[] = {
  {0x6AE2E71D,0,"ReflectionClass",&cw_ReflectionClass},
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
};
const int cw_ReflectionClass$$instanceof_index[] = {
  3,
  -1,0,-1,-1,
};
extern const CallInfo ci_ReflectionClass$$getstaticproperties = { (void*)&c_ReflectionClass::i_getstaticproperties, (void*)&c_ReflectionClass::ifa_getstaticproperties, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isabstract = { (void*)&c_ReflectionClass::i_isabstract, (void*)&c_ReflectionClass::ifa_isabstract, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getextensionname = { (void*)&c_ReflectionClass::i_getextensionname, (void*)&c_ReflectionClass::ifa_getextensionname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getattributesrecursive = { (void*)&c_ReflectionClass::i_getattributesrecursive, (void*)&c_ReflectionClass::ifa_getattributesrecursive, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getattribute = { (void*)&c_ReflectionClass::i_getattribute, (void*)&c_ReflectionClass::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$hasmethod = { (void*)&c_ReflectionClass::i_hasmethod, (void*)&c_ReflectionClass::ifa_hasmethod, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$__tostring = { (void*)&c_ReflectionClass::i___tostring, (void*)&c_ReflectionClass::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getmethods = { (void*)&c_ReflectionClass::i_getmethods, (void*)&c_ReflectionClass::ifa_getmethods, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getname = { (void*)&c_ReflectionClass::i_getname, (void*)&c_ReflectionClass::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getconstant = { (void*)&c_ReflectionClass::i_getconstant, (void*)&c_ReflectionClass::ifa_getconstant, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$fetch = { (void*)&c_ReflectionClass::i_fetch, (void*)&c_ReflectionClass::ifa_fetch, 1, 132, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$check = { (void*)&c_ReflectionClass::i_check, (void*)&c_ReflectionClass::ifa_check, 1, 132, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$gettraitaliases = { (void*)&c_ReflectionClass::i_gettraitaliases, (void*)&c_ReflectionClass::ifa_gettraitaliases, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isfinal = { (void*)&c_ReflectionClass::i_isfinal, (void*)&c_ReflectionClass::ifa_isfinal, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$newinstance = { (void*)&c_ReflectionClass::i_newinstance, (void*)&c_ReflectionClass::ifa_newinstance, 0, 5, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getproperty = { (void*)&c_ReflectionClass::i_getproperty, (void*)&c_ReflectionClass::ifa_getproperty, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isinterface = { (void*)&c_ReflectionClass::i_isinterface, (void*)&c_ReflectionClass::ifa_isinterface, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getfilename = { (void*)&c_ReflectionClass::i_getfilename, (void*)&c_ReflectionClass::ifa_getfilename, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getstaticpropertyvalue = { (void*)&c_ReflectionClass::i_getstaticpropertyvalue, (void*)&c_ReflectionClass::ifa_getstaticpropertyvalue, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getmodifiers = { (void*)&c_ReflectionClass::i_getmodifiers, (void*)&c_ReflectionClass::ifa_getmodifiers, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getinterfaces = { (void*)&c_ReflectionClass::i_getinterfaces, (void*)&c_ReflectionClass::ifa_getinterfaces, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getdefaultproperties = { (void*)&c_ReflectionClass::i_getdefaultproperties, (void*)&c_ReflectionClass::ifa_getdefaultproperties, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getattributerecursive = { (void*)&c_ReflectionClass::i_getattributerecursive, (void*)&c_ReflectionClass::ifa_getattributerecursive, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isiterateable = { (void*)&c_ReflectionClass::i_isiterateable, (void*)&c_ReflectionClass::ifa_isiterateable, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getconstructor = { (void*)&c_ReflectionClass::i_getconstructor, (void*)&c_ReflectionClass::ifa_getconstructor, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getproperties = { (void*)&c_ReflectionClass::i_getproperties, (void*)&c_ReflectionClass::ifa_getproperties, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isuserdefined = { (void*)&c_ReflectionClass::i_isuserdefined, (void*)&c_ReflectionClass::ifa_isuserdefined, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$istrait = { (void*)&c_ReflectionClass::i_istrait, (void*)&c_ReflectionClass::ifa_istrait, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$test = { (void*)&c_ReflectionClass::i_test, (void*)&c_ReflectionClass::ifa_test, 2, 132, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$gettraits = { (void*)&c_ReflectionClass::i_gettraits, (void*)&c_ReflectionClass::ifa_gettraits, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$implementsinterface = { (void*)&c_ReflectionClass::i_implementsinterface, (void*)&c_ReflectionClass::ifa_implementsinterface, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getattributes = { (void*)&c_ReflectionClass::i_getattributes, (void*)&c_ReflectionClass::ifa_getattributes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$setstaticpropertyvalue = { (void*)&c_ReflectionClass::i_setstaticpropertyvalue, (void*)&c_ReflectionClass::ifa_setstaticpropertyvalue, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getconstants = { (void*)&c_ReflectionClass::i_getconstants, (void*)&c_ReflectionClass::ifa_getconstants, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$export = { (void*)&c_ReflectionClass::i_export, (void*)&c_ReflectionClass::ifa_export, 2, 12, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$fetch_recur = { (void*)&c_ReflectionClass::i_fetch_recur, (void*)&c_ReflectionClass::ifa_fetch_recur, 1, 140, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$hasproperty = { (void*)&c_ReflectionClass::i_hasproperty, (void*)&c_ReflectionClass::ifa_hasproperty, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$newinstanceargs = { (void*)&c_ReflectionClass::i_newinstanceargs, (void*)&c_ReflectionClass::ifa_newinstanceargs, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getdoccomment = { (void*)&c_ReflectionClass::i_getdoccomment, (void*)&c_ReflectionClass::ifa_getdoccomment, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getinterfacenames = { (void*)&c_ReflectionClass::i_getinterfacenames, (void*)&c_ReflectionClass::ifa_getinterfacenames, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getextension = { (void*)&c_ReflectionClass::i_getextension, (void*)&c_ReflectionClass::ifa_getextension, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isinstantiable = { (void*)&c_ReflectionClass::i_isinstantiable, (void*)&c_ReflectionClass::ifa_isinstantiable, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isinternal = { (void*)&c_ReflectionClass::i_isinternal, (void*)&c_ReflectionClass::ifa_isinternal, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getparentclass = { (void*)&c_ReflectionClass::i_getparentclass, (void*)&c_ReflectionClass::ifa_getparentclass, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$hasconstant = { (void*)&c_ReflectionClass::i_hasconstant, (void*)&c_ReflectionClass::ifa_hasconstant, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getendline = { (void*)&c_ReflectionClass::i_getendline, (void*)&c_ReflectionClass::ifa_getendline, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getmethod = { (void*)&c_ReflectionClass::i_getmethod, (void*)&c_ReflectionClass::ifa_getmethod, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$isinstance = { (void*)&c_ReflectionClass::i_isinstance, (void*)&c_ReflectionClass::ifa_isinstance, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$gettraitnames = { (void*)&c_ReflectionClass::i_gettraitnames, (void*)&c_ReflectionClass::ifa_gettraitnames, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$issubclassof = { (void*)&c_ReflectionClass::i_issubclassof, (void*)&c_ReflectionClass::ifa_issubclassof, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$__construct = { (void*)&c_ReflectionClass::i___construct, (void*)&c_ReflectionClass::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionClass$$getstartline = { (void*)&c_ReflectionClass::i_getstartline, (void*)&c_ReflectionClass::ifa_getstartline, 0, 4, 0x0000000000000000LL};
Variant c_ReflectionClass::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ReflectionClass::i_fetch(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetch);
}
Variant c_ReflectionClass::i_fetch_recur(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetch_recur);
}
Variant c_ReflectionClass::i_check(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_check);
}
Variant c_ReflectionClass::i_test(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_test);
}
Variant c_ReflectionClass::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_ReflectionClass::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant c_ReflectionClass::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_ReflectionClass::i_isinternal(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isinternal);
}
Variant c_ReflectionClass::i_isuserdefined(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isuserdefined);
}
Variant c_ReflectionClass::i_isinstantiable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isinstantiable);
}
Variant c_ReflectionClass::i_hasconstant(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasconstant);
}
Variant c_ReflectionClass::i_hasmethod(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasmethod);
}
Variant c_ReflectionClass::i_hasproperty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasproperty);
}
Variant c_ReflectionClass::i_getfilename(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfilename);
}
Variant c_ReflectionClass::i_getstartline(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstartline);
}
Variant c_ReflectionClass::i_getendline(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getendline);
}
Variant c_ReflectionClass::i_getdoccomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdoccomment);
}
Variant c_ReflectionClass::i_getconstructor(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getconstructor);
}
Variant c_ReflectionClass::i_getmethod(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmethod);
}
Variant c_ReflectionClass::i_getmethods(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmethods);
}
Variant c_ReflectionClass::i_getproperty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getproperty);
}
Variant c_ReflectionClass::i_getproperties(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getproperties);
}
Variant c_ReflectionClass::i_getconstants(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getconstants);
}
Variant c_ReflectionClass::i_getconstant(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getconstant);
}
Variant c_ReflectionClass::i_getinterfaces(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinterfaces);
}
Variant c_ReflectionClass::i_gettraits(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettraits);
}
Variant c_ReflectionClass::i_getinterfacenames(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinterfacenames);
}
Variant c_ReflectionClass::i_gettraitnames(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettraitnames);
}
Variant c_ReflectionClass::i_gettraitaliases(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettraitaliases);
}
Variant c_ReflectionClass::i_isinterface(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isinterface);
}
Variant c_ReflectionClass::i_isabstract(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isabstract);
}
Variant c_ReflectionClass::i_isfinal(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isfinal);
}
Variant c_ReflectionClass::i_istrait(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_istrait);
}
Variant c_ReflectionClass::i_getmodifiers(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmodifiers);
}
Variant c_ReflectionClass::i_isinstance(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isinstance);
}
Variant c_ReflectionClass::i_newinstance(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_newinstance, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  const Array &p(count > 0 ? ArrayUtil::EnsureIntKeys(params) : Array());
  return (self->t_newinstance(count, p));
}
Variant c_ReflectionClass::i_newinstanceargs(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_newinstanceargs);
}
Variant c_ReflectionClass::i_getparentclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getparentclass);
}
Variant c_ReflectionClass::i_issubclassof(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_issubclassof);
}
Variant c_ReflectionClass::i_getstaticproperties(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstaticproperties);
}
Variant c_ReflectionClass::i_getstaticpropertyvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstaticpropertyvalue);
}
Variant c_ReflectionClass::i_setstaticpropertyvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setstaticpropertyvalue);
}
Variant c_ReflectionClass::i_getdefaultproperties(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdefaultproperties);
}
Variant c_ReflectionClass::i_isiterateable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isiterateable);
}
Variant c_ReflectionClass::i_implementsinterface(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_implementsinterface);
}
Variant c_ReflectionClass::i_getextension(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getextension);
}
Variant c_ReflectionClass::i_getextensionname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getextensionname);
}
Variant c_ReflectionClass::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_ReflectionClass::i_getattributes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributes);
}
Variant c_ReflectionClass::i_getattributerecursive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributerecursive);
}
Variant c_ReflectionClass::i_getattributesrecursive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributesrecursive);
}
Variant NEVER_INLINE c_ReflectionClass::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_ReflectionClass::ifa_fetch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetch, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::fetch", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_fetch(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_fetch_recur(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::fetch_recur", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_ReflectionClass::t_fetch_recur(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_check(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_check, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::check", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_check(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_test(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_test, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ReflectionClass::test", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_test(arg0, arg1));
}
Variant NEVER_INLINE c_ReflectionClass::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ReflectionClass::export", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (c_ReflectionClass::t_export(arg0));
  CVarRef arg1(a1);
  return (c_ReflectionClass::t_export(arg0, arg1));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getName", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isinternal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isinternal, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isInternal", 0, 1);
  return (self->t_isinternal());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isuserdefined(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isuserdefined, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isUserDefined", 0, 1);
  return (self->t_isuserdefined());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isinstantiable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isinstantiable, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isInstantiable", 0, 1);
  return (self->t_isinstantiable());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_hasconstant(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasconstant, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::hasConstant", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_hasconstant(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_hasmethod(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasmethod, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::hasMethod", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_hasmethod(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_hasproperty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasproperty, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::hasProperty", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_hasproperty(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getfilename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfilename, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getFileName", 0, 1);
  return (self->t_getfilename());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getstartline(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstartline, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getStartLine", 0, 1);
  return (self->t_getstartline());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getendline(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getendline, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getEndLine", 0, 1);
  return (self->t_getendline());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getdoccomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdoccomment, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getDocComment", 0, 1);
  return (self->t_getdoccomment());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getconstructor(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconstructor, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getConstructor", 0, 1);
  return (self->t_getconstructor());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getmethod(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmethod, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::getMethod", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getmethod(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getmethods(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmethods, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("ReflectionClass::getMethods", 1, 1);
  if (count <= 0) return (self->t_getmethods());
  CVarRef arg0(a0);
  return (self->t_getmethods(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getproperty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getproperty, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::getProperty", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getproperty(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getproperties(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getproperties, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("ReflectionClass::getProperties", 1, 1);
  if (count <= 0) return (self->t_getproperties());
  CVarRef arg0(a0);
  return (self->t_getproperties(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getconstants(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconstants, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getConstants", 0, 1);
  return (self->t_getconstants());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getconstant(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconstant, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::getConstant", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getconstant(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getinterfaces(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinterfaces, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getInterfaces", 0, 1);
  return (self->t_getinterfaces());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_gettraits(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettraits, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getTraits", 0, 1);
  return (self->t_gettraits());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getinterfacenames(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinterfacenames, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getInterfaceNames", 0, 1);
  return (self->t_getinterfacenames());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_gettraitnames(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettraitnames, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getTraitNames", 0, 1);
  return (self->t_gettraitnames());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_gettraitaliases(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettraitaliases, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getTraitAliases", 0, 1);
  return (self->t_gettraitaliases());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isinterface(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isinterface, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isInterface", 0, 1);
  return (self->t_isinterface());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isabstract(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isabstract, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isAbstract", 0, 1);
  return (self->t_isabstract());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isfinal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isfinal, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isFinal", 0, 1);
  return (self->t_isfinal());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_istrait(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrait, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isTrait", 0, 1);
  return (self->t_istrait());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getmodifiers(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmodifiers, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getModifiers", 0, 1);
  return (self->t_getmodifiers());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isinstance(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isinstance, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::isInstance", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_isinstance(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_newinstance(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_newinstance, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  Array p;
  if (count >= 1) p.append(a0);
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_newinstance(count, p));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_newinstanceargs(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_newinstanceargs, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::newInstanceArgs", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_newinstanceargs(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getparentclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getparentclass, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getParentClass", 0, 1);
  return (self->t_getparentclass());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_issubclassof(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_issubclassof, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::isSubclassOf", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_issubclassof(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getstaticproperties(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstaticproperties, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getStaticProperties", 0, 1);
  return (self->t_getstaticproperties());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getstaticpropertyvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstaticpropertyvalue, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ReflectionClass::getStaticPropertyValue", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_getstaticpropertyvalue(arg0));
  CVarRef arg1(a1);
  return (self->t_getstaticpropertyvalue(arg0, arg1));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_setstaticpropertyvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setstaticpropertyvalue, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ReflectionClass::setStaticPropertyValue", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setstaticpropertyvalue(arg0, arg1), null);
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getdefaultproperties(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdefaultproperties, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getDefaultProperties", 0, 1);
  return (self->t_getdefaultproperties());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_isiterateable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isiterateable, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::isIterateable", 0, 1);
  return (self->t_isiterateable());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_implementsinterface(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_implementsinterface, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::implementsInterface", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_implementsinterface(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getextension(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getextension, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getExtension", 0, 1);
  return (self->t_getextension());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getextensionname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getextensionname, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getExtensionName", 0, 1);
  return (self->t_getextensionname());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::getAttribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getattributes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributes, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getAttributes", 0, 1);
  return (self->t_getattributes());
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getattributerecursive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributerecursive, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionClass::getAttributeRecursive", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattributerecursive(arg0));
}
Variant NEVER_INLINE c_ReflectionClass::ifa_getattributesrecursive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributesrecursive, coo_ReflectionClass);
  }
  c_ReflectionClass *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionClass*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionClass::getAttributesRecursive", 0, 1);
  return (self->t_getattributesrecursive());
}
extern const MethodCallInfoTable cw_ReflectionClass$$call_info_table[] = {
  { 0x1CB1CB04, 1, 12, "getStartLine", &ci_ReflectionClass$$getstartline },
  { 0x4136C705, 1, 5, "check", &ci_ReflectionClass$$check },
  { 0x71E86607, 1, 9, "getTraits", &ci_ReflectionClass$$gettraits },
  { 0x4B439C8F, 1, 11, "hasProperty", &ci_ReflectionClass$$hasproperty },
  { 0x14B34A13, 1, 10, "__toString", &ci_ReflectionClass$$__tostring },
  { 0x491D6014, 1, 12, "getModifiers", &ci_ReflectionClass$$getmodifiers },
  { 0x2B12BF16, 1, 15, "getTraitAliases", &ci_ReflectionClass$$gettraitaliases },
  { 0x24733998, 1, 9, "hasMethod", &ci_ReflectionClass$$hasmethod },
  { 0x6C4C229B, 1, 20, "getDefaultProperties", &ci_ReflectionClass$$getdefaultproperties },
  { 0x7676509E, 1, 11, "isInterface", &ci_ReflectionClass$$isinterface },
  { 0x05797B22, 1, 19, "getStaticProperties", &ci_ReflectionClass$$getstaticproperties },
  { 0x077464A7, 1, 13, "getTraitNames", &ci_ReflectionClass$$gettraitnames },
  { 0x6612FC28, 1, 12, "getAttribute", &ci_ReflectionClass$$getattribute },
  { 0x142F8C29, 0, 10, "isInstance", &ci_ReflectionClass$$isinstance },
  { 0x58B49929, 1, 16, "getExtensionName", &ci_ReflectionClass$$getextensionname },
  { 0x4ECD3CAA, 0, 14, "getConstructor", &ci_ReflectionClass$$getconstructor },
  { 0x6488AAAA, 0, 10, "getMethods", &ci_ReflectionClass$$getmethods },
  { 0x521F7CAA, 1, 17, "getInterfaceNames", &ci_ReflectionClass$$getinterfacenames },
  { 0x43D795AE, 0, 7, "isFinal", &ci_ReflectionClass$$isfinal },
  { 0x095F612E, 1, 22, "getStaticPropertyValue", &ci_ReflectionClass$$getstaticpropertyvalue },
  { 0x01FE7030, 1, 11, "newInstance", &ci_ReflectionClass$$newinstance },
  { 0x3D3C0734, 1, 11, "getConstant", &ci_ReflectionClass$$getconstant },
  { 0x53A3B5B6, 1, 9, "getMethod", &ci_ReflectionClass$$getmethod },
  { 0x5A32FDB7, 1, 10, "isAbstract", &ci_ReflectionClass$$isabstract },
  { 0x3524223B, 0, 7, "isTrait", &ci_ReflectionClass$$istrait },
  { 0x115E6E3B, 1, 12, "getExtension", &ci_ReflectionClass$$getextension },
  { 0x22BBCD3C, 1, 14, "isInstantiable", &ci_ReflectionClass$$isinstantiable },
  { 0x7330583D, 1, 22, "getAttributesRecursive", &ci_ReflectionClass$$getattributesrecursive },
  { 0x44A62B3F, 1, 11, "hasConstant", &ci_ReflectionClass$$hasconstant },
  { 0x2DE2FF41, 1, 21, "getAttributeRecursive", &ci_ReflectionClass$$getattributerecursive },
  { 0x18C00B43, 1, 13, "getInterfaces", &ci_ReflectionClass$$getinterfaces },
  { 0x602F4B44, 1, 13, "getProperties", &ci_ReflectionClass$$getproperties },
  { 0x7B023047, 1, 11, "getProperty", &ci_ReflectionClass$$getproperty },
  { 0x6D39474D, 1, 11, "getFileName", &ci_ReflectionClass$$getfilename },
  { 0x370B68CE, 1, 13, "isIterateable", &ci_ReflectionClass$$isiterateable },
  { 0x035C64CF, 1, 10, "isInternal", &ci_ReflectionClass$$isinternal },
  { 0x13143955, 1, 12, "getConstants", &ci_ReflectionClass$$getconstants },
  { 0x427386D6, 1, 11, "fetch_recur", &ci_ReflectionClass$$fetch_recur },
  { 0x229C615F, 1, 11, "__construct", &ci_ReflectionClass$$__construct },
  { 0x2E7D4164, 1, 13, "isUserDefined", &ci_ReflectionClass$$isuserdefined },
  { 0x4C198965, 1, 7, "getName", &ci_ReflectionClass$$getname },
  { 0x54EE5C66, 1, 15, "newInstanceArgs", &ci_ReflectionClass$$newinstanceargs },
  { 0x20ED29E7, 1, 4, "test", &ci_ReflectionClass$$test },
  { 0x498E70E8, 1, 6, "export", &ci_ReflectionClass$$export },
  { 0x07BC4570, 1, 10, "getEndLine", &ci_ReflectionClass$$getendline },
  { 0x637717F1, 1, 22, "setStaticPropertyValue", &ci_ReflectionClass$$setstaticpropertyvalue },
  { 0x16957472, 1, 14, "getParentClass", &ci_ReflectionClass$$getparentclass },
  { 0x4DAC1376, 1, 13, "getAttributes", &ci_ReflectionClass$$getattributes },
  { 0x5A56ADF8, 1, 13, "getDocComment", &ci_ReflectionClass$$getdoccomment },
  { 0x3B90B0FB, 0, 5, "fetch", &ci_ReflectionClass$$fetch },
  { 0x15C7D6FB, 1, 19, "implementsInterface", &ci_ReflectionClass$$implementsinterface },
  { 0x1926C97E, 1, 12, "isSubclassOf", &ci_ReflectionClass$$issubclassof },
};
extern const int cw_ReflectionClass$$call_info_index[] = {
  127,
  -1,-1,-1,-1,0,1,-1,2,
  -1,-1,-1,-1,-1,-1,-1,3,
  -1,-1,-1,4,5,-1,6,-1,
  7,-1,-1,8,-1,-1,9,-1,
  -1,-1,10,-1,-1,-1,-1,11,
  12,13,15,-1,-1,-1,18,-1,
  20,-1,-1,-1,21,-1,22,23,
  -1,-1,-1,24,26,27,-1,28,
  -1,29,-1,30,31,-1,-1,32,
  -1,-1,-1,-1,-1,33,34,35,
  -1,-1,-1,-1,-1,36,37,-1,
  -1,-1,-1,-1,-1,-1,-1,38,
  -1,-1,-1,-1,39,40,41,42,
  43,-1,-1,-1,-1,-1,-1,-1,
  44,45,46,-1,-1,-1,47,-1,
  48,-1,-1,49,-1,-1,51,-1,

};
c_ReflectionClass *c_ReflectionClass::create(CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_name);
  return this;
}
extern const MethodCallInfoTable cw_ReflectionClass$$call_info_table[];
extern const int cw_ReflectionClass$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionClass$$instanceof_table[];
extern const int cw_ReflectionClass$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionClass = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionClass,
  cw_ReflectionClass$$call_info_table,cw_ReflectionClass$$call_info_index,
  cw_ReflectionClass$$instanceof_table,cw_ReflectionClass$$instanceof_index,
  &c_ReflectionClass::s_class_name,
  &c_ReflectionClass::os_prop_table,&ci_ReflectionClass$$__construct,0,0,0x0,
  &c_ReflectionClass::s_cls
};
/* SRC: classes/reflection.php line 595 */
void c_ReflectionClass::t___construct(Variant v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::__construct);
  ObjectData *obj_tmp UNUSED;
  if (x_is_object(v_name)) {
    {
      {
        const Variant &tmp0((x_get_class(v_name)));
        v_name.assignVal(tmp0);
      }
    }
  }
  {
    const String &tmp0((x_hphp_get_original_class_name(toString(v_name))));
    m_name = tmp0;
  }
  if (empty(m_name)) {
    {
      {
        p_ReflectionException tmp0 = coo_ReflectionException();
        throw_exception(((c_ReflectionException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ss278ef7eb, "Class "), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 606 */
Variant c_ReflectionClass::t_fetch(CVarRef v_what) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::fetch);
  ObjectData *obj_tmp UNUSED;
  if (!(toBoolean(m_info))) {
    {
      {
        const Variant &tmp0((c_ReflectionClass::t_fetch_recur(m_name)));
        m_info.assignVal(tmp0);
      }
    }
  }
  return m_info.rvalAt(v_what, AccessFlags::Error);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 613 */
Variant c_ReflectionClass::t_fetch_recur(CVarRef v_name) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::fetch_recur);
  Array v_info;
  bool v_abstract = false;
  Primitive v_interface = 0;
  Variant v__;
  Variant v_p;
  Variant v_parent;

  if (isset(g->s_ReflectionClass$$fetched, v_name)) {
    return g->s_ReflectionClass$$fetched.rvalAt(v_name, AccessFlags::Error);
  }
  {
    const Array &tmp0((x_hphp_get_class_info(v_name)));
    v_info = tmp0;
  }
  if (empty(v_info)) {
    {
      {
        p_ReflectionException tmp0 = coo_ReflectionException();
        throw_exception(((c_ReflectionException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ss278ef7eb, "Class "), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
      }
    }
  }
  {
    const Variant &tmp0((v_info.rvalAt(NAMSTR(s_sys_ss0fc37e03, "attributes"), AccessFlags::Error_Key)));
    v_info.set(NAMSTR(s_sys_ss1573187a, "attributes_rec"), (tmp0), true);
  }
  v_abstract = (isset(v_info, NAMSTR(s_sys_ss12c8a8a6, "abstract"), true) || isset(v_info, NAMSTR(s_sys_ss7228e959, "interface"), true));
  {
    LOOP_COUNTER(1);
    Variant map2 = v_info.rvalAt(NAMSTR(s_sys_ss4fb8e254, "interfaces"), AccessFlags::Error_Key);
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_interface.assignVal(iter3.first());
      {
        {
          const Variant &tmp0((c_ReflectionClass::t_fetch_recur(v_interface)));
          v_p.assignVal(tmp0);
        }
        if (v_abstract) {
          {
            const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss5b229ad5, "methods"), AccessFlags::Error_Key)));
            lval(v_info.lvalAt(NAMSTR(s_sys_ss5b229ad5, "methods"), AccessFlags::Key)) += tmp0;
          }
        }
        {
          const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss623ae369, "constants"), AccessFlags::Error_Key)));
          lval(v_info.lvalAt(NAMSTR(s_sys_ss623ae369, "constants"), AccessFlags::Key)) += tmp0;
        }
        {
          const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss4fb8e254, "interfaces"), AccessFlags::Error_Key)));
          lval(v_info.lvalAt(NAMSTR(s_sys_ss4fb8e254, "interfaces"), AccessFlags::Key)) += tmp0;
        }
      }
    }
  }
  {
    const Variant &tmp0((v_info.rvalAt(NAMSTR(s_sys_ss7b10fd8c, "parent"), AccessFlags::Error_Key)));
    v_parent.assignVal(tmp0);
  }
  if (!(empty(v_parent))) {
    {
      {
        const Variant &tmp0((c_ReflectionClass::t_fetch_recur(v_parent)));
        v_p.assignVal(tmp0);
      }
      {
        bool tmp0;
        {
          tmp0 = (isset(v_p, NAMSTR(s_sys_ss7228e959, "interface"), true));
        }
        if (tmp0) {
          {
            {
              lval(v_info.lvalAt(NAMSTR(s_sys_ss4fb8e254, "interfaces"), AccessFlags::CheckExist_Key)).set(v_parent, (NAMVAR(s_sys_svib794f8ce, 1LL)));
            }
          }
        }
        else {
          {
            {
              const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss10269404, "properties"), AccessFlags::Error_Key)));
              lval(v_info.lvalAt(NAMSTR(s_sys_ss10269404, "properties"), AccessFlags::Key)) += tmp0;
            }
          }
        }
      }
      {
        const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss5b229ad5, "methods"), AccessFlags::Error_Key)));
        lval(v_info.lvalAt(NAMSTR(s_sys_ss5b229ad5, "methods"), AccessFlags::Key)) += tmp0;
      }
      {
        const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss623ae369, "constants"), AccessFlags::Error_Key)));
        lval(v_info.lvalAt(NAMSTR(s_sys_ss623ae369, "constants"), AccessFlags::Key)) += tmp0;
      }
      {
        const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss4fb8e254, "interfaces"), AccessFlags::Error_Key)));
        lval(v_info.lvalAt(NAMSTR(s_sys_ss4fb8e254, "interfaces"), AccessFlags::Key)) += tmp0;
      }
      {
        const Variant &tmp0((v_p.rvalAt(NAMSTR(s_sys_ss1573187a, "attributes_rec"), AccessFlags::Error_Key)));
        lval(v_info.lvalAt(NAMSTR(s_sys_ss1573187a, "attributes_rec"), AccessFlags::Key)) += tmp0;
      }
    }
  }
  g->s_ReflectionClass$$fetched.set(v_name, (VarNR(v_info)));
  return v_info;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 648 */
bool c_ReflectionClass::t_check(CVarRef v_what) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::check);
  ObjectData *obj_tmp UNUSED;
  if (!(toBoolean(m_info))) {
    {
      {
        const Variant &tmp0((c_ReflectionClass::t_fetch_recur(m_name)));
        m_info.assignVal(tmp0);
      }
    }
  }
  {
    return isset(m_info, v_what);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 655 */
bool c_ReflectionClass::t_test(CVarRef v_what, CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::test);
  Variant v_v;

  {
    const Variant &tmp0((t_fetch(v_what)));
    v_v.assignVal(tmp0);
  }
  {
    bool tmp0 = (toBoolean(v_v));
    if (tmp0) {
      tmp0 = (isset(v_v, v_name));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 660 */
String c_ReflectionClass::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::__toString);
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 680 */
Variant c_ReflectionClass::t_export(CVarRef v_name, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::export);
  p_ReflectionClass v_obj;
  String v_str;

  {
    p_ReflectionClass tmp0 = coo_ReflectionClass();
    ((c_ReflectionClass*)tmp0.get()->create(v_name));
    v_obj = tmp0;
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 698 */
Variant c_ReflectionClass::t_getname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getName);
  ObjectData *obj_tmp UNUSED;
  return m_name;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 712 */
bool c_ReflectionClass::t_isinternal() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isInternal);
  return t_check(NAMVAR(s_sys_svs1332a8ac, "internal"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 725 */
bool c_ReflectionClass::t_isuserdefined() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isUserDefined);
  return !(t_check(NAMVAR(s_sys_svs1332a8ac, "internal")));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 739 */
bool c_ReflectionClass::t_isinstantiable() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isInstantiable);
  return !(t_check(NAMVAR(s_sys_svs12c8a8a6, "abstract")));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 754 */
bool c_ReflectionClass::t_hasconstant(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::hasConstant);
  return t_test(NAMVAR(s_sys_svs623ae369, "constants"), v_name);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 768 */
bool c_ReflectionClass::t_hasmethod(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::hasMethod);
  {
    const String &tmp0((x_strtolower(toString(v_name))));
    return t_test(NAMVAR(s_sys_svs5b229ad5, "methods"), VarNR(tmp0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 783 */
bool c_ReflectionClass::t_hasproperty(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::hasProperty);
  return t_test(NAMVAR(s_sys_svs10269404, "properties"), v_name);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 798 */
Variant c_ReflectionClass::t_getfilename() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getFileName);
  return t_fetch(NAMVAR(s_sys_svs0ce7db5b, "file"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 812 */
Variant c_ReflectionClass::t_getstartline() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getStartLine);
  return t_fetch(NAMVAR(s_sys_svs54c67725, "line1"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 825 */
Variant c_ReflectionClass::t_getendline() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getEndLine);
  return t_fetch(NAMVAR(s_sys_svs3efe32a8, "line2"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 839 */
Variant c_ReflectionClass::t_getdoccomment() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getDocComment);
  return t_fetch(NAMVAR(s_sys_svs1cfa17a6, "doc"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 853 */
Variant c_ReflectionClass::t_getconstructor() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getConstructor);
  Variant v_name;

  ObjectData *obj_tmp UNUSED;
  if (t_hasmethod(NAMVAR(s_sys_svs21b87da7, "__construct"))) {
    {
      return t_getmethod(NAMVAR(s_sys_svs21b87da7, "__construct"));
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (!(t_istrait()));
      if (tmp1) {
        Variant tmp2((v_name.assignVal(m_name)));
        tmp1 = (t_hasmethod(tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        return t_getmethod(v_name);
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 874 */
p_ReflectionMethod c_ReflectionClass::t_getmethod(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getMethod);
  Variant v_method;
  String v_lname;
  Variant v_methods;
  Variant v_class;
  p_ReflectionMethod v_ret;

  ObjectData *obj_tmp UNUSED;
  if (!(toBoolean(m_info))) {
    {
      {
        const Array &tmp0((x_hphp_get_method_info(m_name, v_name)));
        v_method = tmp0;
      }
    }
  }
  else {
    {
      {
        const String &tmp0((x_strtolower(toString(v_name))));
        v_lname = tmp0;
      }
      {
        const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss5b229ad5, "methods"), AccessFlags::Error_Key)));
        v_methods.assignVal(tmp0);
      }
      {
        bool tmp0;
        {
          tmp0 = (isset(v_methods, v_lname));
        }
        if (tmp0) {
          {
            const Variant &tmp0((v_methods.rvalAt(v_lname, AccessFlags::Error)));
            v_method.assignVal(tmp0);
          }
        }
      }
    }
  }
  if (empty(v_method)) {
    {
      v_class.assignVal(m_name);
      {
        p_ReflectionException tmp0 = coo_ReflectionException();
        throw_exception(((c_ReflectionException*)tmp0.get()->create(concat5(NAMSTR(s_sys_ss5c6e02c2, "Method "), toString(v_class), NAMSTR(s_sys_ss019481f3, "::"), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
      }
    }
  }
  {
    const p_ReflectionMethod &tmp0((p_ReflectionMethod(((c_ReflectionMethod*)coo_ReflectionMethod())->create(null, null))));
    v_ret = tmp0;
  }
  {
    (obj_tmp = v_ret.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionMethod*)obj_tmp)->m_info)).assignVal(v_method);
  }
  {
    const Variant &tmp0((v_method.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key)));
    (obj_tmp = v_ret.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionMethod*)obj_tmp)->m_name)).assignVal(tmp0);
  }
  {
    const Variant &tmp0((v_method.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key)));
    (obj_tmp = v_ret.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionMethod*)obj_tmp)->m_class)).assignVal(tmp0);
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 910 */
Array c_ReflectionClass::t_getmethods(CVarRef v_filter //  = NAMVAR(s_sys_svi5830e7c6, 65535LL)
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getMethods);
  Array v_ret;
  Variant v_methods;
  Primitive v_name = 0;
  Variant v__;
  p_ReflectionMethod v_m;

  v_ret = s_sys_sa00000000;
  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs5b229ad5, "methods"))));
    v_methods.assignVal(tmp0);
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_methods.begin(s_class_name); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          const p_ReflectionMethod &tmp0((t_getmethod(v_name)));
          v_m = tmp0;
        }
        if (((((((toBoolean(bitwise_and(v_filter, 256LL /* ReflectionMethod::IS_PUBLIC */)) && v_m->t_ispublic()) || (toBoolean(bitwise_and(v_filter, 512LL /* ReflectionMethod::IS_PROTECTED */)) && v_m->t_isprotected())) || (toBoolean(bitwise_and(v_filter, 1024LL /* ReflectionMethod::IS_PRIVATE */)) && v_m->t_isprivate())) || (toBoolean(bitwise_and(v_filter, 1LL /* ReflectionMethod::IS_STATIC */)) && v_m->t_isstatic())) || (toBoolean(bitwise_and(v_filter, 4LL /* ReflectionMethod::IS_FINAL */)) && v_m->t_isfinal())) || (toBoolean(bitwise_and(v_filter, 2LL /* ReflectionMethod::IS_ABSTRACT */)) && v_m->t_isabstract()))) {
          {
            v_ret.append((VarNR(v_m)));
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 939 */
p_ReflectionProperty c_ReflectionClass::t_getproperty(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getProperty);
  Variant v_properties;
  Variant v_class;
  p_ReflectionProperty v_ret;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs10269404, "properties"))));
    v_properties.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_properties, v_name)));
    }
    if (tmp0) {
      {
        {
          const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key)));
          v_class.assignVal(tmp0);
        }
        {
          p_ReflectionException tmp0 = coo_ReflectionException();
          throw_exception(((c_ReflectionException*)tmp0.get()->create(concat5(NAMSTR(s_sys_ss1795dfc8, "Property "), toString(v_class), NAMSTR(s_sys_ss019481f3, "::"), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
        }
      }
    }
  }
  {
    const p_ReflectionProperty &tmp0((p_ReflectionProperty(((c_ReflectionProperty*)coo_ReflectionProperty())->create(null, null))));
    v_ret = tmp0;
  }
  {
    const Variant &tmp0((v_properties.rvalAt(v_name, AccessFlags::Error)));
    (obj_tmp = v_ret.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionProperty*)obj_tmp)->m_info)).assignVal(tmp0);
  }
  {
    (obj_tmp = v_ret.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionProperty*)obj_tmp)->m_name)).assignVal(v_name);
  }
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key)));
    (obj_tmp = v_ret.get(), LIKELY(obj_tmp != 0) || (throw_null_object_prop(),false),(((c_ReflectionProperty*)obj_tmp)->m_class)).assignVal(tmp0);
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 962 */
Array c_ReflectionClass::t_getproperties(CVarRef v_filter //  = NAMVAR(s_sys_svi5830e7c6, 65535LL)
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getProperties);
  Array v_ret;
  Primitive v_name = 0;
  Variant v__;
  p_ReflectionProperty v_p;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs10269404, "properties"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          const p_ReflectionProperty &tmp0((t_getproperty(v_name)));
          v_p = tmp0;
        }
        if (((((toBoolean(bitwise_and(v_filter, 256LL /* ReflectionProperty::IS_PUBLIC */)) && v_p->t_ispublic()) || (toBoolean(bitwise_and(v_filter, 512LL /* ReflectionProperty::IS_PROTECTED */)) && v_p->t_isprotected())) || (toBoolean(bitwise_and(v_filter, 1024LL /* ReflectionProperty::IS_PRIVATE */)) && v_p->t_isprivate())) || (toBoolean(bitwise_and(v_filter, 1LL /* ReflectionProperty::IS_STATIC */)) && v_p->t_isstatic()))) {
          {
            v_ret.append((VarNR(v_p)));
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 986 */
Variant c_ReflectionClass::t_getconstants() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getConstants);
  return t_fetch(NAMVAR(s_sys_svs623ae369, "constants"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1000 */
Variant c_ReflectionClass::t_getconstant(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getConstant);
  Variant v_constants;
  Variant v_class;

  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs623ae369, "constants"))));
    v_constants.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_constants, v_name)));
    }
    if (tmp0) {
      {
        {
          const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key)));
          v_class.assignVal(tmp0);
        }
        {
          p_ReflectionException tmp0 = coo_ReflectionException();
          throw_exception(((c_ReflectionException*)tmp0.get()->create(concat5(NAMSTR(s_sys_ss5816f860, "Class constant "), toString(v_class), NAMSTR(s_sys_ss019481f3, "::"), toString(v_name), NAMSTR(s_sys_ss5784ed2b, " does not exist"))), tmp0));
        }
      }
    }
  }
  return v_constants.rvalAt(v_name, AccessFlags::Error);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1020 */
Array c_ReflectionClass::t_getinterfaces() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getInterfaces);
  Array v_ret;
  Primitive v_name = 0;
  Variant v__;
  p_ReflectionClass v_cls;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs4fb8e254, "interfaces"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          p_ReflectionClass tmp0 = coo_ReflectionClass();
          ((c_ReflectionClass*)tmp0.get()->create(v_name));
          v_cls = tmp0;
        }
        if (v_cls->t_isinterface()) {
          {
            {
              const Variant &tmp0((v_cls->t_getname()));
              v_ret.set(tmp0, (VarNR(v_cls)));
            }
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1031 */
Array c_ReflectionClass::t_gettraits() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getTraits);
  Array v_ret;
  Primitive v_name = 0;
  Variant v__;
  p_ReflectionClass v_cls;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs77820fcc, "traits"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          p_ReflectionClass tmp0 = coo_ReflectionClass();
          ((c_ReflectionClass*)tmp0.get()->create(v_name));
          v_cls = tmp0;
        }
        if (v_cls->t_istrait()) {
          {
            {
              const Variant &tmp0((v_cls->t_getname()));
              v_ret.set(tmp0, (VarNR(v_cls)));
            }
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1052 */
Array c_ReflectionClass::t_getinterfacenames() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getInterfaceNames);
  Array v_ret;
  Primitive v_name = 0;
  Variant v__;
  p_ReflectionClass v_cls;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs4fb8e254, "interfaces"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          p_ReflectionClass tmp0 = coo_ReflectionClass();
          ((c_ReflectionClass*)tmp0.get()->create(v_name));
          v_cls = tmp0;
        }
        if (v_cls->t_isinterface()) {
          {
            {
              const Variant &tmp0((v_cls->t_getname()));
              v_ret.append((tmp0));
            }
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1063 */
Array c_ReflectionClass::t_gettraitnames() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getTraitNames);
  Array v_ret;
  Primitive v_name = 0;
  Variant v__;
  p_ReflectionClass v_cls;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs77820fcc, "traits"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          p_ReflectionClass tmp0 = coo_ReflectionClass();
          ((c_ReflectionClass*)tmp0.get()->create(v_name));
          v_cls = tmp0;
        }
        if (v_cls->t_istrait()) {
          {
            {
              const Variant &tmp0((v_cls->t_getname()));
              v_ret.append((tmp0));
            }
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1074 */
Array c_ReflectionClass::t_gettraitaliases() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getTraitAliases);
  Array v_ret;
  Primitive v_old_name = 0;
  Variant v_new_name;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs765d4a13, "trait_aliases"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_new_name);
      v_old_name.assignVal(iter3.first());
      {
        v_ret.set(v_old_name, (v_new_name));
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1092 */
bool c_ReflectionClass::t_isinterface() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isInterface);
  return t_check(NAMVAR(s_sys_svs7228e959, "interface"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1104 */
bool c_ReflectionClass::t_isabstract() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isAbstract);
  return t_check(NAMVAR(s_sys_svs12c8a8a6, "abstract"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1116 */
bool c_ReflectionClass::t_isfinal() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isFinal);
  return t_check(NAMVAR(s_sys_svs2145036e, "final"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1120 */
bool c_ReflectionClass::t_istrait() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isTrait);
  return t_check(NAMVAR(s_sys_svs22824d6b, "trait"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1133 */
Variant c_ReflectionClass::t_getmodifiers() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getModifiers);
  return t_fetch(NAMVAR(s_sys_svs1f244c80, "modifiers"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1147 */
bool c_ReflectionClass::t_isinstance(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isInstance);
  ObjectData *obj_tmp UNUSED;
  return x_hphp_instanceof(toObject(v_obj), toString(m_name));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1160 */
Object c_ReflectionClass::t_newinstance(int num_args, Array args /* = Array() */) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::newInstance);
  Array v_args;

  ObjectData *obj_tmp UNUSED;
  {
    const Array &tmp0(((args.isNull() ? Array::Create() : args)));
    v_args = tmp0;
  }
  return x_hphp_create_object(toString(m_name), v_args);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1179 */
Object c_ReflectionClass::t_newinstanceargs(CVarRef v_args) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::newInstanceArgs);
  ObjectData *obj_tmp UNUSED;
  {
    const String &tmp0((toString(m_name)));
    const Array &tmp1((toArray(x_array_values(v_args))));
    return x_hphp_create_object(tmp0, tmp1);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1193 */
Variant c_ReflectionClass::t_getparentclass() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getParentClass);
  Variant v_parent;

  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs7b10fd8c, "parent"))));
    v_parent.assignVal(tmp0);
  }
  if (empty(v_parent)) {
    {
      return false;
    }
  }
  {
    p_ReflectionClass tmp0 = coo_ReflectionClass();
    return ((c_ReflectionClass*)tmp0.get()->create(v_parent), tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1212 */
Variant c_ReflectionClass::t_issubclassof(Variant v_cls) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isSubclassOf);
  Primitive v_name = 0;
  Variant v__;
  Variant v_parent;

  if (instanceOf(v_cls, NAMSTR(s_sys_ss7c63c2bb, "ReflectionClass"))) {
    {
      {
        const Variant &tmp0((v_cls.o_getPublic(NAMSTR(s_sys_ss5c3cbddc, "name"), true)));
        v_cls.assignVal(tmp0);
      }
    }
  }
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs4fb8e254, "interfaces"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          bool tmp0;
          {
            int64 tmp1((x_strcasecmp(toString(v_cls), toString(v_name))));
            tmp0 = (equal(tmp1, 0LL));
          }
          if (tmp0) {
            {
              return true;
            }
          }
        }
      }
    }
  }
  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs7b10fd8c, "parent"))));
    v_parent.assignVal(tmp0);
  }
  if (empty(v_parent)) {
    {
      return false;
    }
  }
  {
    bool tmp0;
    {
      int64 tmp1((x_strcasecmp(toString(v_cls), toString(v_parent))));
      tmp0 = (equal(tmp1, 0LL));
    }
    if (tmp0) {
      {
        return true;
      }
    }
  }
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = t_getparentclass();
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss5d355b2b, "isSubclassOf"), 0x1926C97E);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_cls));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1241 */
Array c_ReflectionClass::t_getstaticproperties() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getStaticProperties);
  Array v_ret;
  Variant v_prop;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_getproperties();
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_prop);
      {
        {
          bool tmp0;
          {
            MethodCallPackage mcp1;
            CVarRef obj1 = v_prop;
            mcp1.methodCall((obj1), NAMSTR(s_sys_ss404bf1b4, "isStatic"), 0x68CC0B19);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
          }
          if (tmp0) {
            {
              {
                const Variant &tmp0((v_prop.o_getPublic(NAMSTR(s_sys_ss5c3cbddc, "name"), true)));
                v_ret.set(tmp0, (v_prop));
              }
            }
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1262 */
Variant c_ReflectionClass::t_getstaticpropertyvalue(CVarRef v_name, CVarRef v_default //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getStaticPropertyValue);
  ObjectData *obj_tmp UNUSED;
  {
    bool tmp0;
    {
      bool tmp1 = (t_hasproperty(v_name));
      if (tmp1) {
        const p_ReflectionProperty &tmp2((t_getproperty(v_name)));
        tmp1 = (tmp2->t_isstatic());
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        return x_hphp_get_static_property(toString(m_name), toString(v_name));
      }
    }
  }
  return v_default;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1283 */
void c_ReflectionClass::t_setstaticpropertyvalue(CVarRef v_name, CVarRef v_value) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::setStaticPropertyValue);
  ObjectData *obj_tmp UNUSED;
  x_hphp_set_static_property(toString(m_name), toString(v_name), v_value);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1297 */
Array c_ReflectionClass::t_getdefaultproperties() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getDefaultProperties);
  Array v_ret;
  Variant v_prop;

  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = t_getproperties();
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_prop);
      {
        {
          bool tmp0;
          {
            MethodCallPackage mcp1;
            CVarRef obj1 = v_prop;
            mcp1.methodCall((obj1), NAMSTR(s_sys_ss1dad4367, "isDefault"), 0x7AB11F15);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (toBoolean((mcp1.bindClass(fi)->getMeth0Args())(mcp1, 0)));
          }
          if (tmp0) {
            {
              {
                const Variant &tmp0((v_prop.o_getPublic(NAMSTR(s_sys_ss5c3cbddc, "name"), true)));
                v_ret.set(tmp0, (v_prop));
              }
            }
          }
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1316 */
Variant c_ReflectionClass::t_isiterateable() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::isIterateable);
  return t_issubclassof(NAMSTR(s_sys_ss12306c9b, "ArrayAccess"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1331 */
bool c_ReflectionClass::t_implementsinterface(Variant v_cls) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::implementsInterface);
  Primitive v_name = 0;
  Variant v__;

  if (instanceOf(v_cls, NAMSTR(s_sys_ss7c63c2bb, "ReflectionClass"))) {
    {
      {
        const Variant &tmp0((v_cls.o_getPublic(NAMSTR(s_sys_ss5c3cbddc, "name"), true)));
        v_cls.assignVal(tmp0);
      }
    }
  }
  if (!(x_interface_exists(toString(v_cls)))) {
    {
      {
        p_ReflectionException tmp0 = coo_ReflectionException();
        throw_exception(((c_ReflectionException*)tmp0.get()->create(concat(toString(v_cls), NAMSTR(s_sys_ss5a497f2a, " is not an Interface"))), tmp0));
      }
    }
  }
  {
    LOOP_COUNTER(1);
    Variant map2 = t_fetch(NAMVAR(s_sys_svs4fb8e254, "interfaces"));
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__);
      v_name.assignVal(iter3.first());
      {
        {
          bool tmp0;
          {
            int64 tmp1((x_strcasecmp(toString(v_cls), toString(v_name))));
            tmp0 = (equal(tmp1, 0LL));
          }
          if (tmp0) {
            {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1356 */
Variant c_ReflectionClass::t_getextension() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getExtension);
  return t_fetch(NAMVAR(s_sys_svs69bf4500, "extension"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1370 */
Variant c_ReflectionClass::t_getextensionname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getExtensionName);
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = t_fetch(NAMVAR(s_sys_svs69bf4500, "extension"));
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss42df217e, "getName"), 0x4C198965);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1374 */
Variant c_ReflectionClass::t_getattribute(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getAttribute);
  Variant v_attrs;

  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs0fc37e03, "attributes"))));
    v_attrs.assignVal(tmp0);
  }
  {
    return (isset(v_attrs, v_name) ? ((Variant)(v_attrs.rvalAt(v_name, AccessFlags::Error))) : ((Variant)(null)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1379 */
Variant c_ReflectionClass::t_getattributes() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getAttributes);
  return t_fetch(NAMVAR(s_sys_svs0fc37e03, "attributes"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1383 */
Variant c_ReflectionClass::t_getattributerecursive(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getAttributeRecursive);
  Variant v_attrs;

  {
    const Variant &tmp0((t_fetch(NAMVAR(s_sys_svs1573187a, "attributes_rec"))));
    v_attrs.assignVal(tmp0);
  }
  {
    return (isset(v_attrs, v_name) ? ((Variant)(v_attrs.rvalAt(v_name, AccessFlags::Error))) : ((Variant)(null)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1388 */
Variant c_ReflectionClass::t_getattributesrecursive() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionClass, ReflectionClass::getAttributesRecursive);
  return t_fetch(NAMVAR(s_sys_svs1573187a, "attributes_rec"));
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1991 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionExtension)
extern const InstanceOfInfo cw_ReflectionExtension$$instanceof_table[] = {
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
  {0x4FA06573,1,"ReflectionExtension",&cw_ReflectionExtension},
};
const int cw_ReflectionExtension$$instanceof_index[] = {
  3,
  -1,0,-1,1,
};
extern const CallInfo ci_ReflectionExtension$$getconstants = { (void*)&c_ReflectionExtension::i_getconstants, (void*)&c_ReflectionExtension::ifa_getconstants, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$export = { (void*)&c_ReflectionExtension::i_export, (void*)&c_ReflectionExtension::ifa_export, 2, 12, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$info = { (void*)&c_ReflectionExtension::i_info, (void*)&c_ReflectionExtension::ifa_info, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$getfunctions = { (void*)&c_ReflectionExtension::i_getfunctions, (void*)&c_ReflectionExtension::ifa_getfunctions, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$getname = { (void*)&c_ReflectionExtension::i_getname, (void*)&c_ReflectionExtension::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$__tostring = { (void*)&c_ReflectionExtension::i___tostring, (void*)&c_ReflectionExtension::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$getversion = { (void*)&c_ReflectionExtension::i_getversion, (void*)&c_ReflectionExtension::ifa_getversion, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$getclasses = { (void*)&c_ReflectionExtension::i_getclasses, (void*)&c_ReflectionExtension::ifa_getclasses, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$getinientries = { (void*)&c_ReflectionExtension::i_getinientries, (void*)&c_ReflectionExtension::ifa_getinientries, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$getclassnames = { (void*)&c_ReflectionExtension::i_getclassnames, (void*)&c_ReflectionExtension::ifa_getclassnames, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionExtension$$__construct = { (void*)&c_ReflectionExtension::i___construct, (void*)&c_ReflectionExtension::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_ReflectionExtension::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ReflectionExtension::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_ReflectionExtension::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant c_ReflectionExtension::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_ReflectionExtension::i_getversion(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getversion);
}
Variant c_ReflectionExtension::i_getfunctions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfunctions);
}
Variant c_ReflectionExtension::i_getconstants(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getconstants);
}
Variant c_ReflectionExtension::i_getinientries(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getinientries);
}
Variant c_ReflectionExtension::i_getclasses(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getclasses);
}
Variant c_ReflectionExtension::i_getclassnames(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getclassnames);
}
Variant c_ReflectionExtension::i_info(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_info);
}
Variant NEVER_INLINE c_ReflectionExtension::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("ReflectionExtension::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_ReflectionExtension::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("ReflectionExtension::export", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (c_ReflectionExtension::t_export(arg0));
  CVarRef arg1(a1);
  return (c_ReflectionExtension::t_export(arg0, arg1));
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getName", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getversion(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getversion, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getVersion", 0, 1);
  return (self->t_getversion());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getfunctions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfunctions, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getFunctions", 0, 1);
  return (self->t_getfunctions());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getconstants(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconstants, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getConstants", 0, 1);
  return (self->t_getconstants());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getinientries(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getinientries, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getINIEntries", 0, 1);
  return (self->t_getinientries());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getclasses(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getclasses, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getClasses", 0, 1);
  return (self->t_getclasses());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_getclassnames(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getclassnames, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::getClassNames", 0, 1);
  return (self->t_getclassnames());
}
Variant NEVER_INLINE c_ReflectionExtension::ifa_info(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_info, coo_ReflectionExtension);
  }
  c_ReflectionExtension *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionExtension*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionExtension::info", 0, 1);
  return (self->t_info());
}
extern const MethodCallInfoTable cw_ReflectionExtension$$call_info_table[] = {
  { 0x4859EDC2, 1, 10, "getClasses", &ci_ReflectionExtension$$getclasses },
  { 0x4C198965, 1, 7, "getName", &ci_ReflectionExtension$$getname },
  { 0x498E70E8, 1, 6, "export", &ci_ReflectionExtension$$export },
  { 0x622F17AF, 1, 12, "getFunctions", &ci_ReflectionExtension$$getfunctions },
  { 0x14B34A13, 1, 10, "__toString", &ci_ReflectionExtension$$__tostring },
  { 0x11341594, 1, 13, "getClassNames", &ci_ReflectionExtension$$getclassnames },
  { 0x13143955, 0, 12, "getConstants", &ci_ReflectionExtension$$getconstants },
  { 0x1D03D335, 1, 13, "getINIEntries", &ci_ReflectionExtension$$getinientries },
  { 0x3BE3D316, 1, 10, "getVersion", &ci_ReflectionExtension$$getversion },
  { 0x229C615F, 0, 11, "__construct", &ci_ReflectionExtension$$__construct },
  { 0x157D479F, 1, 4, "info", &ci_ReflectionExtension$$info },
};
extern const int cw_ReflectionExtension$$call_info_index[] = {
  31,
  -1,-1,0,-1,-1,1,-1,-1,
  2,-1,-1,-1,-1,-1,-1,3,
  -1,-1,-1,4,5,6,8,-1,
  -1,-1,-1,-1,-1,-1,-1,9,

};
c_ReflectionExtension *c_ReflectionExtension::create(CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_name);
  return this;
}
extern const MethodCallInfoTable cw_ReflectionExtension$$call_info_table[];
extern const int cw_ReflectionExtension$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionExtension$$instanceof_table[];
extern const int cw_ReflectionExtension$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionExtension = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionExtension,
  cw_ReflectionExtension$$call_info_table,cw_ReflectionExtension$$call_info_index,
  cw_ReflectionExtension$$instanceof_table,cw_ReflectionExtension$$instanceof_index,
  &c_ReflectionExtension::s_class_name,
  &c_ReflectionExtension::os_prop_table,&ci_ReflectionExtension$$__construct,0,0,0x0,
  &c_ReflectionExtension::s_cls
};
/* SRC: classes/reflection.php line 1995 */
void c_ReflectionExtension::t___construct(Variant v_name) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::__construct);
  ObjectData *obj_tmp UNUSED;
  {
    const Array &tmp0((x_hphp_get_extension_info(toString(v_name))));
    m_info = tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 1999 */
String c_ReflectionExtension::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::__toString);
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2019 */
Variant c_ReflectionExtension::t_export(CVarRef v_name, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::export);
  p_ReflectionExtension v_obj;
  String v_str;

  {
    p_ReflectionExtension tmp0 = coo_ReflectionExtension();
    ((c_ReflectionExtension*)tmp0.get()->create(v_name));
    v_obj = tmp0;
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2037 */
Variant c_ReflectionExtension::t_getname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getName);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2050 */
Variant c_ReflectionExtension::t_getversion() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getVersion);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss7cd91db4, "version"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2066 */
Variant c_ReflectionExtension::t_getfunctions() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getFunctions);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss48396b02, "functions"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2079 */
Variant c_ReflectionExtension::t_getconstants() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getConstants);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss623ae369, "constants"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2093 */
Variant c_ReflectionExtension::t_getinientries() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getINIEntries);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss4edef5dc, "ini"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2108 */
Variant c_ReflectionExtension::t_getclasses() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getClasses);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss0415e4a0, "classes"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2123 */
Array c_ReflectionExtension::t_getclassnames() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::getClassNames);
  Array v_ret;
  Variant v_cls;

  ObjectData *obj_tmp UNUSED;
  v_ret = s_sys_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = m_info.rvalAt(NAMSTR(s_sys_ss0415e4a0, "classes"), AccessFlags::Error_Key);
    for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_cls);
      {
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = v_cls;
          mcp0.methodCall((obj0), NAMSTR(s_sys_ss42df217e, "getName"), 0x4C198965);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)));
          v_ret.append((tmp1));
        }
      }
    }
  }
  return v_ret;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 2139 */
Variant c_ReflectionExtension::t_info() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionExtension, ReflectionExtension::info);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss33988b3e, "info"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 37 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ReflectionParameter)
extern const InstanceOfInfo cw_ReflectionParameter$$instanceof_table[] = {
  {0x47C0A605,1,"Reflector",(const ObjectStaticCallbacks*)2},
  {0x68A05993,1,"ReflectionParameter",&cw_ReflectionParameter},
};
const int cw_ReflectionParameter$$instanceof_index[] = {
  3,
  -1,0,-1,1,
};
extern const CallInfo ci_ReflectionParameter$$getdeclaringclass = { (void*)&c_ReflectionParameter::i_getdeclaringclass, (void*)&c_ReflectionParameter::ifa_getdeclaringclass, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$ispassedbyreference = { (void*)&c_ReflectionParameter::i_ispassedbyreference, (void*)&c_ReflectionParameter::ifa_ispassedbyreference, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$isarray = { (void*)&c_ReflectionParameter::i_isarray, (void*)&c_ReflectionParameter::ifa_isarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$getname = { (void*)&c_ReflectionParameter::i_getname, (void*)&c_ReflectionParameter::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$allowsnull = { (void*)&c_ReflectionParameter::i_allowsnull, (void*)&c_ReflectionParameter::ifa_allowsnull, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$export = { (void*)&c_ReflectionParameter::i_export, (void*)&c_ReflectionParameter::ifa_export, 3, 12, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$__construct = { (void*)&c_ReflectionParameter::i___construct, (void*)&c_ReflectionParameter::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$getclass = { (void*)&c_ReflectionParameter::i_getclass, (void*)&c_ReflectionParameter::ifa_getclass, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$gettypehinttext = { (void*)&c_ReflectionParameter::i_gettypehinttext, (void*)&c_ReflectionParameter::ifa_gettypehinttext, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$__tostring = { (void*)&c_ReflectionParameter::i___tostring, (void*)&c_ReflectionParameter::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$isdefaultvalueavailable = { (void*)&c_ReflectionParameter::i_isdefaultvalueavailable, (void*)&c_ReflectionParameter::ifa_isdefaultvalueavailable, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$isoptional = { (void*)&c_ReflectionParameter::i_isoptional, (void*)&c_ReflectionParameter::ifa_isoptional, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$getdefaultvaluetext = { (void*)&c_ReflectionParameter::i_getdefaultvaluetext, (void*)&c_ReflectionParameter::ifa_getdefaultvaluetext, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$getdefaultvalue = { (void*)&c_ReflectionParameter::i_getdefaultvalue, (void*)&c_ReflectionParameter::ifa_getdefaultvalue, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ReflectionParameter$$getposition = { (void*)&c_ReflectionParameter::i_getposition, (void*)&c_ReflectionParameter::ifa_getposition, 0, 4, 0x0000000000000000LL};
Variant c_ReflectionParameter::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ReflectionParameter::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_ReflectionParameter::i_export(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_export);
}
Variant c_ReflectionParameter::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_ReflectionParameter::i_ispassedbyreference(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_ispassedbyreference);
}
Variant c_ReflectionParameter::i_getdeclaringclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdeclaringclass);
}
Variant c_ReflectionParameter::i_getclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getclass);
}
Variant c_ReflectionParameter::i_gettypehinttext(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettypehinttext);
}
Variant c_ReflectionParameter::i_isarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isarray);
}
Variant c_ReflectionParameter::i_allowsnull(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_allowsnull);
}
Variant c_ReflectionParameter::i_isoptional(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isoptional);
}
Variant c_ReflectionParameter::i_isdefaultvalueavailable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdefaultvalueavailable);
}
Variant c_ReflectionParameter::i_getdefaultvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdefaultvalue);
}
Variant c_ReflectionParameter::i_getdefaultvaluetext(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdefaultvaluetext);
}
Variant c_ReflectionParameter::i_getposition(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getposition);
}
Variant NEVER_INLINE c_ReflectionParameter::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("ReflectionParameter::__construct", count, 2, 2, 2);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_ReflectionParameter::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_export(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("ReflectionParameter::export", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (c_ReflectionParameter::t_export(arg0, arg1));
  CVarRef arg2(a2);
  return (c_ReflectionParameter::t_export(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getName", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_ispassedbyreference(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ispassedbyreference, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::isPassedByReference", 0, 1);
  return (self->t_ispassedbyreference());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_getdeclaringclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdeclaringclass, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getDeclaringClass", 0, 1);
  return (self->t_getdeclaringclass());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_getclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getclass, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getClass", 0, 1);
  return (self->t_getclass());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_gettypehinttext(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettypehinttext, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getTypehintText", 0, 1);
  return (self->t_gettypehinttext());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_isarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isarray, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::isArray", 0, 1);
  return (self->t_isarray());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_allowsnull(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_allowsnull, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::allowsNull", 0, 1);
  return (self->t_allowsnull());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_isoptional(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isoptional, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::isOptional", 0, 1);
  return (self->t_isoptional());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_isdefaultvalueavailable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdefaultvalueavailable, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::isDefaultValueAvailable", 0, 1);
  return (self->t_isdefaultvalueavailable());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_getdefaultvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdefaultvalue, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getDefaultValue", 0, 1);
  return (self->t_getdefaultvalue());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_getdefaultvaluetext(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdefaultvaluetext, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getDefaultValueText", 0, 1);
  return (self->t_getdefaultvaluetext());
}
Variant NEVER_INLINE c_ReflectionParameter::ifa_getposition(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getposition, coo_ReflectionParameter);
  }
  c_ReflectionParameter *self ATTRIBUTE_UNUSED (static_cast<c_ReflectionParameter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ReflectionParameter::getPosition", 0, 1);
  return (self->t_getposition());
}
extern const MethodCallInfoTable cw_ReflectionParameter$$call_info_table[] = {
  { 0x559D6063, 1, 17, "getDeclaringClass", &ci_ReflectionParameter$$getdeclaringclass },
  { 0x4C198965, 1, 7, "getName", &ci_ReflectionParameter$$getname },
  { 0x498E70E8, 0, 6, "export", &ci_ReflectionParameter$$export },
  { 0x3F3BB8C8, 1, 11, "getPosition", &ci_ReflectionParameter$$getposition },
  { 0x633E9909, 0, 8, "getClass", &ci_ReflectionParameter$$getclass },
  { 0x504C4C09, 1, 10, "allowsNull", &ci_ReflectionParameter$$allowsnull },
  { 0x47951E0C, 0, 15, "getDefaultValue", &ci_ReflectionParameter$$getdefaultvalue },
  { 0x679CF8EC, 1, 19, "getDefaultValueText", &ci_ReflectionParameter$$getdefaultvaluetext },
  { 0x3DD89FB1, 1, 19, "isPassedByReference", &ci_ReflectionParameter$$ispassedbyreference },
  { 0x11257C92, 1, 23, "isDefaultValueAvailable", &ci_ReflectionParameter$$isdefaultvalueavailable },
  { 0x14B34A13, 1, 10, "__toString", &ci_ReflectionParameter$$__tostring },
  { 0x3AB22735, 1, 10, "isOptional", &ci_ReflectionParameter$$isoptional },
  { 0x0F25871D, 1, 7, "isArray", &ci_ReflectionParameter$$isarray },
  { 0x229C615F, 0, 11, "__construct", &ci_ReflectionParameter$$__construct },
  { 0x278083DF, 1, 15, "getTypehintText", &ci_ReflectionParameter$$gettypehinttext },
};
extern const int cw_ReflectionParameter$$call_info_index[] = {
  31,
  -1,-1,-1,0,-1,1,-1,-1,
  2,4,-1,-1,6,-1,-1,-1,
  -1,8,9,10,-1,11,-1,-1,
  -1,-1,-1,-1,-1,12,-1,13,

};
c_ReflectionParameter *c_ReflectionParameter::create(CVarRef v_func, CVarRef v_param) {
  CountableHelper h(this);
  init();
  t___construct(v_func, v_param);
  return this;
}
extern const MethodCallInfoTable cw_ReflectionParameter$$call_info_table[];
extern const int cw_ReflectionParameter$$call_info_index[];
extern const InstanceOfInfo cw_ReflectionParameter$$instanceof_table[];
extern const int cw_ReflectionParameter$$instanceof_index[];
const ObjectStaticCallbacks cw_ReflectionParameter = {
  (ObjectData*(*)(ObjectData*))coo_ReflectionParameter,
  cw_ReflectionParameter$$call_info_table,cw_ReflectionParameter$$call_info_index,
  cw_ReflectionParameter$$instanceof_table,cw_ReflectionParameter$$instanceof_index,
  &c_ReflectionParameter::s_class_name,
  &c_ReflectionParameter::os_prop_table,&ci_ReflectionParameter$$__construct,0,0,0x0,
  &c_ReflectionParameter::s_cls
};
/* SRC: classes/reflection.php line 40 */
void c_ReflectionParameter::t___construct(Variant v_func, Variant v_param) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::__construct);
  Variant v_params;

  Variant tmp_ref;
  ObjectData *obj_tmp UNUSED;
  if ((toBoolean(v_func) && toBoolean(v_param))) {
    {
      {
        MethodCallPackage mcp0;
        CVarRef obj0 = v_func;
        mcp0.methodCall((obj0), NAMSTR(s_sys_ss1902bc14, "getParameters"), 0x32C2A32D);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        Variant tmp1(((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)));
        v_params.assignVal(tmp1);
      }
      {
        const Variant &tmp0((v_params.rvalRef(v_param, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sys_ss33988b3e, "info"), true)));
        m_info.assignVal(tmp0);
        tmp_ref.unset();
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 47 */
String c_ReflectionParameter::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::__toString);
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 67 */
Variant c_ReflectionParameter::t_export(CVarRef v_func, CVarRef v_param, CVarRef v_ret //  = false_varNR
) {
  STATIC_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::export);
  p_ReflectionParameter v_obj;
  String v_str;

  {
    p_ReflectionParameter tmp0 = coo_ReflectionParameter();
    ((c_ReflectionParameter*)tmp0.get()->create(v_func, v_param));
    v_obj = tmp0;
  }
  v_str = (toString(v_obj));
  if (toBoolean(v_ret)) {
    {
      return v_str;
    }
  }
  print(v_str);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 85 */
Variant c_ReflectionParameter::t_getname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getName);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss5c3cbddc, "name"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 100 */
bool c_ReflectionParameter::t_ispassedbyreference() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::isPassedByReference);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss134fd5fa, "ref"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 114 */
Variant c_ReflectionParameter::t_getdeclaringclass() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getDeclaringClass);
  ObjectData *obj_tmp UNUSED;
  if (empty(m_info, NAMSTR(s_sys_ss482dbd12, "class"), true)) {
    {
      return null;
    }
  }
  {
    p_ReflectionClass tmp0 = coo_ReflectionClass();
    const Variant &tmp1((m_info.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key)));
    return ((c_ReflectionClass*)tmp0.get()->create(tmp1), tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 131 */
Variant c_ReflectionParameter::t_getclass() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getClass);
  String v_ltype;
  Array v_nonClassTypehints;

  ObjectData *obj_tmp UNUSED;
  if (empty(m_info, NAMSTR(s_sys_ss724a760a, "type"), true)) {
    {
      return null;
    }
  }
  {
    const String &tmp0((toString(m_info.rvalAt(NAMSTR(s_sys_ss724a760a, "type"), AccessFlags::Error_Key))));
    const String &tmp1((x_strtolower(tmp0)));
    v_ltype = tmp1;
  }
  if (x_hphp_scalar_typehints_enabled()) {
    {
      v_nonClassTypehints = s_sys_sa4a9657b8;
      if (isset(v_nonClassTypehints, v_ltype)) {
        {
          return null;
        }
      }
    }
  }
  else if (same(v_ltype, NAMSTR(s_sys_ss0c04b960, "array"))) {
    {
      return null;
    }
  }
  {
    p_ReflectionClass tmp0 = coo_ReflectionClass();
    const Variant &tmp1((m_info.rvalAt(NAMSTR(s_sys_ss724a760a, "type"), AccessFlags::Error_Key)));
    return ((c_ReflectionClass*)tmp0.get()->create(tmp1), tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 157 */
Variant c_ReflectionParameter::t_gettypehinttext() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getTypehintText);
  ObjectData *obj_tmp UNUSED;
  {
    bool tmp0;
    {
      tmp0 = (isset(m_info, NAMSTR(s_sys_ss724a760a, "type"), true));
    }
    if (tmp0) {
      {
        return m_info.rvalAt(NAMSTR(s_sys_ss724a760a, "type"), AccessFlags::Error_Key);
      }
    }
  }
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 173 */
bool c_ReflectionParameter::t_isarray() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::isArray);
  ObjectData *obj_tmp UNUSED;
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss724a760a, "type"), AccessFlags::Error_Key)));
    return equal(tmp0, NAMSTR(s_sys_ss0c04b960, "array"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 187 */
bool c_ReflectionParameter::t_allowsnull() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::allowsNull);
  ObjectData *obj_tmp UNUSED;
  {
    return isset(m_info, NAMSTR(s_sys_ss6dd47a43, "nullable"), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 200 */
bool c_ReflectionParameter::t_isoptional() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::isOptional);
  ObjectData *obj_tmp UNUSED;
  return x_array_key_exists(NAMVAR(s_sys_svs570270cc, "default"), m_info);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 215 */
bool c_ReflectionParameter::t_isdefaultvalueavailable() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::isDefaultValueAvailable);
  ObjectData *obj_tmp UNUSED;
  return x_array_key_exists(NAMVAR(s_sys_svs570270cc, "default"), m_info);
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 230 */
Variant c_ReflectionParameter::t_getdefaultvalue() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getDefaultValue);
  Variant v_defaultValue;

  ObjectData *obj_tmp UNUSED;
  if (!(t_isoptional())) {
    {
      throw_exception(p_ReflectionException(((c_ReflectionException*)coo_ReflectionException())->create(NAMSTR(s_sys_ss4ad0c110, "Parameter is not optional"))));
    }
  }
  {
    const Variant &tmp0((m_info.rvalAt(NAMSTR(s_sys_ss570270cc, "default"), AccessFlags::Error_Key)));
    v_defaultValue.assignVal(tmp0);
  }
  if (instanceOf(v_defaultValue, NAMSTR(s_sys_ss41c7a197, "stdclass"))) {
    {
      {
        bool tmp0;
        {
          tmp0 = (v_defaultValue.o_isset(NAMSTR(s_sys_ss482dbd12, "class")));
        }
        if (tmp0) {
          {
            {
              const Variant &tmp0((v_defaultValue.o_getPublic(NAMSTR(s_sys_ss482dbd12, "class"), true)));
              const Variant &tmp1((v_defaultValue.o_getPublic(NAMSTR(s_sys_ss5c3cbddc, "name"), true)));
              return x_hphp_get_class_constant(tmp0, tmp1);
            }
          }
        }
      }
      {
        const String &tmp0((toString(v_defaultValue.o_getPublic(NAMSTR(s_sys_ss309aefff, "msg"), true))));
        x_hphp_throw_fatal_error(tmp0);
      }
    }
  }
  return v_defaultValue;
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 245 */
Variant c_ReflectionParameter::t_getdefaultvaluetext() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getDefaultValueText);
  ObjectData *obj_tmp UNUSED;
  {
    bool tmp0;
    {
      tmp0 = (isset(m_info, NAMSTR(s_sys_ss76ac0169, "defaultText"), true));
    }
    if (tmp0) {
      {
        return m_info.rvalAt(NAMSTR(s_sys_ss76ac0169, "defaultText"), AccessFlags::Error_Key);
      }
    }
  }
  return NAMSTR(s_sys_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: classes/reflection.php line 262 */
Variant c_ReflectionParameter::t_getposition() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ReflectionParameter, ReflectionParameter::getPosition);
  ObjectData *obj_tmp UNUSED;
  return m_info.rvalAt(NAMSTR(s_sys_ss40ff3081, "index"), AccessFlags::Error_Key);
}
namespace hphp_impl_splitter {}
ObjectData *coo_ReflectionFunctionAbstract() {
  return NEWOBJ(c_ReflectionFunctionAbstract)();
}
ObjectData *coo_ReflectionException() {
  return NEWOBJ(c_ReflectionException)();
}
ObjectData *coo_ReflectionObject() {
  return NEWOBJ(c_ReflectionObject)();
}
ObjectData *coo_ReflectionMethod() {
  return NEWOBJ(c_ReflectionMethod)();
}
ObjectData *coo_ReflectionProperty() {
  return NEWOBJ(c_ReflectionProperty)();
}
ObjectData *coo_ReflectionFunction() {
  return NEWOBJ(c_ReflectionFunction)();
}
ObjectData *coo_ReflectionClass() {
  return NEWOBJ(c_ReflectionClass)();
}
ObjectData *coo_ReflectionExtension() {
  return NEWOBJ(c_ReflectionExtension)();
}
ObjectData *coo_ReflectionParameter() {
  return NEWOBJ(c_ReflectionParameter)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_sys_svi86af027e, 16LL),
  (int64)&NAMVAR(s_sys_svif2a1fb10, 32LL),
  (int64)&NAMVAR(s_sys_svi1abc09e0, 64LL),
  (int64)&s_sys_sva00000000,
  (int64)&null_variant,
  (int64)&NAMVAR(s_sys_svibf7d1df5, 262144LL),
  (int64)&NAMVAR(s_sys_svib794f8ce, 1LL),
  (int64)&NAMVAR(s_sys_svi543f7d14, 1024LL),
  (int64)&NAMVAR(s_sys_svi6af020b2, 256LL),
  (int64)&NAMVAR(s_sys_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_sys_svi5e544a31, 4LL),
  (int64)&NAMVAR(s_sys_svid5e04164, 512LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x3BE2773A,1,0,0,100,3,0,&NAMSTR(s_sys_ss3be2773a, "IS_IMPLICIT_ABSTRACT") },
  {0x219B529E,1,1,0,36,3,0,&NAMSTR(s_sys_ss219b529e, "IS_EXPLICIT_ABSTRACT") },
  {0x4A58AD66,0,2,0,100,3,0,&NAMSTR(s_sys_ss4a58ad66, "IS_FINAL") },

  {0x127C55C7,0,3,0,73,8,offsetof(SystemGlobals,s_ReflectionClass$$fetched),&NAMSTR(s_sys_ss672cf5e5, "fetched") },

  {0x77E35232,1,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionClass, m_name),&NAMSTR(s_sys_ss5c3cbddc, "name") },
  {0x157D479F,0,4,17,65,-1,GET_PROPERTY_OFFSET(c_ReflectionClass, m_info),&NAMSTR(s_sys_ss04e1d89d, "\000ReflectionClass\000info") },

  {0x77E35232,1,4,21,65,-1,GET_PROPERTY_OFFSET(c_ReflectionExtension, m_name),&NAMSTR(s_sys_ss0bbc8ede, "\000ReflectionExtension\000name") },
  {0x157D479F,0,4,21,65,8,GET_PROPERTY_OFFSET(c_ReflectionExtension, m_info),&NAMSTR(s_sys_ss5596f6c8, "\000ReflectionExtension\000info") },

  {0x2E7B0EF6,0,5,0,100,3,0,&NAMSTR(s_sys_ss2e7b0ef6, "IS_DEPRECATED") },

  {0x157D479F,0,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionFunctionAbstract, m_info),&NAMSTR(s_sys_ss33988b3e, "info") },

  {0x3EE05120,2,6,0,100,3,0,&NAMSTR(s_sys_ss3ee05120, "IS_STATIC") },
  {0x4B04C741,2,7,0,100,3,0,&NAMSTR(s_sys_ss4b04c741, "IS_PRIVATE") },
  {0x69C1EF03,3,8,0,36,3,0,&NAMSTR(s_sys_ss69c1ef03, "IS_PUBLIC") },
  {0x6302A373,1,9,0,100,3,0,&NAMSTR(s_sys_ss6302a373, "IS_ABSTRACT") },
  {0x4A58AD66,0,10,0,100,3,0,&NAMSTR(s_sys_ss4a58ad66, "IS_FINAL") },
  {0x4272DC9E,-4,11,0,100,3,0,&NAMSTR(s_sys_ss4272dc9e, "IS_PROTECTED") },

  {0x1F74C210,0,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionMethod, m_class),&NAMSTR(s_sys_ss482dbd12, "class") },
  {0x77E35232,-1,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionMethod, m_name),&NAMSTR(s_sys_ss5c3cbddc, "name") },

  {0x157D479F,0,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionParameter, m_info),&NAMSTR(s_sys_ss33988b3e, "info") },

  {0x3EE05120,2,6,0,100,3,0,&NAMSTR(s_sys_ss3ee05120, "IS_STATIC") },
  {0x4B04C741,0,7,0,100,3,0,&NAMSTR(s_sys_ss4b04c741, "IS_PRIVATE") },
  {0x69C1EF03,1,8,0,100,3,0,&NAMSTR(s_sys_ss69c1ef03, "IS_PUBLIC") },
  {0x4272DC9E,-2,11,0,100,3,0,&NAMSTR(s_sys_ss4272dc9e, "IS_PROTECTED") },

  {0x1F74C210,0,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionProperty, m_class),&NAMSTR(s_sys_ss482dbd12, "class") },
  {0x77E35232,-1,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionProperty, m_name),&NAMSTR(s_sys_ss5c3cbddc, "name") },
  {0x157D479F,-1,4,0,68,-1,GET_PROPERTY_OFFSET(c_ReflectionProperty, m_info),&NAMSTR(s_sys_ss33988b3e, "info") },

};
static const int cpt_hash_entries[] = {
  // ReflectionClass hash
  -1,1,-1,-1,-1,0,-1,-1,
  3,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,4,-1,-1,-1,-1,5,
  // ReflectionClass lists
  5,-1,
  -1,
  -1,
  // ReflectionExtension hash
  -1,-1,0,-1,-1,-1,-1,1,
  // ReflectionExtension lists
  0,1,-1,
  -1,
  -1,
  // ReflectionFunction hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // ReflectionFunction lists
  -1,
  -1,
  -1,
  // ReflectionFunctionAbstract hash
  -1,-1,-1,-1,-1,-1,-1,0,
  // ReflectionFunctionAbstract lists
  -1,
  -1,
  -1,
  // ReflectionMethod hash
  -1,5,-1,-1,-1,-1,-1,-1,-1,4,-1,-1,2,-1,1,0,
  6,-1,7,-1,-1,-1,-1,-1,
  // ReflectionMethod lists
  -1,
  -1,
  -1,
  // ReflectionParameter hash
  -1,-1,-1,-1,-1,-1,-1,0,
  // ReflectionParameter lists
  -1,
  -1,
  -1,
  // ReflectionProperty hash
  -1,3,-1,-1,2,-1,1,0,
  4,-1,5,-1,-1,-1,-1,6,
  // ReflectionProperty lists
  -1,
  -1,
  -1,
  1,3,};
const ClassPropTable c_ReflectionClass::os_prop_table = {
  7,4,7,3,7,0,10,0,
  cpt_hash_entries+16,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_ReflectionExtension::os_prop_table = {
  7,0,-1,-1,-1,-1,11,0,
  cpt_hash_entries+28,0,cpt_table_entries+6,cpt_static_inits
};
const ClassPropTable c_ReflectionFunction::os_prop_table = {
  -1,-1,-1,-1,7,0,1,0,
  cpt_hash_entries+49,&c_ReflectionFunctionAbstract::os_prop_table,cpt_table_entries+8,cpt_static_inits
};
const ClassPropTable c_ReflectionFunctionAbstract::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+52,0,cpt_table_entries+9,cpt_static_inits
};
const ClassPropTable c_ReflectionMethod::os_prop_table = {
  7,7,-1,-1,15,0,9,0,
  cpt_hash_entries+79,&c_ReflectionFunctionAbstract::os_prop_table,cpt_table_entries+10,cpt_static_inits
};
const ClassPropTable c_ReflectionParameter::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+90,0,cpt_table_entries+18,cpt_static_inits
};
const ClassPropTable c_ReflectionProperty::os_prop_table = {
  7,6,-1,-1,7,0,9,0,
  cpt_hash_entries+109,0,cpt_table_entries+19,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_ReflectionClass::os_prop_table, cpt_hash_entries+120);

///////////////////////////////////////////////////////////////////////////////
}
