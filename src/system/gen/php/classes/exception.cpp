
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/exception.fws.h>
#include <php/classes/exception.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/exception.php line 346 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(PDOException)
extern const InstanceOfInfo cw_PDOException$$instanceof_table[] = {
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x519F77BD,1,"PDOException",&cw_PDOException},
};
const int cw_PDOException$$instanceof_index[] = {
  3,
  0,1,-1,-1,
};
extern const CallInfo ci_PDOException$$__construct = { (void*)&c_PDOException::i___construct, (void*)&c_PDOException::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_PDOException::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_PDOException::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_PDOException);
  }
  c_PDOException *self ATTRIBUTE_UNUSED (static_cast<c_PDOException*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("PDOException::__construct", 0, 2);
  return (self->t___construct(), null);
}
extern const MethodCallInfoTable cw_PDOException$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_PDOException$$__construct },
};
extern const int cw_PDOException$$call_info_index[] = {
  1,
  -1,0,
};
c_PDOException *c_PDOException::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_PDOException$$call_info_table[];
extern const int cw_PDOException$$call_info_index[];
extern const InstanceOfInfo cw_PDOException$$instanceof_table[];
extern const int cw_PDOException$$instanceof_index[];
const ObjectStaticCallbacks cw_PDOException = {
  (ObjectData*(*)(ObjectData*))coo_PDOException,
  cw_PDOException$$call_info_table,cw_PDOException$$call_info_index,
  cw_PDOException$$instanceof_table,cw_PDOException$$instanceof_index,
  &c_PDOException::s_class_name,
  &c_Exception::os_prop_table,&ci_PDOException$$__construct,0,&cw_Exception,0x0,
  &c_PDOException::s_cls
};
/* SRC: classes/exception.php line 347 */
void c_PDOException::t___construct() {
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 229 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DomainException)
extern const InstanceOfInfo cw_DomainException$$instanceof_table[] = {
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
  {0x66A7BA84,0,"DomainException",&cw_DomainException},
  {0x00B66A94,1,"Exception",&cw_Exception},
};
const int cw_DomainException$$instanceof_index[] = {
  7,
  -1,-1,-1,0,1,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_DomainException$$instanceof_table[];
extern const int cw_DomainException$$instanceof_index[];
const ObjectStaticCallbacks cw_DomainException = {
  (ObjectData*(*)(ObjectData*))coo_DomainException,
  0,0,
  cw_DomainException$$instanceof_table,cw_DomainException$$instanceof_index,
  &c_DomainException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_LogicException,0x0,
  &c_DomainException::s_cls
};
/* SRC: classes/exception.php line 220 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(BadMethodCallException)
extern const InstanceOfInfo cw_BadMethodCallException$$instanceof_table[] = {
  {0x3CDEA590,1,"BadMethodCallException",&cw_BadMethodCallException},
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x64EF4E46,1,"BadFunctionCallException",&cw_BadFunctionCallException},
};
const int cw_BadMethodCallException$$instanceof_index[] = {
  7,
  0,-1,-1,1,2,-1,3,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_BadMethodCallException$$instanceof_table[];
extern const int cw_BadMethodCallException$$instanceof_index[];
const ObjectStaticCallbacks cw_BadMethodCallException = {
  (ObjectData*(*)(ObjectData*))coo_BadMethodCallException,
  0,0,
  cw_BadMethodCallException$$instanceof_table,cw_BadMethodCallException$$instanceof_index,
  &c_BadMethodCallException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_BadFunctionCallException,0x0,
  &c_BadMethodCallException::s_cls
};
/* SRC: classes/exception.php line 315 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(ErrorException)
extern const InstanceOfInfo cw_ErrorException$$instanceof_table[] = {
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x429CFE0B,1,"ErrorException",&cw_ErrorException},
};
const int cw_ErrorException$$instanceof_index[] = {
  3,
  0,-1,-1,1,
};
extern const CallInfo ci_ErrorException$$getseverity = { (void*)&c_ErrorException::i_getseverity, (void*)&c_ErrorException::ifa_getseverity, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ErrorException$$__construct = { (void*)&c_ErrorException::i___construct, (void*)&c_ErrorException::ifa___construct, 5, 4, 0x0000000000000000LL};
Variant c_ErrorException::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ErrorException::i_getseverity(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getseverity);
}
Variant NEVER_INLINE c_ErrorException::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ErrorException);
  }
  c_ErrorException *self ATTRIBUTE_UNUSED (static_cast<c_ErrorException*>(mcp.obj));
  if (UNLIKELY(count > 5)) return throw_toomany_arguments("ErrorException::__construct", 5, 2);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___construct(arg0, arg1, arg2, arg3), null);
  CVarRef arg4(a4);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
}
Variant NEVER_INLINE c_ErrorException::ifa_getseverity(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getseverity, coo_ErrorException);
  }
  c_ErrorException *self ATTRIBUTE_UNUSED (static_cast<c_ErrorException*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("ErrorException::getSeverity", 0, 1);
  return (self->t_getseverity());
}
extern const MethodCallInfoTable cw_ErrorException$$call_info_table[] = {
  { 0x229C615F, 0, 11, "__construct", &ci_ErrorException$$__construct },
  { 0x58AF461F, 1, 11, "getSeverity", &ci_ErrorException$$getseverity },
};
extern const int cw_ErrorException$$call_info_index[] = {
  3,
  -1,-1,-1,0,
};
c_ErrorException *c_ErrorException::create(CVarRef v_message //  = NAMVAR(s_sys_svs00000000, "")
, CVarRef v_code //  = NAMVAR(s_sys_svif01bca90, 0LL)
, CVarRef v_severity //  = NAMVAR(s_sys_svif01bca90, 0LL)
, CVarRef v_filename //  = null_variant
, CVarRef v_lineno //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_message, v_code, v_severity, v_filename, v_lineno);
  return this;
}
extern const MethodCallInfoTable cw_ErrorException$$call_info_table[];
extern const int cw_ErrorException$$call_info_index[];
extern const InstanceOfInfo cw_ErrorException$$instanceof_table[];
extern const int cw_ErrorException$$instanceof_index[];
const ObjectStaticCallbacks cw_ErrorException = {
  (ObjectData*(*)(ObjectData*))coo_ErrorException,
  cw_ErrorException$$call_info_table,cw_ErrorException$$call_info_index,
  cw_ErrorException$$instanceof_table,cw_ErrorException$$instanceof_index,
  &c_ErrorException::s_class_name,
  &c_ErrorException::os_prop_table,&ci_ErrorException$$__construct,0,&cw_Exception,0x0,
  &c_ErrorException::s_cls
};
/* SRC: classes/exception.php line 317 */
void c_ErrorException::t___construct(Variant v_message //  = NAMSTR(s_sys_ss00000000, "")
, Variant v_code //  = 0LL
, Variant v_severity //  = 0LL
, Variant v_filename //  = null
, Variant v_lineno //  = null
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(ErrorException, ErrorException::__construct);
  ObjectData *obj_tmp UNUSED;
  c_Exception::t___construct(v_message, v_code);
  m_severity.assignVal(v_severity);
  if (!(x_is_null(v_filename))) {
    {
      m_file.assignVal(v_filename);
    }
  }
  if (!(x_is_null(v_lineno))) {
    {
      m_line.assignVal(v_lineno);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 337 */
Variant c_ErrorException::t_getseverity() {
  INSTANCE_METHOD_INJECTION_BUILTIN(ErrorException, ErrorException::getSeverity);
  ObjectData *obj_tmp UNUSED;
  return m_severity;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 210 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(BadFunctionCallException)
extern const InstanceOfInfo cw_BadFunctionCallException$$instanceof_table[] = {
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x64EF4E46,1,"BadFunctionCallException",&cw_BadFunctionCallException},
};
const int cw_BadFunctionCallException$$instanceof_index[] = {
  7,
  -1,-1,-1,0,1,-1,2,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_BadFunctionCallException$$instanceof_table[];
extern const int cw_BadFunctionCallException$$instanceof_index[];
const ObjectStaticCallbacks cw_BadFunctionCallException = {
  (ObjectData*(*)(ObjectData*))coo_BadFunctionCallException,
  0,0,
  cw_BadFunctionCallException$$instanceof_table,cw_BadFunctionCallException$$instanceof_index,
  &c_BadFunctionCallException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_LogicException,0x0,
  &c_BadFunctionCallException::s_cls
};
/* SRC: classes/exception.php line 286 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(RangeException)
extern const InstanceOfInfo cw_RangeException$$instanceof_table[] = {
  {0x776A9D53,1,"RangeException",&cw_RangeException},
  {0x00B66A94,0,"Exception",&cw_Exception},
  {0x18A8B3DC,1,"RuntimeException",&cw_RuntimeException},
};
const int cw_RangeException$$instanceof_index[] = {
  7,
  -1,-1,-1,0,1,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_RangeException$$instanceof_table[];
extern const int cw_RangeException$$instanceof_index[];
const ObjectStaticCallbacks cw_RangeException = {
  (ObjectData*(*)(ObjectData*))coo_RangeException,
  0,0,
  cw_RangeException$$instanceof_table,cw_RangeException$$instanceof_index,
  &c_RangeException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_RuntimeException,0x0,
  &c_RangeException::s_cls
};
/* SRC: classes/exception.php line 295 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(UnderflowException)
extern const InstanceOfInfo cw_UnderflowException$$instanceof_table[] = {
  {0x77B068D4,0,"UnderflowException",&cw_UnderflowException},
  {0x00B66A94,0,"Exception",&cw_Exception},
  {0x18A8B3DC,1,"RuntimeException",&cw_RuntimeException},
};
const int cw_UnderflowException$$instanceof_index[] = {
  7,
  -1,-1,-1,-1,0,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_UnderflowException$$instanceof_table[];
extern const int cw_UnderflowException$$instanceof_index[];
const ObjectStaticCallbacks cw_UnderflowException = {
  (ObjectData*(*)(ObjectData*))coo_UnderflowException,
  0,0,
  cw_UnderflowException$$instanceof_table,cw_UnderflowException$$instanceof_index,
  &c_UnderflowException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_RuntimeException,0x0,
  &c_UnderflowException::s_cls
};
/* SRC: classes/exception.php line 246 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(LengthException)
extern const InstanceOfInfo cw_LengthException$$instanceof_table[] = {
  {0x22AAD16B,0,"LengthException",&cw_LengthException},
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
  {0x00B66A94,1,"Exception",&cw_Exception},
};
const int cw_LengthException$$instanceof_index[] = {
  7,
  -1,-1,-1,0,2,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_LengthException$$instanceof_table[];
extern const int cw_LengthException$$instanceof_index[];
const ObjectStaticCallbacks cw_LengthException = {
  (ObjectData*(*)(ObjectData*))coo_LengthException,
  0,0,
  cw_LengthException$$instanceof_table,cw_LengthException$$instanceof_index,
  &c_LengthException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_LogicException,0x0,
  &c_LengthException::s_cls
};
/* SRC: classes/exception.php line 278 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(OverflowException)
extern const InstanceOfInfo cw_OverflowException$$instanceof_table[] = {
  {0x76A727D9,1,"OverflowException",&cw_OverflowException},
  {0x00B66A94,0,"Exception",&cw_Exception},
  {0x18A8B3DC,1,"RuntimeException",&cw_RuntimeException},
};
const int cw_OverflowException$$instanceof_index[] = {
  7,
  -1,0,-1,-1,1,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_OverflowException$$instanceof_table[];
extern const int cw_OverflowException$$instanceof_index[];
const ObjectStaticCallbacks cw_OverflowException = {
  (ObjectData*(*)(ObjectData*))coo_OverflowException,
  0,0,
  cw_OverflowException$$instanceof_table,cw_OverflowException$$instanceof_index,
  &c_OverflowException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_RuntimeException,0x0,
  &c_OverflowException::s_cls
};
/* SRC: classes/exception.php line 254 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(OutOfRangeException)
extern const InstanceOfInfo cw_OutOfRangeException$$instanceof_table[] = {
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
  {0x7E2A01FC,0,"OutOfRangeException",&cw_OutOfRangeException},
  {0x00B66A94,1,"Exception",&cw_Exception},
};
const int cw_OutOfRangeException$$instanceof_index[] = {
  7,
  -1,-1,-1,0,1,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_OutOfRangeException$$instanceof_table[];
extern const int cw_OutOfRangeException$$instanceof_index[];
const ObjectStaticCallbacks cw_OutOfRangeException = {
  (ObjectData*(*)(ObjectData*))coo_OutOfRangeException,
  0,0,
  cw_OutOfRangeException$$instanceof_table,cw_OutOfRangeException$$instanceof_index,
  &c_OutOfRangeException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_LogicException,0x0,
  &c_OutOfRangeException::s_cls
};
/* SRC: classes/exception.php line 10 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Exception)
extern const InstanceOfInfo cw_Exception$$instanceof_table[] = {
  {0x00B66A94,1,"Exception",&cw_Exception},
};
const int cw_Exception$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_Exception$$getfile = { (void*)&c_Exception::i_getfile, (void*)&c_Exception::ifa_getfile, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$getcode = { (void*)&c_Exception::i_getcode, (void*)&c_Exception::ifa_getcode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$__init__ = { (void*)&c_Exception::i___init__, (void*)&c_Exception::ifa___init__, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$getline = { (void*)&c_Exception::i_getline, (void*)&c_Exception::ifa_getline, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$gettraceoptions = { (void*)&c_Exception::i_gettraceoptions, (void*)&c_Exception::ifa_gettraceoptions, 0, 12, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$setpreviouschain = { (void*)&c_Exception::i_setpreviouschain, (void*)&c_Exception::ifa_setpreviouschain, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$gettraceasstring = { (void*)&c_Exception::i_gettraceasstring, (void*)&c_Exception::ifa_gettraceasstring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$inittrace = { (void*)&c_Exception::i_inittrace, (void*)&c_Exception::ifa_inittrace, 0, 68, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$gettrace = { (void*)&c_Exception::i_gettrace, (void*)&c_Exception::ifa_gettrace, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$getprevious = { (void*)&c_Exception::i_getprevious, (void*)&c_Exception::ifa_getprevious, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$__construct = { (void*)&c_Exception::i___construct, (void*)&c_Exception::ifa___construct, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$__tostring = { (void*)&c_Exception::i___tostring, (void*)&c_Exception::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$setprevious = { (void*)&c_Exception::i_setprevious, (void*)&c_Exception::ifa_setprevious, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$settraceoptions = { (void*)&c_Exception::i_settraceoptions, (void*)&c_Exception::ifa_settraceoptions, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_Exception$$getmessage = { (void*)&c_Exception::i_getmessage, (void*)&c_Exception::ifa_getmessage, 0, 4, 0x0000000000000000LL};
Variant c_Exception::i___init__(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___init__);
}
Variant c_Exception::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Exception::i_getmessage(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmessage);
}
Variant c_Exception::i_getprevious(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getprevious);
}
Variant c_Exception::i_setprevious(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setprevious);
}
Variant c_Exception::i_setpreviouschain(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setpreviouschain);
}
Variant c_Exception::i_getcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getcode);
}
Variant c_Exception::i_getfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfile);
}
Variant c_Exception::i_getline(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getline);
}
Variant c_Exception::i_gettrace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettrace);
}
Variant c_Exception::i_gettraceasstring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettraceasstring);
}
Variant c_Exception::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_Exception::i_inittrace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_inittrace);
}
Variant c_Exception::i_gettraceoptions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettraceoptions);
}
Variant c_Exception::i_settraceoptions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_settraceoptions);
}
Variant NEVER_INLINE c_Exception::ifa___init__(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___init__, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::__init__", 0, 1);
  return (self->t___init__(), null);
}
Variant NEVER_INLINE c_Exception::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("Exception::__construct", 3, 2);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_Exception::ifa_getmessage(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmessage, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getMessage", 0, 1);
  return (self->t_getmessage());
}
Variant NEVER_INLINE c_Exception::ifa_getprevious(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getprevious, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getPrevious", 0, 1);
  return (self->t_getprevious());
}
Variant NEVER_INLINE c_Exception::ifa_setprevious(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setprevious, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Exception::setPrevious", "exception", 1);
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("Exception::setPrevious", 1, 1);
  CVarRef arg0(a0);
  return (self->t_setprevious(arg0), null);
}
Variant NEVER_INLINE c_Exception::ifa_setpreviouschain(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setpreviouschain, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Exception::setPreviousChain", "exception", 1);
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("Exception::setPreviousChain", 1, 1);
  CVarRef arg0(a0);
  return (self->t_setpreviouschain(arg0), null);
}
Variant NEVER_INLINE c_Exception::ifa_getcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcode, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getCode", 0, 1);
  return (self->t_getcode());
}
Variant NEVER_INLINE c_Exception::ifa_getfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfile, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getFile", 0, 1);
  return (self->t_getfile());
}
Variant NEVER_INLINE c_Exception::ifa_getline(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getline, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getLine", 0, 1);
  return (self->t_getline());
}
Variant NEVER_INLINE c_Exception::ifa_gettrace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettrace, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getTrace", 0, 1);
  return (self->t_gettrace());
}
Variant NEVER_INLINE c_Exception::ifa_gettraceasstring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettraceasstring, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getTraceAsString", 0, 1);
  return (self->t_gettraceasstring());
}
Variant NEVER_INLINE c_Exception::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::__toString", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_Exception::ifa_inittrace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_inittrace, coo_Exception);
  }
  c_Exception *self ATTRIBUTE_UNUSED (static_cast<c_Exception*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::initTrace", 0, 1);
  return (self->t_inittrace(), null);
}
Variant NEVER_INLINE c_Exception::ifa_gettraceoptions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Exception::getTraceOptions", 0, 1);
  return (c_Exception::t_gettraceoptions());
}
Variant NEVER_INLINE c_Exception::ifa_settraceoptions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("Exception::setTraceOptions", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_Exception::t_settraceoptions(arg0), null);
}
extern const MethodCallInfoTable cw_Exception$$call_info_table[] = {
  { 0x55F425C0, 1, 8, "__init__", &ci_Exception$$__init__ },
  { 0x1D2728E3, 1, 7, "getLine", &ci_Exception$$getline },
  { 0x169ECC8A, 0, 16, "getTraceAsString", &ci_Exception$$gettraceasstring },
  { 0x1632480A, 1, 15, "setTraceOptions", &ci_Exception$$settraceoptions },
  { 0x1DC3D04F, 1, 7, "getCode", &ci_Exception$$getcode },
  { 0x58CB94B0, 1, 16, "setPreviousChain", &ci_Exception$$setpreviouschain },
  { 0x13E682D2, 1, 10, "getMessage", &ci_Exception$$getmessage },
  { 0x14B34A13, 1, 10, "__toString", &ci_Exception$$__tostring },
  { 0x75DC0795, 1, 11, "getPrevious", &ci_Exception$$getprevious },
  { 0x4135B957, 1, 15, "getTraceOptions", &ci_Exception$$gettraceoptions },
  { 0x44EC4CBA, 1, 8, "getTrace", &ci_Exception$$gettrace },
  { 0x70C9579E, 1, 7, "getFile", &ci_Exception$$getfile },
  { 0x229C615F, 0, 11, "__construct", &ci_Exception$$__construct },
  { 0x481899DF, 0, 11, "setPrevious", &ci_Exception$$setprevious },
  { 0x07FC20DF, 1, 9, "initTrace", &ci_Exception$$inittrace },
};
extern const int cw_Exception$$call_info_index[] = {
  31,
  0,-1,-1,1,-1,-1,-1,-1,
  -1,-1,2,-1,-1,-1,-1,4,
  5,-1,6,7,-1,8,-1,9,
  -1,-1,10,-1,-1,-1,11,12,

};
c_Exception *c_Exception::create(CVarRef v_message //  = NAMVAR(s_sys_svs00000000, "")
, CVarRef v_code //  = NAMVAR(s_sys_svif01bca90, 0LL)
, CVarRef v_previous //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_message, v_code, v_previous);
  return this;
}
extern const MethodCallInfoTable cw_Exception$$call_info_table[];
extern const int cw_Exception$$call_info_index[];
extern const InstanceOfInfo cw_Exception$$instanceof_table[];
extern const int cw_Exception$$instanceof_index[];
const ObjectStaticCallbacks cw_Exception = {
  (ObjectData*(*)(ObjectData*))coo_Exception,
  cw_Exception$$call_info_table,cw_Exception$$call_info_index,
  cw_Exception$$instanceof_table,cw_Exception$$instanceof_index,
  &c_Exception::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,0,0x0,
  &c_Exception::s_cls
};
void c_Exception::init() {
  m_message = NAMSTR(s_sys_ss00000000, "");
  m_code = 0LL;
  m_inited = false;
  {CountableHelper h(this); t___init__();}
}
/* SRC: classes/exception.php line 27 */
void c_Exception::t___init__() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::__init__);
  ObjectData *obj_tmp UNUSED;
  if (m_inited) {
    {
      return;
    }
  }
  t_inittrace();
  m_inited = true;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 35 */
void c_Exception::t___construct(Variant v_message //  = NAMSTR(s_sys_ss00000000, "")
, Variant v_code //  = 0LL
, Variant v_previous //  = null
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::__construct);
  if(!f_is_null(v_previous) && !v_previous.instanceof(NAMSTR(s_sys_ss2e8717ad, "exception"))) {
    throw_unexpected_argument_type(3,"Exception::__construct()","exception",v_previous);
    return;
  }
  ObjectData *obj_tmp UNUSED;
  m_message.assignVal(v_message);
  m_code.assignVal(v_code);
  m_previous.assignVal(v_previous);
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 49 */
Variant c_Exception::t_getmessage() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getMessage);
  ObjectData *obj_tmp UNUSED;
  return m_message;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 61 */
Variant c_Exception::t_getprevious() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getPrevious);
  ObjectData *obj_tmp UNUSED;
  return m_previous;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 65 */
void c_Exception::t_setprevious(CVarRef v_previous) {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::setPrevious);
  if(!v_previous.instanceof(NAMSTR(s_sys_ss2e8717ad, "exception"))) {
    throw_unexpected_argument_type(1,"Exception::setPrevious()","exception",v_previous);
    return;
  }
  ObjectData *obj_tmp UNUSED;
  m_previous.assignVal(v_previous);
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 69 */
void c_Exception::t_setpreviouschain(CVarRef v_previous) {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::setPreviousChain);
  if(!v_previous.instanceof(NAMSTR(s_sys_ss2e8717ad, "exception"))) {
    throw_unexpected_argument_type(1,"Exception::setPreviousChain()","exception",v_previous);
    return;
  }
  Variant v_cur;
  Variant v_next;

  v_cur = GET_THIS_TYPED(Exception);
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = v_cur;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss30aae83f, "getPrevious"), 0x75DC0795);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0)));
    v_next.assignVal(tmp1);
  }
  LOOP_COUNTER(1);
  {
    while (instanceOf(v_next, NAMSTR(s_sys_ss6acf71c9, "Exception"))) {
      LOOP_COUNTER_CHECK(1);
      {
        v_cur.assignVal(v_next);
        {
          const Variant &tmp0((v_cur.o_getPublic(NAMSTR(s_sys_ss30aae83f, "getPrevious"), true)));
          v_next.assignVal(tmp0);
        }
      }
    }
  }
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = v_cur;
    mcp0.methodCall((obj0), NAMSTR(s_sys_ss7eb28461, "setPrevious"), 0x481899DF);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_previous);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 87 */
Variant c_Exception::t_getcode() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getCode);
  ObjectData *obj_tmp UNUSED;
  return m_code;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 100 */
Variant c_Exception::t_getfile() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getFile);
  ObjectData *obj_tmp UNUSED;
  return m_file;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 113 */
Variant c_Exception::t_getline() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getLine);
  ObjectData *obj_tmp UNUSED;
  return m_line;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 125 */
Variant c_Exception::t_gettrace() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getTrace);
  ObjectData *obj_tmp UNUSED;
  return m_trace;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 137 */
String c_Exception::t_gettraceasstring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::getTraceAsString);
  int64 v_i = 0;
  String v_s;
  Variant v_frame;

  v_i = 0LL;
  v_s = NAMSTR(s_sys_ss00000000, "");
  {
    LOOP_COUNTER(1);
    Variant map2 = t_gettrace();
    {
      StringBuffer tmp_sbuf_v_s(512);
      for (ArrayIter iter3 = map2.begin(s_class_name); !iter3.end(); iter3.next()) {
        LOOP_COUNTER_CHECK(1);
        iter3.second(v_frame);
        {
          if (!(x_is_array(v_frame))) {
            continue;
          }
          {
            tmp_sbuf_v_s.appendWithTaint("#", 1);
            tmp_sbuf_v_s.appendWithTaint(toString(v_i));
            tmp_sbuf_v_s.appendWithTaint(" ", 1);
            tmp_sbuf_v_s.appendWithTaint(toString((isset(v_frame, NAMSTR(s_sys_ss0ce7db5b, "file"), true) ? ((Variant)(v_frame.rvalAt(NAMSTR(s_sys_ss0ce7db5b, "file"), AccessFlags::Error_Key))) : ((Variant)(NAMSTR(s_sys_ss00000000, ""))))));
            tmp_sbuf_v_s.appendWithTaint("(", 1);
            tmp_sbuf_v_s.appendWithTaint(toString((isset(v_frame, NAMSTR(s_sys_ss5df8728c, "line"), true) ? ((Variant)(v_frame.rvalAt(NAMSTR(s_sys_ss5df8728c, "line"), AccessFlags::Error_Key))) : ((Variant)(NAMSTR(s_sys_ss00000000, ""))))));
            tmp_sbuf_v_s.appendWithTaint("): ", 3);
            Variant tmp0;
            if (isset(v_frame, NAMSTR(s_sys_ss482dbd12, "class"), true)) {
              const String &tmp1((toString(v_frame.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
              const String &tmp2((toString(v_frame.rvalAt(NAMSTR(s_sys_ss724a760a, "type"), AccessFlags::Error_Key))));
              tmp0 = (concat(tmp1, tmp2));
            } else {
              tmp0 = (NAMSTR(s_sys_ss00000000, ""));
            }
            tmp_sbuf_v_s.appendWithTaint(toString(tmp0));
            tmp_sbuf_v_s.appendWithTaint(toString(v_frame.rvalAt(NAMSTR(s_sys_ss52403931, "function"), AccessFlags::Error_Key)));
            tmp_sbuf_v_s.appendWithTaint("()\n", 3);
            ;
          }
          v_i++;
        }
      }
      concat_assign(v_s, tmp_sbuf_v_s.detachWithTaint());
    }
  }
  concat_assign(v_s, concat3(NAMSTR(s_sys_ss0dc355aa, "#"), toString(v_i), NAMSTR(s_sys_ss7ab32402, " {main}")));
  return v_s;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 156 */
String c_Exception::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::__toString);
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("exception '", 11);
    tmp0_buf.appendWithTaint(toString(x_get_class(VarNR(GET_THIS_TYPED(Exception)))));
    tmp0_buf.appendWithTaint("' with message '", 16);
    tmp0_buf.appendWithTaint(toString(t_getmessage()));
    tmp0_buf.appendWithTaint("' in ", 5);
    tmp0_buf.appendWithTaint(toString(t_getfile()));
    tmp0_buf.appendWithTaint(":", 1);
    tmp0_buf.appendWithTaint(toString(t_getline()));
    tmp0_buf.appendWithTaint("\nStack trace:\n", 14);
    tmp0_buf.appendWithTaint(t_gettraceasstring());
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 166 */
void c_Exception::t_inittrace() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Exception, Exception::initTrace);
  Variant v_top;
  Variant v_frame;

  ObjectData *obj_tmp UNUSED;
  {
    const CallInfo *cit0 = NULL;
    MethodCallPackage mcp0;
    mcp0.staticMethodCall(NAMSTR(s_sys_ss708d205d, "static"), NAMSTR(s_sys_ss4453e9e9, "getTraceOptions"));
    mcp0.lateStaticBind(fi.getThreadInfo());
    cit0 = mcp0.ci;
    bool tmp1((toBoolean((cit0->getMeth0Args())(mcp0, 0))));
    const Array &tmp2((x_debug_backtrace(tmp1)));
    m_trace = tmp2;
  }
  LOOP_COUNTER(1);
  {
    while (!(empty(m_trace))) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          const Variant &tmp0((m_trace.rvalAt(0LL, AccessFlags::Error)));
          v_top.assignVal(tmp0);
        }
        {
          bool tmp0;
          {
            bool tmp1 = (isset(v_top, NAMSTR(s_sys_ss482dbd12, "class"), true));
            if (tmp1) {
              tmp1 = (isset(v_top, NAMSTR(s_sys_ss52403931, "function"), true));
            }
            bool tmp2 = (tmp1);
            if (tmp2) {
              const String &tmp3((toString(v_top.rvalAt(NAMSTR(s_sys_ss482dbd12, "class"), AccessFlags::Error_Key))));
              int64 tmp4((x_strcasecmp(tmp3, NAMSTR(s_sys_ss2e8717ad, "exception"))));
              tmp2 = (same(tmp4, 0LL));
            }
            bool tmp5 = (tmp2);
            if (tmp5) {
              const String &tmp6((toString(v_top.rvalAt(NAMSTR(s_sys_ss52403931, "function"), AccessFlags::Error_Key))));
              int64 tmp7((x_strcasecmp(tmp6, NAMSTR(s_sys_ss226bedd7, "__init__"))));
              tmp5 = (same(tmp7, 0LL));
            }
            tmp0 = (tmp5);
          }
          if (tmp0) {
            {
              {
                const Variant &tmp0((x_array_shift(ref(m_trace))));
                v_frame.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  tmp0 = (isset(v_frame, NAMSTR(s_sys_ss0ce7db5b, "file"), true));
                }
                if (tmp0) {
                  {
                    const Variant &tmp0((v_frame.rvalAt(NAMSTR(s_sys_ss0ce7db5b, "file"), AccessFlags::Error_Key)));
                    m_file.assignVal(tmp0);
                  }
                }
              }
              {
                bool tmp0;
                {
                  tmp0 = (isset(v_frame, NAMSTR(s_sys_ss5df8728c, "line"), true));
                }
                if (tmp0) {
                  {
                    const Variant &tmp0((v_frame.rvalAt(NAMSTR(s_sys_ss5df8728c, "line"), AccessFlags::Error_Key)));
                    m_line.assignVal(tmp0);
                  }
                }
              }
              return;
            }
          }
        }
        x_array_shift(ref(m_trace));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 184 */
Variant c_Exception::t_gettraceoptions() {
  STATIC_METHOD_INJECTION_BUILTIN(Exception, Exception::getTraceOptions);
  return g->s_Exception$$traceOpts;
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 188 */
void c_Exception::t_settraceoptions(CVarRef v_opts) {
  STATIC_METHOD_INJECTION_BUILTIN(Exception, Exception::setTraceOptions);
  g->s_Exception$$traceOpts.assignVal(v_opts);
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 340 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DOMException)
extern const InstanceOfInfo cw_DOMException$$instanceof_table[] = {
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x31A4566A,1,"DOMException",&cw_DOMException},
};
const int cw_DOMException$$instanceof_index[] = {
  3,
  0,-1,1,-1,
};
extern const CallInfo ci_DOMException$$__construct = { (void*)&c_DOMException::i___construct, (void*)&c_DOMException::ifa___construct, 2, 4, 0x0000000000000000LL};
Variant c_DOMException::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_DOMException::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMException);
  }
  c_DOMException *self ATTRIBUTE_UNUSED (static_cast<c_DOMException*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("DOMException::__construct", count, 2, 2, 2);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
extern const MethodCallInfoTable cw_DOMException$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_DOMException$$__construct },
};
extern const int cw_DOMException$$call_info_index[] = {
  1,
  -1,0,
};
c_DOMException *c_DOMException::create(CVarRef v_message, CVarRef v_code) {
  CountableHelper h(this);
  init();
  t___construct(v_message, v_code);
  return this;
}
extern const MethodCallInfoTable cw_DOMException$$call_info_table[];
extern const int cw_DOMException$$call_info_index[];
extern const InstanceOfInfo cw_DOMException$$instanceof_table[];
extern const int cw_DOMException$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMException = {
  (ObjectData*(*)(ObjectData*))coo_DOMException,
  cw_DOMException$$call_info_table,cw_DOMException$$call_info_index,
  cw_DOMException$$instanceof_table,cw_DOMException$$instanceof_index,
  &c_DOMException::s_class_name,
  &c_Exception::os_prop_table,&ci_DOMException$$__construct,0,&cw_Exception,0x0,
  &c_DOMException::s_cls
};
/* SRC: classes/exception.php line 341 */
void c_DOMException::t___construct(Variant v_message, Variant v_code) {
  INSTANCE_METHOD_INJECTION_BUILTIN(DOMException, DOMException::__construct);
  c_Exception::t___construct(v_message, v_code);
}
namespace hphp_impl_splitter {}
/* SRC: classes/exception.php line 304 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(UnexpectedValueException)
extern const InstanceOfInfo cw_UnexpectedValueException$$instanceof_table[] = {
  {0x2E0D3849,1,"UnexpectedValueException",&cw_UnexpectedValueException},
  {0x00B66A94,0,"Exception",&cw_Exception},
  {0x18A8B3DC,1,"RuntimeException",&cw_RuntimeException},
};
const int cw_UnexpectedValueException$$instanceof_index[] = {
  7,
  -1,0,-1,-1,1,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_UnexpectedValueException$$instanceof_table[];
extern const int cw_UnexpectedValueException$$instanceof_index[];
const ObjectStaticCallbacks cw_UnexpectedValueException = {
  (ObjectData*(*)(ObjectData*))coo_UnexpectedValueException,
  0,0,
  cw_UnexpectedValueException$$instanceof_table,cw_UnexpectedValueException$$instanceof_index,
  &c_UnexpectedValueException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_RuntimeException,0x0,
  &c_UnexpectedValueException::s_cls
};
/* SRC: classes/exception.php line 200 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(LogicException)
extern const InstanceOfInfo cw_LogicException$$instanceof_table[] = {
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
};
const int cw_LogicException$$instanceof_index[] = {
  3,
  0,-1,-1,1,
};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_LogicException$$instanceof_table[];
extern const int cw_LogicException$$instanceof_index[];
const ObjectStaticCallbacks cw_LogicException = {
  (ObjectData*(*)(ObjectData*))coo_LogicException,
  0,0,
  cw_LogicException$$instanceof_table,cw_LogicException$$instanceof_index,
  &c_LogicException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_Exception,0x0,
  &c_LogicException::s_cls
};
/* SRC: classes/exception.php line 238 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(InvalidArgumentException)
extern const InstanceOfInfo cw_InvalidArgumentException$$instanceof_table[] = {
  {0x1B0E6D4B,1,"LogicException",&cw_LogicException},
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x5393D475,1,"InvalidArgumentException",&cw_InvalidArgumentException},
};
const int cw_InvalidArgumentException$$instanceof_index[] = {
  7,
  -1,-1,-1,0,1,2,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_InvalidArgumentException$$instanceof_table[];
extern const int cw_InvalidArgumentException$$instanceof_index[];
const ObjectStaticCallbacks cw_InvalidArgumentException = {
  (ObjectData*(*)(ObjectData*))coo_InvalidArgumentException,
  0,0,
  cw_InvalidArgumentException$$instanceof_table,cw_InvalidArgumentException$$instanceof_index,
  &c_InvalidArgumentException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_LogicException,0x0,
  &c_InvalidArgumentException::s_cls
};
/* SRC: classes/exception.php line 306 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(InvalidOperationException)
extern const InstanceOfInfo cw_InvalidOperationException$$instanceof_table[] = {
  {0x00B66A94,0,"Exception",&cw_Exception},
  {0x18A8B3DC,1,"RuntimeException",&cw_RuntimeException},
  {0x3B1A8E9D,1,"InvalidOperationException",&cw_InvalidOperationException},
};
const int cw_InvalidOperationException$$instanceof_index[] = {
  7,
  -1,-1,-1,-1,0,2,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_InvalidOperationException$$instanceof_table[];
extern const int cw_InvalidOperationException$$instanceof_index[];
const ObjectStaticCallbacks cw_InvalidOperationException = {
  (ObjectData*(*)(ObjectData*))coo_InvalidOperationException,
  0,0,
  cw_InvalidOperationException$$instanceof_table,cw_InvalidOperationException$$instanceof_index,
  &c_InvalidOperationException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_RuntimeException,0x0,
  &c_InvalidOperationException::s_cls
};
/* SRC: classes/exception.php line 270 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(OutOfBoundsException)
extern const InstanceOfInfo cw_OutOfBoundsException$$instanceof_table[] = {
  {0x5B143841,1,"OutOfBoundsException",&cw_OutOfBoundsException},
  {0x00B66A94,0,"Exception",&cw_Exception},
  {0x18A8B3DC,1,"RuntimeException",&cw_RuntimeException},
};
const int cw_OutOfBoundsException$$instanceof_index[] = {
  7,
  -1,0,-1,-1,1,-1,-1,-1,

};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_OutOfBoundsException$$instanceof_table[];
extern const int cw_OutOfBoundsException$$instanceof_index[];
const ObjectStaticCallbacks cw_OutOfBoundsException = {
  (ObjectData*(*)(ObjectData*))coo_OutOfBoundsException,
  0,0,
  cw_OutOfBoundsException$$instanceof_table,cw_OutOfBoundsException$$instanceof_index,
  &c_OutOfBoundsException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_RuntimeException,0x0,
  &c_OutOfBoundsException::s_cls
};
/* SRC: classes/exception.php line 262 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(RuntimeException)
extern const InstanceOfInfo cw_RuntimeException$$instanceof_table[] = {
  {0x18A8B3DC,0,"RuntimeException",&cw_RuntimeException},
  {0x00B66A94,1,"Exception",&cw_Exception},
};
const int cw_RuntimeException$$instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
extern const CallInfo ci_Exception$$__construct;
extern const InstanceOfInfo cw_RuntimeException$$instanceof_table[];
extern const int cw_RuntimeException$$instanceof_index[];
const ObjectStaticCallbacks cw_RuntimeException = {
  (ObjectData*(*)(ObjectData*))coo_RuntimeException,
  0,0,
  cw_RuntimeException$$instanceof_table,cw_RuntimeException$$instanceof_index,
  &c_RuntimeException::s_class_name,
  &c_Exception::os_prop_table,&ci_Exception$$__construct,0,&cw_Exception,0x0,
  &c_RuntimeException::s_cls
};
ObjectData *coo_PDOException() {
  return NEWOBJ(c_PDOException)();
}
ObjectData *coo_DomainException() {
  return NEWOBJ(c_DomainException)();
}
ObjectData *coo_BadMethodCallException() {
  return NEWOBJ(c_BadMethodCallException)();
}
ObjectData *coo_ErrorException() {
  return NEWOBJ(c_ErrorException)();
}
ObjectData *coo_BadFunctionCallException() {
  return NEWOBJ(c_BadFunctionCallException)();
}
ObjectData *coo_RangeException() {
  return NEWOBJ(c_RangeException)();
}
ObjectData *coo_UnderflowException() {
  return NEWOBJ(c_UnderflowException)();
}
ObjectData *coo_LengthException() {
  return NEWOBJ(c_LengthException)();
}
ObjectData *coo_OverflowException() {
  return NEWOBJ(c_OverflowException)();
}
ObjectData *coo_OutOfRangeException() {
  return NEWOBJ(c_OutOfRangeException)();
}
ObjectData *coo_Exception() {
  return NEWOBJ(c_Exception)();
}
ObjectData *coo_DOMException() {
  return NEWOBJ(c_DOMException)();
}
ObjectData *coo_UnexpectedValueException() {
  return NEWOBJ(c_UnexpectedValueException)();
}
ObjectData *coo_LogicException() {
  return NEWOBJ(c_LogicException)();
}
ObjectData *coo_InvalidArgumentException() {
  return NEWOBJ(c_InvalidArgumentException)();
}
ObjectData *coo_InvalidOperationException() {
  return NEWOBJ(c_InvalidOperationException)();
}
ObjectData *coo_OutOfBoundsException() {
  return NEWOBJ(c_OutOfBoundsException)();
}
ObjectData *coo_RuntimeException() {
  return NEWOBJ(c_RuntimeException)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
  (int64)&false_varNR,
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
  (int64)&NAMVAR(s_sys_svs00000000, ""),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x7A5F15F9,0,0,3,66,-1,GET_PROPERTY_OFFSET(c_ErrorException, m_severity),&NAMSTR(s_sys_ss07c805e6, "\000*\000severity") },

  {0x17BB42CD,0,1,0,73,-1,offsetof(SystemGlobals,s_Exception$$traceOpts),&NAMSTR(s_sys_ss28f3debd, "traceOpts") },

  {0x05F4DA21,6,0,3,2,-1,GET_PROPERTY_OFFSET(c_Exception, m_previous),&NAMSTR(s_sys_ss597e1acf, "\000*\000previous") },
  {0x0CD9E191,0,1,11,65,2,GET_PROPERTY_OFFSET(c_Exception, m_inited),&NAMSTR(s_sys_ss2717cc0c, "\000Exception\000inited") },
  {0x2CF0A747,-1,0,3,66,-1,GET_PROPERTY_OFFSET(c_Exception, m_trace),&NAMSTR(s_sys_ss48192147, "\000*\000trace") },
  {0x057ACDB9,-3,2,3,66,-1,GET_PROPERTY_OFFSET(c_Exception, m_code),&NAMSTR(s_sys_ss20811f17, "\000*\000code") },
  {0x4F8C8C9A,-2,0,3,66,-1,GET_PROPERTY_OFFSET(c_Exception, m_line),&NAMSTR(s_sys_ss0c360a27, "\000*\000line") },
  {0x14C9D47B,-2,3,3,66,-1,GET_PROPERTY_OFFSET(c_Exception, m_message),&NAMSTR(s_sys_ss515ff534, "\000*\000message") },
  {0x0F33D14F,-2,0,3,66,-1,GET_PROPERTY_OFFSET(c_Exception, m_file),&NAMSTR(s_sys_ss04098f94, "\000*\000file") },

};
static const int cpt_hash_entries[] = {
  // ErrorException hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // ErrorException lists
  0,-1,
  -1,
  -1,
  // Exception hash
  -1,-1,0,-1,-1,-1,-1,-1,
  -1,1,-1,-1,-1,-1,-1,3,-1,4,5,6,-1,-1,-1,7,
  // Exception lists
  6,4,1,7,5,3,2,-1,
  -1,
  -1,
  1,1,};
const ClassPropTable c_ErrorException::os_prop_table = {
  7,0,-1,-1,-1,-1,10,0,
  cpt_hash_entries+0,&c_Exception::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Exception::os_prop_table = {
  15,6,7,0,-1,-1,24,0,
  cpt_hash_entries+20,0,cpt_table_entries+1,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_ErrorException::os_prop_table, cpt_hash_entries+46);

///////////////////////////////////////////////////////////////////////////////
}
