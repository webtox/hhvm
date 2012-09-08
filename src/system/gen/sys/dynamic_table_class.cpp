
#include <runtime/base/hphp_system.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
#include <sys/literal_strings.h>

namespace hphp_impl_starter {}


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


// Class Invoke Tables
extern const ObjectStaticCallbacks cw_ReflectionProperty;
extern const ObjectStaticCallbacks cw_RuntimeException;
extern const ObjectStaticCallbacks cw_OutOfBoundsException;
extern const ObjectStaticCallbacks cw_IteratorIterator;
extern const ObjectStaticCallbacks cw_UnderflowException;
extern const ObjectStaticCallbacks cw_InvalidOperationException;
extern const ObjectStaticCallbacks cw_RecursiveIteratorIterator;
extern const ObjectStaticCallbacks cw___PHP_Incomplete_Class;
extern const ObjectStaticCallbacks cw_ReflectionObject;
extern const ObjectStaticCallbacks cw_PDOException;
extern const ObjectStaticCallbacks cw_ReflectionFunctionAbstract;
extern const ObjectStaticCallbacks cw_RecursiveDirectoryIterator;
extern const ObjectStaticCallbacks cw_DomainException;
extern const ObjectStaticCallbacks cw_UnexpectedValueException;
extern const ObjectStaticCallbacks cw_LengthException;
extern const ObjectStaticCallbacks cw_SplFileObject;
extern const ObjectStaticCallbacks cw_FB_MySQLLexer;
extern const ObjectStaticCallbacks cw_InvalidArgumentException;
extern const ObjectStaticCallbacks cw_OutOfRangeException;
extern const ObjectStaticCallbacks cw_ReflectionMethod;
extern const ObjectStaticCallbacks cw_stdClass;
extern const ObjectStaticCallbacks cw_ReflectionException;
extern const ObjectStaticCallbacks cw_SplFileInfo;
extern const ObjectStaticCallbacks cw_DirectoryIterator;
extern const ObjectStaticCallbacks cw_ReflectionExtension;
extern const ObjectStaticCallbacks cw_AppendIterator;
extern const ObjectStaticCallbacks cw_XhprofFrame;
extern const ObjectStaticCallbacks cw_Directory;
extern const ObjectStaticCallbacks cw_RangeException;
extern const ObjectStaticCallbacks cw_SplObjectStorage;
extern const ObjectStaticCallbacks cw_ReflectionFunction;
extern const ObjectStaticCallbacks cw_ArrayIterator;
extern const ObjectStaticCallbacks cw_DOMException;
extern const ObjectStaticCallbacks cw_Exception;
extern const ObjectStaticCallbacks cw_FilterIterator;
extern const ObjectStaticCallbacks cw_BadFunctionCallException;
extern const ObjectStaticCallbacks cw_ErrorException;
extern const ObjectStaticCallbacks cw_BadMethodCallException;
extern const ObjectStaticCallbacks cw_ReflectionParameter;
extern const ObjectStaticCallbacks cw_SoapFault;
extern const ObjectStaticCallbacks cw_LogicException;
extern const ObjectStaticCallbacks cw_OverflowException;
extern const ObjectStaticCallbacks cw_ReflectionClass;
ObjectData *coo_SoapClient() {
  return NEWOBJ(c_SoapClient)();
}
IMPLEMENT_CLASS(SoapClient)
extern const InstanceOfInfo cw_SoapClient$$instanceof_table[] = {
  {0x38182BDA,1,"SoapClient",&cw_SoapClient},
};
const int cw_SoapClient$$instanceof_index[] = {
  1,
  0,-1,
};
Variant c_SoapClient::doCall(Variant v_name, Variant v_arguments, bool fatal) {
  return t___call(v_name, !v_arguments.isNull() ? v_arguments : Variant(Array::Create()));
}
extern const CallInfo ci_SoapClient$$__getfunctions = { (void*)&c_SoapClient::i___getfunctions, (void*)&c_SoapClient::ifa___getfunctions, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__call = { (void*)&c_SoapClient::i___call, (void*)&c_SoapClient::ifa___call, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__construct = { (void*)&c_SoapClient::i___construct, (void*)&c_SoapClient::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__getlastresponse = { (void*)&c_SoapClient::i___getlastresponse, (void*)&c_SoapClient::ifa___getlastresponse, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__dorequest = { (void*)&c_SoapClient::i___dorequest, (void*)&c_SoapClient::ifa___dorequest, 5, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__getlastrequest = { (void*)&c_SoapClient::i___getlastrequest, (void*)&c_SoapClient::ifa___getlastrequest, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__setlocation = { (void*)&c_SoapClient::i___setlocation, (void*)&c_SoapClient::ifa___setlocation, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__getlastrequestheaders = { (void*)&c_SoapClient::i___getlastrequestheaders, (void*)&c_SoapClient::ifa___getlastrequestheaders, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__setcookie = { (void*)&c_SoapClient::i___setcookie, (void*)&c_SoapClient::ifa___setcookie, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__setsoapheaders = { (void*)&c_SoapClient::i___setsoapheaders, (void*)&c_SoapClient::ifa___setsoapheaders, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__gettypes = { (void*)&c_SoapClient::i___gettypes, (void*)&c_SoapClient::ifa___gettypes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__getlastresponseheaders = { (void*)&c_SoapClient::i___getlastresponseheaders, (void*)&c_SoapClient::ifa___getlastresponseheaders, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapClient$$__soapcall = { (void*)&c_SoapClient::i___soapcall, (void*)&c_SoapClient::ifa___soapcall, 5, 4, 0x0000000000000010LL};
Variant c_SoapClient::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SoapClient::i___call(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___call);
}
Variant c_SoapClient::i___soapcall(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___soapcall);
}
Variant c_SoapClient::i___getlastrequest(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___getlastrequest);
}
Variant c_SoapClient::i___getlastresponse(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___getlastresponse);
}
Variant c_SoapClient::i___getlastrequestheaders(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___getlastrequestheaders);
}
Variant c_SoapClient::i___getlastresponseheaders(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___getlastresponseheaders);
}
Variant c_SoapClient::i___getfunctions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___getfunctions);
}
Variant c_SoapClient::i___gettypes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___gettypes);
}
Variant c_SoapClient::i___dorequest(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___dorequest);
}
Variant c_SoapClient::i___setcookie(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___setcookie);
}
Variant c_SoapClient::i___setlocation(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___setlocation);
}
Variant c_SoapClient::i___setsoapheaders(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___setsoapheaders);
}
Variant NEVER_INLINE c_SoapClient::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("__construct", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_SoapClient::ifa___call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___call, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__call", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___call(arg0, arg1));
}
Variant NEVER_INLINE c_SoapClient::ifa___soapcall(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___soapcall, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 5)) return throw_wrong_arguments("__soapcall", count, 2, 5, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___soapcall(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___soapcall(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___soapcall(arg0, arg1, arg2, arg3));
  VRefParam arg4(vref(a4));
  return (self->t___soapcall(arg0, arg1, arg2, arg3, arg4));
}
Variant NEVER_INLINE c_SoapClient::ifa___getlastrequest(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___getlastrequest, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__getlastrequest", 0, 1);
  return (self->t___getlastrequest());
}
Variant NEVER_INLINE c_SoapClient::ifa___getlastresponse(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___getlastresponse, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__getlastresponse", 0, 1);
  return (self->t___getlastresponse());
}
Variant NEVER_INLINE c_SoapClient::ifa___getlastrequestheaders(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___getlastrequestheaders, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__getlastrequestheaders", 0, 1);
  return (self->t___getlastrequestheaders());
}
Variant NEVER_INLINE c_SoapClient::ifa___getlastresponseheaders(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___getlastresponseheaders, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__getlastresponseheaders", 0, 1);
  return (self->t___getlastresponseheaders());
}
Variant NEVER_INLINE c_SoapClient::ifa___getfunctions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___getfunctions, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__getfunctions", 0, 1);
  return (self->t___getfunctions());
}
Variant NEVER_INLINE c_SoapClient::ifa___gettypes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___gettypes, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__gettypes", 0, 1);
  return (self->t___gettypes());
}
Variant NEVER_INLINE c_SoapClient::ifa___dorequest(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___dorequest, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count < 4 || count > 5)) return throw_wrong_arguments("__dorequest", count, 4, 5, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___dorequest(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  return (self->t___dorequest(arg0, arg1, arg2, arg3, arg4));
}
Variant NEVER_INLINE c_SoapClient::ifa___setcookie(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___setcookie, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("__setcookie", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___setcookie(arg0));
  CVarRef arg1(a1);
  return (self->t___setcookie(arg0, arg1));
}
Variant NEVER_INLINE c_SoapClient::ifa___setlocation(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___setlocation, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("__setlocation", 1, 1);
  if (count <= 0) return (self->t___setlocation());
  CVarRef arg0(a0);
  return (self->t___setlocation(arg0));
}
Variant NEVER_INLINE c_SoapClient::ifa___setsoapheaders(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___setsoapheaders, coo_SoapClient);
  }
  c_SoapClient *self ATTRIBUTE_UNUSED (static_cast<c_SoapClient*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("__setsoapheaders", 1, 1);
  if (count <= 0) return (self->t___setsoapheaders());
  CVarRef arg0(a0);
  return (self->t___setsoapheaders(arg0));
}
extern const MethodCallInfoTable cw_SoapClient$$call_info_table[] = {
  { 0x2140F6E4, 1, 16, "__getlastrequest", &ci_SoapClient$$__getlastrequest },
  { 0x53CEEB6C, 0, 6, "__call", &ci_SoapClient$$__call },
  { 0x3B37DE8C, 1, 23, "__getlastrequestheaders", &ci_SoapClient$$__getlastrequestheaders },
  { 0x5FC59871, 1, 14, "__getfunctions", &ci_SoapClient$$__getfunctions },
  { 0x31035A54, 1, 17, "__getlastresponse", &ci_SoapClient$$__getlastresponse },
  { 0x7604B9D5, 0, 10, "__gettypes", &ci_SoapClient$$__gettypes },
  { 0x7E8AAEF5, 0, 11, "__dorequest", &ci_SoapClient$$__dorequest },
  { 0x4BFD0C75, 1, 11, "__setcookie", &ci_SoapClient$$__setcookie },
  { 0x62050D99, 1, 10, "__soapcall", &ci_SoapClient$$__soapcall },
  { 0x58A82CFA, 1, 24, "__getlastresponseheaders", &ci_SoapClient$$__getlastresponseheaders },
  { 0x55E335BB, 1, 16, "__setsoapheaders", &ci_SoapClient$$__setsoapheaders },
  { 0x229C615F, 0, 11, "__construct", &ci_SoapClient$$__construct },
  { 0x4DBC36FF, 1, 13, "__setlocation", &ci_SoapClient$$__setlocation },
};
extern const int cw_SoapClient$$call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,-1,
  -1,-1,-1,-1,1,-1,-1,-1,
  -1,3,-1,-1,4,5,-1,-1,
  -1,8,9,10,-1,-1,-1,11,

};
c_SoapClient *c_SoapClient::create(Variant a0, Array a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_SoapClient$$call_info_table[];
extern const int cw_SoapClient$$call_info_index[];
extern const InstanceOfInfo cw_SoapClient$$instanceof_table[];
extern const int cw_SoapClient$$instanceof_index[];
const ObjectStaticCallbacks cw_SoapClient = {
  (ObjectData*(*)(ObjectData*))coo_SoapClient,
  cw_SoapClient$$call_info_table,cw_SoapClient$$call_info_index,
  cw_SoapClient$$instanceof_table,cw_SoapClient$$instanceof_index,
  &c_SoapClient::s_class_name,
  0,&ci_SoapClient$$__construct,0,0,0x80,
  &c_SoapClient::s_cls
};
ObjectData *coo_DOMElement() {
  return NEWOBJ(c_DOMElement)();
}
IMPLEMENT_CLASS(DOMElement)
extern const InstanceOfInfo cw_DOMElement$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x77F5DDC3,1,"DOMElement",&cw_DOMElement},
};
const int cw_DOMElement$$instanceof_index[] = {
  3,
  -1,-1,0,1,
};
extern const CallInfo ci_DOMElement$$setattributenode = { (void*)&c_DOMElement::i_setattributenode, (void*)&c_DOMElement::ifa_setattributenode, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$removeattributenode = { (void*)&c_DOMElement::i_removeattributenode, (void*)&c_DOMElement::ifa_removeattributenode, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$getattribute = { (void*)&c_DOMElement::i_getattribute, (void*)&c_DOMElement::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$setidattributenode = { (void*)&c_DOMElement::i_setidattributenode, (void*)&c_DOMElement::ifa_setidattributenode, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$removeattributens = { (void*)&c_DOMElement::i_removeattributens, (void*)&c_DOMElement::ifa_removeattributens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$hasattributens = { (void*)&c_DOMElement::i_hasattributens, (void*)&c_DOMElement::ifa_hasattributens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$getattributenodens = { (void*)&c_DOMElement::i_getattributenodens, (void*)&c_DOMElement::ifa_getattributenodens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$__set = { (void*)&c_DOMElement::i___set, (void*)&c_DOMElement::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$getelementsbytagname = { (void*)&c_DOMElement::i_getelementsbytagname, (void*)&c_DOMElement::ifa_getelementsbytagname, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$__construct = { (void*)&c_DOMElement::i___construct, (void*)&c_DOMElement::ifa___construct, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$setidattributens = { (void*)&c_DOMElement::i_setidattributens, (void*)&c_DOMElement::ifa_setidattributens, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$setattributens = { (void*)&c_DOMElement::i_setattributens, (void*)&c_DOMElement::ifa_setattributens, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$getattributens = { (void*)&c_DOMElement::i_getattributens, (void*)&c_DOMElement::ifa_getattributens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$getattributenode = { (void*)&c_DOMElement::i_getattributenode, (void*)&c_DOMElement::ifa_getattributenode, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$removeattribute = { (void*)&c_DOMElement::i_removeattribute, (void*)&c_DOMElement::ifa_removeattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$__isset = { (void*)&c_DOMElement::i___isset, (void*)&c_DOMElement::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$__get = { (void*)&c_DOMElement::i___get, (void*)&c_DOMElement::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$setattributenodens = { (void*)&c_DOMElement::i_setattributenodens, (void*)&c_DOMElement::ifa_setattributenodens, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$setattribute = { (void*)&c_DOMElement::i_setattribute, (void*)&c_DOMElement::ifa_setattribute, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$getelementsbytagnamens = { (void*)&c_DOMElement::i_getelementsbytagnamens, (void*)&c_DOMElement::ifa_getelementsbytagnamens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$hasattribute = { (void*)&c_DOMElement::i_hasattribute, (void*)&c_DOMElement::ifa_hasattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMElement$$setidattribute = { (void*)&c_DOMElement::i_setidattribute, (void*)&c_DOMElement::ifa_setidattribute, 2, 4, 0x0000000000000000LL};
Variant c_DOMElement::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMElement::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_DOMElement::i_getattributenode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributenode);
}
Variant c_DOMElement::i_getattributenodens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributenodens);
}
Variant c_DOMElement::i_getattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributens);
}
Variant c_DOMElement::i_getelementsbytagname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getelementsbytagname);
}
Variant c_DOMElement::i_getelementsbytagnamens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getelementsbytagnamens);
}
Variant c_DOMElement::i_hasattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasattribute);
}
Variant c_DOMElement::i_hasattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasattributens);
}
Variant c_DOMElement::i_removeattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_removeattribute);
}
Variant c_DOMElement::i_removeattributenode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_removeattributenode);
}
Variant c_DOMElement::i_removeattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_removeattributens);
}
Variant c_DOMElement::i_setattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattribute);
}
Variant c_DOMElement::i_setattributenode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattributenode);
}
Variant c_DOMElement::i_setattributenodens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattributenodens);
}
Variant c_DOMElement::i_setattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattributens);
}
Variant c_DOMElement::i_setidattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setidattribute);
}
Variant c_DOMElement::i_setidattributenode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setidattributenode);
}
Variant c_DOMElement::i_setidattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setidattributens);
}
Variant c_DOMElement::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMElement::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMElement::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMElement::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("__construct", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_DOMElement::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_getattributenode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributenode, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattributenode", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattributenode(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_getattributenodens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributenodens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("getattributenodens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_getattributenodens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_getattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("getattributens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_getattributens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_getelementsbytagname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getelementsbytagname, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getelementsbytagname", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getelementsbytagname(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_getelementsbytagnamens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getelementsbytagnamens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("getelementsbytagnamens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_getelementsbytagnamens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_hasattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasattribute, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("hasattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_hasattribute(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_hasattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasattributens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("hasattributens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_hasattributens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_removeattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_removeattribute, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("removeattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_removeattribute(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_removeattributenode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_removeattributenode, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("removeattributenode", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_removeattributenode(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_removeattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_removeattributens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("removeattributens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_removeattributens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_setattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattribute, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setattribute", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setattribute(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_setattributenode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattributenode, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setattributenode", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setattributenode(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_setattributenodens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattributenodens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setattributenodens", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setattributenodens(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa_setattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattributens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("setattributens", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_setattributens(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DOMElement::ifa_setidattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setidattribute, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setidattribute", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setidattribute(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_setidattributenode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setidattributenode, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setidattributenode", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setidattributenode(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa_setidattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setidattributens, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("setidattributens", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_setidattributens(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DOMElement::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMElement::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMElement::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMElement);
  }
  c_DOMElement *self ATTRIBUTE_UNUSED (static_cast<c_DOMElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMElement$$call_info_table[] = {
  { 0x6CAB93CA, 0, 20, "getElementsByTagName", &ci_DOMElement$$getelementsbytagname },
  { 0x4A4817CA, 0, 22, "getElementsByTagNameNS", &ci_DOMElement$$getelementsbytagnamens },
  { 0x44F4AB8A, 0, 12, "setAttribute", &ci_DOMElement$$setattribute },
  { 0x3C0CDA4A, 1, 18, "setIDAttributeNode", &ci_DOMElement$$setidattributenode },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMElement$$__get },
  { 0x1E1A0890, 1, 17, "removeAttributeNS", &ci_DOMElement$$removeattributens },
  { 0x306253D1, 0, 18, "setAttributeNodeNS", &ci_DOMElement$$setattributenodens },
  { 0x2851EE11, 1, 16, "setIDAttributeNS", &ci_DOMElement$$setidattributens },
  { 0x5311D955, 0, 14, "hasAttributeNS", &ci_DOMElement$$hasattributens },
  { 0x03340395, 1, 5, "__set", &ci_DOMElement$$__set },
  { 0x6110D616, 1, 14, "setIDAttribute", &ci_DOMElement$$setidattribute },
  { 0x7AF19157, 1, 14, "setAttributeNS", &ci_DOMElement$$setattributens },
  { 0x5C80EC18, 1, 18, "getAttributeNodeNS", &ci_DOMElement$$getattributenodens },
  { 0x6D3F0899, 1, 14, "getAttributeNS", &ci_DOMElement$$getattributens },
  { 0x5CF34C5C, 1, 16, "setAttributeNode", &ci_DOMElement$$setattributenode },
  { 0x229C615F, 1, 11, "__construct", &ci_DOMElement$$__construct },
  { 0x6612FC28, 1, 12, "getAttribute", &ci_DOMElement$$getattribute },
  { 0x2EA150EA, 1, 19, "removeAttributeNode", &ci_DOMElement$$removeattributenode },
  { 0x3944FFEC, 1, 12, "hasAttribute", &ci_DOMElement$$hasattribute },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMElement$$__isset },
  { 0x462E1E2F, 1, 15, "removeAttribute", &ci_DOMElement$$removeattribute },
  { 0x3B5AB1FE, 1, 16, "getAttributeNode", &ci_DOMElement$$getattributenode },
};
extern const int cw_DOMElement$$call_info_index[] = {
  63,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,0,-1,-1,-1,-1,4,
  5,6,-1,-1,-1,8,10,11,
  12,13,-1,-1,14,-1,-1,15,
  -1,-1,-1,-1,-1,-1,-1,-1,
  16,-1,17,-1,18,-1,19,20,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,21,-1,

};
c_DOMElement *c_DOMElement::create(String a0, String a1, String a2) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2);
  return this;
}
extern const MethodCallInfoTable cw_DOMElement$$call_info_table[];
extern const int cw_DOMElement$$call_info_index[];
extern const InstanceOfInfo cw_DOMElement$$instanceof_table[];
extern const int cw_DOMElement$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMElement = {
  (ObjectData*(*)(ObjectData*))coo_DOMElement,
  cw_DOMElement$$call_info_table,cw_DOMElement$$call_info_index,
  cw_DOMElement$$instanceof_table,cw_DOMElement$$instanceof_index,
  &c_DOMElement::s_class_name,
  0,&ci_DOMElement$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMElement::s_cls
};
ObjectData *coo_DOMEntity() {
  return NEWOBJ(c_DOMEntity)();
}
IMPLEMENT_CLASS(DOMEntity)
extern const InstanceOfInfo cw_DOMEntity$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x574B86FF,1,"DOMEntity",&cw_DOMEntity},
};
const int cw_DOMEntity$$instanceof_index[] = {
  3,
  -1,-1,0,1,
};
extern const CallInfo ci_DOMEntity$$__isset = { (void*)&c_DOMEntity::i___isset, (void*)&c_DOMEntity::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMEntity$$__get = { (void*)&c_DOMEntity::i___get, (void*)&c_DOMEntity::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMEntity$$__set = { (void*)&c_DOMEntity::i___set, (void*)&c_DOMEntity::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMEntity$$__construct = { (void*)&c_DOMEntity::i___construct, (void*)&c_DOMEntity::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DOMEntity::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMEntity::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMEntity::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMEntity::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMEntity::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMEntity);
  }
  c_DOMEntity *self ATTRIBUTE_UNUSED (static_cast<c_DOMEntity*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMEntity::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMEntity);
  }
  c_DOMEntity *self ATTRIBUTE_UNUSED (static_cast<c_DOMEntity*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMEntity::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMEntity);
  }
  c_DOMEntity *self ATTRIBUTE_UNUSED (static_cast<c_DOMEntity*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMEntity::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMEntity);
  }
  c_DOMEntity *self ATTRIBUTE_UNUSED (static_cast<c_DOMEntity*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMEntity$$call_info_table[] = {
  { 0x03340395, 1, 5, "__set", &ci_DOMEntity$$__set },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMEntity$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMEntity$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMEntity$$__get },
};
extern const int cw_DOMEntity$$call_info_index[] = {
  7,
  -1,-1,-1,-1,-1,0,1,2,

};
c_DOMEntity *c_DOMEntity::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMEntity$$call_info_table[];
extern const int cw_DOMEntity$$call_info_index[];
extern const InstanceOfInfo cw_DOMEntity$$instanceof_table[];
extern const int cw_DOMEntity$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMEntity = {
  (ObjectData*(*)(ObjectData*))coo_DOMEntity,
  cw_DOMEntity$$call_info_table,cw_DOMEntity$$call_info_index,
  cw_DOMEntity$$instanceof_table,cw_DOMEntity$$instanceof_index,
  &c_DOMEntity::s_class_name,
  0,&ci_DOMEntity$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMEntity::s_cls
};
ObjectData *coo_DOMProcessingInstruction() {
  return NEWOBJ(c_DOMProcessingInstruction)();
}
IMPLEMENT_CLASS(DOMProcessingInstruction)
extern const InstanceOfInfo cw_DOMProcessingInstruction$$instanceof_table[] = {
  {0x4D987F80,1,"DOMProcessingInstruction",&cw_DOMProcessingInstruction},
  {0x33523662,1,"DOMNode",&cw_DOMNode},
};
const int cw_DOMProcessingInstruction$$instanceof_index[] = {
  3,
  0,-1,1,-1,
};
extern const CallInfo ci_DOMProcessingInstruction$$__isset = { (void*)&c_DOMProcessingInstruction::i___isset, (void*)&c_DOMProcessingInstruction::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMProcessingInstruction$$__get = { (void*)&c_DOMProcessingInstruction::i___get, (void*)&c_DOMProcessingInstruction::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMProcessingInstruction$$__set = { (void*)&c_DOMProcessingInstruction::i___set, (void*)&c_DOMProcessingInstruction::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMProcessingInstruction$$__construct = { (void*)&c_DOMProcessingInstruction::i___construct, (void*)&c_DOMProcessingInstruction::ifa___construct, 2, 4, 0x0000000000000000LL};
Variant c_DOMProcessingInstruction::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMProcessingInstruction::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMProcessingInstruction::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMProcessingInstruction::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMProcessingInstruction::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMProcessingInstruction);
  }
  c_DOMProcessingInstruction *self ATTRIBUTE_UNUSED (static_cast<c_DOMProcessingInstruction*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("__construct", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_DOMProcessingInstruction::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMProcessingInstruction);
  }
  c_DOMProcessingInstruction *self ATTRIBUTE_UNUSED (static_cast<c_DOMProcessingInstruction*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMProcessingInstruction::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMProcessingInstruction);
  }
  c_DOMProcessingInstruction *self ATTRIBUTE_UNUSED (static_cast<c_DOMProcessingInstruction*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMProcessingInstruction::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMProcessingInstruction);
  }
  c_DOMProcessingInstruction *self ATTRIBUTE_UNUSED (static_cast<c_DOMProcessingInstruction*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMProcessingInstruction$$call_info_table[] = {
  { 0x03340395, 1, 5, "__set", &ci_DOMProcessingInstruction$$__set },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMProcessingInstruction$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMProcessingInstruction$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMProcessingInstruction$$__get },
};
extern const int cw_DOMProcessingInstruction$$call_info_index[] = {
  7,
  -1,-1,-1,-1,-1,0,1,2,

};
c_DOMProcessingInstruction *c_DOMProcessingInstruction::create(String a0, String a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_DOMProcessingInstruction$$call_info_table[];
extern const int cw_DOMProcessingInstruction$$call_info_index[];
extern const InstanceOfInfo cw_DOMProcessingInstruction$$instanceof_table[];
extern const int cw_DOMProcessingInstruction$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMProcessingInstruction = {
  (ObjectData*(*)(ObjectData*))coo_DOMProcessingInstruction,
  cw_DOMProcessingInstruction$$call_info_table,cw_DOMProcessingInstruction$$call_info_index,
  cw_DOMProcessingInstruction$$instanceof_table,cw_DOMProcessingInstruction$$instanceof_index,
  &c_DOMProcessingInstruction::s_class_name,
  0,&ci_DOMProcessingInstruction$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMProcessingInstruction::s_cls
};
ObjectData *coo_PDOStatement() {
  return NEWOBJ(c_PDOStatement)();
}
IMPLEMENT_CLASS(PDOStatement)
extern const InstanceOfInfo cw_PDOStatement$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x0B734244,1,"PDOStatement",&cw_PDOStatement},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_PDOStatement$$instanceof_index[] = {
  7,
  -1,0,-1,-1,1,-1,2,-1,

};
extern const CallInfo ci_PDOStatement$$nextrowset = { (void*)&c_PDOStatement::i_nextrowset, (void*)&c_PDOStatement::ifa_nextrowset, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$__sleep = { (void*)&c_PDOStatement::i___sleep, (void*)&c_PDOStatement::ifa___sleep, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$key = { (void*)&c_PDOStatement::i_key, (void*)&c_PDOStatement::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$errorcode = { (void*)&c_PDOStatement::i_errorcode, (void*)&c_PDOStatement::ifa_errorcode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$fetchobject = { (void*)&c_PDOStatement::i_fetchobject, (void*)&c_PDOStatement::ifa_fetchobject, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$next = { (void*)&c_PDOStatement::i_next, (void*)&c_PDOStatement::ifa_next, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$__construct = { (void*)&c_PDOStatement::i___construct, (void*)&c_PDOStatement::ifa___construct, 0, 68, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$getattribute = { (void*)&c_PDOStatement::i_getattribute, (void*)&c_PDOStatement::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$rowcount = { (void*)&c_PDOStatement::i_rowcount, (void*)&c_PDOStatement::ifa_rowcount, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$setattribute = { (void*)&c_PDOStatement::i_setattribute, (void*)&c_PDOStatement::ifa_setattribute, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$current = { (void*)&c_PDOStatement::i_current, (void*)&c_PDOStatement::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$debugdumpparams = { (void*)&c_PDOStatement::i_debugdumpparams, (void*)&c_PDOStatement::ifa_debugdumpparams, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$getcolumnmeta = { (void*)&c_PDOStatement::i_getcolumnmeta, (void*)&c_PDOStatement::ifa_getcolumnmeta, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$fetch = { (void*)&c_PDOStatement::i_fetch, (void*)&c_PDOStatement::ifa_fetch, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$errorinfo = { (void*)&c_PDOStatement::i_errorinfo, (void*)&c_PDOStatement::ifa_errorinfo, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$setfetchmode = { (void*)&c_PDOStatement::i_setfetchmode, (void*)&c_PDOStatement::ifa_setfetchmode, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$valid = { (void*)&c_PDOStatement::i_valid, (void*)&c_PDOStatement::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$closecursor = { (void*)&c_PDOStatement::i_closecursor, (void*)&c_PDOStatement::ifa_closecursor, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$fetchcolumn = { (void*)&c_PDOStatement::i_fetchcolumn, (void*)&c_PDOStatement::ifa_fetchcolumn, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$columncount = { (void*)&c_PDOStatement::i_columncount, (void*)&c_PDOStatement::ifa_columncount, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$__wakeup = { (void*)&c_PDOStatement::i___wakeup, (void*)&c_PDOStatement::ifa___wakeup, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$execute = { (void*)&c_PDOStatement::i_execute, (void*)&c_PDOStatement::ifa_execute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$bindcolumn = { (void*)&c_PDOStatement::i_bindcolumn, (void*)&c_PDOStatement::ifa_bindcolumn, 5, 4, 0x0000000000000002LL};
extern const CallInfo ci_PDOStatement$$bindparam = { (void*)&c_PDOStatement::i_bindparam, (void*)&c_PDOStatement::ifa_bindparam, 5, 4, 0x0000000000000002LL};
extern const CallInfo ci_PDOStatement$$bindvalue = { (void*)&c_PDOStatement::i_bindvalue, (void*)&c_PDOStatement::ifa_bindvalue, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$fetchall = { (void*)&c_PDOStatement::i_fetchall, (void*)&c_PDOStatement::ifa_fetchall, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDOStatement$$rewind = { (void*)&c_PDOStatement::i_rewind, (void*)&c_PDOStatement::ifa_rewind, 0, 4, 0x0000000000000000LL};
Variant c_PDOStatement::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_PDOStatement::i_execute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_execute);
}
Variant c_PDOStatement::i_fetch(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetch);
}
Variant c_PDOStatement::i_fetchobject(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetchobject);
}
Variant c_PDOStatement::i_fetchcolumn(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetchcolumn);
}
Variant c_PDOStatement::i_fetchall(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetchall);
}
Variant c_PDOStatement::i_bindvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_bindvalue);
}
Variant c_PDOStatement::i_bindparam(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_bindparam);
}
Variant c_PDOStatement::i_bindcolumn(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_bindcolumn);
}
Variant c_PDOStatement::i_rowcount(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rowcount);
}
Variant c_PDOStatement::i_errorcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_errorcode);
}
Variant c_PDOStatement::i_errorinfo(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_errorinfo);
}
Variant c_PDOStatement::i_setattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattribute);
}
Variant c_PDOStatement::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_PDOStatement::i_columncount(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_columncount);
}
Variant c_PDOStatement::i_getcolumnmeta(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getcolumnmeta);
}
Variant c_PDOStatement::i_setfetchmode(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_setfetchmode, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("setfetchmode", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_setfetchmode(count, arg0, p));
  }
}
Variant c_PDOStatement::i_nextrowset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_nextrowset);
}
Variant c_PDOStatement::i_closecursor(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_closecursor);
}
Variant c_PDOStatement::i_debugdumpparams(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_debugdumpparams);
}
Variant c_PDOStatement::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_PDOStatement::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_PDOStatement::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_PDOStatement::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_PDOStatement::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_PDOStatement::i___wakeup(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___wakeup);
}
Variant c_PDOStatement::i___sleep(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___sleep);
}
Variant NEVER_INLINE c_PDOStatement::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_PDOStatement::ifa_execute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_execute, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("execute", 1, 1);
  if (count <= 0) return (self->t_execute());
  CVarRef arg0(a0);
  return (self->t_execute(arg0));
}
Variant NEVER_INLINE c_PDOStatement::ifa_fetch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetch, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("fetch", 3, 1);
  if (count <= 0) return (self->t_fetch());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_fetch(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_fetch(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_fetch(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_PDOStatement::ifa_fetchobject(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetchobject, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("fetchobject", 2, 1);
  if (count <= 0) return (self->t_fetchobject());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_fetchobject(arg0));
  CVarRef arg1(a1);
  return (self->t_fetchobject(arg0, arg1));
}
Variant NEVER_INLINE c_PDOStatement::ifa_fetchcolumn(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetchcolumn, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("fetchcolumn", 1, 1);
  if (count <= 0) return (self->t_fetchcolumn());
  CVarRef arg0(a0);
  return (self->t_fetchcolumn(arg0));
}
Variant NEVER_INLINE c_PDOStatement::ifa_fetchall(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetchall, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("fetchall", 3, 1);
  if (count <= 0) return (self->t_fetchall());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_fetchall(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_fetchall(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_fetchall(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_PDOStatement::ifa_bindvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_bindvalue, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("bindvalue", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_bindvalue(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_bindvalue(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_PDOStatement::ifa_bindparam(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_bindparam, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 5)) return throw_wrong_arguments("bindparam", count, 2, 5, 1);
  CVarRef arg0(a0);
  VRefParam arg1(vref(a1));
  if (count <= 2) return (self->t_bindparam(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_bindparam(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_bindparam(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  return (self->t_bindparam(arg0, arg1, arg2, arg3, arg4));
}
Variant NEVER_INLINE c_PDOStatement::ifa_bindcolumn(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_bindcolumn, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 5)) return throw_wrong_arguments("bindcolumn", count, 2, 5, 1);
  CVarRef arg0(a0);
  VRefParam arg1(vref(a1));
  if (count <= 2) return (self->t_bindcolumn(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_bindcolumn(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_bindcolumn(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  return (self->t_bindcolumn(arg0, arg1, arg2, arg3, arg4));
}
Variant NEVER_INLINE c_PDOStatement::ifa_rowcount(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rowcount, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rowcount", 0, 1);
  return (self->t_rowcount());
}
Variant NEVER_INLINE c_PDOStatement::ifa_errorcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_errorcode, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("errorcode", 0, 1);
  return (self->t_errorcode());
}
Variant NEVER_INLINE c_PDOStatement::ifa_errorinfo(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_errorinfo, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("errorinfo", 0, 1);
  return (self->t_errorinfo());
}
Variant NEVER_INLINE c_PDOStatement::ifa_setattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattribute, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setattribute", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setattribute(arg0, arg1));
}
Variant NEVER_INLINE c_PDOStatement::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_PDOStatement::ifa_columncount(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_columncount, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("columncount", 0, 1);
  return (self->t_columncount());
}
Variant NEVER_INLINE c_PDOStatement::ifa_getcolumnmeta(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcolumnmeta, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getcolumnmeta", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getcolumnmeta(arg0));
}
Variant NEVER_INLINE c_PDOStatement::ifa_setfetchmode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setfetchmode, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("setfetchmode", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_setfetchmode(count, arg0, p));
}
Variant NEVER_INLINE c_PDOStatement::ifa_nextrowset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_nextrowset, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("nextrowset", 0, 1);
  return (self->t_nextrowset());
}
Variant NEVER_INLINE c_PDOStatement::ifa_closecursor(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_closecursor, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("closecursor", 0, 1);
  return (self->t_closecursor());
}
Variant NEVER_INLINE c_PDOStatement::ifa_debugdumpparams(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_debugdumpparams, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("debugdumpparams", 0, 1);
  return (self->t_debugdumpparams());
}
Variant NEVER_INLINE c_PDOStatement::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_PDOStatement::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_PDOStatement::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next());
}
Variant NEVER_INLINE c_PDOStatement::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind());
}
Variant NEVER_INLINE c_PDOStatement::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_PDOStatement::ifa___wakeup(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___wakeup, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__wakeup", 0, 1);
  return (self->t___wakeup());
}
Variant NEVER_INLINE c_PDOStatement::ifa___sleep(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___sleep, coo_PDOStatement);
  }
  c_PDOStatement *self ATTRIBUTE_UNUSED (static_cast<c_PDOStatement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__sleep", 0, 1);
  return (self->t___sleep());
}
extern const MethodCallInfoTable cw_PDOStatement$$call_info_table[] = {
  { 0x65EB8E41, 1, 8, "fetchall", &ci_PDOStatement$$fetchall },
  { 0x3628E403, 1, 9, "bindvalue", &ci_PDOStatement$$bindvalue },
  { 0x54808C44, 1, 5, "valid", &ci_PDOStatement$$valid },
  { 0x18C65C05, 1, 11, "closecursor", &ci_PDOStatement$$closecursor },
  { 0x2372F2C7, 1, 9, "errorcode", &ci_PDOStatement$$errorcode },
  { 0x44F4AB8A, 1, 12, "setattribute", &ci_PDOStatement$$setattribute },
  { 0x6B57714E, 1, 7, "execute", &ci_PDOStatement$$execute },
  { 0x5C91918F, 1, 11, "columncount", &ci_PDOStatement$$columncount },
  { 0x024E8C51, 1, 3, "key", &ci_PDOStatement$$key },
  { 0x44F2A252, 1, 10, "nextrowset", &ci_PDOStatement$$nextrowset },
  { 0x1BA41696, 1, 9, "bindparam", &ci_PDOStatement$$bindparam },
  { 0x10C5FFD9, 1, 11, "fetchcolumn", &ci_PDOStatement$$fetchcolumn },
  { 0x0903299A, 1, 8, "rowcount", &ci_PDOStatement$$rowcount },
  { 0x046B21DC, 0, 7, "current", &ci_PDOStatement$$current },
  { 0x2A085CDC, 1, 8, "__wakeup", &ci_PDOStatement$$__wakeup },
  { 0x3327229D, 0, 11, "fetchobject", &ci_PDOStatement$$fetchobject },
  { 0x2095219D, 1, 10, "bindcolumn", &ci_PDOStatement$$bindcolumn },
  { 0x7F04605E, 1, 9, "errorinfo", &ci_PDOStatement$$errorinfo },
  { 0x229C615F, 1, 11, "__construct", &ci_PDOStatement$$__construct },
  { 0x20136861, 1, 12, "setfetchmode", &ci_PDOStatement$$setfetchmode },
  { 0x3BD7B2A2, 1, 15, "debugdumpparams", &ci_PDOStatement$$debugdumpparams },
  { 0x6612FC28, 1, 12, "getattribute", &ci_PDOStatement$$getattribute },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_PDOStatement$$rewind },
  { 0x5ADBC02D, 1, 7, "__sleep", &ci_PDOStatement$$__sleep },
  { 0x3B8102B8, 1, 4, "next", &ci_PDOStatement$$next },
  { 0x3B90B0FB, 0, 5, "fetch", &ci_PDOStatement$$fetch },
  { 0x06E717FB, 1, 13, "getcolumnmeta", &ci_PDOStatement$$getcolumnmeta },
};
extern const int cw_PDOStatement$$call_info_index[] = {
  63,
  -1,0,-1,1,2,3,-1,4,
  -1,-1,5,-1,-1,-1,6,7,
  -1,8,9,-1,-1,-1,10,-1,
  -1,11,12,-1,13,15,17,18,
  -1,19,20,-1,-1,-1,-1,-1,
  21,-1,22,-1,-1,23,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  24,-1,-1,25,-1,-1,-1,-1,

};
c_PDOStatement *c_PDOStatement::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_PDOStatement$$call_info_table[];
extern const int cw_PDOStatement$$call_info_index[];
extern const InstanceOfInfo cw_PDOStatement$$instanceof_table[];
extern const int cw_PDOStatement$$instanceof_index[];
const ObjectStaticCallbacks cw_PDOStatement = {
  (ObjectData*(*)(ObjectData*))coo_PDOStatement,
  cw_PDOStatement$$call_info_table,cw_PDOStatement$$call_info_index,
  cw_PDOStatement$$instanceof_table,cw_PDOStatement$$instanceof_index,
  &c_PDOStatement::s_class_name,
  0,&ci_PDOStatement$$__construct,0,0,0x0,
  &c_PDOStatement::s_cls
};
ObjectData *coo_EncodingDetector() {
  return NEWOBJ(c_EncodingDetector)();
}
IMPLEMENT_CLASS(EncodingDetector)
extern const InstanceOfInfo cw_EncodingDetector$$instanceof_table[] = {
  {0x3618ED87,1,"EncodingDetector",&cw_EncodingDetector},
};
const int cw_EncodingDetector$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_EncodingDetector$$detect = { (void*)&c_EncodingDetector::i_detect, (void*)&c_EncodingDetector::ifa_detect, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingDetector$$detectall = { (void*)&c_EncodingDetector::i_detectall, (void*)&c_EncodingDetector::ifa_detectall, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingDetector$$setdeclaredencoding = { (void*)&c_EncodingDetector::i_setdeclaredencoding, (void*)&c_EncodingDetector::ifa_setdeclaredencoding, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingDetector$$__construct = { (void*)&c_EncodingDetector::i___construct, (void*)&c_EncodingDetector::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingDetector$$settext = { (void*)&c_EncodingDetector::i_settext, (void*)&c_EncodingDetector::ifa_settext, 1, 4, 0x0000000000000000LL};
Variant c_EncodingDetector::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_EncodingDetector::i_settext(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_settext);
}
Variant c_EncodingDetector::i_setdeclaredencoding(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setdeclaredencoding);
}
Variant c_EncodingDetector::i_detect(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_detect);
}
Variant c_EncodingDetector::i_detectall(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_detectall);
}
Variant NEVER_INLINE c_EncodingDetector::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_EncodingDetector);
  }
  c_EncodingDetector *self ATTRIBUTE_UNUSED (static_cast<c_EncodingDetector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_EncodingDetector::ifa_settext(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_settext, coo_EncodingDetector);
  }
  c_EncodingDetector *self ATTRIBUTE_UNUSED (static_cast<c_EncodingDetector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("settext", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_settext(arg0), null);
}
Variant NEVER_INLINE c_EncodingDetector::ifa_setdeclaredencoding(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setdeclaredencoding, coo_EncodingDetector);
  }
  c_EncodingDetector *self ATTRIBUTE_UNUSED (static_cast<c_EncodingDetector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setdeclaredencoding", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setdeclaredencoding(arg0), null);
}
Variant NEVER_INLINE c_EncodingDetector::ifa_detect(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_detect, coo_EncodingDetector);
  }
  c_EncodingDetector *self ATTRIBUTE_UNUSED (static_cast<c_EncodingDetector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("detect", 0, 1);
  return (self->t_detect());
}
Variant NEVER_INLINE c_EncodingDetector::ifa_detectall(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_detectall, coo_EncodingDetector);
  }
  c_EncodingDetector *self ATTRIBUTE_UNUSED (static_cast<c_EncodingDetector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("detectall", 0, 1);
  return (self->t_detectall());
}
extern const MethodCallInfoTable cw_EncodingDetector$$call_info_table[] = {
  { 0x3C385B00, 1, 6, "detect", &ci_EncodingDetector$$detect },
  { 0x0F751823, 1, 9, "detectAll", &ci_EncodingDetector$$detectall },
  { 0x6C2096A6, 0, 7, "setText", &ci_EncodingDetector$$settext },
  { 0x32322946, 1, 19, "setDeclaredEncoding", &ci_EncodingDetector$$setdeclaredencoding },
  { 0x229C615F, 1, 11, "__construct", &ci_EncodingDetector$$__construct },
};
extern const int cw_EncodingDetector$$call_info_index[] = {
  15,
  0,-1,-1,1,-1,-1,2,-1,
  -1,-1,-1,-1,-1,-1,-1,4,

};
c_EncodingDetector *c_EncodingDetector::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_EncodingDetector$$call_info_table[];
extern const int cw_EncodingDetector$$call_info_index[];
extern const InstanceOfInfo cw_EncodingDetector$$instanceof_table[];
extern const int cw_EncodingDetector$$instanceof_index[];
const ObjectStaticCallbacks cw_EncodingDetector = {
  (ObjectData*(*)(ObjectData*))coo_EncodingDetector,
  cw_EncodingDetector$$call_info_table,cw_EncodingDetector$$call_info_index,
  cw_EncodingDetector$$instanceof_table,cw_EncodingDetector$$instanceof_index,
  &c_EncodingDetector::s_class_name,
  0,&ci_EncodingDetector$$__construct,0,0,0x0,
  &c_EncodingDetector::s_cls
};
ObjectData *coo_Normalizer() {
  return NEWOBJ(c_Normalizer)();
}
IMPLEMENT_CLASS(Normalizer)
extern const InstanceOfInfo cw_Normalizer$$instanceof_table[] = {
  {0x29F87A50,1,"Normalizer",&cw_Normalizer},
};
const int cw_Normalizer$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_Normalizer$$isnormalized = { (void*)&c_Normalizer::i_isnormalized, (void*)&c_Normalizer::ifa_isnormalized, 2, 12, 0x0000000000000000LL};
extern const CallInfo ci_Normalizer$$normalize = { (void*)&c_Normalizer::i_normalize, (void*)&c_Normalizer::ifa_normalize, 2, 12, 0x0000000000000000LL};
extern const CallInfo ci_Normalizer$$__construct = { (void*)&c_Normalizer::i___construct, (void*)&c_Normalizer::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_Normalizer::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Normalizer::i_isnormalized(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isnormalized);
}
Variant c_Normalizer::i_normalize(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_normalize);
}
Variant NEVER_INLINE c_Normalizer::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Normalizer);
  }
  c_Normalizer *self ATTRIBUTE_UNUSED (static_cast<c_Normalizer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_Normalizer::ifa_isnormalized(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("isnormalized", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (c_Normalizer::t_isnormalized(arg0));
  CVarRef arg1(a1);
  return (c_Normalizer::t_isnormalized(arg0, arg1));
}
Variant NEVER_INLINE c_Normalizer::ifa_normalize(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("normalize", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (c_Normalizer::t_normalize(arg0));
  CVarRef arg1(a1);
  return (c_Normalizer::t_normalize(arg0, arg1));
}
extern const MethodCallInfoTable cw_Normalizer$$call_info_table[] = {
  { 0x42CB6C5A, 1, 9, "normalize", &ci_Normalizer$$normalize },
  { 0x5F66ED1D, 1, 12, "isnormalized", &ci_Normalizer$$isnormalized },
  { 0x229C615F, 1, 11, "__construct", &ci_Normalizer$$__construct },
};
extern const int cw_Normalizer$$call_info_index[] = {
  7,
  -1,-1,0,-1,-1,1,-1,2,

};
c_Normalizer *c_Normalizer::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_Normalizer$$call_info_table[];
extern const int cw_Normalizer$$call_info_index[];
extern const InstanceOfInfo cw_Normalizer$$instanceof_table[];
extern const int cw_Normalizer$$instanceof_index[];
const ObjectStaticCallbacks cw_Normalizer = {
  (ObjectData*(*)(ObjectData*))coo_Normalizer,
  cw_Normalizer$$call_info_table,cw_Normalizer$$call_info_index,
  cw_Normalizer$$instanceof_table,cw_Normalizer$$instanceof_index,
  &c_Normalizer::s_class_name,
  &c_Normalizer::os_prop_table,&ci_Normalizer$$__construct,0,0,0x0,
  &c_Normalizer::s_cls
};
ObjectData *coo_DOMXPath() {
  return NEWOBJ(c_DOMXPath)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DOMXPath)
extern const InstanceOfInfo cw_DOMXPath$$instanceof_table[] = {
  {0x09C6DBA8,1,"DOMXPath",&cw_DOMXPath},
};
const int cw_DOMXPath$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_DOMXPath$$__set = { (void*)&c_DOMXPath::i___set, (void*)&c_DOMXPath::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$__get = { (void*)&c_DOMXPath::i___get, (void*)&c_DOMXPath::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$query = { (void*)&c_DOMXPath::i_query, (void*)&c_DOMXPath::ifa_query, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$evaluate = { (void*)&c_DOMXPath::i_evaluate, (void*)&c_DOMXPath::ifa_evaluate, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$__isset = { (void*)&c_DOMXPath::i___isset, (void*)&c_DOMXPath::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$registerphpfunctions = { (void*)&c_DOMXPath::i_registerphpfunctions, (void*)&c_DOMXPath::ifa_registerphpfunctions, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$__construct = { (void*)&c_DOMXPath::i___construct, (void*)&c_DOMXPath::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMXPath$$registernamespace = { (void*)&c_DOMXPath::i_registernamespace, (void*)&c_DOMXPath::ifa_registernamespace, 2, 4, 0x0000000000000000LL};
Variant c_DOMXPath::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMXPath::i_evaluate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_evaluate);
}
Variant c_DOMXPath::i_query(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_query);
}
Variant c_DOMXPath::i_registernamespace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_registernamespace);
}
Variant c_DOMXPath::i_registerphpfunctions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_registerphpfunctions);
}
Variant c_DOMXPath::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMXPath::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMXPath::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMXPath::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__construct", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_DOMXPath::ifa_evaluate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_evaluate, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("evaluate", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_evaluate(arg0));
  CVarRef arg1(a1);
  return (self->t_evaluate(arg0, arg1));
}
Variant NEVER_INLINE c_DOMXPath::ifa_query(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_query, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("query", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_query(arg0));
  CVarRef arg1(a1);
  return (self->t_query(arg0, arg1));
}
Variant NEVER_INLINE c_DOMXPath::ifa_registernamespace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registernamespace, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("registernamespace", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_registernamespace(arg0, arg1));
}
Variant NEVER_INLINE c_DOMXPath::ifa_registerphpfunctions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerphpfunctions, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("registerphpfunctions", 1, 1);
  if (count <= 0) return (self->t_registerphpfunctions());
  CVarRef arg0(a0);
  return (self->t_registerphpfunctions(arg0));
}
Variant NEVER_INLINE c_DOMXPath::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMXPath::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMXPath::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMXPath);
  }
  c_DOMXPath *self ATTRIBUTE_UNUSED (static_cast<c_DOMXPath*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMXPath$$call_info_table[] = {
  { 0x3374AB82, 1, 20, "registerPHPFunctions", &ci_DOMXPath$$registerphpfunctions },
  { 0x03340395, 1, 5, "__set", &ci_DOMXPath$$__set },
  { 0x414DA377, 1, 5, "query", &ci_DOMXPath$$query },
  { 0x0681B0E8, 1, 17, "registerNamespace", &ci_DOMXPath$$registernamespace },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMXPath$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMXPath$$__construct },
  { 0x6F3C912F, 0, 8, "evaluate", &ci_DOMXPath$$evaluate },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMXPath$$__get },
};
extern const int cw_DOMXPath$$call_info_index[] = {
  15,
  -1,-1,0,-1,-1,1,-1,2,
  3,-1,-1,-1,-1,-1,4,5,

};
c_DOMXPath *c_DOMXPath::create(Variant a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_DOMXPath$$call_info_table[];
extern const int cw_DOMXPath$$call_info_index[];
extern const InstanceOfInfo cw_DOMXPath$$instanceof_table[];
extern const int cw_DOMXPath$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMXPath = {
  (ObjectData*(*)(ObjectData*))coo_DOMXPath,
  cw_DOMXPath$$call_info_table,cw_DOMXPath$$call_info_index,
  cw_DOMXPath$$instanceof_table,cw_DOMXPath$$instanceof_index,
  &c_DOMXPath::s_class_name,
  0,&ci_DOMXPath$$__construct,0,0,0x0,
  &c_DOMXPath::s_cls
};
ObjectData *coo_DOMImplementation() {
  return NEWOBJ(c_DOMImplementation)();
}
IMPLEMENT_CLASS(DOMImplementation)
extern const InstanceOfInfo cw_DOMImplementation$$instanceof_table[] = {
  {0x246387FD,1,"DOMImplementation",&cw_DOMImplementation},
};
const int cw_DOMImplementation$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_DOMImplementation$$createdocumenttype = { (void*)&c_DOMImplementation::i_createdocumenttype, (void*)&c_DOMImplementation::ifa_createdocumenttype, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMImplementation$$hasfeature = { (void*)&c_DOMImplementation::i_hasfeature, (void*)&c_DOMImplementation::ifa_hasfeature, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMImplementation$$__construct = { (void*)&c_DOMImplementation::i___construct, (void*)&c_DOMImplementation::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMImplementation$$createdocument = { (void*)&c_DOMImplementation::i_createdocument, (void*)&c_DOMImplementation::ifa_createdocument, 3, 4, 0x0000000000000000LL};
Variant c_DOMImplementation::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMImplementation::i_createdocument(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createdocument);
}
Variant c_DOMImplementation::i_createdocumenttype(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createdocumenttype);
}
Variant c_DOMImplementation::i_hasfeature(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasfeature);
}
Variant NEVER_INLINE c_DOMImplementation::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMImplementation);
  }
  c_DOMImplementation *self ATTRIBUTE_UNUSED (static_cast<c_DOMImplementation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMImplementation::ifa_createdocument(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createdocument, coo_DOMImplementation);
  }
  c_DOMImplementation *self ATTRIBUTE_UNUSED (static_cast<c_DOMImplementation*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("createdocument", 3, 1);
  if (count <= 0) return (self->t_createdocument());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_createdocument(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_createdocument(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_createdocument(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DOMImplementation::ifa_createdocumenttype(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createdocumenttype, coo_DOMImplementation);
  }
  c_DOMImplementation *self ATTRIBUTE_UNUSED (static_cast<c_DOMImplementation*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("createdocumenttype", 3, 1);
  if (count <= 0) return (self->t_createdocumenttype());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_createdocumenttype(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_createdocumenttype(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_createdocumenttype(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DOMImplementation::ifa_hasfeature(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasfeature, coo_DOMImplementation);
  }
  c_DOMImplementation *self ATTRIBUTE_UNUSED (static_cast<c_DOMImplementation*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("hasfeature", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_hasfeature(arg0, arg1));
}
extern const MethodCallInfoTable cw_DOMImplementation$$call_info_table[] = {
  { 0x6F3DBAC3, 0, 18, "createDocumentType", &ci_DOMImplementation$$createdocumenttype },
  { 0x4306A6A3, 1, 10, "hasFeature", &ci_DOMImplementation$$hasfeature },
  { 0x337D1B4E, 1, 14, "createDocument", &ci_DOMImplementation$$createdocument },
  { 0x229C615F, 1, 11, "__construct", &ci_DOMImplementation$$__construct },
};
extern const int cw_DOMImplementation$$call_info_index[] = {
  7,
  -1,-1,-1,0,-1,-1,2,3,

};
c_DOMImplementation *c_DOMImplementation::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMImplementation$$call_info_table[];
extern const int cw_DOMImplementation$$call_info_index[];
extern const InstanceOfInfo cw_DOMImplementation$$instanceof_table[];
extern const int cw_DOMImplementation$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMImplementation = {
  (ObjectData*(*)(ObjectData*))coo_DOMImplementation,
  cw_DOMImplementation$$call_info_table,cw_DOMImplementation$$call_info_index,
  cw_DOMImplementation$$instanceof_table,cw_DOMImplementation$$instanceof_index,
  &c_DOMImplementation::s_class_name,
  0,&ci_DOMImplementation$$__construct,0,0,0x0,
  &c_DOMImplementation::s_cls
};
ObjectData *coo_SoapParam() {
  return NEWOBJ(c_SoapParam)();
}
IMPLEMENT_CLASS(SoapParam)
extern const InstanceOfInfo cw_SoapParam$$instanceof_table[] = {
  {0x5C55D968,1,"SoapParam",&cw_SoapParam},
};
const int cw_SoapParam$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_SoapParam$$__construct = { (void*)&c_SoapParam::i___construct, (void*)&c_SoapParam::ifa___construct, 2, 4, 0x0000000000000000LL};
Variant c_SoapParam::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_SoapParam::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapParam);
  }
  c_SoapParam *self ATTRIBUTE_UNUSED (static_cast<c_SoapParam*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__construct", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
extern const MethodCallInfoTable cw_SoapParam$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_SoapParam$$__construct },
};
extern const int cw_SoapParam$$call_info_index[] = {
  1,
  -1,0,
};
c_SoapParam *c_SoapParam::create(Variant a0, String a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_SoapParam$$call_info_table[];
extern const int cw_SoapParam$$call_info_index[];
extern const InstanceOfInfo cw_SoapParam$$instanceof_table[];
extern const int cw_SoapParam$$instanceof_index[];
const ObjectStaticCallbacks cw_SoapParam = {
  (ObjectData*(*)(ObjectData*))coo_SoapParam,
  cw_SoapParam$$call_info_table,cw_SoapParam$$call_info_index,
  cw_SoapParam$$instanceof_table,cw_SoapParam$$instanceof_index,
  &c_SoapParam::s_class_name,
  0,&ci_SoapParam$$__construct,0,0,0x0,
  &c_SoapParam::s_cls
};
ObjectData *coo_DOMNamedNodeMap() {
  return NEWOBJ(c_DOMNamedNodeMap)();
}
IMPLEMENT_CLASS(DOMNamedNodeMap)
extern const InstanceOfInfo cw_DOMNamedNodeMap$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x4527B946,1,"DOMNamedNodeMap",&cw_DOMNamedNodeMap},
  {0x40363017,1,"IteratorAggregate",(const ObjectStaticCallbacks*)2},
};
const int cw_DOMNamedNodeMap$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,1,2,

};
extern const CallInfo ci_DOMNamedNodeMap$$getiterator = { (void*)&c_DOMNamedNodeMap::i_getiterator, (void*)&c_DOMNamedNodeMap::ifa_getiterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$__set = { (void*)&c_DOMNamedNodeMap::i___set, (void*)&c_DOMNamedNodeMap::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$getnameditemns = { (void*)&c_DOMNamedNodeMap::i_getnameditemns, (void*)&c_DOMNamedNodeMap::ifa_getnameditemns, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$__get = { (void*)&c_DOMNamedNodeMap::i___get, (void*)&c_DOMNamedNodeMap::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$getnameditem = { (void*)&c_DOMNamedNodeMap::i_getnameditem, (void*)&c_DOMNamedNodeMap::ifa_getnameditem, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$__isset = { (void*)&c_DOMNamedNodeMap::i___isset, (void*)&c_DOMNamedNodeMap::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$__construct = { (void*)&c_DOMNamedNodeMap::i___construct, (void*)&c_DOMNamedNodeMap::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNamedNodeMap$$item = { (void*)&c_DOMNamedNodeMap::i_item, (void*)&c_DOMNamedNodeMap::ifa_item, 1, 4, 0x0000000000000000LL};
Variant c_DOMNamedNodeMap::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMNamedNodeMap::i_getnameditem(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getnameditem);
}
Variant c_DOMNamedNodeMap::i_getnameditemns(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getnameditemns);
}
Variant c_DOMNamedNodeMap::i_item(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_item);
}
Variant c_DOMNamedNodeMap::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMNamedNodeMap::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMNamedNodeMap::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant c_DOMNamedNodeMap::i_getiterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getiterator);
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa_getnameditem(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getnameditem, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getnameditem", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getnameditem(arg0));
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa_getnameditemns(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getnameditemns, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("getnameditemns", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_getnameditemns(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa_item(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_item, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("item", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_item(arg0));
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
Variant NEVER_INLINE c_DOMNamedNodeMap::ifa_getiterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getiterator, coo_DOMNamedNodeMap);
  }
  c_DOMNamedNodeMap *self ATTRIBUTE_UNUSED (static_cast<c_DOMNamedNodeMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getiterator", 0, 1);
  return (self->t_getiterator());
}
extern const MethodCallInfoTable cw_DOMNamedNodeMap$$call_info_table[] = {
  { 0x32A12503, 1, 11, "getIterator", &ci_DOMNamedNodeMap$$getiterator },
  { 0x03340395, 1, 5, "__set", &ci_DOMNamedNodeMap$$__set },
  { 0x030902C6, 1, 4, "item", &ci_DOMNamedNodeMap$$item },
  { 0x7F9ADC3A, 1, 12, "getNamedItem", &ci_DOMNamedNodeMap$$getnameditem },
  { 0x7F4F0F1B, 1, 14, "getNamedItemNS", &ci_DOMNamedNodeMap$$getnameditemns },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMNamedNodeMap$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMNamedNodeMap$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMNamedNodeMap$$__get },
};
extern const int cw_DOMNamedNodeMap$$call_info_index[] = {
  15,
  -1,-1,-1,0,-1,1,2,-1,
  -1,-1,3,4,-1,-1,5,6,

};
c_DOMNamedNodeMap *c_DOMNamedNodeMap::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMNamedNodeMap$$call_info_table[];
extern const int cw_DOMNamedNodeMap$$call_info_index[];
extern const InstanceOfInfo cw_DOMNamedNodeMap$$instanceof_table[];
extern const int cw_DOMNamedNodeMap$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMNamedNodeMap = {
  (ObjectData*(*)(ObjectData*))coo_DOMNamedNodeMap,
  cw_DOMNamedNodeMap$$call_info_table,cw_DOMNamedNodeMap$$call_info_index,
  cw_DOMNamedNodeMap$$instanceof_table,cw_DOMNamedNodeMap$$instanceof_index,
  &c_DOMNamedNodeMap::s_class_name,
  0,&ci_DOMNamedNodeMap$$__construct,0,0,0x0,
  &c_DOMNamedNodeMap::s_cls
};
ObjectData *coo_DOMEntityReference() {
  return NEWOBJ(c_DOMEntityReference)();
}
IMPLEMENT_CLASS(DOMEntityReference)
extern const InstanceOfInfo cw_DOMEntityReference$$instanceof_table[] = {
  {0x468B501A,0,"DOMEntityReference",&cw_DOMEntityReference},
  {0x33523662,1,"DOMNode",&cw_DOMNode},
};
const int cw_DOMEntityReference$$instanceof_index[] = {
  3,
  -1,-1,0,-1,
};
extern const CallInfo ci_DOMEntityReference$$__construct = { (void*)&c_DOMEntityReference::i___construct, (void*)&c_DOMEntityReference::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_DOMEntityReference::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_DOMEntityReference::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMEntityReference);
  }
  c_DOMEntityReference *self ATTRIBUTE_UNUSED (static_cast<c_DOMEntityReference*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__construct", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
extern const MethodCallInfoTable cw_DOMEntityReference$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_DOMEntityReference$$__construct },
};
extern const int cw_DOMEntityReference$$call_info_index[] = {
  1,
  -1,0,
};
c_DOMEntityReference *c_DOMEntityReference::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_DOMEntityReference$$call_info_table[];
extern const int cw_DOMEntityReference$$call_info_index[];
extern const InstanceOfInfo cw_DOMEntityReference$$instanceof_table[];
extern const int cw_DOMEntityReference$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMEntityReference = {
  (ObjectData*(*)(ObjectData*))coo_DOMEntityReference,
  cw_DOMEntityReference$$call_info_table,cw_DOMEntityReference$$call_info_index,
  cw_DOMEntityReference$$instanceof_table,cw_DOMEntityReference$$instanceof_index,
  &c_DOMEntityReference::s_class_name,
  0,&ci_DOMEntityReference$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMEntityReference::s_cls
};
ObjectData *coo_DateTimeZone() {
  return NEWOBJ(c_DateTimeZone)();
}
IMPLEMENT_CLASS(DateTimeZone)
extern const InstanceOfInfo cw_DateTimeZone$$instanceof_table[] = {
  {0x7D3E8383,1,"DateTimeZone",&cw_DateTimeZone},
};
const int cw_DateTimeZone$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_DateTimeZone$$listidentifiers = { (void*)&c_DateTimeZone::i_listidentifiers, (void*)&c_DateTimeZone::ifa_listidentifiers, 0, 12, 0x0000000000000000LL};
extern const CallInfo ci_DateTimeZone$$getname = { (void*)&c_DateTimeZone::i_getname, (void*)&c_DateTimeZone::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTimeZone$$gettransitions = { (void*)&c_DateTimeZone::i_gettransitions, (void*)&c_DateTimeZone::ifa_gettransitions, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTimeZone$$listabbreviations = { (void*)&c_DateTimeZone::i_listabbreviations, (void*)&c_DateTimeZone::ifa_listabbreviations, 0, 12, 0x0000000000000000LL};
extern const CallInfo ci_DateTimeZone$$__construct = { (void*)&c_DateTimeZone::i___construct, (void*)&c_DateTimeZone::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTimeZone$$getoffset = { (void*)&c_DateTimeZone::i_getoffset, (void*)&c_DateTimeZone::ifa_getoffset, 1, 4, 0x0000000000000000LL};
Variant c_DateTimeZone::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DateTimeZone::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_DateTimeZone::i_getoffset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getoffset);
}
Variant c_DateTimeZone::i_gettransitions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettransitions);
}
Variant c_DateTimeZone::i_listabbreviations(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_listabbreviations);
}
Variant c_DateTimeZone::i_listidentifiers(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_listidentifiers);
}
Variant NEVER_INLINE c_DateTimeZone::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DateTimeZone);
  }
  c_DateTimeZone *self ATTRIBUTE_UNUSED (static_cast<c_DateTimeZone*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__construct", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_DateTimeZone::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_DateTimeZone);
  }
  c_DateTimeZone *self ATTRIBUTE_UNUSED (static_cast<c_DateTimeZone*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getname", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_DateTimeZone::ifa_getoffset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getoffset, coo_DateTimeZone);
  }
  c_DateTimeZone *self ATTRIBUTE_UNUSED (static_cast<c_DateTimeZone*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getoffset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getoffset(arg0));
}
Variant NEVER_INLINE c_DateTimeZone::ifa_gettransitions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettransitions, coo_DateTimeZone);
  }
  c_DateTimeZone *self ATTRIBUTE_UNUSED (static_cast<c_DateTimeZone*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("gettransitions", 0, 1);
  return (self->t_gettransitions());
}
Variant NEVER_INLINE c_DateTimeZone::ifa_listabbreviations(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("listabbreviations", 0, 1);
  return (c_DateTimeZone::t_listabbreviations());
}
Variant NEVER_INLINE c_DateTimeZone::ifa_listidentifiers(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("listidentifiers", 0, 1);
  return (c_DateTimeZone::t_listidentifiers());
}
extern const MethodCallInfoTable cw_DateTimeZone$$call_info_table[] = {
  { 0x3A93D063, 1, 15, "listIdentifiers", &ci_DateTimeZone$$listidentifiers },
  { 0x04CE93F4, 1, 14, "getTransitions", &ci_DateTimeZone$$gettransitions },
  { 0x4C198965, 1, 7, "getName", &ci_DateTimeZone$$getname },
  { 0x6C3ED068, 1, 17, "listAbbreviations", &ci_DateTimeZone$$listabbreviations },
  { 0x0B55BD0B, 1, 9, "getOffset", &ci_DateTimeZone$$getoffset },
  { 0x229C615F, 1, 11, "__construct", &ci_DateTimeZone$$__construct },
};
extern const int cw_DateTimeZone$$call_info_index[] = {
  15,
  -1,-1,-1,0,1,2,-1,-1,
  3,-1,-1,4,-1,-1,-1,5,

};
c_DateTimeZone *c_DateTimeZone::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_DateTimeZone$$call_info_table[];
extern const int cw_DateTimeZone$$call_info_index[];
extern const InstanceOfInfo cw_DateTimeZone$$instanceof_table[];
extern const int cw_DateTimeZone$$instanceof_index[];
const ObjectStaticCallbacks cw_DateTimeZone = {
  (ObjectData*(*)(ObjectData*))coo_DateTimeZone,
  cw_DateTimeZone$$call_info_table,cw_DateTimeZone$$call_info_index,
  cw_DateTimeZone$$instanceof_table,cw_DateTimeZone$$instanceof_index,
  &c_DateTimeZone::s_class_name,
  &c_DateTimeZone::os_prop_table,&ci_DateTimeZone$$__construct,0,0,0x0,
  &c_DateTimeZone::s_cls
};
ObjectData *coo_DOMNodeIterator() {
  return NEWOBJ(c_DOMNodeIterator)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DOMNodeIterator)
extern const InstanceOfInfo cw_DOMNodeIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
  {0x2616EF37,1,"DOMNodeIterator",&cw_DOMNodeIterator},
};
const int cw_DOMNodeIterator$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,1,2,

};
extern const CallInfo ci_DOMNodeIterator$$current = { (void*)&c_DOMNodeIterator::i_current, (void*)&c_DOMNodeIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeIterator$$key = { (void*)&c_DOMNodeIterator::i_key, (void*)&c_DOMNodeIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeIterator$$valid = { (void*)&c_DOMNodeIterator::i_valid, (void*)&c_DOMNodeIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeIterator$$__construct = { (void*)&c_DOMNodeIterator::i___construct, (void*)&c_DOMNodeIterator::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeIterator$$rewind = { (void*)&c_DOMNodeIterator::i_rewind, (void*)&c_DOMNodeIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeIterator$$next = { (void*)&c_DOMNodeIterator::i_next, (void*)&c_DOMNodeIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_DOMNodeIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMNodeIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_DOMNodeIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_DOMNodeIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_DOMNodeIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_DOMNodeIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant NEVER_INLINE c_DOMNodeIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMNodeIterator);
  }
  c_DOMNodeIterator *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMNodeIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_DOMNodeIterator);
  }
  c_DOMNodeIterator *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_DOMNodeIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_DOMNodeIterator);
  }
  c_DOMNodeIterator *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_DOMNodeIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_DOMNodeIterator);
  }
  c_DOMNodeIterator *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next());
}
Variant NEVER_INLINE c_DOMNodeIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_DOMNodeIterator);
  }
  c_DOMNodeIterator *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind());
}
Variant NEVER_INLINE c_DOMNodeIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_DOMNodeIterator);
  }
  c_DOMNodeIterator *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
extern const MethodCallInfoTable cw_DOMNodeIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_DOMNodeIterator$$key },
  { 0x54808C44, 1, 5, "valid", &ci_DOMNodeIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_DOMNodeIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_DOMNodeIterator$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_DOMNodeIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_DOMNodeIterator$$__construct },
};
extern const int cw_DOMNodeIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  2,-1,3,-1,4,-1,-1,5,

};
c_DOMNodeIterator *c_DOMNodeIterator::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMNodeIterator$$call_info_table[];
extern const int cw_DOMNodeIterator$$call_info_index[];
extern const InstanceOfInfo cw_DOMNodeIterator$$instanceof_table[];
extern const int cw_DOMNodeIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMNodeIterator = {
  (ObjectData*(*)(ObjectData*))coo_DOMNodeIterator,
  cw_DOMNodeIterator$$call_info_table,cw_DOMNodeIterator$$call_info_index,
  cw_DOMNodeIterator$$instanceof_table,cw_DOMNodeIterator$$instanceof_index,
  &c_DOMNodeIterator::s_class_name,
  0,&ci_DOMNodeIterator$$__construct,0,0,0x0,
  &c_DOMNodeIterator::s_cls
};
ObjectData *coo_SQLite3Result() {
  return NEWOBJ(c_SQLite3Result)();
}
IMPLEMENT_CLASS(SQLite3Result)
extern const InstanceOfInfo cw_SQLite3Result$$instanceof_table[] = {
  {0x2572EF7D,1,"SQLite3Result",&cw_SQLite3Result},
};
const int cw_SQLite3Result$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_SQLite3Result$$numcolumns = { (void*)&c_SQLite3Result::i_numcolumns, (void*)&c_SQLite3Result::ifa_numcolumns, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Result$$fetcharray = { (void*)&c_SQLite3Result::i_fetcharray, (void*)&c_SQLite3Result::ifa_fetcharray, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Result$$finalize = { (void*)&c_SQLite3Result::i_finalize, (void*)&c_SQLite3Result::ifa_finalize, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Result$$columnname = { (void*)&c_SQLite3Result::i_columnname, (void*)&c_SQLite3Result::ifa_columnname, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Result$$reset = { (void*)&c_SQLite3Result::i_reset, (void*)&c_SQLite3Result::ifa_reset, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Result$$__construct = { (void*)&c_SQLite3Result::i___construct, (void*)&c_SQLite3Result::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Result$$columntype = { (void*)&c_SQLite3Result::i_columntype, (void*)&c_SQLite3Result::ifa_columntype, 1, 4, 0x0000000000000000LL};
Variant c_SQLite3Result::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SQLite3Result::i_numcolumns(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_numcolumns);
}
Variant c_SQLite3Result::i_columnname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_columnname);
}
Variant c_SQLite3Result::i_columntype(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_columntype);
}
Variant c_SQLite3Result::i_fetcharray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetcharray);
}
Variant c_SQLite3Result::i_reset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_reset);
}
Variant c_SQLite3Result::i_finalize(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_finalize);
}
Variant NEVER_INLINE c_SQLite3Result::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_SQLite3Result::ifa_numcolumns(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_numcolumns, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("numcolumns", 0, 1);
  return (self->t_numcolumns());
}
Variant NEVER_INLINE c_SQLite3Result::ifa_columnname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_columnname, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("columnname", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_columnname(arg0));
}
Variant NEVER_INLINE c_SQLite3Result::ifa_columntype(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_columntype, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("columntype", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_columntype(arg0));
}
Variant NEVER_INLINE c_SQLite3Result::ifa_fetcharray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetcharray, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("fetcharray", 1, 1);
  if (count <= 0) return (self->t_fetcharray());
  CVarRef arg0(a0);
  return (self->t_fetcharray(arg0));
}
Variant NEVER_INLINE c_SQLite3Result::ifa_reset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_reset, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("reset", 0, 1);
  return (self->t_reset());
}
Variant NEVER_INLINE c_SQLite3Result::ifa_finalize(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_finalize, coo_SQLite3Result);
  }
  c_SQLite3Result *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Result*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("finalize", 0, 1);
  return (self->t_finalize());
}
extern const MethodCallInfoTable cw_SQLite3Result$$call_info_table[] = {
  { 0x22A924E0, 1, 5, "reset", &ci_SQLite3Result$$reset },
  { 0x22784996, 1, 10, "numcolumns", &ci_SQLite3Result$$numcolumns },
  { 0x6E7E47F8, 1, 10, "columnname", &ci_SQLite3Result$$columnname },
  { 0x6F1C3A6B, 1, 10, "fetcharray", &ci_SQLite3Result$$fetcharray },
  { 0x6493957C, 1, 8, "finalize", &ci_SQLite3Result$$finalize },
  { 0x009D8C6D, 1, 10, "columntype", &ci_SQLite3Result$$columntype },
  { 0x229C615F, 1, 11, "__construct", &ci_SQLite3Result$$__construct },
};
extern const int cw_SQLite3Result$$call_info_index[] = {
  15,
  0,-1,-1,-1,-1,-1,1,-1,
  2,-1,-1,3,4,5,-1,6,

};
c_SQLite3Result *c_SQLite3Result::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_SQLite3Result$$call_info_table[];
extern const int cw_SQLite3Result$$call_info_index[];
extern const InstanceOfInfo cw_SQLite3Result$$instanceof_table[];
extern const int cw_SQLite3Result$$instanceof_index[];
const ObjectStaticCallbacks cw_SQLite3Result = {
  (ObjectData*(*)(ObjectData*))coo_SQLite3Result,
  cw_SQLite3Result$$call_info_table,cw_SQLite3Result$$call_info_index,
  cw_SQLite3Result$$instanceof_table,cw_SQLite3Result$$instanceof_index,
  &c_SQLite3Result::s_class_name,
  0,&ci_SQLite3Result$$__construct,0,0,0x0,
  &c_SQLite3Result::s_cls
};
ObjectData *coo_SimpleXMLElementIterator() {
  return NEWOBJ(c_SimpleXMLElementIterator)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SimpleXMLElementIterator)
extern const InstanceOfInfo cw_SimpleXMLElementIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x6AB5BF2B,1,"SimpleXMLElementIterator",&cw_SimpleXMLElementIterator},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_SimpleXMLElementIterator$$instanceof_index[] = {
  7,
  -1,0,-1,1,-1,-1,2,-1,

};
extern const CallInfo ci_SimpleXMLElementIterator$$current = { (void*)&c_SimpleXMLElementIterator::i_current, (void*)&c_SimpleXMLElementIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElementIterator$$key = { (void*)&c_SimpleXMLElementIterator::i_key, (void*)&c_SimpleXMLElementIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElementIterator$$valid = { (void*)&c_SimpleXMLElementIterator::i_valid, (void*)&c_SimpleXMLElementIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElementIterator$$__construct = { (void*)&c_SimpleXMLElementIterator::i___construct, (void*)&c_SimpleXMLElementIterator::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElementIterator$$rewind = { (void*)&c_SimpleXMLElementIterator::i_rewind, (void*)&c_SimpleXMLElementIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElementIterator$$next = { (void*)&c_SimpleXMLElementIterator::i_next, (void*)&c_SimpleXMLElementIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_SimpleXMLElementIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SimpleXMLElementIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_SimpleXMLElementIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_SimpleXMLElementIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_SimpleXMLElementIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_SimpleXMLElementIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant NEVER_INLINE c_SimpleXMLElementIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SimpleXMLElementIterator);
  }
  c_SimpleXMLElementIterator *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElementIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_SimpleXMLElementIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_SimpleXMLElementIterator);
  }
  c_SimpleXMLElementIterator *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElementIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_SimpleXMLElementIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_SimpleXMLElementIterator);
  }
  c_SimpleXMLElementIterator *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElementIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_SimpleXMLElementIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_SimpleXMLElementIterator);
  }
  c_SimpleXMLElementIterator *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElementIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next());
}
Variant NEVER_INLINE c_SimpleXMLElementIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_SimpleXMLElementIterator);
  }
  c_SimpleXMLElementIterator *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElementIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind());
}
Variant NEVER_INLINE c_SimpleXMLElementIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_SimpleXMLElementIterator);
  }
  c_SimpleXMLElementIterator *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElementIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
extern const MethodCallInfoTable cw_SimpleXMLElementIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_SimpleXMLElementIterator$$key },
  { 0x54808C44, 1, 5, "valid", &ci_SimpleXMLElementIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_SimpleXMLElementIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_SimpleXMLElementIterator$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_SimpleXMLElementIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_SimpleXMLElementIterator$$__construct },
};
extern const int cw_SimpleXMLElementIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  2,-1,3,-1,4,-1,-1,5,

};
c_SimpleXMLElementIterator *c_SimpleXMLElementIterator::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_SimpleXMLElementIterator$$call_info_table[];
extern const int cw_SimpleXMLElementIterator$$call_info_index[];
extern const InstanceOfInfo cw_SimpleXMLElementIterator$$instanceof_table[];
extern const int cw_SimpleXMLElementIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_SimpleXMLElementIterator = {
  (ObjectData*(*)(ObjectData*))coo_SimpleXMLElementIterator,
  cw_SimpleXMLElementIterator$$call_info_table,cw_SimpleXMLElementIterator$$call_info_index,
  cw_SimpleXMLElementIterator$$instanceof_table,cw_SimpleXMLElementIterator$$instanceof_index,
  &c_SimpleXMLElementIterator::s_class_name,
  0,&ci_SimpleXMLElementIterator$$__construct,0,0,0x0,
  &c_SimpleXMLElementIterator::s_cls
};
ObjectData *coo_DOMDocumentFragment() {
  return NEWOBJ(c_DOMDocumentFragment)();
}
IMPLEMENT_CLASS(DOMDocumentFragment)
extern const InstanceOfInfo cw_DOMDocumentFragment$$instanceof_table[] = {
  {0x7633B87D,1,"DOMDocumentFragment",&cw_DOMDocumentFragment},
  {0x33523662,1,"DOMNode",&cw_DOMNode},
};
const int cw_DOMDocumentFragment$$instanceof_index[] = {
  3,
  -1,0,1,-1,
};
extern const CallInfo ci_DOMDocumentFragment$$appendxml = { (void*)&c_DOMDocumentFragment::i_appendxml, (void*)&c_DOMDocumentFragment::ifa_appendxml, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocumentFragment$$__construct = { (void*)&c_DOMDocumentFragment::i___construct, (void*)&c_DOMDocumentFragment::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DOMDocumentFragment::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMDocumentFragment::i_appendxml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_appendxml);
}
Variant NEVER_INLINE c_DOMDocumentFragment::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMDocumentFragment);
  }
  c_DOMDocumentFragment *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocumentFragment*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMDocumentFragment::ifa_appendxml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_appendxml, coo_DOMDocumentFragment);
  }
  c_DOMDocumentFragment *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocumentFragment*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("appendxml", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_appendxml(arg0));
}
extern const MethodCallInfoTable cw_DOMDocumentFragment$$call_info_table[] = {
  { 0x41920931, 1, 9, "appendXML", &ci_DOMDocumentFragment$$appendxml },
  { 0x229C615F, 1, 11, "__construct", &ci_DOMDocumentFragment$$__construct },
};
extern const int cw_DOMDocumentFragment$$call_info_index[] = {
  3,
  -1,0,-1,1,
};
c_DOMDocumentFragment *c_DOMDocumentFragment::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMDocumentFragment$$call_info_table[];
extern const int cw_DOMDocumentFragment$$call_info_index[];
extern const InstanceOfInfo cw_DOMDocumentFragment$$instanceof_table[];
extern const int cw_DOMDocumentFragment$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMDocumentFragment = {
  (ObjectData*(*)(ObjectData*))coo_DOMDocumentFragment,
  cw_DOMDocumentFragment$$call_info_table,cw_DOMDocumentFragment$$call_info_index,
  cw_DOMDocumentFragment$$instanceof_table,cw_DOMDocumentFragment$$instanceof_index,
  &c_DOMDocumentFragment::s_class_name,
  0,&ci_DOMDocumentFragment$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMDocumentFragment::s_cls
};
ObjectData *coo_StableMapIterator() {
  return NEWOBJ(c_StableMapIterator)();
}
IMPLEMENT_CLASS(StableMapIterator)
extern const InstanceOfInfo cw_StableMapIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x1E320CBD,1,"StableMapIterator",&cw_StableMapIterator},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_StableMapIterator$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,1,2,-1,

};
extern const CallInfo ci_StableMapIterator$$current = { (void*)&c_StableMapIterator::i_current, (void*)&c_StableMapIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMapIterator$$key = { (void*)&c_StableMapIterator::i_key, (void*)&c_StableMapIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMapIterator$$valid = { (void*)&c_StableMapIterator::i_valid, (void*)&c_StableMapIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMapIterator$$rewind = { (void*)&c_StableMapIterator::i_rewind, (void*)&c_StableMapIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMapIterator$$__construct = { (void*)&c_StableMapIterator::i___construct, (void*)&c_StableMapIterator::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMapIterator$$next = { (void*)&c_StableMapIterator::i_next, (void*)&c_StableMapIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_StableMapIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_StableMapIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_StableMapIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_StableMapIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_StableMapIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_StableMapIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant NEVER_INLINE c_StableMapIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_StableMapIterator);
  }
  c_StableMapIterator *self ATTRIBUTE_UNUSED (static_cast<c_StableMapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_StableMapIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_StableMapIterator);
  }
  c_StableMapIterator *self ATTRIBUTE_UNUSED (static_cast<c_StableMapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_StableMapIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_StableMapIterator);
  }
  c_StableMapIterator *self ATTRIBUTE_UNUSED (static_cast<c_StableMapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_StableMapIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_StableMapIterator);
  }
  c_StableMapIterator *self ATTRIBUTE_UNUSED (static_cast<c_StableMapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_StableMapIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_StableMapIterator);
  }
  c_StableMapIterator *self ATTRIBUTE_UNUSED (static_cast<c_StableMapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_StableMapIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_StableMapIterator);
  }
  c_StableMapIterator *self ATTRIBUTE_UNUSED (static_cast<c_StableMapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind(), null);
}
extern const MethodCallInfoTable cw_StableMapIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_StableMapIterator$$key },
  { 0x54808C44, 1, 5, "valid", &ci_StableMapIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_StableMapIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_StableMapIterator$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_StableMapIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_StableMapIterator$$__construct },
};
extern const int cw_StableMapIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  2,-1,3,-1,4,-1,-1,5,

};
c_StableMapIterator *c_StableMapIterator::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_StableMapIterator$$call_info_table[];
extern const int cw_StableMapIterator$$call_info_index[];
extern const InstanceOfInfo cw_StableMapIterator$$instanceof_table[];
extern const int cw_StableMapIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_StableMapIterator = {
  (ObjectData*(*)(ObjectData*))coo_StableMapIterator,
  cw_StableMapIterator$$call_info_table,cw_StableMapIterator$$call_info_index,
  cw_StableMapIterator$$instanceof_table,cw_StableMapIterator$$instanceof_index,
  &c_StableMapIterator::s_class_name,
  0,&ci_StableMapIterator$$__construct,0,0,0x0,
  &c_StableMapIterator::s_cls
};
ObjectData *coo_DebuggerProxyCmdUser() {
  return NEWOBJ(c_DebuggerProxyCmdUser)();
}
IMPLEMENT_CLASS(DebuggerProxyCmdUser)
extern const InstanceOfInfo cw_DebuggerProxyCmdUser$$instanceof_table[] = {
  {0x06867BAD,1,"DebuggerProxyCmdUser",&cw_DebuggerProxyCmdUser},
};
const int cw_DebuggerProxyCmdUser$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_DebuggerProxyCmdUser$$islocal = { (void*)&c_DebuggerProxyCmdUser::i_islocal, (void*)&c_DebuggerProxyCmdUser::ifa_islocal, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerProxyCmdUser$$send = { (void*)&c_DebuggerProxyCmdUser::i_send, (void*)&c_DebuggerProxyCmdUser::ifa_send, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerProxyCmdUser$$__construct = { (void*)&c_DebuggerProxyCmdUser::i___construct, (void*)&c_DebuggerProxyCmdUser::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DebuggerProxyCmdUser::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DebuggerProxyCmdUser::i_islocal(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_islocal);
}
Variant c_DebuggerProxyCmdUser::i_send(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_send);
}
Variant NEVER_INLINE c_DebuggerProxyCmdUser::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DebuggerProxyCmdUser);
  }
  c_DebuggerProxyCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerProxyCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DebuggerProxyCmdUser::ifa_islocal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_islocal, coo_DebuggerProxyCmdUser);
  }
  c_DebuggerProxyCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerProxyCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("islocal", 0, 1);
  return (self->t_islocal());
}
Variant NEVER_INLINE c_DebuggerProxyCmdUser::ifa_send(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_send, coo_DebuggerProxyCmdUser);
  }
  c_DebuggerProxyCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerProxyCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("send", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_send(arg0));
}
extern const MethodCallInfoTable cw_DebuggerProxyCmdUser$$call_info_table[] = {
  { 0x002E3888, 1, 4, "send", &ci_DebuggerProxyCmdUser$$send },
  { 0x529D270C, 1, 7, "isLocal", &ci_DebuggerProxyCmdUser$$islocal },
  { 0x229C615F, 1, 11, "__construct", &ci_DebuggerProxyCmdUser$$__construct },
};
extern const int cw_DebuggerProxyCmdUser$$call_info_index[] = {
  7,
  0,-1,-1,-1,1,-1,-1,2,

};
c_DebuggerProxyCmdUser *c_DebuggerProxyCmdUser::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DebuggerProxyCmdUser$$call_info_table[];
extern const int cw_DebuggerProxyCmdUser$$call_info_index[];
extern const InstanceOfInfo cw_DebuggerProxyCmdUser$$instanceof_table[];
extern const int cw_DebuggerProxyCmdUser$$instanceof_index[];
const ObjectStaticCallbacks cw_DebuggerProxyCmdUser = {
  (ObjectData*(*)(ObjectData*))coo_DebuggerProxyCmdUser,
  cw_DebuggerProxyCmdUser$$call_info_table,cw_DebuggerProxyCmdUser$$call_info_index,
  cw_DebuggerProxyCmdUser$$instanceof_table,cw_DebuggerProxyCmdUser$$instanceof_index,
  &c_DebuggerProxyCmdUser::s_class_name,
  0,&ci_DebuggerProxyCmdUser$$__construct,0,0,0x0,
  &c_DebuggerProxyCmdUser::s_cls
};
ObjectData *coo_SpoofChecker() {
  return NEWOBJ(c_SpoofChecker)();
}
IMPLEMENT_CLASS(SpoofChecker)
extern const InstanceOfInfo cw_SpoofChecker$$instanceof_table[] = {
  {0x4359F411,1,"SpoofChecker",&cw_SpoofChecker},
};
const int cw_SpoofChecker$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_SpoofChecker$$setchecks = { (void*)&c_SpoofChecker::i_setchecks, (void*)&c_SpoofChecker::ifa_setchecks, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SpoofChecker$$issuspicious = { (void*)&c_SpoofChecker::i_issuspicious, (void*)&c_SpoofChecker::ifa_issuspicious, 2, 4, 0x0000000000000002LL};
extern const CallInfo ci_SpoofChecker$$setallowedlocales = { (void*)&c_SpoofChecker::i_setallowedlocales, (void*)&c_SpoofChecker::ifa_setallowedlocales, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SpoofChecker$$areconfusable = { (void*)&c_SpoofChecker::i_areconfusable, (void*)&c_SpoofChecker::ifa_areconfusable, 3, 4, 0x0000000000000004LL};
extern const CallInfo ci_SpoofChecker$$__construct = { (void*)&c_SpoofChecker::i___construct, (void*)&c_SpoofChecker::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_SpoofChecker::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SpoofChecker::i_issuspicious(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_issuspicious);
}
Variant c_SpoofChecker::i_areconfusable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_areconfusable);
}
Variant c_SpoofChecker::i_setallowedlocales(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setallowedlocales);
}
Variant c_SpoofChecker::i_setchecks(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setchecks);
}
Variant NEVER_INLINE c_SpoofChecker::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SpoofChecker);
  }
  c_SpoofChecker *self ATTRIBUTE_UNUSED (static_cast<c_SpoofChecker*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_SpoofChecker::ifa_issuspicious(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_issuspicious, coo_SpoofChecker);
  }
  c_SpoofChecker *self ATTRIBUTE_UNUSED (static_cast<c_SpoofChecker*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("issuspicious", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_issuspicious(arg0));
  VRefParam arg1(vref(a1));
  return (self->t_issuspicious(arg0, arg1));
}
Variant NEVER_INLINE c_SpoofChecker::ifa_areconfusable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_areconfusable, coo_SpoofChecker);
  }
  c_SpoofChecker *self ATTRIBUTE_UNUSED (static_cast<c_SpoofChecker*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("areconfusable", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_areconfusable(arg0, arg1));
  VRefParam arg2(vref(a2));
  return (self->t_areconfusable(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SpoofChecker::ifa_setallowedlocales(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setallowedlocales, coo_SpoofChecker);
  }
  c_SpoofChecker *self ATTRIBUTE_UNUSED (static_cast<c_SpoofChecker*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setallowedlocales", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setallowedlocales(arg0), null);
}
Variant NEVER_INLINE c_SpoofChecker::ifa_setchecks(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setchecks, coo_SpoofChecker);
  }
  c_SpoofChecker *self ATTRIBUTE_UNUSED (static_cast<c_SpoofChecker*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setchecks", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setchecks(arg0), null);
}
extern const MethodCallInfoTable cw_SpoofChecker$$call_info_table[] = {
  { 0x7874FF63, 1, 9, "setChecks", &ci_SpoofChecker$$setchecks },
  { 0x6CE73BD9, 1, 13, "areConfusable", &ci_SpoofChecker$$areconfusable },
  { 0x3612B4AA, 1, 12, "isSuspicious", &ci_SpoofChecker$$issuspicious },
  { 0x4F1204BD, 1, 17, "setAllowedLocales", &ci_SpoofChecker$$setallowedlocales },
  { 0x229C615F, 1, 11, "__construct", &ci_SpoofChecker$$__construct },
};
extern const int cw_SpoofChecker$$call_info_index[] = {
  15,
  -1,-1,-1,0,-1,-1,-1,-1,
  -1,1,2,-1,-1,3,-1,4,

};
c_SpoofChecker *c_SpoofChecker::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_SpoofChecker$$call_info_table[];
extern const int cw_SpoofChecker$$call_info_index[];
extern const InstanceOfInfo cw_SpoofChecker$$instanceof_table[];
extern const int cw_SpoofChecker$$instanceof_index[];
const ObjectStaticCallbacks cw_SpoofChecker = {
  (ObjectData*(*)(ObjectData*))coo_SpoofChecker,
  cw_SpoofChecker$$call_info_table,cw_SpoofChecker$$call_info_index,
  cw_SpoofChecker$$instanceof_table,cw_SpoofChecker$$instanceof_index,
  &c_SpoofChecker::s_class_name,
  &c_SpoofChecker::os_prop_table,&ci_SpoofChecker$$__construct,0,0,0x0,
  &c_SpoofChecker::s_cls
};
ObjectData *coo_MutableArrayIterator() {
  return NEWOBJ(c_MutableArrayIterator)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(MutableArrayIterator)
extern const InstanceOfInfo cw_MutableArrayIterator$$instanceof_table[] = {
  {0x0CA95F2F,1,"MutableArrayIterator",&cw_MutableArrayIterator},
};
const int cw_MutableArrayIterator$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_MutableArrayIterator$$current = { (void*)&c_MutableArrayIterator::i_current, (void*)&c_MutableArrayIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MutableArrayIterator$$currentref = { (void*)&c_MutableArrayIterator::i_currentref, (void*)&c_MutableArrayIterator::ifa_currentref, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MutableArrayIterator$$key = { (void*)&c_MutableArrayIterator::i_key, (void*)&c_MutableArrayIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MutableArrayIterator$$__destruct = { (void*)&c_MutableArrayIterator::i___destruct, (void*)&c_MutableArrayIterator::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MutableArrayIterator$$valid = { (void*)&c_MutableArrayIterator::i_valid, (void*)&c_MutableArrayIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MutableArrayIterator$$__construct = { (void*)&c_MutableArrayIterator::i___construct, (void*)&c_MutableArrayIterator::ifa___construct, 1, 4, 0x0000000000000001LL};
extern const CallInfo ci_MutableArrayIterator$$next = { (void*)&c_MutableArrayIterator::i_next, (void*)&c_MutableArrayIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_MutableArrayIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_MutableArrayIterator::i_currentref(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_currentref);
}
Variant c_MutableArrayIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_MutableArrayIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_MutableArrayIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_MutableArrayIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_MutableArrayIterator::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__construct", count, 1, 1, 1);
  VRefParam arg0(vref(a0));
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa_currentref(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_currentref, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("currentref", 0, 1);
  return strongBind(self->t_currentref());
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_MutableArrayIterator::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_MutableArrayIterator);
  }
  c_MutableArrayIterator *self ATTRIBUTE_UNUSED (static_cast<c_MutableArrayIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_MutableArrayIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_MutableArrayIterator$$key },
  { 0x64EB2993, 0, 10, "currentRef", &ci_MutableArrayIterator$$currentref },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_MutableArrayIterator$$__destruct },
  { 0x54808C44, 1, 5, "valid", &ci_MutableArrayIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_MutableArrayIterator$$next },
  { 0x046B21DC, 1, 7, "current", &ci_MutableArrayIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_MutableArrayIterator$$__construct },
};
extern const int cw_MutableArrayIterator$$call_info_index[] = {
  15,
  -1,0,-1,1,3,-1,-1,-1,
  4,-1,-1,-1,5,-1,-1,6,

};
c_MutableArrayIterator *c_MutableArrayIterator::create(VRefParam a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_MutableArrayIterator$$call_info_table[];
extern const int cw_MutableArrayIterator$$call_info_index[];
extern const InstanceOfInfo cw_MutableArrayIterator$$instanceof_table[];
extern const int cw_MutableArrayIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_MutableArrayIterator = {
  (ObjectData*(*)(ObjectData*))coo_MutableArrayIterator,
  cw_MutableArrayIterator$$call_info_table,cw_MutableArrayIterator$$call_info_index,
  cw_MutableArrayIterator$$instanceof_table,cw_MutableArrayIterator$$instanceof_index,
  &c_MutableArrayIterator::s_class_name,
  0,&ci_MutableArrayIterator$$__construct,0,0,0x0,
  &c_MutableArrayIterator::s_cls
};
ObjectData *coo_DOMDocumentType() {
  return NEWOBJ(c_DOMDocumentType)();
}
IMPLEMENT_CLASS(DOMDocumentType)
extern const InstanceOfInfo cw_DOMDocumentType$$instanceof_table[] = {
  {0x1FBF9761,1,"DOMDocumentType",&cw_DOMDocumentType},
  {0x33523662,1,"DOMNode",&cw_DOMNode},
};
const int cw_DOMDocumentType$$instanceof_index[] = {
  3,
  -1,0,1,-1,
};
extern const CallInfo ci_DOMDocumentType$$__isset = { (void*)&c_DOMDocumentType::i___isset, (void*)&c_DOMDocumentType::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocumentType$$__get = { (void*)&c_DOMDocumentType::i___get, (void*)&c_DOMDocumentType::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocumentType$$__set = { (void*)&c_DOMDocumentType::i___set, (void*)&c_DOMDocumentType::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocumentType$$__construct = { (void*)&c_DOMDocumentType::i___construct, (void*)&c_DOMDocumentType::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DOMDocumentType::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMDocumentType::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMDocumentType::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMDocumentType::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMDocumentType::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMDocumentType);
  }
  c_DOMDocumentType *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocumentType*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMDocumentType::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMDocumentType);
  }
  c_DOMDocumentType *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocumentType*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMDocumentType::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMDocumentType);
  }
  c_DOMDocumentType *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocumentType*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocumentType::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMDocumentType);
  }
  c_DOMDocumentType *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocumentType*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMDocumentType$$call_info_table[] = {
  { 0x03340395, 1, 5, "__set", &ci_DOMDocumentType$$__set },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMDocumentType$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMDocumentType$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMDocumentType$$__get },
};
extern const int cw_DOMDocumentType$$call_info_index[] = {
  7,
  -1,-1,-1,-1,-1,0,1,2,

};
c_DOMDocumentType *c_DOMDocumentType::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMDocumentType$$call_info_table[];
extern const int cw_DOMDocumentType$$call_info_index[];
extern const InstanceOfInfo cw_DOMDocumentType$$instanceof_table[];
extern const int cw_DOMDocumentType$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMDocumentType = {
  (ObjectData*(*)(ObjectData*))coo_DOMDocumentType,
  cw_DOMDocumentType$$call_info_table,cw_DOMDocumentType$$call_info_index,
  cw_DOMDocumentType$$instanceof_table,cw_DOMDocumentType$$instanceof_index,
  &c_DOMDocumentType::s_class_name,
  0,&ci_DOMDocumentType$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMDocumentType::s_cls
};
ObjectData *coo_DOMAttr() {
  return NEWOBJ(c_DOMAttr)();
}
IMPLEMENT_CLASS(DOMAttr)
extern const InstanceOfInfo cw_DOMAttr$$instanceof_table[] = {
  {0x1D4912F4,1,"DOMAttr",&cw_DOMAttr},
  {0x33523662,1,"DOMNode",&cw_DOMNode},
};
const int cw_DOMAttr$$instanceof_index[] = {
  3,
  0,-1,1,-1,
};
extern const CallInfo ci_DOMAttr$$__isset = { (void*)&c_DOMAttr::i___isset, (void*)&c_DOMAttr::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMAttr$$__get = { (void*)&c_DOMAttr::i___get, (void*)&c_DOMAttr::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMAttr$$__set = { (void*)&c_DOMAttr::i___set, (void*)&c_DOMAttr::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMAttr$$__construct = { (void*)&c_DOMAttr::i___construct, (void*)&c_DOMAttr::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMAttr$$isid = { (void*)&c_DOMAttr::i_isid, (void*)&c_DOMAttr::ifa_isid, 0, 4, 0x0000000000000000LL};
Variant c_DOMAttr::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMAttr::i_isid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isid);
}
Variant c_DOMAttr::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMAttr::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMAttr::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMAttr::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMAttr);
  }
  c_DOMAttr *self ATTRIBUTE_UNUSED (static_cast<c_DOMAttr*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("__construct", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_DOMAttr::ifa_isid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isid, coo_DOMAttr);
  }
  c_DOMAttr *self ATTRIBUTE_UNUSED (static_cast<c_DOMAttr*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("isid", 0, 1);
  return (self->t_isid());
}
Variant NEVER_INLINE c_DOMAttr::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMAttr);
  }
  c_DOMAttr *self ATTRIBUTE_UNUSED (static_cast<c_DOMAttr*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMAttr::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMAttr);
  }
  c_DOMAttr *self ATTRIBUTE_UNUSED (static_cast<c_DOMAttr*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMAttr::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMAttr);
  }
  c_DOMAttr *self ATTRIBUTE_UNUSED (static_cast<c_DOMAttr*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMAttr$$call_info_table[] = {
  { 0x15D17F24, 1, 4, "isId", &ci_DOMAttr$$isid },
  { 0x03340395, 1, 5, "__set", &ci_DOMAttr$$__set },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMAttr$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMAttr$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMAttr$$__get },
};
extern const int cw_DOMAttr$$call_info_index[] = {
  15,
  -1,-1,-1,-1,0,1,-1,-1,
  -1,-1,-1,-1,-1,-1,2,3,

};
c_DOMAttr *c_DOMAttr::create(String a0, String a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_DOMAttr$$call_info_table[];
extern const int cw_DOMAttr$$call_info_index[];
extern const InstanceOfInfo cw_DOMAttr$$instanceof_table[];
extern const int cw_DOMAttr$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMAttr = {
  (ObjectData*(*)(ObjectData*))coo_DOMAttr,
  cw_DOMAttr$$call_info_table,cw_DOMAttr$$call_info_index,
  cw_DOMAttr$$instanceof_table,cw_DOMAttr$$instanceof_index,
  &c_DOMAttr::s_class_name,
  0,&ci_DOMAttr$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMAttr::s_cls
};
ObjectData *coo_SoapHeader() {
  return NEWOBJ(c_SoapHeader)();
}
IMPLEMENT_CLASS(SoapHeader)
extern const InstanceOfInfo cw_SoapHeader$$instanceof_table[] = {
  {0x186A3D4E,1,"SoapHeader",&cw_SoapHeader},
};
const int cw_SoapHeader$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_SoapHeader$$__construct = { (void*)&c_SoapHeader::i___construct, (void*)&c_SoapHeader::ifa___construct, 5, 4, 0x0000000000000000LL};
Variant c_SoapHeader::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_SoapHeader::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapHeader);
  }
  c_SoapHeader *self ATTRIBUTE_UNUSED (static_cast<c_SoapHeader*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 5)) return throw_wrong_arguments("__construct", count, 2, 5, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___construct(arg0, arg1, arg2, arg3), null);
  CVarRef arg4(a4);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
}
extern const MethodCallInfoTable cw_SoapHeader$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_SoapHeader$$__construct },
};
extern const int cw_SoapHeader$$call_info_index[] = {
  1,
  -1,0,
};
c_SoapHeader *c_SoapHeader::create(String a0, String a1, Variant a2, bool a3, Variant a4) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2, a3, a4);
  return this;
}
extern const MethodCallInfoTable cw_SoapHeader$$call_info_table[];
extern const int cw_SoapHeader$$call_info_index[];
extern const InstanceOfInfo cw_SoapHeader$$instanceof_table[];
extern const int cw_SoapHeader$$instanceof_index[];
const ObjectStaticCallbacks cw_SoapHeader = {
  (ObjectData*(*)(ObjectData*))coo_SoapHeader,
  cw_SoapHeader$$call_info_table,cw_SoapHeader$$call_info_index,
  cw_SoapHeader$$instanceof_table,cw_SoapHeader$$instanceof_index,
  &c_SoapHeader::s_class_name,
  0,&ci_SoapHeader$$__construct,0,0,0x0,
  &c_SoapHeader::s_cls
};
ObjectData *coo_SQLite3() {
  return NEWOBJ(c_SQLite3)();
}
IMPLEMENT_CLASS(SQLite3)
extern const InstanceOfInfo cw_SQLite3$$instanceof_table[] = {
  {0x500E11A9,1,"SQLite3",&cw_SQLite3},
};
const int cw_SQLite3$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_SQLite3$$createaggregate = { (void*)&c_SQLite3::i_createaggregate, (void*)&c_SQLite3::ifa_createaggregate, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$loadextension = { (void*)&c_SQLite3::i_loadextension, (void*)&c_SQLite3::ifa_loadextension, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$close = { (void*)&c_SQLite3::i_close, (void*)&c_SQLite3::ifa_close, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$querysingle = { (void*)&c_SQLite3::i_querysingle, (void*)&c_SQLite3::ifa_querysingle, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$version = { (void*)&c_SQLite3::i_version, (void*)&c_SQLite3::ifa_version, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$lasterrorcode = { (void*)&c_SQLite3::i_lasterrorcode, (void*)&c_SQLite3::ifa_lasterrorcode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$__construct = { (void*)&c_SQLite3::i___construct, (void*)&c_SQLite3::ifa___construct, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$createfunction = { (void*)&c_SQLite3::i_createfunction, (void*)&c_SQLite3::ifa_createfunction, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$lasterrormsg = { (void*)&c_SQLite3::i_lasterrormsg, (void*)&c_SQLite3::ifa_lasterrormsg, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$prepare = { (void*)&c_SQLite3::i_prepare, (void*)&c_SQLite3::ifa_prepare, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$busytimeout = { (void*)&c_SQLite3::i_busytimeout, (void*)&c_SQLite3::ifa_busytimeout, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$query = { (void*)&c_SQLite3::i_query, (void*)&c_SQLite3::ifa_query, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$escapestring = { (void*)&c_SQLite3::i_escapestring, (void*)&c_SQLite3::ifa_escapestring, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$open = { (void*)&c_SQLite3::i_open, (void*)&c_SQLite3::ifa_open, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$openblob = { (void*)&c_SQLite3::i_openblob, (void*)&c_SQLite3::ifa_openblob, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$exec = { (void*)&c_SQLite3::i_exec, (void*)&c_SQLite3::ifa_exec, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$changes = { (void*)&c_SQLite3::i_changes, (void*)&c_SQLite3::ifa_changes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3$$lastinsertrowid = { (void*)&c_SQLite3::i_lastinsertrowid, (void*)&c_SQLite3::ifa_lastinsertrowid, 0, 4, 0x0000000000000000LL};
Variant c_SQLite3::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SQLite3::i_open(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_open);
}
Variant c_SQLite3::i_busytimeout(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_busytimeout);
}
Variant c_SQLite3::i_close(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_close);
}
Variant c_SQLite3::i_exec(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_exec);
}
Variant c_SQLite3::i_version(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_version);
}
Variant c_SQLite3::i_lastinsertrowid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lastinsertrowid);
}
Variant c_SQLite3::i_lasterrorcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lasterrorcode);
}
Variant c_SQLite3::i_lasterrormsg(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lasterrormsg);
}
Variant c_SQLite3::i_loadextension(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_loadextension);
}
Variant c_SQLite3::i_changes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_changes);
}
Variant c_SQLite3::i_escapestring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_escapestring);
}
Variant c_SQLite3::i_prepare(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_prepare);
}
Variant c_SQLite3::i_query(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_query);
}
Variant c_SQLite3::i_querysingle(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_querysingle);
}
Variant c_SQLite3::i_createfunction(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createfunction);
}
Variant c_SQLite3::i_createaggregate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createaggregate);
}
Variant c_SQLite3::i_openblob(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_openblob);
}
Variant NEVER_INLINE c_SQLite3::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("__construct", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_SQLite3::ifa_open(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_open, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("open", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_open(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_open(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t_open(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_SQLite3::ifa_busytimeout(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_busytimeout, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("busytimeout", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_busytimeout(arg0));
}
Variant NEVER_INLINE c_SQLite3::ifa_close(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_close, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("close", 0, 1);
  return (self->t_close());
}
Variant NEVER_INLINE c_SQLite3::ifa_exec(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_exec, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("exec", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_exec(arg0));
}
Variant NEVER_INLINE c_SQLite3::ifa_version(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_version, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("version", 0, 1);
  return (self->t_version());
}
Variant NEVER_INLINE c_SQLite3::ifa_lastinsertrowid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lastinsertrowid, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("lastinsertrowid", 0, 1);
  return (self->t_lastinsertrowid());
}
Variant NEVER_INLINE c_SQLite3::ifa_lasterrorcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lasterrorcode, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("lasterrorcode", 0, 1);
  return (self->t_lasterrorcode());
}
Variant NEVER_INLINE c_SQLite3::ifa_lasterrormsg(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lasterrormsg, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("lasterrormsg", 0, 1);
  return (self->t_lasterrormsg());
}
Variant NEVER_INLINE c_SQLite3::ifa_loadextension(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadextension, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("loadextension", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_loadextension(arg0));
}
Variant NEVER_INLINE c_SQLite3::ifa_changes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_changes, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("changes", 0, 1);
  return (self->t_changes());
}
Variant NEVER_INLINE c_SQLite3::ifa_escapestring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_escapestring, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("escapestring", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_escapestring(arg0));
}
Variant NEVER_INLINE c_SQLite3::ifa_prepare(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_prepare, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("prepare", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_prepare(arg0));
}
Variant NEVER_INLINE c_SQLite3::ifa_query(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_query, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("query", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_query(arg0));
}
Variant NEVER_INLINE c_SQLite3::ifa_querysingle(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_querysingle, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("querysingle", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_querysingle(arg0));
  CVarRef arg1(a1);
  return (self->t_querysingle(arg0, arg1));
}
Variant NEVER_INLINE c_SQLite3::ifa_createfunction(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createfunction, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("createfunction", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_createfunction(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_createfunction(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SQLite3::ifa_createaggregate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createaggregate, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("createaggregate", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_createaggregate(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_createaggregate(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_SQLite3::ifa_openblob(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_openblob, coo_SQLite3);
  }
  c_SQLite3 *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("openblob", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_openblob(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_openblob(arg0, arg1, arg2, arg3));
}
extern const MethodCallInfoTable cw_SQLite3$$call_info_table[] = {
  { 0x3EBF5341, 1, 5, "close", &ci_SQLite3$$close },
  { 0x094466C2, 0, 12, "lasterrormsg", &ci_SQLite3$$lasterrormsg },
  { 0x742BF3C2, 1, 8, "openblob", &ci_SQLite3$$openblob },
  { 0x6BD68143, 1, 15, "createaggregate", &ci_SQLite3$$createaggregate },
  { 0x0C124BC4, 1, 4, "open", &ci_SQLite3$$open },
  { 0x42FCAB0A, 1, 13, "lasterrorcode", &ci_SQLite3$$lasterrorcode },
  { 0x3087208C, 1, 4, "exec", &ci_SQLite3$$exec },
  { 0x291057CD, 1, 14, "createfunction", &ci_SQLite3$$createfunction },
  { 0x09B02819, 1, 7, "changes", &ci_SQLite3$$changes },
  { 0x229C615F, 1, 11, "__construct", &ci_SQLite3$$__construct },
  { 0x30598961, 1, 11, "busytimeout", &ci_SQLite3$$busytimeout },
  { 0x0A487664, 1, 13, "loadextension", &ci_SQLite3$$loadextension },
  { 0x30FDCBE6, 1, 15, "lastinsertrowid", &ci_SQLite3$$lastinsertrowid },
  { 0x7F63D86A, 1, 7, "version", &ci_SQLite3$$version },
  { 0x4132ABEE, 1, 11, "querysingle", &ci_SQLite3$$querysingle },
  { 0x4BA591AF, 1, 7, "prepare", &ci_SQLite3$$prepare },
  { 0x3B251635, 1, 12, "escapestring", &ci_SQLite3$$escapestring },
  { 0x414DA377, 1, 5, "query", &ci_SQLite3$$query },
};
extern const int cw_SQLite3$$call_info_index[] = {
  63,
  -1,0,1,3,4,-1,-1,-1,
  -1,-1,5,-1,6,7,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,8,-1,-1,-1,-1,-1,9,
  -1,10,-1,-1,11,-1,12,-1,
  -1,-1,13,-1,-1,-1,14,15,
  -1,-1,-1,-1,-1,16,-1,17,
  -1,-1,-1,-1,-1,-1,-1,-1,

};
c_SQLite3 *c_SQLite3::create(String a0, int64 a1, String a2) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2);
  return this;
}
extern const MethodCallInfoTable cw_SQLite3$$call_info_table[];
extern const int cw_SQLite3$$call_info_index[];
extern const InstanceOfInfo cw_SQLite3$$instanceof_table[];
extern const int cw_SQLite3$$instanceof_index[];
const ObjectStaticCallbacks cw_SQLite3 = {
  (ObjectData*(*)(ObjectData*))coo_SQLite3,
  cw_SQLite3$$call_info_table,cw_SQLite3$$call_info_index,
  cw_SQLite3$$instanceof_table,cw_SQLite3$$instanceof_index,
  &c_SQLite3::s_class_name,
  0,&ci_SQLite3$$__construct,0,0,0x0,
  &c_SQLite3::s_cls
};
ObjectData *coo_DummyContinuation() {
  return NEWOBJ(c_DummyContinuation)();
}
IMPLEMENT_CLASS(DummyContinuation)
extern const InstanceOfInfo cw_DummyContinuation$$instanceof_table[] = {
  {0x18BD84D1,0,"DummyContinuation",&cw_DummyContinuation},
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_DummyContinuation$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,2,-1,

};
extern const CallInfo ci_DummyContinuation$$current = { (void*)&c_DummyContinuation::i_current, (void*)&c_DummyContinuation::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DummyContinuation$$key = { (void*)&c_DummyContinuation::i_key, (void*)&c_DummyContinuation::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DummyContinuation$$__destruct = { (void*)&c_DummyContinuation::i___destruct, (void*)&c_DummyContinuation::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DummyContinuation$$valid = { (void*)&c_DummyContinuation::i_valid, (void*)&c_DummyContinuation::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DummyContinuation$$__construct = { (void*)&c_DummyContinuation::i___construct, (void*)&c_DummyContinuation::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DummyContinuation$$rewind = { (void*)&c_DummyContinuation::i_rewind, (void*)&c_DummyContinuation::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DummyContinuation$$next = { (void*)&c_DummyContinuation::i_next, (void*)&c_DummyContinuation::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_DummyContinuation::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DummyContinuation::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_DummyContinuation::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_DummyContinuation::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_DummyContinuation::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_DummyContinuation::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_DummyContinuation::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_DummyContinuation::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DummyContinuation::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_DummyContinuation::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_DummyContinuation::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_DummyContinuation::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_DummyContinuation::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_DummyContinuation::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_DummyContinuation);
  }
  c_DummyContinuation *self ATTRIBUTE_UNUSED (static_cast<c_DummyContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_DummyContinuation$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_DummyContinuation$$key },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_DummyContinuation$$__destruct },
  { 0x54808C44, 1, 5, "valid", &ci_DummyContinuation$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_DummyContinuation$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_DummyContinuation$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_DummyContinuation$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_DummyContinuation$$__construct },
};
extern const int cw_DummyContinuation$$call_info_index[] = {
  15,
  -1,0,-1,1,2,-1,-1,-1,
  3,-1,4,-1,5,-1,-1,6,

};
c_DummyContinuation *c_DummyContinuation::create() {
  CountableHelper h(this);
  init();
  t___construct();
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_DummyContinuation$$call_info_table[];
extern const int cw_DummyContinuation$$call_info_index[];
extern const InstanceOfInfo cw_DummyContinuation$$instanceof_table[];
extern const int cw_DummyContinuation$$instanceof_index[];
const ObjectStaticCallbacks cw_DummyContinuation = {
  (ObjectData*(*)(ObjectData*))coo_DummyContinuation,
  cw_DummyContinuation$$call_info_table,cw_DummyContinuation$$call_info_index,
  cw_DummyContinuation$$instanceof_table,cw_DummyContinuation$$instanceof_index,
  &c_DummyContinuation::s_class_name,
  0,&ci_DummyContinuation$$__construct,0,0,0x0,
  &c_DummyContinuation::s_cls
};
ObjectData *coo_Map() {
  return NEWOBJ(c_Map)();
}
IMPLEMENT_CLASS(Map)
extern const InstanceOfInfo cw_Map$$instanceof_table[] = {
  {0x20DCFAD1,0,"Map",&cw_Map},
  {0x45E6F0A1,0,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x5EE263D1,1,"Countable",(const ObjectStaticCallbacks*)2},
  {0x3FB63255,1,"Iterable",(const ObjectStaticCallbacks*)2},
  {0x40363017,1,"IteratorAggregate",(const ObjectStaticCallbacks*)2},
};
const int cw_Map$$instanceof_index[] = {
  15,
  -1,0,-1,-1,-1,3,-1,4,
  -1,-1,-1,-1,-1,-1,-1,-1,

};
extern const CallInfo ci_Map$$discard = { (void*)&c_Map::i_discard, (void*)&c_Map::ifa_discard, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$tokeysarray = { (void*)&c_Map::i_tokeysarray, (void*)&c_Map::ifa_tokeysarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$__tostring = { (void*)&c_Map::i___tostring, (void*)&c_Map::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$clear = { (void*)&c_Map::i_clear, (void*)&c_Map::ifa_clear, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$fromiterable = { (void*)&c_Map::i_fromiterable, (void*)&c_Map::ifa_fromiterable, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_Map$$differencebykey = { (void*)&c_Map::i_differencebykey, (void*)&c_Map::ifa_differencebykey, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$__construct = { (void*)&c_Map::i___construct, (void*)&c_Map::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$put = { (void*)&c_Map::i_put, (void*)&c_Map::ifa_put, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$tovaluesarray = { (void*)&c_Map::i_tovaluesarray, (void*)&c_Map::ifa_tovaluesarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$__unset = { (void*)&c_Map::i___unset, (void*)&c_Map::ifa___unset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$get = { (void*)&c_Map::i_get, (void*)&c_Map::ifa_get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$updatefromarray = { (void*)&c_Map::i_updatefromarray, (void*)&c_Map::ifa_updatefromarray, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$remove = { (void*)&c_Map::i_remove, (void*)&c_Map::ifa_remove, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$contains = { (void*)&c_Map::i_contains, (void*)&c_Map::ifa_contains, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$copyasarray = { (void*)&c_Map::i_copyasarray, (void*)&c_Map::ifa_copyasarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$__set = { (void*)&c_Map::i___set, (void*)&c_Map::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$__get = { (void*)&c_Map::i___get, (void*)&c_Map::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$__isset = { (void*)&c_Map::i___isset, (void*)&c_Map::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$updatefromiterable = { (void*)&c_Map::i_updatefromiterable, (void*)&c_Map::ifa_updatefromiterable, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$at = { (void*)&c_Map::i_at, (void*)&c_Map::ifa_at, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$count = { (void*)&c_Map::i_count, (void*)&c_Map::ifa_count, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$fromarray = { (void*)&c_Map::i_fromarray, (void*)&c_Map::ifa_fromarray, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_Map$$isempty = { (void*)&c_Map::i_isempty, (void*)&c_Map::ifa_isempty, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$getiterator = { (void*)&c_Map::i_getiterator, (void*)&c_Map::ifa_getiterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$toarray = { (void*)&c_Map::i_toarray, (void*)&c_Map::ifa_toarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Map$$values = { (void*)&c_Map::i_values, (void*)&c_Map::ifa_values, 0, 4, 0x0000000000000000LL};
Variant c_Map::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Map::i_isempty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isempty);
}
Variant c_Map::i_count(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_count);
}
Variant c_Map::i_at(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_at);
}
Variant c_Map::i_get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get);
}
Variant c_Map::i_put(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_put);
}
Variant c_Map::i_clear(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_clear);
}
Variant c_Map::i_contains(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_contains);
}
Variant c_Map::i_remove(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_remove);
}
Variant c_Map::i_discard(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_discard);
}
Variant c_Map::i_toarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_toarray);
}
Variant c_Map::i_copyasarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_copyasarray);
}
Variant c_Map::i_tokeysarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_tokeysarray);
}
Variant c_Map::i_values(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_values);
}
Variant c_Map::i_tovaluesarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_tovaluesarray);
}
Variant c_Map::i_updatefromarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_updatefromarray);
}
Variant c_Map::i_updatefromiterable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_updatefromiterable);
}
Variant c_Map::i_differencebykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_differencebykey);
}
Variant c_Map::i_getiterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getiterator);
}
Variant c_Map::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_Map::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_Map::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_Map::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant c_Map::i___unset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___unset);
}
Variant c_Map::i_fromarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fromarray);
}
Variant c_Map::i_fromiterable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fromiterable);
}
Variant NEVER_INLINE c_Map::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_Map::ifa_isempty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isempty, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("isempty", 0, 1);
  return (self->t_isempty());
}
Variant NEVER_INLINE c_Map::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("count", 0, 1);
  return (self->t_count());
}
Variant NEVER_INLINE c_Map::ifa_at(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_at, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("at", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_at(arg0));
}
Variant NEVER_INLINE c_Map::ifa_get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_get(arg0));
}
Variant NEVER_INLINE c_Map::ifa_put(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_put, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("put", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_put(arg0, arg1));
}
Variant NEVER_INLINE c_Map::ifa_clear(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clear, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("clear", 0, 1);
  return (self->t_clear());
}
Variant NEVER_INLINE c_Map::ifa_contains(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_contains, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("contains", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_contains(arg0));
}
Variant NEVER_INLINE c_Map::ifa_remove(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_remove, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("remove", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_remove(arg0));
}
Variant NEVER_INLINE c_Map::ifa_discard(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_discard, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("discard", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_discard(arg0));
}
Variant NEVER_INLINE c_Map::ifa_toarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_toarray, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("toarray", 0, 1);
  return (self->t_toarray());
}
Variant NEVER_INLINE c_Map::ifa_copyasarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_copyasarray, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("copyasarray", 0, 1);
  return (self->t_copyasarray());
}
Variant NEVER_INLINE c_Map::ifa_tokeysarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tokeysarray, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("tokeysarray", 0, 1);
  return (self->t_tokeysarray());
}
Variant NEVER_INLINE c_Map::ifa_values(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_values, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("values", 0, 1);
  return (self->t_values());
}
Variant NEVER_INLINE c_Map::ifa_tovaluesarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tovaluesarray, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("tovaluesarray", 0, 1);
  return (self->t_tovaluesarray());
}
Variant NEVER_INLINE c_Map::ifa_updatefromarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_updatefromarray, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("updatefromarray", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_updatefromarray(arg0));
}
Variant NEVER_INLINE c_Map::ifa_updatefromiterable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_updatefromiterable, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("updatefromiterable", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_updatefromiterable(arg0));
}
Variant NEVER_INLINE c_Map::ifa_differencebykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_differencebykey, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("differencebykey", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_differencebykey(arg0));
}
Variant NEVER_INLINE c_Map::ifa_getiterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getiterator, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getiterator", 0, 1);
  return (self->t_getiterator());
}
Variant NEVER_INLINE c_Map::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__tostring", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_Map::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_Map::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_Map::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
Variant NEVER_INLINE c_Map::ifa___unset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___unset, coo_Map);
  }
  c_Map *self ATTRIBUTE_UNUSED (static_cast<c_Map*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__unset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___unset(arg0));
}
Variant NEVER_INLINE c_Map::ifa_fromarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("fromarray", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_Map::t_fromarray(arg0));
}
Variant NEVER_INLINE c_Map::ifa_fromiterable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("fromiterable", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_Map::t_fromiterable(arg0));
}
extern const MethodCallInfoTable cw_Map$$call_info_table[] = {
  { 0x5C34CDC0, 1, 11, "copyAsArray", &ci_Map$$copyasarray },
  { 0x32A12503, 1, 11, "getIterator", &ci_Map$$getiterator },
  { 0x11099204, 1, 11, "toKeysArray", &ci_Map$$tokeysarray },
  { 0x295C3D07, 1, 9, "fromArray", &ci_Map$$fromarray },
  { 0x55C7DBC9, 1, 7, "discard", &ci_Map$$discard },
  { 0x7D14564E, 1, 6, "remove", &ci_Map$$remove },
  { 0x74FA338F, 1, 5, "__get", &ci_Map$$__get },
  { 0x65104D10, 0, 5, "count", &ci_Map$$count },
  { 0x7A22D290, 1, 8, "contains", &ci_Map$$contains },
  { 0x53768711, 1, 15, "updateFromArray", &ci_Map$$updatefromarray },
  { 0x14B34A13, 1, 10, "__toString", &ci_Map$$__tostring },
  { 0x03340395, 1, 5, "__set", &ci_Map$$__set },
  { 0x655C3FD9, 1, 12, "fromIterable", &ci_Map$$fromiterable },
  { 0x49D8CC9A, 1, 3, "put", &ci_Map$$put },
  { 0x49A2079B, 1, 7, "__unset", &ci_Map$$__unset },
  { 0x4EC51D5C, 1, 6, "values", &ci_Map$$values },
  { 0x229C615F, 1, 11, "__construct", &ci_Map$$__construct },
  { 0x5A226667, 1, 5, "clear", &ci_Map$$clear },
  { 0x5FC265E8, 0, 7, "isEmpty", &ci_Map$$isempty },
  { 0x569AD828, 1, 3, "get", &ci_Map$$get },
  { 0x2D97C76D, 0, 18, "updateFromIterable", &ci_Map$$updatefromiterable },
  { 0x630CD52D, 1, 15, "differenceByKey", &ci_Map$$differencebykey },
  { 0x2E2178EE, 1, 7, "__isset", &ci_Map$$__isset },
  { 0x3109B0F2, 1, 7, "toArray", &ci_Map$$toarray },
  { 0x2439E4B7, 1, 2, "at", &ci_Map$$at },
  { 0x6BECD6BD, 1, 13, "toValuesArray", &ci_Map$$tovaluesarray },
};
extern const int cw_Map$$call_info_index[] = {
  63,
  0,-1,-1,1,2,-1,-1,3,
  -1,4,-1,-1,-1,-1,5,6,
  7,9,-1,10,-1,11,-1,-1,
  -1,12,13,14,15,-1,-1,16,
  -1,-1,-1,-1,-1,-1,-1,17,
  18,-1,-1,-1,-1,20,22,-1,
  -1,-1,23,-1,-1,-1,-1,24,
  -1,-1,-1,-1,-1,25,-1,-1,

};
c_Map *c_Map::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_Map$$call_info_table[];
extern const int cw_Map$$call_info_index[];
extern const InstanceOfInfo cw_Map$$instanceof_table[];
extern const int cw_Map$$instanceof_index[];
const ObjectStaticCallbacks cw_Map = {
  (ObjectData*(*)(ObjectData*))coo_Map,
  cw_Map$$call_info_table,cw_Map$$call_info_index,
  cw_Map$$instanceof_table,cw_Map$$instanceof_index,
  &c_Map::s_class_name,
  0,&ci_Map$$__construct,0,0,0x0,
  &c_Map::s_cls
};
ObjectData *coo_EncodingMatch() {
  return NEWOBJ(c_EncodingMatch)();
}
IMPLEMENT_CLASS(EncodingMatch)
extern const InstanceOfInfo cw_EncodingMatch$$instanceof_table[] = {
  {0x4A964744,1,"EncodingMatch",&cw_EncodingMatch},
};
const int cw_EncodingMatch$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_EncodingMatch$$getutf8 = { (void*)&c_EncodingMatch::i_getutf8, (void*)&c_EncodingMatch::ifa_getutf8, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingMatch$$isvalid = { (void*)&c_EncodingMatch::i_isvalid, (void*)&c_EncodingMatch::ifa_isvalid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingMatch$$getencoding = { (void*)&c_EncodingMatch::i_getencoding, (void*)&c_EncodingMatch::ifa_getencoding, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingMatch$$getconfidence = { (void*)&c_EncodingMatch::i_getconfidence, (void*)&c_EncodingMatch::ifa_getconfidence, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingMatch$$getlanguage = { (void*)&c_EncodingMatch::i_getlanguage, (void*)&c_EncodingMatch::ifa_getlanguage, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_EncodingMatch$$__construct = { (void*)&c_EncodingMatch::i___construct, (void*)&c_EncodingMatch::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_EncodingMatch::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_EncodingMatch::i_isvalid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isvalid);
}
Variant c_EncodingMatch::i_getencoding(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getencoding);
}
Variant c_EncodingMatch::i_getconfidence(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getconfidence);
}
Variant c_EncodingMatch::i_getlanguage(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getlanguage);
}
Variant c_EncodingMatch::i_getutf8(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getutf8);
}
Variant NEVER_INLINE c_EncodingMatch::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_EncodingMatch);
  }
  c_EncodingMatch *self ATTRIBUTE_UNUSED (static_cast<c_EncodingMatch*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_EncodingMatch::ifa_isvalid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isvalid, coo_EncodingMatch);
  }
  c_EncodingMatch *self ATTRIBUTE_UNUSED (static_cast<c_EncodingMatch*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("isvalid", 0, 1);
  return (self->t_isvalid());
}
Variant NEVER_INLINE c_EncodingMatch::ifa_getencoding(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getencoding, coo_EncodingMatch);
  }
  c_EncodingMatch *self ATTRIBUTE_UNUSED (static_cast<c_EncodingMatch*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getencoding", 0, 1);
  return (self->t_getencoding());
}
Variant NEVER_INLINE c_EncodingMatch::ifa_getconfidence(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconfidence, coo_EncodingMatch);
  }
  c_EncodingMatch *self ATTRIBUTE_UNUSED (static_cast<c_EncodingMatch*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getconfidence", 0, 1);
  return (self->t_getconfidence());
}
Variant NEVER_INLINE c_EncodingMatch::ifa_getlanguage(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getlanguage, coo_EncodingMatch);
  }
  c_EncodingMatch *self ATTRIBUTE_UNUSED (static_cast<c_EncodingMatch*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getlanguage", 0, 1);
  return (self->t_getlanguage());
}
Variant NEVER_INLINE c_EncodingMatch::ifa_getutf8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getutf8, coo_EncodingMatch);
  }
  c_EncodingMatch *self ATTRIBUTE_UNUSED (static_cast<c_EncodingMatch*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getutf8", 0, 1);
  return (self->t_getutf8());
}
extern const MethodCallInfoTable cw_EncodingMatch$$call_info_table[] = {
  { 0x4D474FB7, 1, 11, "getEncoding", &ci_EncodingMatch$$getencoding },
  { 0x2CA9872B, 1, 7, "isValid", &ci_EncodingMatch$$isvalid },
  { 0x080ED08C, 0, 13, "getConfidence", &ci_EncodingMatch$$getconfidence },
  { 0x0D4A914C, 0, 11, "getLanguage", &ci_EncodingMatch$$getlanguage },
  { 0x55596ADC, 1, 7, "getUTF8", &ci_EncodingMatch$$getutf8 },
  { 0x229C615F, 1, 11, "__construct", &ci_EncodingMatch$$__construct },
};
extern const int cw_EncodingMatch$$call_info_index[] = {
  15,
  -1,-1,-1,-1,-1,-1,-1,0,
  -1,-1,-1,1,2,-1,-1,5,

};
c_EncodingMatch *c_EncodingMatch::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_EncodingMatch$$call_info_table[];
extern const int cw_EncodingMatch$$call_info_index[];
extern const InstanceOfInfo cw_EncodingMatch$$instanceof_table[];
extern const int cw_EncodingMatch$$instanceof_index[];
const ObjectStaticCallbacks cw_EncodingMatch = {
  (ObjectData*(*)(ObjectData*))coo_EncodingMatch,
  cw_EncodingMatch$$call_info_table,cw_EncodingMatch$$call_info_index,
  cw_EncodingMatch$$instanceof_table,cw_EncodingMatch$$instanceof_index,
  &c_EncodingMatch::s_class_name,
  0,&ci_EncodingMatch$$__construct,0,0,0x0,
  &c_EncodingMatch::s_cls
};
ObjectData *coo_Locale() {
  return NEWOBJ(c_Locale)();
}
IMPLEMENT_CLASS(Locale)
extern const InstanceOfInfo cw_Locale$$instanceof_table[] = {
  {0x72DFE4AA,1,"Locale",&cw_Locale},
};
const int cw_Locale$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_Locale$$__construct = { (void*)&c_Locale::i___construct, (void*)&c_Locale::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_Locale::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_Locale::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Locale);
  }
  c_Locale *self ATTRIBUTE_UNUSED (static_cast<c_Locale*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
extern const MethodCallInfoTable cw_Locale$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_Locale$$__construct },
};
extern const int cw_Locale$$call_info_index[] = {
  1,
  -1,0,
};
c_Locale *c_Locale::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_Locale$$call_info_table[];
extern const int cw_Locale$$call_info_index[];
extern const InstanceOfInfo cw_Locale$$instanceof_table[];
extern const int cw_Locale$$instanceof_index[];
const ObjectStaticCallbacks cw_Locale = {
  (ObjectData*(*)(ObjectData*))coo_Locale,
  cw_Locale$$call_info_table,cw_Locale$$call_info_index,
  cw_Locale$$instanceof_table,cw_Locale$$instanceof_index,
  &c_Locale::s_class_name,
  &c_Locale::os_prop_table,&ci_Locale$$__construct,0,0,0x0,
  &c_Locale::s_cls
};
ObjectData *coo_DebuggerClientCmdUser() {
  return NEWOBJ(c_DebuggerClientCmdUser)();
}
IMPLEMENT_CLASS(DebuggerClientCmdUser)
extern const InstanceOfInfo cw_DebuggerClientCmdUser$$instanceof_table[] = {
  {0x1822944A,1,"DebuggerClientCmdUser",&cw_DebuggerClientCmdUser},
};
const int cw_DebuggerClientCmdUser$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_DebuggerClientCmdUser$$getcommand = { (void*)&c_DebuggerClientCmdUser::i_getcommand, (void*)&c_DebuggerClientCmdUser::ifa_getcommand, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$helpcmds = { (void*)&c_DebuggerClientCmdUser::i_helpcmds, (void*)&c_DebuggerClientCmdUser::ifa_helpcmds, 2, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$output = { (void*)&c_DebuggerClientCmdUser::i_output, (void*)&c_DebuggerClientCmdUser::ifa_output, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$argvalue = { (void*)&c_DebuggerClientCmdUser::i_argvalue, (void*)&c_DebuggerClientCmdUser::ifa_argvalue, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$error = { (void*)&c_DebuggerClientCmdUser::i_error, (void*)&c_DebuggerClientCmdUser::ifa_error, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$args = { (void*)&c_DebuggerClientCmdUser::i_args, (void*)&c_DebuggerClientCmdUser::ifa_args, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$send = { (void*)&c_DebuggerClientCmdUser::i_send, (void*)&c_DebuggerClientCmdUser::ifa_send, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$getcode = { (void*)&c_DebuggerClientCmdUser::i_getcode, (void*)&c_DebuggerClientCmdUser::ifa_getcode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$printframe = { (void*)&c_DebuggerClientCmdUser::i_printframe, (void*)&c_DebuggerClientCmdUser::ifa_printframe, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$__construct = { (void*)&c_DebuggerClientCmdUser::i___construct, (void*)&c_DebuggerClientCmdUser::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$tutorial = { (void*)&c_DebuggerClientCmdUser::i_tutorial, (void*)&c_DebuggerClientCmdUser::ifa_tutorial, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$helpsection = { (void*)&c_DebuggerClientCmdUser::i_helpsection, (void*)&c_DebuggerClientCmdUser::ifa_helpsection, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$addcompletion = { (void*)&c_DebuggerClientCmdUser::i_addcompletion, (void*)&c_DebuggerClientCmdUser::ifa_addcompletion, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$code = { (void*)&c_DebuggerClientCmdUser::i_code, (void*)&c_DebuggerClientCmdUser::ifa_code, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$getframe = { (void*)&c_DebuggerClientCmdUser::i_getframe, (void*)&c_DebuggerClientCmdUser::ifa_getframe, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$ask = { (void*)&c_DebuggerClientCmdUser::i_ask, (void*)&c_DebuggerClientCmdUser::ifa_ask, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$helpbody = { (void*)&c_DebuggerClientCmdUser::i_helpbody, (void*)&c_DebuggerClientCmdUser::ifa_helpbody, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$argrest = { (void*)&c_DebuggerClientCmdUser::i_argrest, (void*)&c_DebuggerClientCmdUser::ifa_argrest, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$quit = { (void*)&c_DebuggerClientCmdUser::i_quit, (void*)&c_DebuggerClientCmdUser::ifa_quit, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$arg = { (void*)&c_DebuggerClientCmdUser::i_arg, (void*)&c_DebuggerClientCmdUser::ifa_arg, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$info = { (void*)&c_DebuggerClientCmdUser::i_info, (void*)&c_DebuggerClientCmdUser::ifa_info, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$argcount = { (void*)&c_DebuggerClientCmdUser::i_argcount, (void*)&c_DebuggerClientCmdUser::ifa_argcount, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$getstacktrace = { (void*)&c_DebuggerClientCmdUser::i_getstacktrace, (void*)&c_DebuggerClientCmdUser::ifa_getstacktrace, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$getcurrentlocation = { (void*)&c_DebuggerClientCmdUser::i_getcurrentlocation, (void*)&c_DebuggerClientCmdUser::ifa_getcurrentlocation, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$helptitle = { (void*)&c_DebuggerClientCmdUser::i_helptitle, (void*)&c_DebuggerClientCmdUser::ifa_helptitle, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$xend = { (void*)&c_DebuggerClientCmdUser::i_xend, (void*)&c_DebuggerClientCmdUser::ifa_xend, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$print = { (void*)&c_DebuggerClientCmdUser::i_print, (void*)&c_DebuggerClientCmdUser::ifa_print, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$help = { (void*)&c_DebuggerClientCmdUser::i_help, (void*)&c_DebuggerClientCmdUser::ifa_help, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClientCmdUser$$wrap = { (void*)&c_DebuggerClientCmdUser::i_wrap, (void*)&c_DebuggerClientCmdUser::ifa_wrap, 1, 4, 0x0000000000000000LL};
Variant c_DebuggerClientCmdUser::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DebuggerClientCmdUser::i_quit(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_quit);
}
Variant c_DebuggerClientCmdUser::i_print(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_print, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("print", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_print(count, arg0, p), null);
  }
}
Variant c_DebuggerClientCmdUser::i_help(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_help, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("help", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_help(count, arg0, p), null);
  }
}
Variant c_DebuggerClientCmdUser::i_info(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_info, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("info", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_info(count, arg0, p), null);
  }
}
Variant c_DebuggerClientCmdUser::i_output(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_output, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("output", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_output(count, arg0, p), null);
  }
}
Variant c_DebuggerClientCmdUser::i_error(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_error, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("error", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_error(count, arg0, p), null);
  }
}
Variant c_DebuggerClientCmdUser::i_code(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_code);
}
Variant c_DebuggerClientCmdUser::i_ask(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_ask, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("ask", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_ask(count, arg0, p));
  }
}
Variant c_DebuggerClientCmdUser::i_wrap(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_wrap);
}
Variant c_DebuggerClientCmdUser::i_helptitle(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_helptitle);
}
Variant c_DebuggerClientCmdUser::i_helpcmds(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_helpcmds, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) return throw_missing_arguments("helpcmds", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    const Array &p(count > 2 ? params.slice(2, count - 2, false) : Array());
    return (self->t_helpcmds(count, arg0, arg1, p), null);
  }
}
Variant c_DebuggerClientCmdUser::i_helpbody(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_helpbody);
}
Variant c_DebuggerClientCmdUser::i_helpsection(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_helpsection);
}
Variant c_DebuggerClientCmdUser::i_tutorial(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_tutorial);
}
Variant c_DebuggerClientCmdUser::i_getcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getcode);
}
Variant c_DebuggerClientCmdUser::i_getcommand(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getcommand);
}
Variant c_DebuggerClientCmdUser::i_arg(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_arg);
}
Variant c_DebuggerClientCmdUser::i_argcount(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_argcount);
}
Variant c_DebuggerClientCmdUser::i_argvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_argvalue);
}
Variant c_DebuggerClientCmdUser::i_argrest(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_argrest);
}
Variant c_DebuggerClientCmdUser::i_args(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_args);
}
Variant c_DebuggerClientCmdUser::i_send(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_send);
}
Variant c_DebuggerClientCmdUser::i_xend(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_xend);
}
Variant c_DebuggerClientCmdUser::i_getcurrentlocation(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getcurrentlocation);
}
Variant c_DebuggerClientCmdUser::i_getstacktrace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstacktrace);
}
Variant c_DebuggerClientCmdUser::i_getframe(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getframe);
}
Variant c_DebuggerClientCmdUser::i_printframe(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_printframe);
}
Variant c_DebuggerClientCmdUser::i_addcompletion(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addcompletion);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_quit(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_quit, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("quit", 0, 1);
  return (self->t_quit(), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_print(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_print, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("print", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_print(count, arg0, p), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_help(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_help, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("help", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_help(count, arg0, p), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_info(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_info, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("info", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_info(count, arg0, p), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_output(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_output, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("output", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_output(count, arg0, p), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_error(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_error, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("error", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_error(count, arg0, p), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_code(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_code, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("code", count, 1, 4, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_code(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_code(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_code(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  return (self->t_code(arg0, arg1, arg2, arg3), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_ask(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_ask, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("ask", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_ask(count, arg0, p));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_wrap(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_wrap, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("wrap", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_wrap(arg0));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_helptitle(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_helptitle, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("helptitle", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_helptitle(arg0), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_helpcmds(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_helpcmds, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_missing_arguments("helpcmds", count+1, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  Array p;
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_helpcmds(count, arg0, arg1, p), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_helpbody(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_helpbody, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("helpbody", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_helpbody(arg0), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_helpsection(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_helpsection, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("helpsection", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_helpsection(arg0), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_tutorial(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tutorial, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("tutorial", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_tutorial(arg0), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_getcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcode, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getcode", 0, 1);
  return (self->t_getcode());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_getcommand(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcommand, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getcommand", 0, 1);
  return (self->t_getcommand());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_arg(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_arg, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("arg", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_arg(arg0, arg1));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_argcount(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_argcount, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("argcount", 0, 1);
  return (self->t_argcount());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_argvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_argvalue, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("argvalue", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_argvalue(arg0));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_argrest(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_argrest, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("argrest", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_argrest(arg0));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_args(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_args, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("args", 0, 1);
  return (self->t_args());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_send(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_send, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("send", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_send(arg0));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_xend(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_xend, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("xend", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_xend(arg0));
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_getcurrentlocation(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcurrentlocation, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getcurrentlocation", 0, 1);
  return (self->t_getcurrentlocation());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_getstacktrace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstacktrace, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getstacktrace", 0, 1);
  return (self->t_getstacktrace());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_getframe(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getframe, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getframe", 0, 1);
  return (self->t_getframe());
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_printframe(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_printframe, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("printframe", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_printframe(arg0), null);
}
Variant NEVER_INLINE c_DebuggerClientCmdUser::ifa_addcompletion(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addcompletion, coo_DebuggerClientCmdUser);
  }
  c_DebuggerClientCmdUser *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClientCmdUser*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("addcompletion", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_addcompletion(arg0), null);
}
extern const MethodCallInfoTable cw_DebuggerClientCmdUser$$call_info_table[] = {
  { 0x0B181780, 1, 13, "addCompletion", &ci_DebuggerClientCmdUser$$addcompletion },
  { 0x3FF5AA42, 1, 3, "ask", &ci_DebuggerClientCmdUser$$ask },
  { 0x377C4984, 1, 8, "getFrame", &ci_DebuggerClientCmdUser$$getframe },
  { 0x1DCAEA85, 1, 10, "printFrame", &ci_DebuggerClientCmdUser$$printframe },
  { 0x002E3888, 1, 4, "send", &ci_DebuggerClientCmdUser$$send },
  { 0x2DE43B8E, 1, 4, "args", &ci_DebuggerClientCmdUser$$args },
  { 0x255159CF, 0, 8, "helpBody", &ci_DebuggerClientCmdUser$$helpbody },
  { 0x1DC3D04F, 1, 7, "getCode", &ci_DebuggerClientCmdUser$$getcode },
  { 0x52B098D1, 0, 5, "print", &ci_DebuggerClientCmdUser$$print },
  { 0x15F5B951, 1, 8, "helpCmds", &ci_DebuggerClientCmdUser$$helpcmds },
  { 0x2C493A97, 0, 10, "getCommand", &ci_DebuggerClientCmdUser$$getcommand },
  { 0x74D168D7, 1, 7, "argRest", &ci_DebuggerClientCmdUser$$argrest },
  { 0x229C615F, 0, 11, "__construct", &ci_DebuggerClientCmdUser$$__construct },
  { 0x157D479F, 0, 4, "info", &ci_DebuggerClientCmdUser$$info },
  { 0x213DB6DF, 1, 5, "error", &ci_DebuggerClientCmdUser$$error },
  { 0x3731C423, 1, 9, "helpTitle", &ci_DebuggerClientCmdUser$$helptitle },
  { 0x00554726, 1, 18, "getCurrentLocation", &ci_DebuggerClientCmdUser$$getcurrentlocation },
  { 0x4770E928, 1, 8, "argValue", &ci_DebuggerClientCmdUser$$argvalue },
  { 0x0516B6AC, 1, 8, "tutorial", &ci_DebuggerClientCmdUser$$tutorial },
  { 0x3E2B4C6F, 0, 11, "helpSection", &ci_DebuggerClientCmdUser$$helpsection },
  { 0x2A696DEF, 1, 8, "argCount", &ci_DebuggerClientCmdUser$$argcount },
  { 0x5FD23534, 0, 4, "help", &ci_DebuggerClientCmdUser$$help },
  { 0x5A99F6F4, 1, 3, "arg", &ci_DebuggerClientCmdUser$$arg },
  { 0x1024B7B6, 1, 4, "xend", &ci_DebuggerClientCmdUser$$xend },
  { 0x4AA2B277, 0, 4, "wrap", &ci_DebuggerClientCmdUser$$wrap },
  { 0x13FC6FB7, 1, 13, "getStackTrace", &ci_DebuggerClientCmdUser$$getstacktrace },
  { 0x057ACDB9, 1, 4, "code", &ci_DebuggerClientCmdUser$$code },
  { 0x0631017A, 1, 4, "quit", &ci_DebuggerClientCmdUser$$quit },
  { 0x377C677F, 1, 6, "output", &ci_DebuggerClientCmdUser$$output },
};
extern const int cw_DebuggerClientCmdUser$$call_info_index[] = {
  63,
  0,-1,1,-1,2,3,-1,-1,
  4,-1,-1,-1,-1,-1,5,6,
  -1,8,-1,-1,-1,-1,-1,10,
  -1,-1,-1,-1,-1,-1,-1,12,
  -1,-1,-1,15,-1,-1,16,-1,
  17,-1,-1,-1,18,-1,-1,19,
  -1,-1,-1,-1,21,-1,23,24,
  -1,26,27,-1,-1,-1,-1,28,

};
c_DebuggerClientCmdUser *c_DebuggerClientCmdUser::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DebuggerClientCmdUser$$call_info_table[];
extern const int cw_DebuggerClientCmdUser$$call_info_index[];
extern const InstanceOfInfo cw_DebuggerClientCmdUser$$instanceof_table[];
extern const int cw_DebuggerClientCmdUser$$instanceof_index[];
const ObjectStaticCallbacks cw_DebuggerClientCmdUser = {
  (ObjectData*(*)(ObjectData*))coo_DebuggerClientCmdUser,
  cw_DebuggerClientCmdUser$$call_info_table,cw_DebuggerClientCmdUser$$call_info_index,
  cw_DebuggerClientCmdUser$$instanceof_table,cw_DebuggerClientCmdUser$$instanceof_index,
  &c_DebuggerClientCmdUser::s_class_name,
  &c_DebuggerClientCmdUser::os_prop_table,&ci_DebuggerClientCmdUser$$__construct,0,0,0x0,
  &c_DebuggerClientCmdUser::s_cls
};
ObjectData *coo_SQLite3Stmt() {
  return NEWOBJ(c_SQLite3Stmt)();
}
IMPLEMENT_CLASS(SQLite3Stmt)
extern const InstanceOfInfo cw_SQLite3Stmt$$instanceof_table[] = {
  {0x3841AED2,1,"SQLite3Stmt",&cw_SQLite3Stmt},
};
const int cw_SQLite3Stmt$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_SQLite3Stmt$$clear = { (void*)&c_SQLite3Stmt::i_clear, (void*)&c_SQLite3Stmt::ifa_clear, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$close = { (void*)&c_SQLite3Stmt::i_close, (void*)&c_SQLite3Stmt::ifa_close, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$reset = { (void*)&c_SQLite3Stmt::i_reset, (void*)&c_SQLite3Stmt::ifa_reset, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$bindvalue = { (void*)&c_SQLite3Stmt::i_bindvalue, (void*)&c_SQLite3Stmt::ifa_bindvalue, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$paramcount = { (void*)&c_SQLite3Stmt::i_paramcount, (void*)&c_SQLite3Stmt::ifa_paramcount, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$execute = { (void*)&c_SQLite3Stmt::i_execute, (void*)&c_SQLite3Stmt::ifa_execute, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$__construct = { (void*)&c_SQLite3Stmt::i___construct, (void*)&c_SQLite3Stmt::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SQLite3Stmt$$bindparam = { (void*)&c_SQLite3Stmt::i_bindparam, (void*)&c_SQLite3Stmt::ifa_bindparam, 3, 4, 0x0000000000000002LL};
Variant c_SQLite3Stmt::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SQLite3Stmt::i_paramcount(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_paramcount);
}
Variant c_SQLite3Stmt::i_close(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_close);
}
Variant c_SQLite3Stmt::i_reset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_reset);
}
Variant c_SQLite3Stmt::i_clear(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_clear);
}
Variant c_SQLite3Stmt::i_bindparam(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_bindparam);
}
Variant c_SQLite3Stmt::i_bindvalue(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_bindvalue);
}
Variant c_SQLite3Stmt::i_execute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_execute);
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__construct", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_paramcount(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_paramcount, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("paramcount", 0, 1);
  return (self->t_paramcount());
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_close(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_close, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("close", 0, 1);
  return (self->t_close());
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_reset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_reset, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("reset", 0, 1);
  return (self->t_reset());
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_clear(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clear, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("clear", 0, 1);
  return (self->t_clear());
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_bindparam(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_bindparam, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("bindparam", count, 2, 3, 1);
  CVarRef arg0(a0);
  VRefParam arg1(vref(a1));
  if (count <= 2) return (self->t_bindparam(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_bindparam(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_bindvalue(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_bindvalue, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("bindvalue", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_bindvalue(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_bindvalue(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SQLite3Stmt::ifa_execute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_execute, coo_SQLite3Stmt);
  }
  c_SQLite3Stmt *self ATTRIBUTE_UNUSED (static_cast<c_SQLite3Stmt*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("execute", 0, 1);
  return (self->t_execute());
}
extern const MethodCallInfoTable cw_SQLite3Stmt$$call_info_table[] = {
  { 0x22A924E0, 1, 5, "reset", &ci_SQLite3Stmt$$reset },
  { 0x3EBF5341, 1, 5, "close", &ci_SQLite3Stmt$$close },
  { 0x3628E403, 1, 9, "bindvalue", &ci_SQLite3Stmt$$bindvalue },
  { 0x1BA41696, 1, 9, "bindparam", &ci_SQLite3Stmt$$bindparam },
  { 0x01E93357, 0, 10, "paramcount", &ci_SQLite3Stmt$$paramcount },
  { 0x5A226667, 1, 5, "clear", &ci_SQLite3Stmt$$clear },
  { 0x6B57714E, 1, 7, "execute", &ci_SQLite3Stmt$$execute },
  { 0x229C615F, 1, 11, "__construct", &ci_SQLite3Stmt$$__construct },
};
extern const int cw_SQLite3Stmt$$call_info_index[] = {
  15,
  0,1,-1,2,-1,-1,3,4,
  -1,-1,-1,-1,-1,-1,6,7,

};
c_SQLite3Stmt *c_SQLite3Stmt::create(Object a0, String a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_SQLite3Stmt$$call_info_table[];
extern const int cw_SQLite3Stmt$$call_info_index[];
extern const InstanceOfInfo cw_SQLite3Stmt$$instanceof_table[];
extern const int cw_SQLite3Stmt$$instanceof_index[];
const ObjectStaticCallbacks cw_SQLite3Stmt = {
  (ObjectData*(*)(ObjectData*))coo_SQLite3Stmt,
  cw_SQLite3Stmt$$call_info_table,cw_SQLite3Stmt$$call_info_index,
  cw_SQLite3Stmt$$instanceof_table,cw_SQLite3Stmt$$instanceof_index,
  &c_SQLite3Stmt::s_class_name,
  0,&ci_SQLite3Stmt$$__construct,0,0,0x0,
  &c_SQLite3Stmt::s_cls
};
ObjectData *coo_XMLWriter() {
  return NEWOBJ(c_XMLWriter)();
}
IMPLEMENT_CLASS(XMLWriter)
extern const InstanceOfInfo cw_XMLWriter$$instanceof_table[] = {
  {0x3B3DA065,1,"XMLWriter",&cw_XMLWriter},
};
const int cw_XMLWriter$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_XMLWriter$$endpi = { (void*)&c_XMLWriter::i_endpi, (void*)&c_XMLWriter::ifa_endpi, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writedtdentity = { (void*)&c_XMLWriter::i_writedtdentity, (void*)&c_XMLWriter::ifa_writedtdentity, 6, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$setindentstring = { (void*)&c_XMLWriter::i_setindentstring, (void*)&c_XMLWriter::ifa_setindentstring, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$enddtd = { (void*)&c_XMLWriter::i_enddtd, (void*)&c_XMLWriter::ifa_enddtd, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writedtdattlist = { (void*)&c_XMLWriter::i_writedtdattlist, (void*)&c_XMLWriter::ifa_writedtdattlist, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$text = { (void*)&c_XMLWriter::i_text, (void*)&c_XMLWriter::ifa_text, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startdocument = { (void*)&c_XMLWriter::i_startdocument, (void*)&c_XMLWriter::ifa_startdocument, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$enddtdattlist = { (void*)&c_XMLWriter::i_enddtdattlist, (void*)&c_XMLWriter::ifa_enddtdattlist, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writeelement = { (void*)&c_XMLWriter::i_writeelement, (void*)&c_XMLWriter::ifa_writeelement, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$enddtdelement = { (void*)&c_XMLWriter::i_enddtdelement, (void*)&c_XMLWriter::ifa_enddtdelement, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$endelement = { (void*)&c_XMLWriter::i_endelement, (void*)&c_XMLWriter::ifa_endelement, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$__construct = { (void*)&c_XMLWriter::i___construct, (void*)&c_XMLWriter::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startpi = { (void*)&c_XMLWriter::i_startpi, (void*)&c_XMLWriter::ifa_startpi, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$openmemory = { (void*)&c_XMLWriter::i_openmemory, (void*)&c_XMLWriter::ifa_openmemory, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startelementns = { (void*)&c_XMLWriter::i_startelementns, (void*)&c_XMLWriter::ifa_startelementns, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writeraw = { (void*)&c_XMLWriter::i_writeraw, (void*)&c_XMLWriter::ifa_writeraw, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startcomment = { (void*)&c_XMLWriter::i_startcomment, (void*)&c_XMLWriter::ifa_startcomment, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$enddtdentity = { (void*)&c_XMLWriter::i_enddtdentity, (void*)&c_XMLWriter::ifa_enddtdentity, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$outputmemory = { (void*)&c_XMLWriter::i_outputmemory, (void*)&c_XMLWriter::ifa_outputmemory, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startattributens = { (void*)&c_XMLWriter::i_startattributens, (void*)&c_XMLWriter::ifa_startattributens, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writeattributens = { (void*)&c_XMLWriter::i_writeattributens, (void*)&c_XMLWriter::ifa_writeattributens, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startelement = { (void*)&c_XMLWriter::i_startelement, (void*)&c_XMLWriter::ifa_startelement, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startdtdentity = { (void*)&c_XMLWriter::i_startdtdentity, (void*)&c_XMLWriter::ifa_startdtdentity, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startdtd = { (void*)&c_XMLWriter::i_startdtd, (void*)&c_XMLWriter::ifa_startdtd, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$enddocument = { (void*)&c_XMLWriter::i_enddocument, (void*)&c_XMLWriter::ifa_enddocument, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writecomment = { (void*)&c_XMLWriter::i_writecomment, (void*)&c_XMLWriter::ifa_writecomment, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$fullendelement = { (void*)&c_XMLWriter::i_fullendelement, (void*)&c_XMLWriter::ifa_fullendelement, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writedtd = { (void*)&c_XMLWriter::i_writedtd, (void*)&c_XMLWriter::ifa_writedtd, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writedtdelement = { (void*)&c_XMLWriter::i_writedtdelement, (void*)&c_XMLWriter::ifa_writedtdelement, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$endcomment = { (void*)&c_XMLWriter::i_endcomment, (void*)&c_XMLWriter::ifa_endcomment, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startcdata = { (void*)&c_XMLWriter::i_startcdata, (void*)&c_XMLWriter::ifa_startcdata, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writecdata = { (void*)&c_XMLWriter::i_writecdata, (void*)&c_XMLWriter::ifa_writecdata, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writeattribute = { (void*)&c_XMLWriter::i_writeattribute, (void*)&c_XMLWriter::ifa_writeattribute, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startattribute = { (void*)&c_XMLWriter::i_startattribute, (void*)&c_XMLWriter::ifa_startattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$flush = { (void*)&c_XMLWriter::i_flush, (void*)&c_XMLWriter::ifa_flush, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writeelementns = { (void*)&c_XMLWriter::i_writeelementns, (void*)&c_XMLWriter::ifa_writeelementns, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startdtdelement = { (void*)&c_XMLWriter::i_startdtdelement, (void*)&c_XMLWriter::ifa_startdtdelement, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$endattribute = { (void*)&c_XMLWriter::i_endattribute, (void*)&c_XMLWriter::ifa_endattribute, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$openuri = { (void*)&c_XMLWriter::i_openuri, (void*)&c_XMLWriter::ifa_openuri, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$startdtdattlist = { (void*)&c_XMLWriter::i_startdtdattlist, (void*)&c_XMLWriter::ifa_startdtdattlist, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$writepi = { (void*)&c_XMLWriter::i_writepi, (void*)&c_XMLWriter::ifa_writepi, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$endcdata = { (void*)&c_XMLWriter::i_endcdata, (void*)&c_XMLWriter::ifa_endcdata, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLWriter$$setindent = { (void*)&c_XMLWriter::i_setindent, (void*)&c_XMLWriter::ifa_setindent, 1, 4, 0x0000000000000000LL};
Variant c_XMLWriter::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_XMLWriter::i_openmemory(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_openmemory);
}
Variant c_XMLWriter::i_openuri(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_openuri);
}
Variant c_XMLWriter::i_setindentstring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setindentstring);
}
Variant c_XMLWriter::i_setindent(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setindent);
}
Variant c_XMLWriter::i_startdocument(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startdocument);
}
Variant c_XMLWriter::i_startelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startelement);
}
Variant c_XMLWriter::i_startelementns(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startelementns);
}
Variant c_XMLWriter::i_writeelementns(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writeelementns);
}
Variant c_XMLWriter::i_writeelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writeelement);
}
Variant c_XMLWriter::i_endelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_endelement);
}
Variant c_XMLWriter::i_fullendelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fullendelement);
}
Variant c_XMLWriter::i_startattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startattributens);
}
Variant c_XMLWriter::i_startattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startattribute);
}
Variant c_XMLWriter::i_writeattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writeattributens);
}
Variant c_XMLWriter::i_writeattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writeattribute);
}
Variant c_XMLWriter::i_endattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_endattribute);
}
Variant c_XMLWriter::i_startcdata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startcdata);
}
Variant c_XMLWriter::i_writecdata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writecdata);
}
Variant c_XMLWriter::i_endcdata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_endcdata);
}
Variant c_XMLWriter::i_startcomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startcomment);
}
Variant c_XMLWriter::i_writecomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writecomment);
}
Variant c_XMLWriter::i_endcomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_endcomment);
}
Variant c_XMLWriter::i_enddocument(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_enddocument);
}
Variant c_XMLWriter::i_startpi(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startpi);
}
Variant c_XMLWriter::i_writepi(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writepi);
}
Variant c_XMLWriter::i_endpi(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_endpi);
}
Variant c_XMLWriter::i_text(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_text);
}
Variant c_XMLWriter::i_writeraw(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writeraw);
}
Variant c_XMLWriter::i_startdtd(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startdtd);
}
Variant c_XMLWriter::i_writedtd(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writedtd);
}
Variant c_XMLWriter::i_startdtdelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startdtdelement);
}
Variant c_XMLWriter::i_writedtdelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writedtdelement);
}
Variant c_XMLWriter::i_enddtdelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_enddtdelement);
}
Variant c_XMLWriter::i_startdtdattlist(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startdtdattlist);
}
Variant c_XMLWriter::i_writedtdattlist(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writedtdattlist);
}
Variant c_XMLWriter::i_enddtdattlist(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_enddtdattlist);
}
Variant c_XMLWriter::i_startdtdentity(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_startdtdentity);
}
Variant c_XMLWriter::i_writedtdentity(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_writedtdentity);
}
Variant c_XMLWriter::i_enddtdentity(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_enddtdentity);
}
Variant c_XMLWriter::i_enddtd(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_enddtd);
}
Variant c_XMLWriter::i_flush(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_flush);
}
Variant c_XMLWriter::i_outputmemory(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_outputmemory);
}
Variant NEVER_INLINE c_XMLWriter::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_XMLWriter::ifa_openmemory(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_openmemory, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("openmemory", 0, 1);
  return (self->t_openmemory());
}
Variant NEVER_INLINE c_XMLWriter::ifa_openuri(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_openuri, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("openuri", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_openuri(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_setindentstring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setindentstring, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setindentstring", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setindentstring(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_setindent(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setindent, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setindent", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setindent(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_startdocument(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startdocument, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("startdocument", 3, 1);
  if (count <= 0) return (self->t_startdocument());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_startdocument(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_startdocument(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_startdocument(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_XMLWriter::ifa_startelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("startelement", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_startelement(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_startelementns(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startelementns, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("startelementns", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_startelementns(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writeelementns(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writeelementns, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("writeelementns", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_writeelementns(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_writeelementns(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writeelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writeelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("writeelement", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_writeelement(arg0));
  CVarRef arg1(a1);
  return (self->t_writeelement(arg0, arg1));
}
Variant NEVER_INLINE c_XMLWriter::ifa_endelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_endelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("endelement", 0, 1);
  return (self->t_endelement());
}
Variant NEVER_INLINE c_XMLWriter::ifa_fullendelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fullendelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("fullendelement", 0, 1);
  return (self->t_fullendelement());
}
Variant NEVER_INLINE c_XMLWriter::ifa_startattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startattributens, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("startattributens", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_startattributens(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_XMLWriter::ifa_startattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startattribute, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("startattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_startattribute(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writeattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writeattributens, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 4)) return throw_wrong_arguments("writeattributens", count, 4, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  CVarRef arg3(a3);
  return (self->t_writeattributens(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writeattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writeattribute, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("writeattribute", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_writeattribute(arg0, arg1));
}
Variant NEVER_INLINE c_XMLWriter::ifa_endattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_endattribute, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("endattribute", 0, 1);
  return (self->t_endattribute());
}
Variant NEVER_INLINE c_XMLWriter::ifa_startcdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startcdata, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("startcdata", 0, 1);
  return (self->t_startcdata());
}
Variant NEVER_INLINE c_XMLWriter::ifa_writecdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writecdata, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("writecdata", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_writecdata(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_endcdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_endcdata, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("endcdata", 0, 1);
  return (self->t_endcdata());
}
Variant NEVER_INLINE c_XMLWriter::ifa_startcomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startcomment, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("startcomment", 0, 1);
  return (self->t_startcomment());
}
Variant NEVER_INLINE c_XMLWriter::ifa_writecomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writecomment, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("writecomment", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_writecomment(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_endcomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_endcomment, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("endcomment", 0, 1);
  return (self->t_endcomment());
}
Variant NEVER_INLINE c_XMLWriter::ifa_enddocument(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_enddocument, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("enddocument", 0, 1);
  return (self->t_enddocument());
}
Variant NEVER_INLINE c_XMLWriter::ifa_startpi(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startpi, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("startpi", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_startpi(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writepi(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writepi, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("writepi", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_writepi(arg0, arg1));
}
Variant NEVER_INLINE c_XMLWriter::ifa_endpi(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_endpi, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("endpi", 0, 1);
  return (self->t_endpi());
}
Variant NEVER_INLINE c_XMLWriter::ifa_text(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_text, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("text", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_text(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writeraw(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writeraw, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("writeraw", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_writeraw(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_startdtd(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startdtd, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("startdtd", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_startdtd(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_startdtd(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_startdtd(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writedtd(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writedtd, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("writedtd", count, 1, 4, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_writedtd(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_writedtd(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_writedtd(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_writedtd(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_XMLWriter::ifa_startdtdelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startdtdelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("startdtdelement", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_startdtdelement(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writedtdelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writedtdelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("writedtdelement", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_writedtdelement(arg0, arg1));
}
Variant NEVER_INLINE c_XMLWriter::ifa_enddtdelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_enddtdelement, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("enddtdelement", 0, 1);
  return (self->t_enddtdelement());
}
Variant NEVER_INLINE c_XMLWriter::ifa_startdtdattlist(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startdtdattlist, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("startdtdattlist", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_startdtdattlist(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writedtdattlist(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writedtdattlist, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("writedtdattlist", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_writedtdattlist(arg0, arg1));
}
Variant NEVER_INLINE c_XMLWriter::ifa_enddtdattlist(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_enddtdattlist, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("enddtdattlist", 0, 1);
  return (self->t_enddtdattlist());
}
Variant NEVER_INLINE c_XMLWriter::ifa_startdtdentity(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_startdtdentity, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("startdtdentity", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_startdtdentity(arg0, arg1));
}
Variant NEVER_INLINE c_XMLWriter::ifa_writedtdentity(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writedtdentity, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_wrong_arguments("writedtdentity", count, 2, 6, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_writedtdentity(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_writedtdentity(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_writedtdentity(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  if (count <= 5) return (self->t_writedtdentity(arg0, arg1, arg2, arg3, arg4));
  CVarRef arg5(a5);
  return (self->t_writedtdentity(arg0, arg1, arg2, arg3, arg4, arg5));
}
Variant NEVER_INLINE c_XMLWriter::ifa_enddtdentity(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_enddtdentity, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("enddtdentity", 0, 1);
  return (self->t_enddtdentity());
}
Variant NEVER_INLINE c_XMLWriter::ifa_enddtd(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_enddtd, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("enddtd", 0, 1);
  return (self->t_enddtd());
}
Variant NEVER_INLINE c_XMLWriter::ifa_flush(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_flush, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("flush", 1, 1);
  if (count <= 0) return (self->t_flush());
  CVarRef arg0(a0);
  return (self->t_flush(arg0));
}
Variant NEVER_INLINE c_XMLWriter::ifa_outputmemory(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_outputmemory, coo_XMLWriter);
  }
  c_XMLWriter *self ATTRIBUTE_UNUSED (static_cast<c_XMLWriter*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("outputmemory", 1, 1);
  if (count <= 0) return (self->t_outputmemory());
  CVarRef arg0(a0);
  return (self->t_outputmemory(arg0));
}
extern const MethodCallInfoTable cw_XMLWriter$$call_info_table[] = {
  { 0x6B6B0982, 1, 10, "writeCData", &ci_XMLWriter$$writecdata },
  { 0x696ACF83, 1, 8, "startDTD", &ci_XMLWriter$$startdtd },
  { 0x1BAB3608, 1, 8, "writeDTD", &ci_XMLWriter$$writedtd },
  { 0x43E7EF0E, 1, 10, "openMemory", &ci_XMLWriter$$openmemory },
  { 0x41766610, 1, 8, "endCData", &ci_XMLWriter$$endcdata },
  { 0x6994FF13, 0, 14, "startAttribute", &ci_XMLWriter$$startattribute },
  { 0x181A4093, 1, 12, "writeComment", &ci_XMLWriter$$writecomment },
  { 0x783B919C, 1, 12, "writeElement", &ci_XMLWriter$$writeelement },
  { 0x066BB11D, 1, 4, "text", &ci_XMLWriter$$text },
  { 0x44C01B20, 1, 10, "startCData", &ci_XMLWriter$$startcdata },
  { 0x168D5C21, 1, 5, "endPI", &ci_XMLWriter$$endpi },
  { 0x1890C5A9, 1, 15, "writeDTDAttlist", &ci_XMLWriter$$writedtdattlist },
  { 0x71AD73AB, 1, 15, "setIndentString", &ci_XMLWriter$$setindentstring },
  { 0x6EF2F4AF, 1, 10, "endElement", &ci_XMLWriter$$endelement },
  { 0x1DDE6EB5, 1, 10, "endComment", &ci_XMLWriter$$endcomment },
  { 0x61A59C37, 1, 8, "writeRaw", &ci_XMLWriter$$writeraw },
  { 0x2FFB1E38, 1, 13, "startDocument", &ci_XMLWriter$$startdocument },
  { 0x5C6641BA, 1, 12, "outputMemory", &ci_XMLWriter$$outputmemory },
  { 0x00ADB7BE, 1, 7, "openURI", &ci_XMLWriter$$openuri },
  { 0x57A77144, 1, 6, "endDTD", &ci_XMLWriter$$enddtd },
  { 0x40DAEE46, 1, 14, "writeDTDEntity", &ci_XMLWriter$$writedtdentity },
  { 0x7029CCC7, 1, 13, "endDTDElement", &ci_XMLWriter$$enddtdelement },
  { 0x306CCCCB, 0, 14, "writeAttribute", &ci_XMLWriter$$writeattribute },
  { 0x0FF886CB, 1, 12, "endAttribute", &ci_XMLWriter$$endattribute },
  { 0x5B36D24D, 1, 16, "startAttributens", &ci_XMLWriter$$startattributens },
  { 0x12397452, 1, 15, "writeDTDElement", &ci_XMLWriter$$writedtdelement },
  { 0x6FAC7C54, 1, 16, "writeAttributeNS", &ci_XMLWriter$$writeattributens },
  { 0x46EE8F56, 0, 7, "writePI", &ci_XMLWriter$$writepi },
  { 0x05A382D6, 1, 12, "endDTDEntity", &ci_XMLWriter$$enddtdentity },
  { 0x310BF058, 1, 14, "writeElementNS", &ci_XMLWriter$$writeelementns },
  { 0x2E7C4159, 1, 7, "startPI", &ci_XMLWriter$$startpi },
  { 0x0A2F63DC, 1, 11, "endDocument", &ci_XMLWriter$$enddocument },
  { 0x24EA1ADD, 1, 14, "startDTDEntity", &ci_XMLWriter$$startdtdentity },
  { 0x229C615F, 1, 11, "__construct", &ci_XMLWriter$$__construct },
  { 0x717EFD62, 1, 12, "startElement", &ci_XMLWriter$$startelement },
  { 0x35EE65E5, 1, 9, "setIndent", &ci_XMLWriter$$setindent },
  { 0x5E12E169, 1, 14, "startElementNS", &ci_XMLWriter$$startelementns },
  { 0x542B7D70, 1, 15, "startDTDAttlist", &ci_XMLWriter$$startdtdattlist },
  { 0x552E1771, 1, 13, "endDTDAttlist", &ci_XMLWriter$$enddtdattlist },
  { 0x0EBA2AF8, 1, 15, "startDTDElement", &ci_XMLWriter$$startdtdelement },
  { 0x5B005E7A, 1, 5, "flush", &ci_XMLWriter$$flush },
  { 0x0BFB9FFE, 1, 14, "fullEndElement", &ci_XMLWriter$$fullendelement },
  { 0x7F0466FF, 1, 12, "startComment", &ci_XMLWriter$$startcomment },
};
extern const int cw_XMLWriter$$call_info_index[] = {
  127,
  -1,-1,0,1,-1,-1,-1,-1,
  2,-1,-1,-1,-1,-1,3,-1,
  4,-1,-1,5,-1,-1,-1,-1,
  -1,-1,-1,-1,7,8,-1,-1,
  9,10,-1,-1,-1,-1,-1,-1,
  -1,11,-1,12,-1,-1,-1,13,
  -1,-1,-1,-1,-1,14,-1,15,
  16,-1,17,-1,-1,-1,18,-1,
  -1,-1,-1,-1,19,-1,20,21,
  -1,-1,-1,22,-1,24,-1,-1,
  -1,-1,25,-1,26,-1,27,-1,
  29,30,-1,-1,31,32,-1,33,
  -1,-1,34,-1,-1,35,-1,-1,
  -1,36,-1,-1,-1,-1,-1,-1,
  37,38,-1,-1,-1,-1,-1,-1,
  39,-1,40,-1,-1,-1,41,42,

};
c_XMLWriter *c_XMLWriter::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_XMLWriter$$call_info_table[];
extern const int cw_XMLWriter$$call_info_index[];
extern const InstanceOfInfo cw_XMLWriter$$instanceof_table[];
extern const int cw_XMLWriter$$instanceof_index[];
const ObjectStaticCallbacks cw_XMLWriter = {
  (ObjectData*(*)(ObjectData*))coo_XMLWriter,
  cw_XMLWriter$$call_info_table,cw_XMLWriter$$call_info_index,
  cw_XMLWriter$$instanceof_table,cw_XMLWriter$$instanceof_index,
  &c_XMLWriter::s_class_name,
  0,&ci_XMLWriter$$__construct,0,0,0x0,
  &c_XMLWriter::s_cls
};
ObjectData *coo_Continuation() {
  return NEWOBJ(c_Continuation)();
}
IMPLEMENT_CLASS(Continuation)
extern const InstanceOfInfo cw_Continuation$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x7790E9E2,1,"Continuation",&cw_Continuation},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_Continuation$$instanceof_index[] = {
  7,
  -1,0,1,-1,-1,-1,2,-1,

};
extern const CallInfo ci_Continuation$$update = { (void*)&c_Continuation::i_update, (void*)&c_Continuation::ifa_update, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$receive = { (void*)&c_Continuation::i_receive, (void*)&c_Continuation::ifa_receive, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$__construct = { (void*)&c_Continuation::i___construct, (void*)&c_Continuation::ifa___construct, 6, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$current = { (void*)&c_Continuation::i_current, (void*)&c_Continuation::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$__destruct = { (void*)&c_Continuation::i___destruct, (void*)&c_Continuation::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$send = { (void*)&c_Continuation::i_send, (void*)&c_Continuation::ifa_send, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$__clone = { (void*)&c_Continuation::i___clone, (void*)&c_Continuation::ifa___clone, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$next = { (void*)&c_Continuation::i_next, (void*)&c_Continuation::ifa_next, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$num_args = { (void*)&c_Continuation::i_num_args, (void*)&c_Continuation::ifa_num_args, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$getorigfuncname = { (void*)&c_Continuation::i_getorigfuncname, (void*)&c_Continuation::ifa_getorigfuncname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$valid = { (void*)&c_Continuation::i_valid, (void*)&c_Continuation::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$raise = { (void*)&c_Continuation::i_raise, (void*)&c_Continuation::ifa_raise, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$get_arg = { (void*)&c_Continuation::i_get_arg, (void*)&c_Continuation::ifa_get_arg, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$rewind = { (void*)&c_Continuation::i_rewind, (void*)&c_Continuation::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$raised = { (void*)&c_Continuation::i_raised, (void*)&c_Continuation::ifa_raised, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$getlabel = { (void*)&c_Continuation::i_getlabel, (void*)&c_Continuation::ifa_getlabel, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$key = { (void*)&c_Continuation::i_key, (void*)&c_Continuation::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$done = { (void*)&c_Continuation::i_done, (void*)&c_Continuation::ifa_done, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Continuation$$get_args = { (void*)&c_Continuation::i_get_args, (void*)&c_Continuation::ifa_get_args, 0, 4, 0x0000000000000000LL};
Variant c_Continuation::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Continuation::i_update(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_update);
}
Variant c_Continuation::i_done(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_done);
}
Variant c_Continuation::i_getlabel(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getlabel);
}
Variant c_Continuation::i_num_args(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_num_args);
}
Variant c_Continuation::i_get_args(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get_args);
}
Variant c_Continuation::i_get_arg(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get_arg);
}
Variant c_Continuation::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_Continuation::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_Continuation::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_Continuation::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_Continuation::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_Continuation::i_send(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_send);
}
Variant c_Continuation::i_raise(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_raise);
}
Variant c_Continuation::i_raised(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_raised);
}
Variant c_Continuation::i_receive(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_receive);
}
Variant c_Continuation::i_getorigfuncname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getorigfuncname);
}
Variant c_Continuation::i___clone(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___clone);
}
Variant c_Continuation::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_Continuation::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count < 4)) return throw_wrong_arguments("__construct", count, 4, 6, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___construct(arg0, arg1, arg2, arg3), null);
  CVarRef arg4(a4);
  if (count <= 5) return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
  CVarRef arg5(a5);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
}
Variant NEVER_INLINE c_Continuation::ifa_update(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_update, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("update", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_update(arg0, arg1), null);
}
Variant NEVER_INLINE c_Continuation::ifa_done(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_done, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("done", 0, 1);
  return (self->t_done(), null);
}
Variant NEVER_INLINE c_Continuation::ifa_getlabel(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getlabel, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getlabel", 0, 1);
  return (self->t_getlabel());
}
Variant NEVER_INLINE c_Continuation::ifa_num_args(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_num_args, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("num_args", 0, 1);
  return (self->t_num_args());
}
Variant NEVER_INLINE c_Continuation::ifa_get_args(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get_args, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("get_args", 0, 1);
  return (self->t_get_args());
}
Variant NEVER_INLINE c_Continuation::ifa_get_arg(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get_arg, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("get_arg", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_get_arg(arg0));
}
Variant NEVER_INLINE c_Continuation::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_Continuation::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_Continuation::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_Continuation::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant NEVER_INLINE c_Continuation::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_Continuation::ifa_send(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_send, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("send", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_send(arg0), null);
}
Variant NEVER_INLINE c_Continuation::ifa_raise(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_raise, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("raise", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_raise(arg0), null);
}
Variant NEVER_INLINE c_Continuation::ifa_raised(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_raised, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("raised", 0, 1);
  return (self->t_raised(), null);
}
Variant NEVER_INLINE c_Continuation::ifa_receive(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_receive, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("receive", 0, 1);
  return (self->t_receive());
}
Variant NEVER_INLINE c_Continuation::ifa_getorigfuncname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getorigfuncname, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getorigfuncname", 0, 1);
  return (self->t_getorigfuncname());
}
Variant NEVER_INLINE c_Continuation::ifa___clone(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___clone, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__clone", 0, 1);
  return (self->t___clone());
}
Variant NEVER_INLINE c_Continuation::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_Continuation);
  }
  c_Continuation *self ATTRIBUTE_UNUSED (static_cast<c_Continuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_Continuation$$call_info_table[] = {
  { 0x54808C44, 1, 5, "valid", &ci_Continuation$$valid },
  { 0x002E3888, 1, 4, "send", &ci_Continuation$$send },
  { 0x09D255CA, 1, 6, "raised", &ci_Continuation$$raised },
  { 0x7102D150, 1, 7, "receive", &ci_Continuation$$receive },
  { 0x024E8C51, 1, 3, "key", &ci_Continuation$$key },
  { 0x0004BE9B, 1, 7, "__clone", &ci_Continuation$$__clone },
  { 0x046B21DC, 1, 7, "current", &ci_Continuation$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_Continuation$$__construct },
  { 0x28D472A0, 1, 6, "update", &ci_Continuation$$update },
  { 0x56EEF867, 1, 5, "raise", &ci_Continuation$$raise },
  { 0x36379169, 1, 4, "done", &ci_Continuation$$done },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_Continuation$$rewind },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_Continuation$$__destruct },
  { 0x4600B778, 0, 8, "getLabel", &ci_Continuation$$getlabel },
  { 0x3B8102B8, 1, 4, "next", &ci_Continuation$$next },
  { 0x1F9DC839, 1, 8, "get_args", &ci_Continuation$$get_args },
  { 0x716D82BA, 1, 15, "getOrigFuncName", &ci_Continuation$$getorigfuncname },
  { 0x2F84FCFD, 0, 8, "num_args", &ci_Continuation$$num_args },
  { 0x56990E3D, 1, 7, "get_arg", &ci_Continuation$$get_arg },
};
extern const int cw_Continuation$$call_info_index[] = {
  63,
  -1,-1,-1,-1,0,-1,-1,-1,
  1,-1,2,-1,-1,-1,-1,-1,
  3,4,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,5,6,-1,-1,7,
  8,-1,-1,-1,-1,-1,-1,9,
  -1,10,11,-1,-1,-1,-1,-1,
  -1,-1,-1,12,-1,-1,-1,-1,
  13,15,16,-1,-1,17,-1,-1,

};
c_Continuation *c_Continuation::create(int64 a0, int64 a1, bool a2, String a3, Variant a4, Array a5) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2, a3, a4, a5);
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_Continuation$$call_info_table[];
extern const int cw_Continuation$$call_info_index[];
extern const InstanceOfInfo cw_Continuation$$instanceof_table[];
extern const int cw_Continuation$$instanceof_index[];
const ObjectStaticCallbacks cw_Continuation = {
  (ObjectData*(*)(ObjectData*))coo_Continuation,
  cw_Continuation$$call_info_table,cw_Continuation$$call_info_index,
  cw_Continuation$$instanceof_table,cw_Continuation$$instanceof_index,
  &c_Continuation::s_class_name,
  0,&ci_Continuation$$__construct,0,0,0x0,
  &c_Continuation::s_cls
};
ObjectData *coo_SimpleXMLElement() {
  return NEWOBJ(c_SimpleXMLElement)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SimpleXMLElement)
extern const InstanceOfInfo cw_SimpleXMLElement$$instanceof_table[] = {
  {0x45E6F0A1,0,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x5EE263D1,1,"Countable",(const ObjectStaticCallbacks*)2},
  {0x3B7CC713,1,"SimpleXMLElement",&cw_SimpleXMLElement},
  {0x40363017,1,"IteratorAggregate",(const ObjectStaticCallbacks*)2},
  {0x3FCD6F0B,1,"ArrayAccess",(const ObjectStaticCallbacks*)2},
};
const int cw_SimpleXMLElement$$instanceof_index[] = {
  15,
  -1,0,-1,2,-1,-1,-1,3,
  -1,-1,-1,4,-1,-1,-1,-1,

};
extern const CallInfo ci_SimpleXMLElement$$offsetunset = { (void*)&c_SimpleXMLElement::i_offsetunset, (void*)&c_SimpleXMLElement::ifa_offsetunset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$offsetexists = { (void*)&c_SimpleXMLElement::i_offsetexists, (void*)&c_SimpleXMLElement::ifa_offsetexists, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$getname = { (void*)&c_SimpleXMLElement::i_getname, (void*)&c_SimpleXMLElement::ifa_getname, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$getdocnamespaces = { (void*)&c_SimpleXMLElement::i_getdocnamespaces, (void*)&c_SimpleXMLElement::ifa_getdocnamespaces, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$__set = { (void*)&c_SimpleXMLElement::i___set, (void*)&c_SimpleXMLElement::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$__construct = { (void*)&c_SimpleXMLElement::i___construct, (void*)&c_SimpleXMLElement::ifa___construct, 5, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$__tostring = { (void*)&c_SimpleXMLElement::i___tostring, (void*)&c_SimpleXMLElement::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$asxml = { (void*)&c_SimpleXMLElement::i_asxml, (void*)&c_SimpleXMLElement::ifa_asxml, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$addchild = { (void*)&c_SimpleXMLElement::i_addchild, (void*)&c_SimpleXMLElement::ifa_addchild, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$attributes = { (void*)&c_SimpleXMLElement::i_attributes, (void*)&c_SimpleXMLElement::ifa_attributes, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$count = { (void*)&c_SimpleXMLElement::i_count, (void*)&c_SimpleXMLElement::ifa_count, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$getiterator = { (void*)&c_SimpleXMLElement::i_getiterator, (void*)&c_SimpleXMLElement::ifa_getiterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$__isset = { (void*)&c_SimpleXMLElement::i___isset, (void*)&c_SimpleXMLElement::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$registerxpathnamespace = { (void*)&c_SimpleXMLElement::i_registerxpathnamespace, (void*)&c_SimpleXMLElement::ifa_registerxpathnamespace, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$__get = { (void*)&c_SimpleXMLElement::i___get, (void*)&c_SimpleXMLElement::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$offsetget = { (void*)&c_SimpleXMLElement::i_offsetget, (void*)&c_SimpleXMLElement::ifa_offsetget, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$addattribute = { (void*)&c_SimpleXMLElement::i_addattribute, (void*)&c_SimpleXMLElement::ifa_addattribute, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$children = { (void*)&c_SimpleXMLElement::i_children, (void*)&c_SimpleXMLElement::ifa_children, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$getnamespaces = { (void*)&c_SimpleXMLElement::i_getnamespaces, (void*)&c_SimpleXMLElement::ifa_getnamespaces, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$__unset = { (void*)&c_SimpleXMLElement::i___unset, (void*)&c_SimpleXMLElement::ifa___unset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$offsetset = { (void*)&c_SimpleXMLElement::i_offsetset, (void*)&c_SimpleXMLElement::ifa_offsetset, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SimpleXMLElement$$xpath = { (void*)&c_SimpleXMLElement::i_xpath, (void*)&c_SimpleXMLElement::ifa_xpath, 1, 4, 0x0000000000000000LL};
Variant c_SimpleXMLElement::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SimpleXMLElement::i_offsetexists(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetexists);
}
Variant c_SimpleXMLElement::i_offsetget(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetget);
}
Variant c_SimpleXMLElement::i_offsetset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetset);
}
Variant c_SimpleXMLElement::i_offsetunset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_offsetunset);
}
Variant c_SimpleXMLElement::i_getiterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getiterator);
}
Variant c_SimpleXMLElement::i_count(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_count);
}
Variant c_SimpleXMLElement::i_xpath(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_xpath);
}
Variant c_SimpleXMLElement::i_registerxpathnamespace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_registerxpathnamespace);
}
Variant c_SimpleXMLElement::i_asxml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_asxml);
}
Variant c_SimpleXMLElement::i_getnamespaces(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getnamespaces);
}
Variant c_SimpleXMLElement::i_getdocnamespaces(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdocnamespaces);
}
Variant c_SimpleXMLElement::i_children(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_children);
}
Variant c_SimpleXMLElement::i_getname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getname);
}
Variant c_SimpleXMLElement::i_attributes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_attributes);
}
Variant c_SimpleXMLElement::i_addchild(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addchild);
}
Variant c_SimpleXMLElement::i_addattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addattribute);
}
Variant c_SimpleXMLElement::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_SimpleXMLElement::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_SimpleXMLElement::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_SimpleXMLElement::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant c_SimpleXMLElement::i___unset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___unset);
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 5)) return throw_wrong_arguments("__construct", count, 1, 5, 1);
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
Variant NEVER_INLINE c_SimpleXMLElement::ifa_offsetexists(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetexists, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("offsetexists", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_offsetexists(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_offsetget(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetget, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("offsetget", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_offsetget(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_offsetset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetset, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("offsetset", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_offsetset(arg0, arg1), null);
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_offsetunset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetunset, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("offsetunset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_offsetunset(arg0), null);
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_getiterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getiterator, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getiterator", 0, 1);
  return (self->t_getiterator());
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("count", 0, 1);
  return (self->t_count());
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_xpath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_xpath, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("xpath", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_xpath(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_registerxpathnamespace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerxpathnamespace, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("registerxpathnamespace", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_registerxpathnamespace(arg0, arg1));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_asxml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_asxml, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("asxml", 1, 1);
  if (count <= 0) return (self->t_asxml());
  CVarRef arg0(a0);
  return (self->t_asxml(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_getnamespaces(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getnamespaces, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("getnamespaces", 1, 1);
  if (count <= 0) return (self->t_getnamespaces());
  CVarRef arg0(a0);
  return (self->t_getnamespaces(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_getdocnamespaces(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdocnamespaces, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("getdocnamespaces", 1, 1);
  if (count <= 0) return (self->t_getdocnamespaces());
  CVarRef arg0(a0);
  return (self->t_getdocnamespaces(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_children(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_children, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("children", 2, 1);
  if (count <= 0) return (self->t_children());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_children(arg0));
  CVarRef arg1(a1);
  return (self->t_children(arg0, arg1));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_getname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getname, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getname", 0, 1);
  return (self->t_getname());
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_attributes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_attributes, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("attributes", 2, 1);
  if (count <= 0) return (self->t_attributes());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_attributes(arg0));
  CVarRef arg1(a1);
  return (self->t_attributes(arg0, arg1));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_addchild(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addchild, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("addchild", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_addchild(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_addchild(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_addchild(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa_addattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addattribute, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("addattribute", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_addattribute(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_addattribute(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t_addattribute(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__tostring", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
Variant NEVER_INLINE c_SimpleXMLElement::ifa___unset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___unset, coo_SimpleXMLElement);
  }
  c_SimpleXMLElement *self ATTRIBUTE_UNUSED (static_cast<c_SimpleXMLElement*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__unset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___unset(arg0));
}
extern const MethodCallInfoTable cw_SimpleXMLElement$$call_info_table[] = {
  { 0x742FC700, 1, 12, "offsetExists", &ci_SimpleXMLElement$$offsetexists },
  { 0x32A12503, 1, 11, "getIterator", &ci_SimpleXMLElement$$getiterator },
  { 0x74FA338F, 1, 5, "__get", &ci_SimpleXMLElement$$__get },
  { 0x65104D10, 1, 5, "count", &ci_SimpleXMLElement$$count },
  { 0x14B34A13, 1, 10, "__toString", &ci_SimpleXMLElement$$__tostring },
  { 0x066FC794, 1, 8, "addChild", &ci_SimpleXMLElement$$addchild },
  { 0x03340395, 1, 5, "__set", &ci_SimpleXMLElement$$__set },
  { 0x19BEEAD6, 1, 12, "addAttribute", &ci_SimpleXMLElement$$addattribute },
  { 0x74404498, 1, 9, "offsetGet", &ci_SimpleXMLElement$$offsetget },
  { 0x196A9A1B, 0, 5, "xpath", &ci_SimpleXMLElement$$xpath },
  { 0x49A2079B, 1, 7, "__unset", &ci_SimpleXMLElement$$__unset },
  { 0x1A33F21D, 1, 10, "attributes", &ci_SimpleXMLElement$$attributes },
  { 0x229C615F, 1, 11, "__construct", &ci_SimpleXMLElement$$__construct },
  { 0x4C198965, 1, 7, "getName", &ci_SimpleXMLElement$$getname },
  { 0x5FD864A6, 0, 5, "asXML", &ci_SimpleXMLElement$$asxml },
  { 0x63B40FA6, 1, 13, "getNamespaces", &ci_SimpleXMLElement$$getnamespaces },
  { 0x1E2E82AD, 1, 8, "children", &ci_SimpleXMLElement$$children },
  { 0x2E2178EE, 1, 7, "__isset", &ci_SimpleXMLElement$$__isset },
  { 0x0B2F34F1, 1, 16, "getDocNamespaces", &ci_SimpleXMLElement$$getdocnamespaces },
  { 0x248AF738, 1, 9, "offsetSet", &ci_SimpleXMLElement$$offsetset },
  { 0x66369ABA, 1, 11, "offsetUnset", &ci_SimpleXMLElement$$offsetunset },
  { 0x7854F83D, 1, 22, "registerXPathNamespace", &ci_SimpleXMLElement$$registerxpathnamespace },
};
extern const int cw_SimpleXMLElement$$call_info_index[] = {
  63,
  0,-1,-1,1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,2,
  3,-1,-1,4,5,6,7,-1,
  8,-1,-1,9,-1,11,-1,12,
  -1,-1,-1,-1,-1,13,14,-1,
  -1,-1,-1,-1,-1,16,17,-1,
  -1,18,-1,-1,-1,-1,-1,-1,
  19,-1,20,-1,-1,21,-1,-1,

};
c_SimpleXMLElement *c_SimpleXMLElement::create(String a0, int64 a1, bool a2, String a3, bool a4) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2, a3, a4);
  return this;
}
extern const MethodCallInfoTable cw_SimpleXMLElement$$call_info_table[];
extern const int cw_SimpleXMLElement$$call_info_index[];
extern const InstanceOfInfo cw_SimpleXMLElement$$instanceof_table[];
extern const int cw_SimpleXMLElement$$instanceof_index[];
const ObjectStaticCallbacks cw_SimpleXMLElement = {
  (ObjectData*(*)(ObjectData*))coo_SimpleXMLElement,
  cw_SimpleXMLElement$$call_info_table,cw_SimpleXMLElement$$call_info_index,
  cw_SimpleXMLElement$$instanceof_table,cw_SimpleXMLElement$$instanceof_index,
  &c_SimpleXMLElement::s_class_name,
  0,&ci_SimpleXMLElement$$__construct,0,0,0x0,
  &c_SimpleXMLElement::s_cls
};
ObjectData *coo_DOMNode() {
  return NEWOBJ(c_DOMNode)();
}
IMPLEMENT_CLASS(DOMNode)
extern const InstanceOfInfo cw_DOMNode$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
};
const int cw_DOMNode$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_DOMNode$$haschildnodes = { (void*)&c_DOMNode::i_haschildnodes, (void*)&c_DOMNode::ifa_haschildnodes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$__set = { (void*)&c_DOMNode::i___set, (void*)&c_DOMNode::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$c14nfile = { (void*)&c_DOMNode::i_c14nfile, (void*)&c_DOMNode::ifa_c14nfile, 5, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$insertbefore = { (void*)&c_DOMNode::i_insertbefore, (void*)&c_DOMNode::ifa_insertbefore, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$removechild = { (void*)&c_DOMNode::i_removechild, (void*)&c_DOMNode::ifa_removechild, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$__construct = { (void*)&c_DOMNode::i___construct, (void*)&c_DOMNode::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$issupported = { (void*)&c_DOMNode::i_issupported, (void*)&c_DOMNode::ifa_issupported, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$hasattributes = { (void*)&c_DOMNode::i_hasattributes, (void*)&c_DOMNode::ifa_hasattributes, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$lookupprefix = { (void*)&c_DOMNode::i_lookupprefix, (void*)&c_DOMNode::ifa_lookupprefix, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$normalize = { (void*)&c_DOMNode::i_normalize, (void*)&c_DOMNode::ifa_normalize, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$getlineno = { (void*)&c_DOMNode::i_getlineno, (void*)&c_DOMNode::ifa_getlineno, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$__isset = { (void*)&c_DOMNode::i___isset, (void*)&c_DOMNode::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$__get = { (void*)&c_DOMNode::i___get, (void*)&c_DOMNode::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$isdefaultnamespace = { (void*)&c_DOMNode::i_isdefaultnamespace, (void*)&c_DOMNode::ifa_isdefaultnamespace, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$c14n = { (void*)&c_DOMNode::i_c14n, (void*)&c_DOMNode::ifa_c14n, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$replacechild = { (void*)&c_DOMNode::i_replacechild, (void*)&c_DOMNode::ifa_replacechild, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$getnodepath = { (void*)&c_DOMNode::i_getnodepath, (void*)&c_DOMNode::ifa_getnodepath, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$appendchild = { (void*)&c_DOMNode::i_appendchild, (void*)&c_DOMNode::ifa_appendchild, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$lookupnamespaceuri = { (void*)&c_DOMNode::i_lookupnamespaceuri, (void*)&c_DOMNode::ifa_lookupnamespaceuri, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$issamenode = { (void*)&c_DOMNode::i_issamenode, (void*)&c_DOMNode::ifa_issamenode, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNode$$clonenode = { (void*)&c_DOMNode::i_clonenode, (void*)&c_DOMNode::ifa_clonenode, 1, 4, 0x0000000000000000LL};
Variant c_DOMNode::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMNode::i_appendchild(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_appendchild);
}
Variant c_DOMNode::i_clonenode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_clonenode);
}
Variant c_DOMNode::i_getlineno(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getlineno);
}
Variant c_DOMNode::i_hasattributes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_hasattributes);
}
Variant c_DOMNode::i_haschildnodes(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_haschildnodes);
}
Variant c_DOMNode::i_insertbefore(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_insertbefore);
}
Variant c_DOMNode::i_isdefaultnamespace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdefaultnamespace);
}
Variant c_DOMNode::i_issamenode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_issamenode);
}
Variant c_DOMNode::i_issupported(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_issupported);
}
Variant c_DOMNode::i_lookupnamespaceuri(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lookupnamespaceuri);
}
Variant c_DOMNode::i_lookupprefix(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lookupprefix);
}
Variant c_DOMNode::i_normalize(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_normalize);
}
Variant c_DOMNode::i_removechild(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_removechild);
}
Variant c_DOMNode::i_replacechild(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_replacechild);
}
Variant c_DOMNode::i_c14n(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_c14n);
}
Variant c_DOMNode::i_c14nfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_c14nfile);
}
Variant c_DOMNode::i_getnodepath(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getnodepath);
}
Variant c_DOMNode::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMNode::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMNode::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMNode::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMNode::ifa_appendchild(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_appendchild, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("appendchild", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_appendchild(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_clonenode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clonenode, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("clonenode", 1, 1);
  if (count <= 0) return (self->t_clonenode());
  CVarRef arg0(a0);
  return (self->t_clonenode(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_getlineno(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getlineno, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getlineno", 0, 1);
  return (self->t_getlineno());
}
Variant NEVER_INLINE c_DOMNode::ifa_hasattributes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_hasattributes, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("hasattributes", 0, 1);
  return (self->t_hasattributes());
}
Variant NEVER_INLINE c_DOMNode::ifa_haschildnodes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_haschildnodes, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("haschildnodes", 0, 1);
  return (self->t_haschildnodes());
}
Variant NEVER_INLINE c_DOMNode::ifa_insertbefore(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_insertbefore, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("insertbefore", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_insertbefore(arg0));
  CVarRef arg1(a1);
  return (self->t_insertbefore(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNode::ifa_isdefaultnamespace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdefaultnamespace, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("isdefaultnamespace", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_isdefaultnamespace(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_issamenode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_issamenode, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("issamenode", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_issamenode(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_issupported(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_issupported, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("issupported", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_issupported(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNode::ifa_lookupnamespaceuri(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lookupnamespaceuri, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("lookupnamespaceuri", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_lookupnamespaceuri(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_lookupprefix(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lookupprefix, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("lookupprefix", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_lookupprefix(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_normalize(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_normalize, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("normalize", 0, 1);
  return (self->t_normalize(), null);
}
Variant NEVER_INLINE c_DOMNode::ifa_removechild(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_removechild, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("removechild", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_removechild(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa_replacechild(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_replacechild, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("replacechild", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_replacechild(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNode::ifa_c14n(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_c14n, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 4)) return throw_toomany_arguments("c14n", 4, 1);
  if (count <= 0) return (self->t_c14n());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_c14n(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_c14n(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_c14n(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_c14n(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_DOMNode::ifa_c14nfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_c14nfile, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 5)) return throw_wrong_arguments("c14nfile", count, 1, 5, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_c14nfile(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_c14nfile(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_c14nfile(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_c14nfile(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  return (self->t_c14nfile(arg0, arg1, arg2, arg3, arg4));
}
Variant NEVER_INLINE c_DOMNode::ifa_getnodepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getnodepath, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getnodepath", 0, 1);
  return (self->t_getnodepath());
}
Variant NEVER_INLINE c_DOMNode::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMNode::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNode::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMNode);
  }
  c_DOMNode *self ATTRIBUTE_UNUSED (static_cast<c_DOMNode*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMNode$$call_info_table[] = {
  { 0x716AE343, 1, 11, "getNodePath", &ci_DOMNode$$getnodepath },
  { 0x4582ED8A, 1, 4, "c14n", &ci_DOMNode$$c14n },
  { 0x2356D08E, 1, 12, "replaceChild", &ci_DOMNode$$replacechild },
  { 0x023E75CF, 0, 11, "appendChild", &ci_DOMNode$$appendchild },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMNode$$__get },
  { 0x204E3092, 1, 9, "cloneNode", &ci_DOMNode$$clonenode },
  { 0x03340395, 1, 5, "__set", &ci_DOMNode$$__set },
  { 0x2F9E5D18, 1, 9, "getLineNo", &ci_DOMNode$$getlineno },
  { 0x42CB6C5A, 1, 9, "normalize", &ci_DOMNode$$normalize },
  { 0x283B8F5D, 0, 18, "lookupNamespaceUri", &ci_DOMNode$$lookupnamespaceuri },
  { 0x365364DD, 1, 11, "removeChild", &ci_DOMNode$$removechild },
  { 0x229C615F, 1, 11, "__construct", &ci_DOMNode$$__construct },
  { 0x16CB7D61, 1, 12, "lookupPrefix", &ci_DOMNode$$lookupprefix },
  { 0x1378F664, 1, 18, "isDefaultNamespace", &ci_DOMNode$$isdefaultnamespace },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMNode$$__isset },
  { 0x4A2EC6EF, 1, 10, "isSameNode", &ci_DOMNode$$issamenode },
  { 0x76F5AEB1, 1, 13, "hasAttributes", &ci_DOMNode$$hasattributes },
  { 0x1185C433, 1, 12, "insertBefore", &ci_DOMNode$$insertbefore },
  { 0x4F365A75, 1, 8, "c14nfile", &ci_DOMNode$$c14nfile },
  { 0x250595FA, 0, 13, "hasChildNodes", &ci_DOMNode$$haschildnodes },
  { 0x14B7677A, 1, 11, "isSupported", &ci_DOMNode$$issupported },
};
extern const int cw_DOMNode$$call_info_index[] = {
  63,
  -1,-1,-1,0,-1,-1,-1,-1,
  -1,-1,1,-1,-1,-1,2,3,
  -1,-1,5,-1,-1,6,-1,-1,
  7,-1,8,-1,-1,9,-1,11,
  -1,12,-1,-1,13,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,14,15,
  -1,16,-1,17,-1,18,-1,-1,
  -1,-1,19,-1,-1,-1,-1,-1,

};
c_DOMNode *c_DOMNode::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMNode$$call_info_table[];
extern const int cw_DOMNode$$call_info_index[];
extern const InstanceOfInfo cw_DOMNode$$instanceof_table[];
extern const int cw_DOMNode$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMNode = {
  (ObjectData*(*)(ObjectData*))coo_DOMNode,
  cw_DOMNode$$call_info_table,cw_DOMNode$$call_info_index,
  cw_DOMNode$$instanceof_table,cw_DOMNode$$instanceof_index,
  &c_DOMNode::s_class_name,
  0,&ci_DOMNode$$__construct,0,0,0x0,
  &c_DOMNode::s_cls
};
ObjectData *coo_PDO() {
  return NEWOBJ(c_PDO)();
}
IMPLEMENT_CLASS(PDO)
extern const InstanceOfInfo cw_PDO$$instanceof_table[] = {
  {0x67C804AD,1,"PDO",&cw_PDO},
};
const int cw_PDO$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_PDO$$getattribute = { (void*)&c_PDO::i_getattribute, (void*)&c_PDO::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$__construct = { (void*)&c_PDO::i___construct, (void*)&c_PDO::ifa___construct, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$prepare = { (void*)&c_PDO::i_prepare, (void*)&c_PDO::ifa_prepare, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$errorinfo = { (void*)&c_PDO::i_errorinfo, (void*)&c_PDO::ifa_errorinfo, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$__sleep = { (void*)&c_PDO::i___sleep, (void*)&c_PDO::ifa___sleep, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$getavailabledrivers = { (void*)&c_PDO::i_getavailabledrivers, (void*)&c_PDO::ifa_getavailabledrivers, 0, 12, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$__wakeup = { (void*)&c_PDO::i___wakeup, (void*)&c_PDO::ifa___wakeup, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$setattribute = { (void*)&c_PDO::i_setattribute, (void*)&c_PDO::ifa_setattribute, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$query = { (void*)&c_PDO::i_query, (void*)&c_PDO::ifa_query, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$begintransaction = { (void*)&c_PDO::i_begintransaction, (void*)&c_PDO::ifa_begintransaction, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$commit = { (void*)&c_PDO::i_commit, (void*)&c_PDO::ifa_commit, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$exec = { (void*)&c_PDO::i_exec, (void*)&c_PDO::ifa_exec, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$errorcode = { (void*)&c_PDO::i_errorcode, (void*)&c_PDO::ifa_errorcode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$rollback = { (void*)&c_PDO::i_rollback, (void*)&c_PDO::ifa_rollback, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$quote = { (void*)&c_PDO::i_quote, (void*)&c_PDO::ifa_quote, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_PDO$$lastinsertid = { (void*)&c_PDO::i_lastinsertid, (void*)&c_PDO::ifa_lastinsertid, 1, 4, 0x0000000000000000LL};
Variant c_PDO::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_PDO::i_prepare(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_prepare);
}
Variant c_PDO::i_begintransaction(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_begintransaction);
}
Variant c_PDO::i_commit(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_commit);
}
Variant c_PDO::i_rollback(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rollback);
}
Variant c_PDO::i_setattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattribute);
}
Variant c_PDO::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_PDO::i_exec(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_exec);
}
Variant c_PDO::i_lastinsertid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lastinsertid);
}
Variant c_PDO::i_errorcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_errorcode);
}
Variant c_PDO::i_errorinfo(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_errorinfo);
}
Variant c_PDO::i_query(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_query);
}
Variant c_PDO::i_quote(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_quote);
}
Variant c_PDO::i___wakeup(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___wakeup);
}
Variant c_PDO::i___sleep(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___sleep);
}
Variant c_PDO::i_getavailabledrivers(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getavailabledrivers);
}
Variant NEVER_INLINE c_PDO::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("__construct", count, 1, 4, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  return (self->t___construct(arg0, arg1, arg2, arg3), null);
}
Variant NEVER_INLINE c_PDO::ifa_prepare(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_prepare, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("prepare", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_prepare(arg0));
  CVarRef arg1(a1);
  return (self->t_prepare(arg0, arg1));
}
Variant NEVER_INLINE c_PDO::ifa_begintransaction(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_begintransaction, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("begintransaction", 0, 1);
  return (self->t_begintransaction());
}
Variant NEVER_INLINE c_PDO::ifa_commit(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_commit, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("commit", 0, 1);
  return (self->t_commit());
}
Variant NEVER_INLINE c_PDO::ifa_rollback(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rollback, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rollback", 0, 1);
  return (self->t_rollback());
}
Variant NEVER_INLINE c_PDO::ifa_setattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattribute, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setattribute", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setattribute(arg0, arg1));
}
Variant NEVER_INLINE c_PDO::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_PDO::ifa_exec(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_exec, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("exec", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_exec(arg0));
}
Variant NEVER_INLINE c_PDO::ifa_lastinsertid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lastinsertid, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("lastinsertid", 1, 1);
  if (count <= 0) return (self->t_lastinsertid());
  CVarRef arg0(a0);
  return (self->t_lastinsertid(arg0));
}
Variant NEVER_INLINE c_PDO::ifa_errorcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_errorcode, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("errorcode", 0, 1);
  return (self->t_errorcode());
}
Variant NEVER_INLINE c_PDO::ifa_errorinfo(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_errorinfo, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("errorinfo", 0, 1);
  return (self->t_errorinfo());
}
Variant NEVER_INLINE c_PDO::ifa_query(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_query, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("query", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_query(arg0));
}
Variant NEVER_INLINE c_PDO::ifa_quote(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_quote, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("quote", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_quote(arg0));
  CVarRef arg1(a1);
  return (self->t_quote(arg0, arg1));
}
Variant NEVER_INLINE c_PDO::ifa___wakeup(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___wakeup, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__wakeup", 0, 1);
  return (self->t___wakeup());
}
Variant NEVER_INLINE c_PDO::ifa___sleep(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___sleep, coo_PDO);
  }
  c_PDO *self ATTRIBUTE_UNUSED (static_cast<c_PDO*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__sleep", 0, 1);
  return (self->t___sleep());
}
Variant NEVER_INLINE c_PDO::ifa_getavailabledrivers(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getavailabledrivers", 0, 1);
  return (c_PDO::t_getavailabledrivers());
}
extern const MethodCallInfoTable cw_PDO$$call_info_table[] = {
  { 0x65E3F324, 1, 6, "commit", &ci_PDO$$commit },
  { 0x2372F2C7, 1, 9, "errorcode", &ci_PDO$$errorcode },
  { 0x6612FC28, 1, 12, "getattribute", &ci_PDO$$getattribute },
  { 0x44F4AB8A, 1, 12, "setattribute", &ci_PDO$$setattribute },
  { 0x3087208C, 1, 4, "exec", &ci_PDO$$exec },
  { 0x5ADBC02D, 1, 7, "__sleep", &ci_PDO$$__sleep },
  { 0x049464EE, 0, 5, "quote", &ci_PDO$$quote },
  { 0x2C38340E, 1, 19, "getavailabledrivers", &ci_PDO$$getavailabledrivers },
  { 0x4BA591AF, 1, 7, "prepare", &ci_PDO$$prepare },
  { 0x3A2D7C12, 1, 12, "lastinsertid", &ci_PDO$$lastinsertid },
  { 0x6D79EC36, 1, 8, "rollback", &ci_PDO$$rollback },
  { 0x414DA377, 1, 5, "query", &ci_PDO$$query },
  { 0x5C33E23B, 1, 16, "begintransaction", &ci_PDO$$begintransaction },
  { 0x2A085CDC, 1, 8, "__wakeup", &ci_PDO$$__wakeup },
  { 0x7F04605E, 1, 9, "errorinfo", &ci_PDO$$errorinfo },
  { 0x229C615F, 1, 11, "__construct", &ci_PDO$$__construct },
};
extern const int cw_PDO$$call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,1,
  2,-1,3,-1,4,5,6,8,
  -1,-1,9,-1,-1,-1,10,11,
  -1,-1,-1,12,13,-1,14,15,

};
c_PDO *c_PDO::create(String a0, String a1, String a2, Array a3) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2, a3);
  return this;
}
extern const MethodCallInfoTable cw_PDO$$call_info_table[];
extern const int cw_PDO$$call_info_index[];
extern const InstanceOfInfo cw_PDO$$instanceof_table[];
extern const int cw_PDO$$instanceof_index[];
const ObjectStaticCallbacks cw_PDO = {
  (ObjectData*(*)(ObjectData*))coo_PDO,
  cw_PDO$$call_info_table,cw_PDO$$call_info_index,
  cw_PDO$$instanceof_table,cw_PDO$$instanceof_index,
  &c_PDO::s_class_name,
  &c_PDO::os_prop_table,&ci_PDO$$__construct,0,0,0x0,
  &c_PDO::s_cls
};
ObjectData *coo_DOMText() {
  return NEWOBJ(c_DOMText)();
}
IMPLEMENT_CLASS(DOMText)
extern const InstanceOfInfo cw_DOMText$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x564B1453,1,"DOMCharacterData",&cw_DOMCharacterData},
  {0x2C49174D,1,"DOMText",&cw_DOMText},
};
const int cw_DOMText$$instanceof_index[] = {
  7,
  -1,-1,0,1,-1,2,-1,-1,

};
extern const CallInfo ci_DOMText$$splittext = { (void*)&c_DOMText::i_splittext, (void*)&c_DOMText::ifa_splittext, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMText$$iswhitespaceinelementcontent = { (void*)&c_DOMText::i_iswhitespaceinelementcontent, (void*)&c_DOMText::ifa_iswhitespaceinelementcontent, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMText$$__set = { (void*)&c_DOMText::i___set, (void*)&c_DOMText::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMText$$__get = { (void*)&c_DOMText::i___get, (void*)&c_DOMText::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMText$$__isset = { (void*)&c_DOMText::i___isset, (void*)&c_DOMText::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMText$$__construct = { (void*)&c_DOMText::i___construct, (void*)&c_DOMText::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_DOMText::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMText::i_iswhitespaceinelementcontent(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_iswhitespaceinelementcontent);
}
Variant c_DOMText::i_splittext(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_splittext);
}
Variant c_DOMText::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMText::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMText::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMText::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMText);
  }
  c_DOMText *self ATTRIBUTE_UNUSED (static_cast<c_DOMText*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("__construct", 1, 1);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_DOMText::ifa_iswhitespaceinelementcontent(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_iswhitespaceinelementcontent, coo_DOMText);
  }
  c_DOMText *self ATTRIBUTE_UNUSED (static_cast<c_DOMText*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("iswhitespaceinelementcontent", 0, 1);
  return (self->t_iswhitespaceinelementcontent());
}
Variant NEVER_INLINE c_DOMText::ifa_splittext(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_splittext, coo_DOMText);
  }
  c_DOMText *self ATTRIBUTE_UNUSED (static_cast<c_DOMText*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("splittext", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_splittext(arg0));
}
Variant NEVER_INLINE c_DOMText::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMText);
  }
  c_DOMText *self ATTRIBUTE_UNUSED (static_cast<c_DOMText*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMText::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMText);
  }
  c_DOMText *self ATTRIBUTE_UNUSED (static_cast<c_DOMText*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMText::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMText);
  }
  c_DOMText *self ATTRIBUTE_UNUSED (static_cast<c_DOMText*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMText$$call_info_table[] = {
  { 0x03340395, 1, 5, "__set", &ci_DOMText$$__set },
  { 0x0D8212B7, 1, 9, "splitText", &ci_DOMText$$splittext },
  { 0x0F6C02DD, 1, 28, "isWhitespaceInElementContent", &ci_DOMText$$iswhitespaceinelementcontent },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMText$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMText$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMText$$__get },
};
extern const int cw_DOMText$$call_info_index[] = {
  15,
  -1,-1,-1,-1,-1,0,-1,1,
  -1,-1,-1,-1,-1,2,3,4,

};
c_DOMText *c_DOMText::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_DOMText$$call_info_table[];
extern const int cw_DOMText$$call_info_index[];
extern const InstanceOfInfo cw_DOMText$$instanceof_table[];
extern const int cw_DOMText$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMText = {
  (ObjectData*(*)(ObjectData*))coo_DOMText,
  cw_DOMText$$call_info_table,cw_DOMText$$call_info_index,
  cw_DOMText$$instanceof_table,cw_DOMText$$instanceof_index,
  &c_DOMText::s_class_name,
  0,&ci_DOMText$$__construct,0,&cw_DOMCharacterData,0x0,
  &c_DOMText::s_cls
};
ObjectData *coo_DOMCharacterData() {
  return NEWOBJ(c_DOMCharacterData)();
}
IMPLEMENT_CLASS(DOMCharacterData)
extern const InstanceOfInfo cw_DOMCharacterData$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x564B1453,1,"DOMCharacterData",&cw_DOMCharacterData},
};
const int cw_DOMCharacterData$$instanceof_index[] = {
  3,
  -1,-1,0,1,
};
extern const CallInfo ci_DOMCharacterData$$__set = { (void*)&c_DOMCharacterData::i___set, (void*)&c_DOMCharacterData::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$deletedata = { (void*)&c_DOMCharacterData::i_deletedata, (void*)&c_DOMCharacterData::ifa_deletedata, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$substringdata = { (void*)&c_DOMCharacterData::i_substringdata, (void*)&c_DOMCharacterData::ifa_substringdata, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$replacedata = { (void*)&c_DOMCharacterData::i_replacedata, (void*)&c_DOMCharacterData::ifa_replacedata, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$__get = { (void*)&c_DOMCharacterData::i___get, (void*)&c_DOMCharacterData::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$appenddata = { (void*)&c_DOMCharacterData::i_appenddata, (void*)&c_DOMCharacterData::ifa_appenddata, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$__isset = { (void*)&c_DOMCharacterData::i___isset, (void*)&c_DOMCharacterData::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$insertdata = { (void*)&c_DOMCharacterData::i_insertdata, (void*)&c_DOMCharacterData::ifa_insertdata, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMCharacterData$$__construct = { (void*)&c_DOMCharacterData::i___construct, (void*)&c_DOMCharacterData::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DOMCharacterData::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMCharacterData::i_appenddata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_appenddata);
}
Variant c_DOMCharacterData::i_deletedata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_deletedata);
}
Variant c_DOMCharacterData::i_insertdata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_insertdata);
}
Variant c_DOMCharacterData::i_replacedata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_replacedata);
}
Variant c_DOMCharacterData::i_substringdata(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_substringdata);
}
Variant c_DOMCharacterData::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMCharacterData::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMCharacterData::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMCharacterData::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMCharacterData::ifa_appenddata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_appenddata, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("appenddata", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_appenddata(arg0));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa_deletedata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_deletedata, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("deletedata", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_deletedata(arg0, arg1));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa_insertdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_insertdata, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("insertdata", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_insertdata(arg0, arg1));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa_replacedata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_replacedata, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("replacedata", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_replacedata(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa_substringdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_substringdata, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("substringdata", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_substringdata(arg0, arg1));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMCharacterData::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMCharacterData);
  }
  c_DOMCharacterData *self ATTRIBUTE_UNUSED (static_cast<c_DOMCharacterData*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMCharacterData$$call_info_table[] = {
  { 0x1FD2D92D, 1, 10, "appendData", &ci_DOMCharacterData$$appenddata },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMCharacterData$$__isset },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMCharacterData$$__get },
  { 0x42149972, 1, 13, "substringData", &ci_DOMCharacterData$$substringdata },
  { 0x21F3D4B4, 1, 11, "replaceData", &ci_DOMCharacterData$$replacedata },
  { 0x03340395, 1, 5, "__set", &ci_DOMCharacterData$$__set },
  { 0x6714D118, 1, 10, "deleteData", &ci_DOMCharacterData$$deletedata },
  { 0x06BCEF3D, 1, 10, "insertData", &ci_DOMCharacterData$$insertdata },
  { 0x229C615F, 1, 11, "__construct", &ci_DOMCharacterData$$__construct },
};
extern const int cw_DOMCharacterData$$call_info_index[] = {
  31,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,0,1,2,
  -1,-1,3,-1,4,5,-1,-1,
  6,-1,-1,-1,-1,7,-1,8,

};
c_DOMCharacterData *c_DOMCharacterData::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMCharacterData$$call_info_table[];
extern const int cw_DOMCharacterData$$call_info_index[];
extern const InstanceOfInfo cw_DOMCharacterData$$instanceof_table[];
extern const int cw_DOMCharacterData$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMCharacterData = {
  (ObjectData*(*)(ObjectData*))coo_DOMCharacterData,
  cw_DOMCharacterData$$call_info_table,cw_DOMCharacterData$$call_info_index,
  cw_DOMCharacterData$$instanceof_table,cw_DOMCharacterData$$instanceof_index,
  &c_DOMCharacterData::s_class_name,
  0,&ci_DOMCharacterData$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMCharacterData::s_cls
};
ObjectData *coo_DOMCDATASection() {
  return NEWOBJ(c_DOMCDATASection)();
}
IMPLEMENT_CLASS(DOMCDATASection)
extern const InstanceOfInfo cw_DOMCDATASection$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x564B1453,1,"DOMCharacterData",&cw_DOMCharacterData},
  {0x15CABE94,1,"DOMCDATASection",&cw_DOMCDATASection},
  {0x2C49174D,1,"DOMText",&cw_DOMText},
};
const int cw_DOMCDATASection$$instanceof_index[] = {
  7,
  -1,-1,0,1,2,3,-1,-1,

};
extern const CallInfo ci_DOMCDATASection$$__construct = { (void*)&c_DOMCDATASection::i___construct, (void*)&c_DOMCDATASection::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_DOMCDATASection::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_DOMCDATASection::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMCDATASection);
  }
  c_DOMCDATASection *self ATTRIBUTE_UNUSED (static_cast<c_DOMCDATASection*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__construct", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
extern const MethodCallInfoTable cw_DOMCDATASection$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_DOMCDATASection$$__construct },
};
extern const int cw_DOMCDATASection$$call_info_index[] = {
  1,
  -1,0,
};
c_DOMCDATASection *c_DOMCDATASection::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_DOMCDATASection$$call_info_table[];
extern const int cw_DOMCDATASection$$call_info_index[];
extern const InstanceOfInfo cw_DOMCDATASection$$instanceof_table[];
extern const int cw_DOMCDATASection$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMCDATASection = {
  (ObjectData*(*)(ObjectData*))coo_DOMCDATASection,
  cw_DOMCDATASection$$call_info_table,cw_DOMCDATASection$$call_info_index,
  cw_DOMCDATASection$$instanceof_table,cw_DOMCDATASection$$instanceof_index,
  &c_DOMCDATASection::s_class_name,
  0,&ci_DOMCDATASection$$__construct,0,&cw_DOMText,0x0,
  &c_DOMCDATASection::s_cls
};
ObjectData *coo_SoapVar() {
  return NEWOBJ(c_SoapVar)();
}
IMPLEMENT_CLASS(SoapVar)
extern const InstanceOfInfo cw_SoapVar$$instanceof_table[] = {
  {0x14376235,1,"SoapVar",&cw_SoapVar},
};
const int cw_SoapVar$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_SoapVar$$__construct = { (void*)&c_SoapVar::i___construct, (void*)&c_SoapVar::ifa___construct, 6, 4, 0x0000000000000000LL};
Variant c_SoapVar::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_SoapVar::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapVar);
  }
  c_SoapVar *self ATTRIBUTE_UNUSED (static_cast<c_SoapVar*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_wrong_arguments("__construct", count, 2, 6, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___construct(arg0, arg1, arg2, arg3), null);
  CVarRef arg4(a4);
  if (count <= 5) return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
  CVarRef arg5(a5);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
}
extern const MethodCallInfoTable cw_SoapVar$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_SoapVar$$__construct },
};
extern const int cw_SoapVar$$call_info_index[] = {
  1,
  -1,0,
};
c_SoapVar *c_SoapVar::create(Variant a0, Variant a1, String a2, String a3, String a4, String a5) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2, a3, a4, a5);
  return this;
}
extern const MethodCallInfoTable cw_SoapVar$$call_info_table[];
extern const int cw_SoapVar$$call_info_index[];
extern const InstanceOfInfo cw_SoapVar$$instanceof_table[];
extern const int cw_SoapVar$$instanceof_index[];
const ObjectStaticCallbacks cw_SoapVar = {
  (ObjectData*(*)(ObjectData*))coo_SoapVar,
  cw_SoapVar$$call_info_table,cw_SoapVar$$call_info_index,
  cw_SoapVar$$instanceof_table,cw_SoapVar$$instanceof_index,
  &c_SoapVar::s_class_name,
  0,&ci_SoapVar$$__construct,0,0,0x0,
  &c_SoapVar::s_cls
};
ObjectData *coo_Collator() {
  return NEWOBJ(c_Collator)();
}
IMPLEMENT_CLASS(Collator)
extern const InstanceOfInfo cw_Collator$$instanceof_table[] = {
  {0x4F5CA03D,1,"Collator",&cw_Collator},
};
const int cw_Collator$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_Collator$$getattribute = { (void*)&c_Collator::i_getattribute, (void*)&c_Collator::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$asort = { (void*)&c_Collator::i_asort, (void*)&c_Collator::ifa_asort, 2, 4, 0x0000000000000001LL};
extern const CallInfo ci_Collator$$__construct = { (void*)&c_Collator::i___construct, (void*)&c_Collator::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$getstrength = { (void*)&c_Collator::i_getstrength, (void*)&c_Collator::ifa_getstrength, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$getlocale = { (void*)&c_Collator::i_getlocale, (void*)&c_Collator::ifa_getlocale, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$sort = { (void*)&c_Collator::i_sort, (void*)&c_Collator::ifa_sort, 2, 4, 0x0000000000000001LL};
extern const CallInfo ci_Collator$$geterrormessage = { (void*)&c_Collator::i_geterrormessage, (void*)&c_Collator::ifa_geterrormessage, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$create = { (void*)&c_Collator::i_create, (void*)&c_Collator::ifa_create, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$sortwithsortkeys = { (void*)&c_Collator::i_sortwithsortkeys, (void*)&c_Collator::ifa_sortwithsortkeys, 1, 4, 0x0000000000000001LL};
extern const CallInfo ci_Collator$$setattribute = { (void*)&c_Collator::i_setattribute, (void*)&c_Collator::ifa_setattribute, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$compare = { (void*)&c_Collator::i_compare, (void*)&c_Collator::ifa_compare, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$setstrength = { (void*)&c_Collator::i_setstrength, (void*)&c_Collator::ifa_setstrength, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Collator$$geterrorcode = { (void*)&c_Collator::i_geterrorcode, (void*)&c_Collator::ifa_geterrorcode, 0, 4, 0x0000000000000000LL};
Variant c_Collator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Collator::i_asort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_asort);
}
Variant c_Collator::i_compare(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_compare);
}
Variant c_Collator::i_create(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_create);
}
Variant c_Collator::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_Collator::i_geterrorcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_geterrorcode);
}
Variant c_Collator::i_geterrormessage(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_geterrormessage);
}
Variant c_Collator::i_getlocale(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getlocale);
}
Variant c_Collator::i_getstrength(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstrength);
}
Variant c_Collator::i_setattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setattribute);
}
Variant c_Collator::i_setstrength(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setstrength);
}
Variant c_Collator::i_sortwithsortkeys(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_sortwithsortkeys);
}
Variant c_Collator::i_sort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_sort);
}
Variant NEVER_INLINE c_Collator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__construct", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_Collator::ifa_asort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_asort, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("asort", count, 1, 2, 1);
  VRefParam arg0(vref(a0));
  if (count <= 1) return (self->t_asort(arg0));
  CVarRef arg1(a1);
  return (self->t_asort(arg0, arg1));
}
Variant NEVER_INLINE c_Collator::ifa_compare(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compare, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("compare", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_compare(arg0, arg1));
}
Variant NEVER_INLINE c_Collator::ifa_create(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("create", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_Collator::t_create(arg0));
}
Variant NEVER_INLINE c_Collator::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_Collator::ifa_geterrorcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_geterrorcode, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("geterrorcode", 0, 1);
  return (self->t_geterrorcode());
}
Variant NEVER_INLINE c_Collator::ifa_geterrormessage(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_geterrormessage, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("geterrormessage", 0, 1);
  return (self->t_geterrormessage());
}
Variant NEVER_INLINE c_Collator::ifa_getlocale(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getlocale, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("getlocale", 1, 1);
  if (count <= 0) return (self->t_getlocale());
  CVarRef arg0(a0);
  return (self->t_getlocale(arg0));
}
Variant NEVER_INLINE c_Collator::ifa_getstrength(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstrength, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getstrength", 0, 1);
  return (self->t_getstrength());
}
Variant NEVER_INLINE c_Collator::ifa_setattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setattribute, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setattribute", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setattribute(arg0, arg1));
}
Variant NEVER_INLINE c_Collator::ifa_setstrength(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setstrength, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setstrength", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setstrength(arg0));
}
Variant NEVER_INLINE c_Collator::ifa_sortwithsortkeys(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_sortwithsortkeys, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("sortwithsortkeys", count, 1, 1, 1);
  VRefParam arg0(vref(a0));
  return (self->t_sortwithsortkeys(arg0));
}
Variant NEVER_INLINE c_Collator::ifa_sort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_sort, coo_Collator);
  }
  c_Collator *self ATTRIBUTE_UNUSED (static_cast<c_Collator*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("sort", count, 1, 2, 1);
  VRefParam arg0(vref(a0));
  if (count <= 1) return (self->t_sort(arg0));
  CVarRef arg1(a1);
  return (self->t_sort(arg0, arg1));
}
extern const MethodCallInfoTable cw_Collator$$call_info_table[] = {
  { 0x4D6296E0, 1, 12, "geterrorcode", &ci_Collator$$geterrorcode },
  { 0x2965CE02, 1, 9, "getlocale", &ci_Collator$$getlocale },
  { 0x6612FC28, 1, 12, "getattribute", &ci_Collator$$getattribute },
  { 0x44F4AB8A, 0, 12, "setattribute", &ci_Collator$$setattribute },
  { 0x0E1DBB2A, 1, 4, "sort", &ci_Collator$$sort },
  { 0x087803EB, 1, 16, "sortwithsortkeys", &ci_Collator$$sortwithsortkeys },
  { 0x23442BEE, 1, 5, "asort", &ci_Collator$$asort },
  { 0x0C437CD1, 1, 15, "geterrormessage", &ci_Collator$$geterrormessage },
  { 0x3DECF352, 1, 7, "compare", &ci_Collator$$compare },
  { 0x10518456, 1, 6, "create", &ci_Collator$$create },
  { 0x4CBF9ED7, 1, 11, "setstrength", &ci_Collator$$setstrength },
  { 0x205B4C5E, 1, 11, "getstrength", &ci_Collator$$getstrength },
  { 0x229C615F, 1, 11, "__construct", &ci_Collator$$__construct },
};
extern const int cw_Collator$$call_info_index[] = {
  31,
  0,-1,1,-1,-1,-1,-1,-1,
  2,-1,3,5,-1,-1,6,-1,
  -1,7,8,-1,-1,-1,9,10,
  -1,-1,-1,-1,-1,-1,11,12,

};
c_Collator *c_Collator::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_Collator$$call_info_table[];
extern const int cw_Collator$$call_info_index[];
extern const InstanceOfInfo cw_Collator$$instanceof_table[];
extern const int cw_Collator$$instanceof_index[];
const ObjectStaticCallbacks cw_Collator = {
  (ObjectData*(*)(ObjectData*))coo_Collator,
  cw_Collator$$call_info_table,cw_Collator$$call_info_index,
  cw_Collator$$instanceof_table,cw_Collator$$instanceof_index,
  &c_Collator::s_class_name,
  &c_Collator::os_prop_table,&ci_Collator$$__construct,0,0,0x0,
  &c_Collator::s_cls
};
ObjectData *coo_DummyClosure() {
  return NEWOBJ(c_DummyClosure)();
}
IMPLEMENT_CLASS(DummyClosure)
extern const InstanceOfInfo cw_DummyClosure$$instanceof_table[] = {
  {0x29BA228F,1,"DummyClosure",&cw_DummyClosure},
};
const int cw_DummyClosure$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_DummyClosure$$__construct = { (void*)&c_DummyClosure::i___construct, (void*)&c_DummyClosure::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DummyClosure::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_DummyClosure::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DummyClosure);
  }
  c_DummyClosure *self ATTRIBUTE_UNUSED (static_cast<c_DummyClosure*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
extern const MethodCallInfoTable cw_DummyClosure$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_DummyClosure$$__construct },
};
extern const int cw_DummyClosure$$call_info_index[] = {
  1,
  -1,0,
};
c_DummyClosure *c_DummyClosure::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DummyClosure$$call_info_table[];
extern const int cw_DummyClosure$$call_info_index[];
extern const InstanceOfInfo cw_DummyClosure$$instanceof_table[];
extern const int cw_DummyClosure$$instanceof_index[];
const ObjectStaticCallbacks cw_DummyClosure = {
  (ObjectData*(*)(ObjectData*))coo_DummyClosure,
  cw_DummyClosure$$call_info_table,cw_DummyClosure$$call_info_index,
  cw_DummyClosure$$instanceof_table,cw_DummyClosure$$instanceof_index,
  &c_DummyClosure::s_class_name,
  0,&ci_DummyClosure$$__construct,0,0,0x0,
  &c_DummyClosure::s_cls
};
ObjectData *coo_XMLReader() {
  return NEWOBJ(c_XMLReader)();
}
IMPLEMENT_CLASS(XMLReader)
extern const InstanceOfInfo cw_XMLReader$$instanceof_table[] = {
  {0x180A6325,1,"XMLReader",&cw_XMLReader},
};
const int cw_XMLReader$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_XMLReader$$getparserproperty = { (void*)&c_XMLReader::i_getparserproperty, (void*)&c_XMLReader::ifa_getparserproperty, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$readinnerxml = { (void*)&c_XMLReader::i_readinnerxml, (void*)&c_XMLReader::ifa_readinnerxml, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$setschema = { (void*)&c_XMLReader::i_setschema, (void*)&c_XMLReader::ifa_setschema, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$lookupnamespace = { (void*)&c_XMLReader::i_lookupnamespace, (void*)&c_XMLReader::ifa_lookupnamespace, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$getattributens = { (void*)&c_XMLReader::i_getattributens, (void*)&c_XMLReader::ifa_getattributens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$getattributeno = { (void*)&c_XMLReader::i_getattributeno, (void*)&c_XMLReader::ifa_getattributeno, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$setparserproperty = { (void*)&c_XMLReader::i_setparserproperty, (void*)&c_XMLReader::ifa_setparserproperty, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$xml = { (void*)&c_XMLReader::i_xml, (void*)&c_XMLReader::ifa_xml, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$readstring = { (void*)&c_XMLReader::i_readstring, (void*)&c_XMLReader::ifa_readstring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$next = { (void*)&c_XMLReader::i_next, (void*)&c_XMLReader::ifa_next, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$__construct = { (void*)&c_XMLReader::i___construct, (void*)&c_XMLReader::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$readouterxml = { (void*)&c_XMLReader::i_readouterxml, (void*)&c_XMLReader::ifa_readouterxml, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$getattribute = { (void*)&c_XMLReader::i_getattribute, (void*)&c_XMLReader::ifa_getattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$isvalid = { (void*)&c_XMLReader::i_isvalid, (void*)&c_XMLReader::ifa_isvalid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$movetoelement = { (void*)&c_XMLReader::i_movetoelement, (void*)&c_XMLReader::ifa_movetoelement, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$__get = { (void*)&c_XMLReader::i___get, (void*)&c_XMLReader::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$setrelaxngschema = { (void*)&c_XMLReader::i_setrelaxngschema, (void*)&c_XMLReader::ifa_setrelaxngschema, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$movetoattribute = { (void*)&c_XMLReader::i_movetoattribute, (void*)&c_XMLReader::ifa_movetoattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$read = { (void*)&c_XMLReader::i_read, (void*)&c_XMLReader::ifa_read, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$open = { (void*)&c_XMLReader::i_open, (void*)&c_XMLReader::ifa_open, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$__destruct = { (void*)&c_XMLReader::i___destruct, (void*)&c_XMLReader::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$setrelaxngschemasource = { (void*)&c_XMLReader::i_setrelaxngschemasource, (void*)&c_XMLReader::ifa_setrelaxngschemasource, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$expand = { (void*)&c_XMLReader::i_expand, (void*)&c_XMLReader::ifa_expand, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$close = { (void*)&c_XMLReader::i_close, (void*)&c_XMLReader::ifa_close, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$movetoattributeno = { (void*)&c_XMLReader::i_movetoattributeno, (void*)&c_XMLReader::ifa_movetoattributeno, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$movetofirstattribute = { (void*)&c_XMLReader::i_movetofirstattribute, (void*)&c_XMLReader::ifa_movetofirstattribute, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$movetoattributens = { (void*)&c_XMLReader::i_movetoattributens, (void*)&c_XMLReader::ifa_movetoattributens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_XMLReader$$movetonextattribute = { (void*)&c_XMLReader::i_movetonextattribute, (void*)&c_XMLReader::ifa_movetonextattribute, 0, 4, 0x0000000000000000LL};
Variant c_XMLReader::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_XMLReader::i_open(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_open);
}
Variant c_XMLReader::i_xml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_xml);
}
Variant c_XMLReader::i_close(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_close);
}
Variant c_XMLReader::i_read(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_read);
}
Variant c_XMLReader::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_XMLReader::i_readstring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_readstring);
}
Variant c_XMLReader::i_readinnerxml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_readinnerxml);
}
Variant c_XMLReader::i_readouterxml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_readouterxml);
}
Variant c_XMLReader::i_movetonextattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_movetonextattribute);
}
Variant c_XMLReader::i_getattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattribute);
}
Variant c_XMLReader::i_getattributeno(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributeno);
}
Variant c_XMLReader::i_getattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getattributens);
}
Variant c_XMLReader::i_movetoattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_movetoattribute);
}
Variant c_XMLReader::i_movetoattributeno(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_movetoattributeno);
}
Variant c_XMLReader::i_movetoattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_movetoattributens);
}
Variant c_XMLReader::i_movetoelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_movetoelement);
}
Variant c_XMLReader::i_movetofirstattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_movetofirstattribute);
}
Variant c_XMLReader::i_isvalid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isvalid);
}
Variant c_XMLReader::i_expand(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_expand);
}
Variant c_XMLReader::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_XMLReader::i_getparserproperty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getparserproperty);
}
Variant c_XMLReader::i_lookupnamespace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lookupnamespace);
}
Variant c_XMLReader::i_setschema(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setschema);
}
Variant c_XMLReader::i_setparserproperty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setparserproperty);
}
Variant c_XMLReader::i_setrelaxngschema(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setrelaxngschema);
}
Variant c_XMLReader::i_setrelaxngschemasource(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setrelaxngschemasource);
}
Variant c_XMLReader::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_XMLReader::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_XMLReader::ifa_open(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_open, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("open", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_open(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_open(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_open(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_XMLReader::ifa_xml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_xml, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("xml", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_xml(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_xml(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_xml(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_XMLReader::ifa_close(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_close, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("close", 0, 1);
  return (self->t_close());
}
Variant NEVER_INLINE c_XMLReader::ifa_read(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_read, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("read", 0, 1);
  return (self->t_read());
}
Variant NEVER_INLINE c_XMLReader::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("next", 1, 1);
  if (count <= 0) return (self->t_next());
  CVarRef arg0(a0);
  return (self->t_next(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_readstring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_readstring, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("readstring", 0, 1);
  return (self->t_readstring());
}
Variant NEVER_INLINE c_XMLReader::ifa_readinnerxml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_readinnerxml, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("readinnerxml", 0, 1);
  return (self->t_readinnerxml());
}
Variant NEVER_INLINE c_XMLReader::ifa_readouterxml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_readouterxml, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("readouterxml", 0, 1);
  return (self->t_readouterxml());
}
Variant NEVER_INLINE c_XMLReader::ifa_movetonextattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_movetonextattribute, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("movetonextattribute", 0, 1);
  return (self->t_movetonextattribute());
}
Variant NEVER_INLINE c_XMLReader::ifa_getattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattribute, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattribute(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_getattributeno(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributeno, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getattributeno", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getattributeno(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_getattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getattributens, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("getattributens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_getattributens(arg0, arg1));
}
Variant NEVER_INLINE c_XMLReader::ifa_movetoattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_movetoattribute, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("movetoattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_movetoattribute(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_movetoattributeno(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_movetoattributeno, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("movetoattributeno", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_movetoattributeno(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_movetoattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_movetoattributens, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("movetoattributens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_movetoattributens(arg0, arg1));
}
Variant NEVER_INLINE c_XMLReader::ifa_movetoelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_movetoelement, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("movetoelement", 0, 1);
  return (self->t_movetoelement());
}
Variant NEVER_INLINE c_XMLReader::ifa_movetofirstattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_movetofirstattribute, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("movetofirstattribute", 0, 1);
  return (self->t_movetofirstattribute());
}
Variant NEVER_INLINE c_XMLReader::ifa_isvalid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isvalid, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("isvalid", 0, 1);
  return (self->t_isvalid());
}
Variant NEVER_INLINE c_XMLReader::ifa_expand(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_expand, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("expand", 0, 1);
  return (self->t_expand());
}
Variant NEVER_INLINE c_XMLReader::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_getparserproperty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getparserproperty, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getparserproperty", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getparserproperty(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_lookupnamespace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lookupnamespace, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("lookupnamespace", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_lookupnamespace(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_setschema(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setschema, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setschema", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setschema(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_setparserproperty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setparserproperty, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setparserproperty", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setparserproperty(arg0, arg1));
}
Variant NEVER_INLINE c_XMLReader::ifa_setrelaxngschema(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setrelaxngschema, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setrelaxngschema", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setrelaxngschema(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa_setrelaxngschemasource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setrelaxngschemasource, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setrelaxngschemasource", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setrelaxngschemasource(arg0));
}
Variant NEVER_INLINE c_XMLReader::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_XMLReader);
  }
  c_XMLReader *self ATTRIBUTE_UNUSED (static_cast<c_XMLReader*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_XMLReader$$call_info_table[] = {
  { 0x3EBF5341, 0, 5, "close", &ci_XMLReader$$close },
  { 0x649EF301, 1, 4, "read", &ci_XMLReader$$read },
  { 0x0C124BC4, 1, 4, "open", &ci_XMLReader$$open },
  { 0x51079AC6, 1, 20, "moveToFirstAttribute", &ci_XMLReader$$movetofirstattribute },
  { 0x2AF83A07, 1, 17, "getParserProperty", &ci_XMLReader$$getparserproperty },
  { 0x705A37CD, 1, 6, "expand", &ci_XMLReader$$expand },
  { 0x6560520E, 1, 12, "readInnerXML", &ci_XMLReader$$readinnerxml },
  { 0x74FA338F, 1, 5, "__get", &ci_XMLReader$$__get },
  { 0x67AE3A13, 1, 17, "setParserProperty", &ci_XMLReader$$setparserproperty },
  { 0x17FD4B14, 1, 3, "XML", &ci_XMLReader$$xml },
  { 0x25250499, 0, 14, "getAttributeNo", &ci_XMLReader$$getattributeno },
  { 0x6D3F0899, 1, 14, "getAttributeNs", &ci_XMLReader$$getattributens },
  { 0x313080DB, 1, 12, "readOuterXML", &ci_XMLReader$$readouterxml },
  { 0x4B09E11D, 1, 15, "lookupNamespace", &ci_XMLReader$$lookupnamespace },
  { 0x229C615F, 1, 11, "__construct", &ci_XMLReader$$__construct },
  { 0x7F7E0F67, 1, 19, "moveToNextAttribute", &ci_XMLReader$$movetonextattribute },
  { 0x6612FC28, 1, 12, "getAttribute", &ci_XMLReader$$getattribute },
  { 0x2CA9872B, 0, 7, "isValid", &ci_XMLReader$$isvalid },
  { 0x2392C36B, 1, 16, "setRelaxNGSchema", &ci_XMLReader$$setrelaxngschema },
  { 0x02641D6F, 1, 13, "moveToElement", &ci_XMLReader$$movetoelement },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_XMLReader$$__destruct },
  { 0x55654634, 0, 10, "readString", &ci_XMLReader$$readstring },
  { 0x33A073B4, 1, 17, "moveToAttributeNo", &ci_XMLReader$$movetoattributeno },
  { 0x4230DFF6, 1, 15, "moveToAttribute", &ci_XMLReader$$movetoattribute },
  { 0x3B8102B8, 0, 4, "next", &ci_XMLReader$$next },
  { 0x321F8838, 1, 9, "setSchema", &ci_XMLReader$$setschema },
  { 0x605663FD, 1, 17, "moveToAttributeNs", &ci_XMLReader$$movetoattributens },
  { 0x2AC164FF, 1, 22, "setRelaxNGSchemaSource", &ci_XMLReader$$setrelaxngschemasource },
};
extern const int cw_XMLReader$$call_info_index[] = {
  63,
  -1,0,-1,-1,2,-1,3,4,
  -1,-1,-1,-1,-1,5,6,7,
  -1,-1,-1,8,9,-1,-1,-1,
  -1,10,-1,12,-1,13,-1,14,
  -1,-1,-1,-1,-1,-1,-1,15,
  16,-1,-1,17,-1,-1,-1,19,
  -1,-1,-1,20,21,-1,23,-1,
  24,-1,-1,-1,-1,26,-1,27,

};
c_XMLReader *c_XMLReader::create() {
  CountableHelper h(this);
  init();
  t___construct();
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_XMLReader$$call_info_table[];
extern const int cw_XMLReader$$call_info_index[];
extern const InstanceOfInfo cw_XMLReader$$instanceof_table[];
extern const int cw_XMLReader$$instanceof_index[];
const ObjectStaticCallbacks cw_XMLReader = {
  (ObjectData*(*)(ObjectData*))coo_XMLReader,
  cw_XMLReader$$call_info_table,cw_XMLReader$$call_info_index,
  cw_XMLReader$$instanceof_table,cw_XMLReader$$instanceof_index,
  &c_XMLReader::s_class_name,
  &c_XMLReader::os_prop_table,&ci_XMLReader$$__construct,0,0,0x0,
  &c_XMLReader::s_cls
};
ObjectData *coo_SoapServer() {
  return NEWOBJ(c_SoapServer)();
}
IMPLEMENT_CLASS(SoapServer)
extern const InstanceOfInfo cw_SoapServer$$instanceof_table[] = {
  {0x7B878C3E,1,"SoapServer",&cw_SoapServer},
};
const int cw_SoapServer$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_SoapServer$$handle = { (void*)&c_SoapServer::i_handle, (void*)&c_SoapServer::ifa_handle, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$setobject = { (void*)&c_SoapServer::i_setobject, (void*)&c_SoapServer::ifa_setobject, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$fault = { (void*)&c_SoapServer::i_fault, (void*)&c_SoapServer::ifa_fault, 5, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$setpersistence = { (void*)&c_SoapServer::i_setpersistence, (void*)&c_SoapServer::ifa_setpersistence, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$getfunctions = { (void*)&c_SoapServer::i_getfunctions, (void*)&c_SoapServer::ifa_getfunctions, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$addsoapheader = { (void*)&c_SoapServer::i_addsoapheader, (void*)&c_SoapServer::ifa_addsoapheader, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$setclass = { (void*)&c_SoapServer::i_setclass, (void*)&c_SoapServer::ifa_setclass, 1, 5, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$__construct = { (void*)&c_SoapServer::i___construct, (void*)&c_SoapServer::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapServer$$addfunction = { (void*)&c_SoapServer::i_addfunction, (void*)&c_SoapServer::ifa_addfunction, 1, 4, 0x0000000000000000LL};
Variant c_SoapServer::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SoapServer::i_setclass(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_setclass, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_arguments("setclass", count+1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    const Array &p(count > 1 ? params.slice(1, count - 1, false) : Array());
    return (self->t_setclass(count, arg0, p), null);
  }
}
Variant c_SoapServer::i_setobject(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setobject);
}
Variant c_SoapServer::i_addfunction(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addfunction);
}
Variant c_SoapServer::i_getfunctions(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getfunctions);
}
Variant c_SoapServer::i_handle(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_handle);
}
Variant c_SoapServer::i_setpersistence(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setpersistence);
}
Variant c_SoapServer::i_fault(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fault);
}
Variant c_SoapServer::i_addsoapheader(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addsoapheader);
}
Variant NEVER_INLINE c_SoapServer::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("__construct", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_setclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setclass, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_arguments("setclass", count+1, 1);
  CVarRef arg0(a0);
  Array p;
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t_setclass(count, arg0, p), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_setobject(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setobject, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setobject", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setobject(arg0), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_addfunction(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addfunction, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("addfunction", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_addfunction(arg0), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_getfunctions(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getfunctions, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getfunctions", 0, 1);
  return (self->t_getfunctions());
}
Variant NEVER_INLINE c_SoapServer::ifa_handle(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_handle, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("handle", 1, 1);
  if (count <= 0) return (self->t_handle(), null);
  CVarRef arg0(a0);
  return (self->t_handle(arg0), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_setpersistence(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setpersistence, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setpersistence", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setpersistence(arg0), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_fault(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fault, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 5)) return throw_wrong_arguments("fault", count, 2, 5, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_fault(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_fault(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_fault(arg0, arg1, arg2, arg3), null);
  CVarRef arg4(a4);
  return (self->t_fault(arg0, arg1, arg2, arg3, arg4), null);
}
Variant NEVER_INLINE c_SoapServer::ifa_addsoapheader(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addsoapheader, coo_SoapServer);
  }
  c_SoapServer *self ATTRIBUTE_UNUSED (static_cast<c_SoapServer*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("addsoapheader", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_addsoapheader(arg0), null);
}
extern const MethodCallInfoTable cw_SoapServer$$call_info_table[] = {
  { 0x590FE203, 1, 5, "fault", &ci_SoapServer$$fault },
  { 0x60A69328, 1, 14, "setpersistence", &ci_SoapServer$$setpersistence },
  { 0x622F17AF, 1, 12, "getfunctions", &ci_SoapServer$$getfunctions },
  { 0x74541532, 1, 6, "handle", &ci_SoapServer$$handle },
  { 0x44F70834, 1, 8, "setclass", &ci_SoapServer$$setclass },
  { 0x4FE626B9, 1, 9, "setobject", &ci_SoapServer$$setobject },
  { 0x4A74963E, 1, 13, "addsoapheader", &ci_SoapServer$$addsoapheader },
  { 0x229C615F, 0, 11, "__construct", &ci_SoapServer$$__construct },
  { 0x397D2D9F, 1, 11, "addfunction", &ci_SoapServer$$addfunction },
};
extern const int cw_SoapServer$$call_info_index[] = {
  31,
  -1,-1,-1,0,-1,-1,-1,-1,
  1,-1,-1,-1,-1,-1,-1,2,
  -1,-1,3,-1,4,-1,-1,-1,
  -1,5,-1,-1,-1,-1,6,7,

};
c_SoapServer *c_SoapServer::create(Variant a0, Array a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_SoapServer$$call_info_table[];
extern const int cw_SoapServer$$call_info_index[];
extern const InstanceOfInfo cw_SoapServer$$instanceof_table[];
extern const int cw_SoapServer$$instanceof_index[];
const ObjectStaticCallbacks cw_SoapServer = {
  (ObjectData*(*)(ObjectData*))coo_SoapServer,
  cw_SoapServer$$call_info_table,cw_SoapServer$$call_info_index,
  cw_SoapServer$$instanceof_table,cw_SoapServer$$instanceof_index,
  &c_SoapServer::s_class_name,
  0,&ci_SoapServer$$__construct,0,0,0x0,
  &c_SoapServer::s_cls
};
ObjectData *coo_MapIterator() {
  return NEWOBJ(c_MapIterator)();
}
IMPLEMENT_CLASS(MapIterator)
extern const InstanceOfInfo cw_MapIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x4ACBAD46,0,"MapIterator",&cw_MapIterator},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_MapIterator$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,1,-1,

};
extern const CallInfo ci_MapIterator$$current = { (void*)&c_MapIterator::i_current, (void*)&c_MapIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MapIterator$$key = { (void*)&c_MapIterator::i_key, (void*)&c_MapIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MapIterator$$valid = { (void*)&c_MapIterator::i_valid, (void*)&c_MapIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MapIterator$$rewind = { (void*)&c_MapIterator::i_rewind, (void*)&c_MapIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MapIterator$$__construct = { (void*)&c_MapIterator::i___construct, (void*)&c_MapIterator::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_MapIterator$$next = { (void*)&c_MapIterator::i_next, (void*)&c_MapIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_MapIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_MapIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_MapIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_MapIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_MapIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_MapIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant NEVER_INLINE c_MapIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_MapIterator);
  }
  c_MapIterator *self ATTRIBUTE_UNUSED (static_cast<c_MapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_MapIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_MapIterator);
  }
  c_MapIterator *self ATTRIBUTE_UNUSED (static_cast<c_MapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_MapIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_MapIterator);
  }
  c_MapIterator *self ATTRIBUTE_UNUSED (static_cast<c_MapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_MapIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_MapIterator);
  }
  c_MapIterator *self ATTRIBUTE_UNUSED (static_cast<c_MapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_MapIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_MapIterator);
  }
  c_MapIterator *self ATTRIBUTE_UNUSED (static_cast<c_MapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_MapIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_MapIterator);
  }
  c_MapIterator *self ATTRIBUTE_UNUSED (static_cast<c_MapIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind(), null);
}
extern const MethodCallInfoTable cw_MapIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_MapIterator$$key },
  { 0x54808C44, 1, 5, "valid", &ci_MapIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_MapIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_MapIterator$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_MapIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_MapIterator$$__construct },
};
extern const int cw_MapIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  2,-1,3,-1,4,-1,-1,5,

};
c_MapIterator *c_MapIterator::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_MapIterator$$call_info_table[];
extern const int cw_MapIterator$$call_info_index[];
extern const InstanceOfInfo cw_MapIterator$$instanceof_table[];
extern const int cw_MapIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_MapIterator = {
  (ObjectData*(*)(ObjectData*))coo_MapIterator,
  cw_MapIterator$$call_info_table,cw_MapIterator$$call_info_index,
  cw_MapIterator$$instanceof_table,cw_MapIterator$$instanceof_index,
  &c_MapIterator::s_class_name,
  0,&ci_MapIterator$$__construct,0,0,0x0,
  &c_MapIterator::s_cls
};
ObjectData *coo_StableMap() {
  return NEWOBJ(c_StableMap)();
}
IMPLEMENT_CLASS(StableMap)
extern const InstanceOfInfo cw_StableMap$$instanceof_table[] = {
  {0x45E6F0A1,0,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x5EE263D1,1,"Countable",(const ObjectStaticCallbacks*)2},
  {0x3FB63255,1,"Iterable",(const ObjectStaticCallbacks*)2},
  {0x40363017,1,"IteratorAggregate",(const ObjectStaticCallbacks*)2},
  {0x06B952EC,1,"StableMap",&cw_StableMap},
};
const int cw_StableMap$$instanceof_index[] = {
  15,
  -1,0,-1,-1,-1,2,-1,3,
  -1,-1,-1,-1,4,-1,-1,-1,

};
extern const CallInfo ci_StableMap$$discard = { (void*)&c_StableMap::i_discard, (void*)&c_StableMap::ifa_discard, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$tokeysarray = { (void*)&c_StableMap::i_tokeysarray, (void*)&c_StableMap::ifa_tokeysarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$__tostring = { (void*)&c_StableMap::i___tostring, (void*)&c_StableMap::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$clear = { (void*)&c_StableMap::i_clear, (void*)&c_StableMap::ifa_clear, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$fromiterable = { (void*)&c_StableMap::i_fromiterable, (void*)&c_StableMap::ifa_fromiterable, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$differencebykey = { (void*)&c_StableMap::i_differencebykey, (void*)&c_StableMap::ifa_differencebykey, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$__construct = { (void*)&c_StableMap::i___construct, (void*)&c_StableMap::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$put = { (void*)&c_StableMap::i_put, (void*)&c_StableMap::ifa_put, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$tovaluesarray = { (void*)&c_StableMap::i_tovaluesarray, (void*)&c_StableMap::ifa_tovaluesarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$__unset = { (void*)&c_StableMap::i___unset, (void*)&c_StableMap::ifa___unset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$get = { (void*)&c_StableMap::i_get, (void*)&c_StableMap::ifa_get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$updatefromarray = { (void*)&c_StableMap::i_updatefromarray, (void*)&c_StableMap::ifa_updatefromarray, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$remove = { (void*)&c_StableMap::i_remove, (void*)&c_StableMap::ifa_remove, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$contains = { (void*)&c_StableMap::i_contains, (void*)&c_StableMap::ifa_contains, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$copyasarray = { (void*)&c_StableMap::i_copyasarray, (void*)&c_StableMap::ifa_copyasarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$__set = { (void*)&c_StableMap::i___set, (void*)&c_StableMap::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$__get = { (void*)&c_StableMap::i___get, (void*)&c_StableMap::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$__isset = { (void*)&c_StableMap::i___isset, (void*)&c_StableMap::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$updatefromiterable = { (void*)&c_StableMap::i_updatefromiterable, (void*)&c_StableMap::ifa_updatefromiterable, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$at = { (void*)&c_StableMap::i_at, (void*)&c_StableMap::ifa_at, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$count = { (void*)&c_StableMap::i_count, (void*)&c_StableMap::ifa_count, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$fromarray = { (void*)&c_StableMap::i_fromarray, (void*)&c_StableMap::ifa_fromarray, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$isempty = { (void*)&c_StableMap::i_isempty, (void*)&c_StableMap::ifa_isempty, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$getiterator = { (void*)&c_StableMap::i_getiterator, (void*)&c_StableMap::ifa_getiterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$toarray = { (void*)&c_StableMap::i_toarray, (void*)&c_StableMap::ifa_toarray, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_StableMap$$values = { (void*)&c_StableMap::i_values, (void*)&c_StableMap::ifa_values, 0, 4, 0x0000000000000000LL};
Variant c_StableMap::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_StableMap::i_isempty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isempty);
}
Variant c_StableMap::i_count(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_count);
}
Variant c_StableMap::i_at(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_at);
}
Variant c_StableMap::i_get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get);
}
Variant c_StableMap::i_put(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_put);
}
Variant c_StableMap::i_clear(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_clear);
}
Variant c_StableMap::i_contains(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_contains);
}
Variant c_StableMap::i_remove(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_remove);
}
Variant c_StableMap::i_discard(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_discard);
}
Variant c_StableMap::i_toarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_toarray);
}
Variant c_StableMap::i_copyasarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_copyasarray);
}
Variant c_StableMap::i_tokeysarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_tokeysarray);
}
Variant c_StableMap::i_values(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_values);
}
Variant c_StableMap::i_tovaluesarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_tovaluesarray);
}
Variant c_StableMap::i_updatefromarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_updatefromarray);
}
Variant c_StableMap::i_updatefromiterable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_updatefromiterable);
}
Variant c_StableMap::i_differencebykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_differencebykey);
}
Variant c_StableMap::i_getiterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getiterator);
}
Variant c_StableMap::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_StableMap::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_StableMap::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant c_StableMap::i___unset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___unset);
}
Variant c_StableMap::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_StableMap::i_fromarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fromarray);
}
Variant c_StableMap::i_fromiterable(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fromiterable);
}
Variant NEVER_INLINE c_StableMap::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_StableMap::ifa_isempty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isempty, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("isempty", 0, 1);
  return (self->t_isempty());
}
Variant NEVER_INLINE c_StableMap::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("count", 0, 1);
  return (self->t_count());
}
Variant NEVER_INLINE c_StableMap::ifa_at(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_at, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("at", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_at(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_get(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_put(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_put, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("put", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_put(arg0, arg1));
}
Variant NEVER_INLINE c_StableMap::ifa_clear(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clear, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("clear", 0, 1);
  return (self->t_clear());
}
Variant NEVER_INLINE c_StableMap::ifa_contains(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_contains, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("contains", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_contains(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_remove(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_remove, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("remove", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_remove(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_discard(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_discard, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("discard", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_discard(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_toarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_toarray, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("toarray", 0, 1);
  return (self->t_toarray());
}
Variant NEVER_INLINE c_StableMap::ifa_copyasarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_copyasarray, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("copyasarray", 0, 1);
  return (self->t_copyasarray());
}
Variant NEVER_INLINE c_StableMap::ifa_tokeysarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tokeysarray, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("tokeysarray", 0, 1);
  return (self->t_tokeysarray());
}
Variant NEVER_INLINE c_StableMap::ifa_values(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_values, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("values", 0, 1);
  return (self->t_values());
}
Variant NEVER_INLINE c_StableMap::ifa_tovaluesarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tovaluesarray, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("tovaluesarray", 0, 1);
  return (self->t_tovaluesarray());
}
Variant NEVER_INLINE c_StableMap::ifa_updatefromarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_updatefromarray, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("updatefromarray", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_updatefromarray(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_updatefromiterable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_updatefromiterable, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("updatefromiterable", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_updatefromiterable(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_differencebykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_differencebykey, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("differencebykey", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_differencebykey(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_getiterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getiterator, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getiterator", 0, 1);
  return (self->t_getiterator());
}
Variant NEVER_INLINE c_StableMap::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_StableMap::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa___unset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___unset, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__unset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___unset(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_StableMap);
  }
  c_StableMap *self ATTRIBUTE_UNUSED (static_cast<c_StableMap*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__tostring", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_StableMap::ifa_fromarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("fromarray", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_StableMap::t_fromarray(arg0));
}
Variant NEVER_INLINE c_StableMap::ifa_fromiterable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("fromiterable", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_StableMap::t_fromiterable(arg0));
}
extern const MethodCallInfoTable cw_StableMap$$call_info_table[] = {
  { 0x5C34CDC0, 1, 11, "copyAsArray", &ci_StableMap$$copyasarray },
  { 0x32A12503, 1, 11, "getIterator", &ci_StableMap$$getiterator },
  { 0x11099204, 1, 11, "toKeysArray", &ci_StableMap$$tokeysarray },
  { 0x295C3D07, 1, 9, "fromArray", &ci_StableMap$$fromarray },
  { 0x55C7DBC9, 1, 7, "discard", &ci_StableMap$$discard },
  { 0x7D14564E, 1, 6, "remove", &ci_StableMap$$remove },
  { 0x74FA338F, 1, 5, "__get", &ci_StableMap$$__get },
  { 0x65104D10, 0, 5, "count", &ci_StableMap$$count },
  { 0x7A22D290, 1, 8, "contains", &ci_StableMap$$contains },
  { 0x53768711, 1, 15, "updateFromArray", &ci_StableMap$$updatefromarray },
  { 0x14B34A13, 1, 10, "__toString", &ci_StableMap$$__tostring },
  { 0x03340395, 1, 5, "__set", &ci_StableMap$$__set },
  { 0x655C3FD9, 1, 12, "fromIterable", &ci_StableMap$$fromiterable },
  { 0x49D8CC9A, 1, 3, "put", &ci_StableMap$$put },
  { 0x49A2079B, 1, 7, "__unset", &ci_StableMap$$__unset },
  { 0x4EC51D5C, 1, 6, "values", &ci_StableMap$$values },
  { 0x229C615F, 1, 11, "__construct", &ci_StableMap$$__construct },
  { 0x5A226667, 1, 5, "clear", &ci_StableMap$$clear },
  { 0x5FC265E8, 0, 7, "isEmpty", &ci_StableMap$$isempty },
  { 0x569AD828, 1, 3, "get", &ci_StableMap$$get },
  { 0x2D97C76D, 0, 18, "updateFromIterable", &ci_StableMap$$updatefromiterable },
  { 0x630CD52D, 1, 15, "differenceByKey", &ci_StableMap$$differencebykey },
  { 0x2E2178EE, 1, 7, "__isset", &ci_StableMap$$__isset },
  { 0x3109B0F2, 1, 7, "toArray", &ci_StableMap$$toarray },
  { 0x2439E4B7, 1, 2, "at", &ci_StableMap$$at },
  { 0x6BECD6BD, 1, 13, "toValuesArray", &ci_StableMap$$tovaluesarray },
};
extern const int cw_StableMap$$call_info_index[] = {
  63,
  0,-1,-1,1,2,-1,-1,3,
  -1,4,-1,-1,-1,-1,5,6,
  7,9,-1,10,-1,11,-1,-1,
  -1,12,13,14,15,-1,-1,16,
  -1,-1,-1,-1,-1,-1,-1,17,
  18,-1,-1,-1,-1,20,22,-1,
  -1,-1,23,-1,-1,-1,-1,24,
  -1,-1,-1,-1,-1,25,-1,-1,

};
c_StableMap *c_StableMap::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_StableMap$$call_info_table[];
extern const int cw_StableMap$$call_info_index[];
extern const InstanceOfInfo cw_StableMap$$instanceof_table[];
extern const int cw_StableMap$$instanceof_index[];
const ObjectStaticCallbacks cw_StableMap = {
  (ObjectData*(*)(ObjectData*))coo_StableMap,
  cw_StableMap$$call_info_table,cw_StableMap$$call_info_index,
  cw_StableMap$$instanceof_table,cw_StableMap$$instanceof_index,
  &c_StableMap::s_class_name,
  0,&ci_StableMap$$__construct,0,0,0x0,
  &c_StableMap::s_cls
};
ObjectData *coo_DOMDocument() {
  return NEWOBJ(c_DOMDocument)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DOMDocument)
extern const InstanceOfInfo cw_DOMDocument$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x3A043AAF,1,"DOMDocument",&cw_DOMDocument},
};
const int cw_DOMDocument$$instanceof_index[] = {
  3,
  -1,-1,0,1,
};
extern const CallInfo ci_DOMDocument$$createtextnode = { (void*)&c_DOMDocument::i_createtextnode, (void*)&c_DOMDocument::ifa_createtextnode, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$getelementsbytagname = { (void*)&c_DOMDocument::i_getelementsbytagname, (void*)&c_DOMDocument::ifa_getelementsbytagname, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$relaxngvalidatesource = { (void*)&c_DOMDocument::i_relaxngvalidatesource, (void*)&c_DOMDocument::ifa_relaxngvalidatesource, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$importnode = { (void*)&c_DOMDocument::i_importnode, (void*)&c_DOMDocument::ifa_importnode, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createprocessinginstruction = { (void*)&c_DOMDocument::i_createprocessinginstruction, (void*)&c_DOMDocument::ifa_createprocessinginstruction, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createelement = { (void*)&c_DOMDocument::i_createelement, (void*)&c_DOMDocument::ifa_createelement, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createcdatasection = { (void*)&c_DOMDocument::i_createcdatasection, (void*)&c_DOMDocument::ifa_createcdatasection, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$getelementsbytagnamens = { (void*)&c_DOMDocument::i_getelementsbytagnamens, (void*)&c_DOMDocument::ifa_getelementsbytagnamens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$validate = { (void*)&c_DOMDocument::i_validate, (void*)&c_DOMDocument::ifa_validate, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$__construct = { (void*)&c_DOMDocument::i___construct, (void*)&c_DOMDocument::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$savehtml = { (void*)&c_DOMDocument::i_savehtml, (void*)&c_DOMDocument::ifa_savehtml, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$relaxngvalidate = { (void*)&c_DOMDocument::i_relaxngvalidate, (void*)&c_DOMDocument::ifa_relaxngvalidate, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$loadhtmlfile = { (void*)&c_DOMDocument::i_loadhtmlfile, (void*)&c_DOMDocument::ifa_loadhtmlfile, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createattribute = { (void*)&c_DOMDocument::i_createattribute, (void*)&c_DOMDocument::ifa_createattribute, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$loadxml = { (void*)&c_DOMDocument::i_loadxml, (void*)&c_DOMDocument::ifa_loadxml, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$schemavalidate = { (void*)&c_DOMDocument::i_schemavalidate, (void*)&c_DOMDocument::ifa_schemavalidate, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createcomment = { (void*)&c_DOMDocument::i_createcomment, (void*)&c_DOMDocument::ifa_createcomment, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$save = { (void*)&c_DOMDocument::i_save, (void*)&c_DOMDocument::ifa_save, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$__set = { (void*)&c_DOMDocument::i___set, (void*)&c_DOMDocument::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$loadhtml = { (void*)&c_DOMDocument::i_loadhtml, (void*)&c_DOMDocument::ifa_loadhtml, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createentityreference = { (void*)&c_DOMDocument::i_createentityreference, (void*)&c_DOMDocument::ifa_createentityreference, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$__get = { (void*)&c_DOMDocument::i___get, (void*)&c_DOMDocument::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$__isset = { (void*)&c_DOMDocument::i___isset, (void*)&c_DOMDocument::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$schemavalidatesource = { (void*)&c_DOMDocument::i_schemavalidatesource, (void*)&c_DOMDocument::ifa_schemavalidatesource, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$normalizedocument = { (void*)&c_DOMDocument::i_normalizedocument, (void*)&c_DOMDocument::ifa_normalizedocument, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$getelementbyid = { (void*)&c_DOMDocument::i_getelementbyid, (void*)&c_DOMDocument::ifa_getelementbyid, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$savehtmlfile = { (void*)&c_DOMDocument::i_savehtmlfile, (void*)&c_DOMDocument::ifa_savehtmlfile, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$load = { (void*)&c_DOMDocument::i_load, (void*)&c_DOMDocument::ifa_load, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createattributens = { (void*)&c_DOMDocument::i_createattributens, (void*)&c_DOMDocument::ifa_createattributens, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$xinclude = { (void*)&c_DOMDocument::i_xinclude, (void*)&c_DOMDocument::ifa_xinclude, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createelementns = { (void*)&c_DOMDocument::i_createelementns, (void*)&c_DOMDocument::ifa_createelementns, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$registernodeclass = { (void*)&c_DOMDocument::i_registernodeclass, (void*)&c_DOMDocument::ifa_registernodeclass, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$savexml = { (void*)&c_DOMDocument::i_savexml, (void*)&c_DOMDocument::ifa_savexml, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMDocument$$createdocumentfragment = { (void*)&c_DOMDocument::i_createdocumentfragment, (void*)&c_DOMDocument::ifa_createdocumentfragment, 0, 4, 0x0000000000000000LL};
Variant c_DOMDocument::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMDocument::i_createattribute(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createattribute);
}
Variant c_DOMDocument::i_createattributens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createattributens);
}
Variant c_DOMDocument::i_createcdatasection(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createcdatasection);
}
Variant c_DOMDocument::i_createcomment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createcomment);
}
Variant c_DOMDocument::i_createdocumentfragment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createdocumentfragment);
}
Variant c_DOMDocument::i_createelement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createelement);
}
Variant c_DOMDocument::i_createelementns(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createelementns);
}
Variant c_DOMDocument::i_createentityreference(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createentityreference);
}
Variant c_DOMDocument::i_createprocessinginstruction(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createprocessinginstruction);
}
Variant c_DOMDocument::i_createtextnode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_createtextnode);
}
Variant c_DOMDocument::i_getelementbyid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getelementbyid);
}
Variant c_DOMDocument::i_getelementsbytagname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getelementsbytagname);
}
Variant c_DOMDocument::i_getelementsbytagnamens(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getelementsbytagnamens);
}
Variant c_DOMDocument::i_importnode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_importnode);
}
Variant c_DOMDocument::i_load(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_load);
}
Variant c_DOMDocument::i_loadhtml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_loadhtml);
}
Variant c_DOMDocument::i_loadhtmlfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_loadhtmlfile);
}
Variant c_DOMDocument::i_loadxml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_loadxml);
}
Variant c_DOMDocument::i_normalizedocument(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_normalizedocument);
}
Variant c_DOMDocument::i_registernodeclass(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_registernodeclass);
}
Variant c_DOMDocument::i_relaxngvalidate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_relaxngvalidate);
}
Variant c_DOMDocument::i_relaxngvalidatesource(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_relaxngvalidatesource);
}
Variant c_DOMDocument::i_save(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_save);
}
Variant c_DOMDocument::i_savehtml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_savehtml);
}
Variant c_DOMDocument::i_savehtmlfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_savehtmlfile);
}
Variant c_DOMDocument::i_savexml(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_savexml);
}
Variant c_DOMDocument::i_schemavalidate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_schemavalidate);
}
Variant c_DOMDocument::i_schemavalidatesource(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_schemavalidatesource);
}
Variant c_DOMDocument::i_validate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_validate);
}
Variant c_DOMDocument::i_xinclude(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_xinclude);
}
Variant c_DOMDocument::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMDocument::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMDocument::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMDocument::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("__construct", 2, 1);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_DOMDocument::ifa_createattribute(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createattribute, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("createattribute", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_createattribute(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createattributens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createattributens, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("createattributens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_createattributens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createcdatasection(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createcdatasection, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("createcdatasection", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_createcdatasection(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createcomment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createcomment, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("createcomment", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_createcomment(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createdocumentfragment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createdocumentfragment, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("createdocumentfragment", 0, 1);
  return (self->t_createdocumentfragment());
}
Variant NEVER_INLINE c_DOMDocument::ifa_createelement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createelement, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("createelement", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_createelement(arg0));
  CVarRef arg1(a1);
  return (self->t_createelement(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createelementns(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createelementns, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("createelementns", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_createelementns(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_createelementns(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createentityreference(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createentityreference, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("createentityreference", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_createentityreference(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createprocessinginstruction(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createprocessinginstruction, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("createprocessinginstruction", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_createprocessinginstruction(arg0));
  CVarRef arg1(a1);
  return (self->t_createprocessinginstruction(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_createtextnode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createtextnode, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("createtextnode", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_createtextnode(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_getelementbyid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getelementbyid, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getelementbyid", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getelementbyid(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_getelementsbytagname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getelementsbytagname, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getelementsbytagname", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getelementsbytagname(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_getelementsbytagnamens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getelementsbytagnamens, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("getelementsbytagnamens", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_getelementsbytagnamens(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_importnode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_importnode, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("importnode", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_importnode(arg0));
  CVarRef arg1(a1);
  return (self->t_importnode(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_load(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_load, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("load", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_load(arg0));
  CVarRef arg1(a1);
  return (self->t_load(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_loadhtml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadhtml, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("loadhtml", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_loadhtml(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_loadhtmlfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadhtmlfile, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("loadhtmlfile", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_loadhtmlfile(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_loadxml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadxml, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("loadxml", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_loadxml(arg0));
  CVarRef arg1(a1);
  return (self->t_loadxml(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_normalizedocument(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_normalizedocument, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("normalizedocument", 0, 1);
  return (self->t_normalizedocument(), null);
}
Variant NEVER_INLINE c_DOMDocument::ifa_registernodeclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registernodeclass, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("registernodeclass", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_registernodeclass(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_relaxngvalidate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_relaxngvalidate, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("relaxngvalidate", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_relaxngvalidate(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_relaxngvalidatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_relaxngvalidatesource, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("relaxngvalidatesource", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_relaxngvalidatesource(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_save(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_save, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("save", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_save(arg0));
  CVarRef arg1(a1);
  return (self->t_save(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_savehtml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_savehtml, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("savehtml", 0, 1);
  return (self->t_savehtml());
}
Variant NEVER_INLINE c_DOMDocument::ifa_savehtmlfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_savehtmlfile, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("savehtmlfile", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_savehtmlfile(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_savexml(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_savexml, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("savexml", 2, 1);
  if (count <= 0) return (self->t_savexml());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_savexml(arg0));
  CVarRef arg1(a1);
  return (self->t_savexml(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa_schemavalidate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_schemavalidate, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("schemavalidate", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_schemavalidate(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_schemavalidatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_schemavalidatesource, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("schemavalidatesource", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_schemavalidatesource(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa_validate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_validate, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("validate", 0, 1);
  return (self->t_validate());
}
Variant NEVER_INLINE c_DOMDocument::ifa_xinclude(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_xinclude, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("xinclude", 1, 1);
  if (count <= 0) return (self->t_xinclude());
  CVarRef arg0(a0);
  return (self->t_xinclude(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMDocument::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMDocument::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMDocument);
  }
  c_DOMDocument *self ATTRIBUTE_UNUSED (static_cast<c_DOMDocument*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMDocument$$call_info_table[] = {
  { 0x6601E385, 1, 14, "getElementById", &ci_DOMDocument$$getelementbyid },
  { 0x4E4A4E8A, 1, 8, "xinclude", &ci_DOMDocument$$xinclude },
  { 0x3EBF7F0D, 1, 18, "createCDATASection", &ci_DOMDocument$$createcdatasection },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMDocument$$__get },
  { 0x04EC5011, 1, 20, "schemaValidateSource", &ci_DOMDocument$$schemavalidatesource },
  { 0x246D0514, 1, 4, "save", &ci_DOMDocument$$save },
  { 0x275AEB15, 0, 17, "createAttributens", &ci_DOMDocument$$createattributens },
  { 0x03340395, 1, 5, "__set", &ci_DOMDocument$$__set },
  { 0x7CD10A1C, 1, 15, "relaxNGValidate", &ci_DOMDocument$$relaxngvalidate },
  { 0x35B39FA2, 0, 13, "createElement", &ci_DOMDocument$$createelement },
  { 0x7C8404A2, 1, 8, "loadHTML", &ci_DOMDocument$$loadhtml },
  { 0x0FE9A82C, 0, 15, "createAttribute", &ci_DOMDocument$$createattribute },
  { 0x6E006FAC, 1, 21, "relaxNGValidateSource", &ci_DOMDocument$$relaxngvalidatesource },
  { 0x388CD42F, 0, 10, "importNode", &ci_DOMDocument$$importnode },
  { 0x13F14AAF, 1, 12, "loadHTMLFile", &ci_DOMDocument$$loadhtmlfile },
  { 0x2B7AE431, 1, 7, "loadXML", &ci_DOMDocument$$loadxml },
  { 0x4AD09832, 1, 21, "createEntityReference", &ci_DOMDocument$$createentityreference },
  { 0x2262F737, 1, 8, "validate", &ci_DOMDocument$$validate },
  { 0x46FCC0C7, 1, 13, "createComment", &ci_DOMDocument$$createcomment },
  { 0x2BDC5648, 1, 14, "schemaValidate", &ci_DOMDocument$$schemavalidate },
  { 0x6CAB93CA, 0, 20, "getElementsByTagName", &ci_DOMDocument$$getelementsbytagname },
  { 0x4A4817CA, 1, 22, "getElementsByTagNameNS", &ci_DOMDocument$$getelementsbytagnamens },
  { 0x3ED3054D, 1, 12, "saveHTMLFile", &ci_DOMDocument$$savehtmlfile },
  { 0x058310D3, 1, 8, "saveHTML", &ci_DOMDocument$$savehtml },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMDocument$$__construct },
  { 0x4A0943DF, 1, 4, "load", &ci_DOMDocument$$load },
  { 0x5DDC32E5, 1, 7, "saveXML", &ci_DOMDocument$$savexml },
  { 0x32FE3D6A, 1, 17, "normalizeDocument", &ci_DOMDocument$$normalizedocument },
  { 0x16B7EBEB, 1, 15, "createElementNS", &ci_DOMDocument$$createelementns },
  { 0x46E7BA6D, 1, 27, "createProcessingInstruction", &ci_DOMDocument$$createprocessinginstruction },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMDocument$$__isset },
  { 0x0E1EB375, 1, 17, "registerNodeClass", &ci_DOMDocument$$registernodeclass },
  { 0x74EA46F8, 1, 22, "createDocumentFragment", &ci_DOMDocument$$createdocumentfragment },
  { 0x1855D7FB, 1, 14, "createTextNode", &ci_DOMDocument$$createtextnode },
};
extern const int cw_DOMDocument$$call_info_index[] = {
  127,
  -1,-1,-1,-1,-1,0,-1,-1,
  -1,-1,1,-1,-1,2,-1,3,
  -1,4,-1,-1,5,6,-1,-1,
  -1,-1,-1,-1,8,-1,-1,-1,
  -1,-1,9,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,11,-1,-1,13,
  -1,15,16,-1,-1,-1,-1,17,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,18,
  19,-1,20,-1,-1,22,-1,-1,
  -1,-1,-1,23,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,24,
  -1,-1,-1,-1,-1,26,-1,-1,
  -1,-1,27,28,-1,29,30,-1,
  -1,-1,-1,-1,-1,31,-1,-1,
  32,-1,-1,33,-1,-1,-1,-1,

};
c_DOMDocument *c_DOMDocument::create(String a0, String a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_DOMDocument$$call_info_table[];
extern const int cw_DOMDocument$$call_info_index[];
extern const InstanceOfInfo cw_DOMDocument$$instanceof_table[];
extern const int cw_DOMDocument$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMDocument = {
  (ObjectData*(*)(ObjectData*))coo_DOMDocument,
  cw_DOMDocument$$call_info_table,cw_DOMDocument$$call_info_index,
  cw_DOMDocument$$instanceof_table,cw_DOMDocument$$instanceof_index,
  &c_DOMDocument::s_class_name,
  0,&ci_DOMDocument$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMDocument::s_cls
};
ObjectData *coo_Vector() {
  return NEWOBJ(c_Vector)();
}
IMPLEMENT_CLASS(Vector)
extern const InstanceOfInfo cw_Vector$$instanceof_table[] = {
  {0x45E6F0A1,0,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x5EE263D1,1,"Countable",(const ObjectStaticCallbacks*)2},
  {0x3C5F1842,1,"Vector",&cw_Vector},
  {0x3FB63255,1,"Iterable",(const ObjectStaticCallbacks*)2},
  {0x40363017,1,"IteratorAggregate",(const ObjectStaticCallbacks*)2},
};
const int cw_Vector$$instanceof_index[] = {
  15,
  -1,0,2,-1,-1,3,-1,4,
  -1,-1,-1,-1,-1,-1,-1,-1,

};
extern const CallInfo ci_Vector$$pop = { (void*)&c_Vector::i_pop, (void*)&c_Vector::ifa_pop, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$__tostring = { (void*)&c_Vector::i___tostring, (void*)&c_Vector::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$shuffle = { (void*)&c_Vector::i_shuffle, (void*)&c_Vector::ifa_shuffle, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$clear = { (void*)&c_Vector::i_clear, (void*)&c_Vector::ifa_clear, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$linearsearch = { (void*)&c_Vector::i_linearsearch, (void*)&c_Vector::ifa_linearsearch, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$fromvector = { (void*)&c_Vector::i_fromvector, (void*)&c_Vector::ifa_fromvector, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$__construct = { (void*)&c_Vector::i___construct, (void*)&c_Vector::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$put = { (void*)&c_Vector::i_put, (void*)&c_Vector::ifa_put, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$__unset = { (void*)&c_Vector::i___unset, (void*)&c_Vector::ifa___unset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$append = { (void*)&c_Vector::i_append, (void*)&c_Vector::ifa_append, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$get = { (void*)&c_Vector::i_get, (void*)&c_Vector::ifa_get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$contains = { (void*)&c_Vector::i_contains, (void*)&c_Vector::ifa_contains, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$__set = { (void*)&c_Vector::i___set, (void*)&c_Vector::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$splice = { (void*)&c_Vector::i_splice, (void*)&c_Vector::ifa_splice, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$slice = { (void*)&c_Vector::i_slice, (void*)&c_Vector::ifa_slice, 3, 12, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$add = { (void*)&c_Vector::i_add, (void*)&c_Vector::ifa_add, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$__get = { (void*)&c_Vector::i___get, (void*)&c_Vector::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$__isset = { (void*)&c_Vector::i___isset, (void*)&c_Vector::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$at = { (void*)&c_Vector::i_at, (void*)&c_Vector::ifa_at, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$count = { (void*)&c_Vector::i_count, (void*)&c_Vector::ifa_count, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$fromarray = { (void*)&c_Vector::i_fromarray, (void*)&c_Vector::ifa_fromarray, 1, 12, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$sort = { (void*)&c_Vector::i_sort, (void*)&c_Vector::ifa_sort, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$isempty = { (void*)&c_Vector::i_isempty, (void*)&c_Vector::ifa_isempty, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$resize = { (void*)&c_Vector::i_resize, (void*)&c_Vector::ifa_resize, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$reverse = { (void*)&c_Vector::i_reverse, (void*)&c_Vector::ifa_reverse, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$getiterator = { (void*)&c_Vector::i_getiterator, (void*)&c_Vector::ifa_getiterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Vector$$toarray = { (void*)&c_Vector::i_toarray, (void*)&c_Vector::ifa_toarray, 0, 4, 0x0000000000000000LL};
Variant c_Vector::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Vector::i_isempty(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isempty);
}
Variant c_Vector::i_count(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_count);
}
Variant c_Vector::i_at(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_at);
}
Variant c_Vector::i_get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get);
}
Variant c_Vector::i_put(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_put);
}
Variant c_Vector::i_clear(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_clear);
}
Variant c_Vector::i_contains(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_contains);
}
Variant c_Vector::i_append(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_append);
}
Variant c_Vector::i_add(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_add);
}
Variant c_Vector::i_pop(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_pop);
}
Variant c_Vector::i_resize(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_resize);
}
Variant c_Vector::i_toarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_toarray);
}
Variant c_Vector::i_getiterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getiterator);
}
Variant c_Vector::i_sort(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_sort);
}
Variant c_Vector::i_reverse(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_reverse);
}
Variant c_Vector::i_splice(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_splice);
}
Variant c_Vector::i_linearsearch(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_linearsearch);
}
Variant c_Vector::i_shuffle(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_shuffle);
}
Variant c_Vector::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_Vector::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_Vector::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_Vector::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant c_Vector::i___unset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___unset);
}
Variant c_Vector::i_fromarray(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fromarray);
}
Variant c_Vector::i_fromvector(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fromvector);
}
Variant c_Vector::i_slice(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_slice);
}
Variant NEVER_INLINE c_Vector::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_Vector::ifa_isempty(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isempty, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("isempty", 0, 1);
  return (self->t_isempty());
}
Variant NEVER_INLINE c_Vector::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("count", 0, 1);
  return (self->t_count());
}
Variant NEVER_INLINE c_Vector::ifa_at(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_at, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("at", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_at(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_get(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_put(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_put, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("put", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_put(arg0, arg1));
}
Variant NEVER_INLINE c_Vector::ifa_clear(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clear, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("clear", 0, 1);
  return (self->t_clear());
}
Variant NEVER_INLINE c_Vector::ifa_contains(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_contains, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("contains", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_contains(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_append(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("append", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_append(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_add(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_add, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("add", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_add(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_pop(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_pop, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("pop", 0, 1);
  return (self->t_pop());
}
Variant NEVER_INLINE c_Vector::ifa_resize(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_resize, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("resize", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_resize(arg0, arg1), null);
}
Variant NEVER_INLINE c_Vector::ifa_toarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_toarray, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("toarray", 0, 1);
  return (self->t_toarray());
}
Variant NEVER_INLINE c_Vector::ifa_getiterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getiterator, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getiterator", 0, 1);
  return (self->t_getiterator());
}
Variant NEVER_INLINE c_Vector::ifa_sort(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_sort, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("sort", 1, 1);
  if (count <= 0) return (self->t_sort(), null);
  CVarRef arg0(a0);
  return (self->t_sort(arg0), null);
}
Variant NEVER_INLINE c_Vector::ifa_reverse(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_reverse, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("reverse", 0, 1);
  return (self->t_reverse(), null);
}
Variant NEVER_INLINE c_Vector::ifa_splice(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_splice, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("splice", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_splice(arg0), null);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_splice(arg0, arg1), null);
  CVarRef arg2(a2);
  return (self->t_splice(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_Vector::ifa_linearsearch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_linearsearch, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("linearsearch", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_linearsearch(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_shuffle(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_shuffle, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("shuffle", 0, 1);
  return (self->t_shuffle(), null);
}
Variant NEVER_INLINE c_Vector::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__tostring", 0, 1);
  return (self->t___tostring());
}
Variant NEVER_INLINE c_Vector::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_Vector::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_Vector::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
Variant NEVER_INLINE c_Vector::ifa___unset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___unset, coo_Vector);
  }
  c_Vector *self ATTRIBUTE_UNUSED (static_cast<c_Vector*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__unset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___unset(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_fromarray(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("fromarray", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_Vector::t_fromarray(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_fromvector(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("fromvector", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (c_Vector::t_fromvector(arg0));
}
Variant NEVER_INLINE c_Vector::ifa_slice(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("slice", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (c_Vector::t_slice(arg0, arg1));
  CVarRef arg2(a2);
  return (c_Vector::t_slice(arg0, arg1, arg2));
}
extern const MethodCallInfoTable cw_Vector$$call_info_table[] = {
  { 0x2DC69EC2, 1, 6, "append", &ci_Vector$$append },
  { 0x32A12503, 1, 11, "getIterator", &ci_Vector$$getiterator },
  { 0x295C3D07, 1, 9, "fromArray", &ci_Vector$$fromarray },
  { 0x0B55E088, 1, 12, "linearSearch", &ci_Vector$$linearsearch },
  { 0x7C79458B, 1, 3, "add", &ci_Vector$$add },
  { 0x74FA338F, 1, 5, "__get", &ci_Vector$$__get },
  { 0x65104D10, 0, 5, "count", &ci_Vector$$count },
  { 0x7A22D290, 1, 8, "contains", &ci_Vector$$contains },
  { 0x1763E711, 1, 6, "splice", &ci_Vector$$splice },
  { 0x3CD2AC13, 0, 3, "pop", &ci_Vector$$pop },
  { 0x14B34A13, 1, 10, "__toString", &ci_Vector$$__tostring },
  { 0x03340395, 1, 5, "__set", &ci_Vector$$__set },
  { 0x3FA87C16, 1, 7, "reverse", &ci_Vector$$reverse },
  { 0x268F3557, 1, 5, "slice", &ci_Vector$$slice },
  { 0x49D8CC9A, 1, 3, "put", &ci_Vector$$put },
  { 0x49A2079B, 1, 7, "__unset", &ci_Vector$$__unset },
  { 0x229C615F, 1, 11, "__construct", &ci_Vector$$__construct },
  { 0x28B0F1E0, 0, 6, "resize", &ci_Vector$$resize },
  { 0x55C61DA0, 1, 7, "shuffle", &ci_Vector$$shuffle },
  { 0x5A226667, 1, 5, "clear", &ci_Vector$$clear },
  { 0x5FC265E8, 0, 7, "isEmpty", &ci_Vector$$isempty },
  { 0x569AD828, 1, 3, "get", &ci_Vector$$get },
  { 0x0E1DBB2A, 1, 4, "sort", &ci_Vector$$sort },
  { 0x2E2178EE, 1, 7, "__isset", &ci_Vector$$__isset },
  { 0x3109B0F2, 1, 7, "toArray", &ci_Vector$$toarray },
  { 0x2439E4B7, 1, 2, "at", &ci_Vector$$at },
  { 0x01C712FE, 1, 10, "fromVector", &ci_Vector$$fromvector },
};
extern const int cw_Vector$$call_info_index[] = {
  63,
  -1,-1,0,1,-1,-1,-1,2,
  3,-1,-1,4,-1,-1,-1,5,
  6,8,-1,9,-1,11,12,13,
  -1,-1,14,15,-1,-1,-1,16,
  17,-1,-1,-1,-1,-1,-1,19,
  20,-1,22,-1,-1,-1,23,-1,
  -1,-1,24,-1,-1,-1,-1,25,
  -1,-1,-1,-1,-1,-1,26,-1,

};
c_Vector *c_Vector::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_Vector$$call_info_table[];
extern const int cw_Vector$$call_info_index[];
extern const InstanceOfInfo cw_Vector$$instanceof_table[];
extern const int cw_Vector$$instanceof_index[];
const ObjectStaticCallbacks cw_Vector = {
  (ObjectData*(*)(ObjectData*))coo_Vector,
  cw_Vector$$call_info_table,cw_Vector$$call_info_index,
  cw_Vector$$instanceof_table,cw_Vector$$instanceof_index,
  &c_Vector::s_class_name,
  0,&ci_Vector$$__construct,0,0,0x0,
  &c_Vector::s_cls
};
ObjectData *coo_Memcache() {
  return NEWOBJ(c_Memcache)();
}
IMPLEMENT_CLASS(Memcache)
extern const InstanceOfInfo cw_Memcache$$instanceof_table[] = {
  {0x059C72D0,1,"Memcache",&cw_Memcache},
};
const int cw_Memcache$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_Memcache$$setcompressthreshold = { (void*)&c_Memcache::i_setcompressthreshold, (void*)&c_Memcache::ifa_setcompressthreshold, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$close = { (void*)&c_Memcache::i_close, (void*)&c_Memcache::ifa_close, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$increment = { (void*)&c_Memcache::i_increment, (void*)&c_Memcache::ifa_increment, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$pconnect = { (void*)&c_Memcache::i_pconnect, (void*)&c_Memcache::ifa_pconnect, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$flush = { (void*)&c_Memcache::i_flush, (void*)&c_Memcache::ifa_flush, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$connect = { (void*)&c_Memcache::i_connect, (void*)&c_Memcache::ifa_connect, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$getserverstatus = { (void*)&c_Memcache::i_getserverstatus, (void*)&c_Memcache::ifa_getserverstatus, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$getversion = { (void*)&c_Memcache::i_getversion, (void*)&c_Memcache::ifa_getversion, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$delete = { (void*)&c_Memcache::i_delete, (void*)&c_Memcache::ifa_delete, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$__construct = { (void*)&c_Memcache::i___construct, (void*)&c_Memcache::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$getextendedstats = { (void*)&c_Memcache::i_getextendedstats, (void*)&c_Memcache::ifa_getextendedstats, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$getstats = { (void*)&c_Memcache::i_getstats, (void*)&c_Memcache::ifa_getstats, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$__destruct = { (void*)&c_Memcache::i___destruct, (void*)&c_Memcache::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$add = { (void*)&c_Memcache::i_add, (void*)&c_Memcache::ifa_add, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$set = { (void*)&c_Memcache::i_set, (void*)&c_Memcache::ifa_set, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$setserverparams = { (void*)&c_Memcache::i_setserverparams, (void*)&c_Memcache::ifa_setserverparams, 6, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$decrement = { (void*)&c_Memcache::i_decrement, (void*)&c_Memcache::ifa_decrement, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$get = { (void*)&c_Memcache::i_get, (void*)&c_Memcache::ifa_get, 2, 4, 0x0000000000000002LL};
extern const CallInfo ci_Memcache$$replace = { (void*)&c_Memcache::i_replace, (void*)&c_Memcache::ifa_replace, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$addserver = { (void*)&c_Memcache::i_addserver, (void*)&c_Memcache::ifa_addserver, 9, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcache$$setoptimeout = { (void*)&c_Memcache::i_setoptimeout, (void*)&c_Memcache::ifa_setoptimeout, 1, 4, 0x0000000000000000LL};
Variant c_Memcache::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Memcache::i_connect(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_connect);
}
Variant c_Memcache::i_pconnect(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_pconnect);
}
Variant c_Memcache::i_add(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_add);
}
Variant c_Memcache::i_set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_set);
}
Variant c_Memcache::i_replace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_replace);
}
Variant c_Memcache::i_get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get);
}
Variant c_Memcache::i_delete(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_delete);
}
Variant c_Memcache::i_increment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_increment);
}
Variant c_Memcache::i_decrement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_decrement);
}
Variant c_Memcache::i_getversion(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getversion);
}
Variant c_Memcache::i_flush(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_flush);
}
Variant c_Memcache::i_setoptimeout(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setoptimeout);
}
Variant c_Memcache::i_close(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_close);
}
Variant c_Memcache::i_getserverstatus(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getserverstatus);
}
Variant c_Memcache::i_setcompressthreshold(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setcompressthreshold);
}
Variant c_Memcache::i_getstats(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstats);
}
Variant c_Memcache::i_getextendedstats(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getextendedstats);
}
Variant c_Memcache::i_setserverparams(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setserverparams);
}
Variant c_Memcache::i_addserver(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_addserver, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1 || count > 9)) return throw_wrong_arguments("addserver", count, 1, 9, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    if (count <= 1) return (self->t_addserver(arg0));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 2) return (self->t_addserver(arg0, arg1));
    CVarRef arg2((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 3) return (self->t_addserver(arg0, arg1, arg2));
    CVarRef arg3((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 4) return (self->t_addserver(arg0, arg1, arg2, arg3));
    CVarRef arg4((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 5) return (self->t_addserver(arg0, arg1, arg2, arg3, arg4));
    CVarRef arg5((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 6) return (self->t_addserver(arg0, arg1, arg2, arg3, arg4, arg5));
    CVarRef arg6((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 7) return (self->t_addserver(arg0, arg1, arg2, arg3, arg4, arg5, arg6));
    CVarRef arg7((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 8) return (self->t_addserver(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7));
    CVarRef arg8((ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_addserver(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8));
  }
}
Variant c_Memcache::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_Memcache::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_Memcache::ifa_connect(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_connect, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("connect", count, 1, 4, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_connect(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_connect(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_connect(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_connect(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcache::ifa_pconnect(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_pconnect, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("pconnect", count, 1, 4, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_pconnect(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_pconnect(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_pconnect(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_pconnect(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcache::ifa_add(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_add, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 4)) return throw_wrong_arguments("add", count, 2, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_add(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_add(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_add(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcache::ifa_set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_set, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 4)) return throw_wrong_arguments("set", count, 2, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_set(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_set(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_set(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcache::ifa_replace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_replace, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 4)) return throw_wrong_arguments("replace", count, 2, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_replace(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_replace(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_replace(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcache::ifa_get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("get", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_get(arg0));
  VRefParam arg1(vref(a1));
  return (self->t_get(arg0, arg1));
}
Variant NEVER_INLINE c_Memcache::ifa_delete(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_delete, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("delete", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_delete(arg0));
  CVarRef arg1(a1);
  return (self->t_delete(arg0, arg1));
}
Variant NEVER_INLINE c_Memcache::ifa_increment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_increment, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("increment", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_increment(arg0));
  CVarRef arg1(a1);
  return (self->t_increment(arg0, arg1));
}
Variant NEVER_INLINE c_Memcache::ifa_decrement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_decrement, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("decrement", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_decrement(arg0));
  CVarRef arg1(a1);
  return (self->t_decrement(arg0, arg1));
}
Variant NEVER_INLINE c_Memcache::ifa_getversion(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getversion, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getversion", 0, 1);
  return (self->t_getversion());
}
Variant NEVER_INLINE c_Memcache::ifa_flush(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_flush, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("flush", 1, 1);
  if (count <= 0) return (self->t_flush());
  CVarRef arg0(a0);
  return (self->t_flush(arg0));
}
Variant NEVER_INLINE c_Memcache::ifa_setoptimeout(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setoptimeout, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("setoptimeout", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_setoptimeout(arg0));
}
Variant NEVER_INLINE c_Memcache::ifa_close(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_close, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("close", 0, 1);
  return (self->t_close());
}
Variant NEVER_INLINE c_Memcache::ifa_getserverstatus(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getserverstatus, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("getserverstatus", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_getserverstatus(arg0));
  CVarRef arg1(a1);
  return (self->t_getserverstatus(arg0, arg1));
}
Variant NEVER_INLINE c_Memcache::ifa_setcompressthreshold(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setcompressthreshold, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("setcompressthreshold", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_setcompressthreshold(arg0));
  CVarRef arg1(a1);
  return (self->t_setcompressthreshold(arg0, arg1));
}
Variant NEVER_INLINE c_Memcache::ifa_getstats(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstats, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("getstats", 3, 1);
  if (count <= 0) return (self->t_getstats());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_getstats(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_getstats(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_getstats(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcache::ifa_getextendedstats(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getextendedstats, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("getextendedstats", 3, 1);
  if (count <= 0) return (self->t_getextendedstats());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_getextendedstats(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_getextendedstats(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_getextendedstats(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcache::ifa_setserverparams(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setserverparams, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_wrong_arguments("setserverparams", count, 1, 6, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_setserverparams(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_setserverparams(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_setserverparams(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_setserverparams(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  if (count <= 5) return (self->t_setserverparams(arg0, arg1, arg2, arg3, arg4));
  CVarRef arg5(a5);
  return (self->t_setserverparams(arg0, arg1, arg2, arg3, arg4, arg5));
}
Variant NEVER_INLINE c_Memcache::ifa_addserver(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addserver, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_wrong_arguments("addserver", count, 1, 9, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_addserver(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_addserver(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_addserver(arg0, arg1, arg2));
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_addserver(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  if (count <= 5) return (self->t_addserver(arg0, arg1, arg2, arg3, arg4));
  CVarRef arg5(a5);
  return (self->t_addserver(arg0, arg1, arg2, arg3, arg4, arg5));
}
Variant NEVER_INLINE c_Memcache::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_Memcache);
  }
  c_Memcache *self ATTRIBUTE_UNUSED (static_cast<c_Memcache*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_Memcache$$call_info_table[] = {
  { 0x3EBF5341, 1, 5, "close", &ci_Memcache$$close },
  { 0x280A6146, 1, 7, "replace", &ci_Memcache$$replace },
  { 0x5F7945C7, 1, 9, "increment", &ci_Memcache$$increment },
  { 0x7C79458B, 0, 3, "add", &ci_Memcache$$add },
  { 0x1661DE0B, 1, 12, "setoptimeout", &ci_Memcache$$setoptimeout },
  { 0x3B376C4F, 1, 15, "getserverstatus", &ci_Memcache$$getserverstatus },
  { 0x28A8EA92, 1, 20, "setcompressthreshold", &ci_Memcache$$setcompressthreshold },
  { 0x7A6F55D3, 1, 6, "delete", &ci_Memcache$$delete },
  { 0x3BE3D316, 1, 10, "getversion", &ci_Memcache$$getversion },
  { 0x7CE59BD9, 1, 8, "getstats", &ci_Memcache$$getstats },
  { 0x2BA4C1DA, 1, 9, "decrement", &ci_Memcache$$decrement },
  { 0x229C615F, 1, 11, "__construct", &ci_Memcache$$__construct },
  { 0x42185621, 1, 3, "set", &ci_Memcache$$set },
  { 0x06BF7765, 1, 16, "getextendedstats", &ci_Memcache$$getextendedstats },
  { 0x6237AAE6, 1, 9, "addserver", &ci_Memcache$$addserver },
  { 0x569AD828, 1, 3, "get", &ci_Memcache$$get },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_Memcache$$__destruct },
  { 0x13CD7279, 1, 8, "pconnect", &ci_Memcache$$pconnect },
  { 0x5B005E7A, 1, 5, "flush", &ci_Memcache$$flush },
  { 0x0EFF92BD, 1, 15, "setserverparams", &ci_Memcache$$setserverparams },
  { 0x2D16D7FE, 1, 7, "connect", &ci_Memcache$$connect },
};
extern const int cw_Memcache$$call_info_index[] = {
  63,
  -1,0,-1,-1,-1,-1,1,2,
  -1,-1,-1,3,-1,-1,-1,5,
  -1,-1,6,7,-1,-1,8,-1,
  -1,9,10,-1,-1,-1,-1,11,
  -1,12,-1,-1,-1,13,14,-1,
  15,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,16,-1,-1,-1,-1,
  -1,17,18,-1,-1,19,20,-1,

};
c_Memcache *c_Memcache::create() {
  CountableHelper h(this);
  init();
  t___construct();
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_Memcache$$call_info_table[];
extern const int cw_Memcache$$call_info_index[];
extern const InstanceOfInfo cw_Memcache$$instanceof_table[];
extern const int cw_Memcache$$instanceof_index[];
const ObjectStaticCallbacks cw_Memcache = {
  (ObjectData*(*)(ObjectData*))coo_Memcache,
  cw_Memcache$$call_info_table,cw_Memcache$$call_info_index,
  cw_Memcache$$instanceof_table,cw_Memcache$$instanceof_index,
  &c_Memcache::s_class_name,
  0,&ci_Memcache$$__construct,0,0,0x0,
  &c_Memcache::s_cls
};
ObjectData *coo_Memcached() {
  return NEWOBJ(c_Memcached)();
}
IMPLEMENT_CLASS(Memcached)
extern const InstanceOfInfo cw_Memcached$$instanceof_table[] = {
  {0x4192034A,1,"Memcached",&cw_Memcached},
};
const int cw_Memcached$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_Memcached$$setmultibykey = { (void*)&c_Memcached::i_setmultibykey, (void*)&c_Memcached::ifa_setmultibykey, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getdelayedbykey = { (void*)&c_Memcached::i_getdelayedbykey, (void*)&c_Memcached::ifa_getdelayedbykey, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$setoption = { (void*)&c_Memcached::i_setoption, (void*)&c_Memcached::ifa_setoption, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$replacebykey = { (void*)&c_Memcached::i_replacebykey, (void*)&c_Memcached::ifa_replacebykey, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getmultibykey = { (void*)&c_Memcached::i_getmultibykey, (void*)&c_Memcached::ifa_getmultibykey, 4, 4, 0x0000000000000004LL};
extern const CallInfo ci_Memcached$$getresultmessage = { (void*)&c_Memcached::i_getresultmessage, (void*)&c_Memcached::ifa_getresultmessage, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getdelayed = { (void*)&c_Memcached::i_getdelayed, (void*)&c_Memcached::ifa_getdelayed, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$set = { (void*)&c_Memcached::i_set, (void*)&c_Memcached::ifa_set, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$decrement = { (void*)&c_Memcached::i_decrement, (void*)&c_Memcached::ifa_decrement, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getresultcode = { (void*)&c_Memcached::i_getresultcode, (void*)&c_Memcached::ifa_getresultcode, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$prependbykey = { (void*)&c_Memcached::i_prependbykey, (void*)&c_Memcached::ifa_prependbykey, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$__construct = { (void*)&c_Memcached::i___construct, (void*)&c_Memcached::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$appendbykey = { (void*)&c_Memcached::i_appendbykey, (void*)&c_Memcached::ifa_appendbykey, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$append = { (void*)&c_Memcached::i_append, (void*)&c_Memcached::ifa_append, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$addservers = { (void*)&c_Memcached::i_addservers, (void*)&c_Memcached::ifa_addservers, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getserverbykey = { (void*)&c_Memcached::i_getserverbykey, (void*)&c_Memcached::ifa_getserverbykey, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$get = { (void*)&c_Memcached::i_get, (void*)&c_Memcached::ifa_get, 3, 4, 0x0000000000000004LL};
extern const CallInfo ci_Memcached$$delete = { (void*)&c_Memcached::i_delete, (void*)&c_Memcached::ifa_delete, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getversion = { (void*)&c_Memcached::i_getversion, (void*)&c_Memcached::ifa_getversion, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getserverlist = { (void*)&c_Memcached::i_getserverlist, (void*)&c_Memcached::ifa_getserverlist, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$fetch = { (void*)&c_Memcached::i_fetch, (void*)&c_Memcached::ifa_fetch, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getoption = { (void*)&c_Memcached::i_getoption, (void*)&c_Memcached::ifa_getoption, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$cas = { (void*)&c_Memcached::i_cas, (void*)&c_Memcached::ifa_cas, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$casbykey = { (void*)&c_Memcached::i_casbykey, (void*)&c_Memcached::ifa_casbykey, 5, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getbykey = { (void*)&c_Memcached::i_getbykey, (void*)&c_Memcached::ifa_getbykey, 4, 4, 0x0000000000000008LL};
extern const CallInfo ci_Memcached$$increment = { (void*)&c_Memcached::i_increment, (void*)&c_Memcached::ifa_increment, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$setmulti = { (void*)&c_Memcached::i_setmulti, (void*)&c_Memcached::ifa_setmulti, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$add = { (void*)&c_Memcached::i_add, (void*)&c_Memcached::ifa_add, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$prepend = { (void*)&c_Memcached::i_prepend, (void*)&c_Memcached::ifa_prepend, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getmulti = { (void*)&c_Memcached::i_getmulti, (void*)&c_Memcached::ifa_getmulti, 3, 4, 0x0000000000000002LL};
extern const CallInfo ci_Memcached$$setbykey = { (void*)&c_Memcached::i_setbykey, (void*)&c_Memcached::ifa_setbykey, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$flush = { (void*)&c_Memcached::i_flush, (void*)&c_Memcached::ifa_flush, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$addserver = { (void*)&c_Memcached::i_addserver, (void*)&c_Memcached::ifa_addserver, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$deletebykey = { (void*)&c_Memcached::i_deletebykey, (void*)&c_Memcached::ifa_deletebykey, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$replace = { (void*)&c_Memcached::i_replace, (void*)&c_Memcached::ifa_replace, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$addbykey = { (void*)&c_Memcached::i_addbykey, (void*)&c_Memcached::ifa_addbykey, 4, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$getstats = { (void*)&c_Memcached::i_getstats, (void*)&c_Memcached::ifa_getstats, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Memcached$$fetchall = { (void*)&c_Memcached::i_fetchall, (void*)&c_Memcached::ifa_fetchall, 0, 4, 0x0000000000000000LL};
Variant c_Memcached::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Memcached::i_add(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_add);
}
Variant c_Memcached::i_addbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addbykey);
}
Variant c_Memcached::i_addserver(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addserver);
}
Variant c_Memcached::i_addservers(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addservers);
}
Variant c_Memcached::i_append(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_append);
}
Variant c_Memcached::i_appendbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_appendbykey);
}
Variant c_Memcached::i_cas(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_cas);
}
Variant c_Memcached::i_casbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_casbykey);
}
Variant c_Memcached::i_decrement(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_decrement);
}
Variant c_Memcached::i_delete(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_delete);
}
Variant c_Memcached::i_deletebykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_deletebykey);
}
Variant c_Memcached::i_fetch(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetch);
}
Variant c_Memcached::i_fetchall(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_fetchall);
}
Variant c_Memcached::i_flush(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_flush);
}
Variant c_Memcached::i_get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get);
}
Variant c_Memcached::i_getbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getbykey);
}
Variant c_Memcached::i_getdelayed(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdelayed);
}
Variant c_Memcached::i_getdelayedbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getdelayedbykey);
}
Variant c_Memcached::i_getmulti(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmulti);
}
Variant c_Memcached::i_getmultibykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getmultibykey);
}
Variant c_Memcached::i_getoption(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getoption);
}
Variant c_Memcached::i_getresultcode(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getresultcode);
}
Variant c_Memcached::i_getresultmessage(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getresultmessage);
}
Variant c_Memcached::i_getserverbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getserverbykey);
}
Variant c_Memcached::i_getserverlist(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getserverlist);
}
Variant c_Memcached::i_getstats(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstats);
}
Variant c_Memcached::i_getversion(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getversion);
}
Variant c_Memcached::i_increment(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_increment);
}
Variant c_Memcached::i_prepend(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_prepend);
}
Variant c_Memcached::i_prependbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_prependbykey);
}
Variant c_Memcached::i_replace(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_replace);
}
Variant c_Memcached::i_replacebykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_replacebykey);
}
Variant c_Memcached::i_set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_set);
}
Variant c_Memcached::i_setbykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setbykey);
}
Variant c_Memcached::i_setmulti(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setmulti);
}
Variant c_Memcached::i_setmultibykey(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setmultibykey);
}
Variant c_Memcached::i_setoption(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setoption);
}
Variant NEVER_INLINE c_Memcached::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("__construct", 1, 1);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant NEVER_INLINE c_Memcached::ifa_add(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_add, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("add", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_add(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_add(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_addbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("addbykey", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_addbykey(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_addbykey(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_addserver(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addserver, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("addserver", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_addserver(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_addserver(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_addservers(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addservers, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("addservers", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_addservers(arg0));
}
Variant NEVER_INLINE c_Memcached::ifa_append(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("append", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_append(arg0, arg1));
}
Variant NEVER_INLINE c_Memcached::ifa_appendbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_appendbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("appendbykey", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_appendbykey(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_cas(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_cas, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("cas", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_cas(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_cas(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_casbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_casbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 4 || count > 5)) return throw_wrong_arguments("casbykey", count, 4, 5, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t_casbykey(arg0, arg1, arg2, arg3));
  CVarRef arg4(a4);
  return (self->t_casbykey(arg0, arg1, arg2, arg3, arg4));
}
Variant NEVER_INLINE c_Memcached::ifa_decrement(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_decrement, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("decrement", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_decrement(arg0));
  CVarRef arg1(a1);
  return (self->t_decrement(arg0, arg1));
}
Variant NEVER_INLINE c_Memcached::ifa_delete(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_delete, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("delete", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_delete(arg0));
  CVarRef arg1(a1);
  return (self->t_delete(arg0, arg1));
}
Variant NEVER_INLINE c_Memcached::ifa_deletebykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_deletebykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("deletebykey", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_deletebykey(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_deletebykey(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_fetch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetch, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("fetch", 0, 1);
  return (self->t_fetch());
}
Variant NEVER_INLINE c_Memcached::ifa_fetchall(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetchall, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("fetchall", 0, 1);
  return (self->t_fetchall());
}
Variant NEVER_INLINE c_Memcached::ifa_flush(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_flush, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("flush", 1, 1);
  if (count <= 0) return (self->t_flush());
  CVarRef arg0(a0);
  return (self->t_flush(arg0));
}
Variant NEVER_INLINE c_Memcached::ifa_get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("get", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_get(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_get(arg0, arg1));
  VRefParam arg2(vref(a2));
  return (self->t_get(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_getbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 4)) return throw_wrong_arguments("getbykey", count, 2, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_getbykey(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_getbykey(arg0, arg1, arg2));
  VRefParam arg3(vref(a3));
  return (self->t_getbykey(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_getdelayed(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdelayed, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("getdelayed", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_getdelayed(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_getdelayed(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_getdelayed(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_getdelayedbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdelayedbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 4)) return throw_wrong_arguments("getdelayedbykey", count, 2, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_getdelayedbykey(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_getdelayedbykey(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_getdelayedbykey(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_getmulti(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmulti, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("getmulti", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_getmulti(arg0));
  VRefParam arg1(vref(a1));
  if (count <= 2) return (self->t_getmulti(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_getmulti(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_getmultibykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getmultibykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 4)) return throw_wrong_arguments("getmultibykey", count, 2, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_getmultibykey(arg0, arg1));
  VRefParam arg2(vref(a2));
  if (count <= 3) return (self->t_getmultibykey(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_getmultibykey(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_getoption(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getoption, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getoption", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getoption(arg0));
}
Variant NEVER_INLINE c_Memcached::ifa_getresultcode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getresultcode, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getresultcode", 0, 1);
  return (self->t_getresultcode());
}
Variant NEVER_INLINE c_Memcached::ifa_getresultmessage(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getresultmessage, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getresultmessage", 0, 1);
  return (self->t_getresultmessage());
}
Variant NEVER_INLINE c_Memcached::ifa_getserverbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getserverbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("getserverbykey", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_getserverbykey(arg0));
}
Variant NEVER_INLINE c_Memcached::ifa_getserverlist(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getserverlist, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getserverlist", 0, 1);
  return (self->t_getserverlist());
}
Variant NEVER_INLINE c_Memcached::ifa_getstats(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstats, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getstats", 0, 1);
  return (self->t_getstats());
}
Variant NEVER_INLINE c_Memcached::ifa_getversion(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getversion, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getversion", 0, 1);
  return (self->t_getversion());
}
Variant NEVER_INLINE c_Memcached::ifa_increment(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_increment, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("increment", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_increment(arg0));
  CVarRef arg1(a1);
  return (self->t_increment(arg0, arg1));
}
Variant NEVER_INLINE c_Memcached::ifa_prepend(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_prepend, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("prepend", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_prepend(arg0, arg1));
}
Variant NEVER_INLINE c_Memcached::ifa_prependbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_prependbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("prependbykey", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_prependbykey(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_replace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_replace, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("replace", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_replace(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_replace(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_replacebykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_replacebykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("replacebykey", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_replacebykey(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_replacebykey(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_set, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("set", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_set(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_set(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_setbykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setbykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 3 || count > 4)) return throw_wrong_arguments("setbykey", count, 3, 4, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_setbykey(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_setbykey(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_Memcached::ifa_setmulti(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setmulti, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("setmulti", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_setmulti(arg0));
  CVarRef arg1(a1);
  return (self->t_setmulti(arg0, arg1));
}
Variant NEVER_INLINE c_Memcached::ifa_setmultibykey(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setmultibykey, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("setmultibykey", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_setmultibykey(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_setmultibykey(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_Memcached::ifa_setoption(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setoption, coo_Memcached);
  }
  c_Memcached *self ATTRIBUTE_UNUSED (static_cast<c_Memcached*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("setoption", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_setoption(arg0, arg1));
}
extern const MethodCallInfoTable cw_Memcached$$call_info_table[] = {
  { 0x58382D82, 1, 13, "getMultiByKey", &ci_Memcached$$getmultibykey },
  { 0x4341F605, 0, 8, "getMulti", &ci_Memcached$$getmulti },
  { 0x61635285, 1, 9, "setOption", &ci_Memcached$$setoption },
  { 0x1FC0AF87, 1, 10, "addServers", &ci_Memcached$$addservers },
  { 0x7C79458B, 1, 3, "add", &ci_Memcached$$add },
  { 0x0742930F, 1, 14, "getServerByKey", &ci_Memcached$$getserverbykey },
  { 0x3BE3D316, 1, 10, "getVersion", &ci_Memcached$$getversion },
  { 0x0C77C917, 1, 7, "prepend", &ci_Memcached$$prepend },
  { 0x4E80EE19, 1, 8, "setMulti", &ci_Memcached$$setmulti },
  { 0x52BFF8A1, 0, 3, "cas", &ci_Memcached$$cas },
  { 0x42185621, 1, 3, "set", &ci_Memcached$$set },
  { 0x569AD828, 1, 3, "get", &ci_Memcached$$get },
  { 0x058D5C2F, 1, 15, "getDelayedByKey", &ci_Memcached$$getdelayedbykey },
  { 0x55C9F7B8, 1, 8, "setByKey", &ci_Memcached$$setbykey },
  { 0x556D773D, 1, 12, "replaceByKey", &ci_Memcached$$replacebykey },
  { 0x5CAEA6C0, 1, 9, "getOption", &ci_Memcached$$getoption },
  { 0x65EB8E41, 1, 8, "fetchAll", &ci_Memcached$$fetchall },
  { 0x2DC69EC2, 1, 6, "append", &ci_Memcached$$append },
  { 0x3155E144, 1, 16, "getResultMessage", &ci_Memcached$$getresultmessage },
  { 0x280A6146, 1, 7, "replace", &ci_Memcached$$replace },
  { 0x5F7945C7, 1, 9, "increment", &ci_Memcached$$increment },
  { 0x7A6F55D3, 1, 6, "delete", &ci_Memcached$$delete },
  { 0x0A5BD1D7, 0, 8, "getByKey", &ci_Memcached$$getbykey },
  { 0x64461A57, 1, 13, "getServerList", &ci_Memcached$$getserverlist },
  { 0x7CE59BD9, 1, 8, "getStats", &ci_Memcached$$getstats },
  { 0x2BA4C1DA, 1, 9, "decrement", &ci_Memcached$$decrement },
  { 0x229C615F, 1, 11, "__construct", &ci_Memcached$$__construct },
  { 0x144C0FE0, 1, 11, "appendByKey", &ci_Memcached$$appendbykey },
  { 0x6237AAE6, 1, 9, "addServer", &ci_Memcached$$addserver },
  { 0x4A56B46E, 1, 12, "prependByKey", &ci_Memcached$$prependbykey },
  { 0x10B990F2, 1, 11, "deleteByKey", &ci_Memcached$$deletebykey },
  { 0x774FA276, 1, 10, "getDelayed", &ci_Memcached$$getdelayed },
  { 0x47097177, 0, 8, "addByKey", &ci_Memcached$$addbykey },
  { 0x68684D77, 1, 13, "setMultiByKey", &ci_Memcached$$setmultibykey },
  { 0x7A9BF579, 1, 8, "casByKey", &ci_Memcached$$casbykey },
  { 0x5B005E7A, 1, 5, "flush", &ci_Memcached$$flush },
  { 0x3B90B0FB, 1, 5, "fetch", &ci_Memcached$$fetch },
  { 0x535C00FD, 1, 13, "getResultCode", &ci_Memcached$$getresultcode },
};
extern const int cw_Memcached$$call_info_index[] = {
  127,
  -1,-1,0,-1,-1,1,-1,3,
  -1,-1,-1,4,-1,-1,-1,5,
  -1,-1,-1,-1,-1,-1,6,7,
  -1,8,-1,-1,-1,-1,-1,-1,
  -1,9,-1,-1,-1,-1,-1,-1,
  11,-1,-1,-1,-1,-1,-1,12,
  -1,-1,-1,-1,-1,-1,-1,-1,
  13,-1,-1,-1,-1,14,-1,-1,
  15,16,17,-1,18,-1,19,20,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,21,-1,-1,-1,22,
  -1,24,25,-1,-1,-1,-1,26,
  27,-1,-1,-1,-1,-1,28,-1,
  -1,-1,-1,-1,-1,-1,29,-1,
  -1,-1,30,-1,-1,-1,31,32,
  -1,34,35,36,-1,37,-1,-1,

};
c_Memcached *c_Memcached::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_Memcached$$call_info_table[];
extern const int cw_Memcached$$call_info_index[];
extern const InstanceOfInfo cw_Memcached$$instanceof_table[];
extern const int cw_Memcached$$instanceof_index[];
const ObjectStaticCallbacks cw_Memcached = {
  (ObjectData*(*)(ObjectData*))coo_Memcached,
  cw_Memcached$$call_info_table,cw_Memcached$$call_info_index,
  cw_Memcached$$instanceof_table,cw_Memcached$$instanceof_index,
  &c_Memcached::s_class_name,
  &c_Memcached::os_prop_table,&ci_Memcached$$__construct,0,0,0x0,
  &c_Memcached::s_cls
};
ObjectData *coo_VectorIterator() {
  return NEWOBJ(c_VectorIterator)();
}
IMPLEMENT_CLASS(VectorIterator)
extern const InstanceOfInfo cw_VectorIterator$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x5071A86B,1,"VectorIterator",&cw_VectorIterator},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_VectorIterator$$instanceof_index[] = {
  7,
  -1,0,-1,1,-1,-1,2,-1,

};
extern const CallInfo ci_VectorIterator$$current = { (void*)&c_VectorIterator::i_current, (void*)&c_VectorIterator::ifa_current, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_VectorIterator$$key = { (void*)&c_VectorIterator::i_key, (void*)&c_VectorIterator::ifa_key, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_VectorIterator$$valid = { (void*)&c_VectorIterator::i_valid, (void*)&c_VectorIterator::ifa_valid, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_VectorIterator$$rewind = { (void*)&c_VectorIterator::i_rewind, (void*)&c_VectorIterator::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_VectorIterator$$__construct = { (void*)&c_VectorIterator::i___construct, (void*)&c_VectorIterator::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_VectorIterator$$next = { (void*)&c_VectorIterator::i_next, (void*)&c_VectorIterator::ifa_next, 0, 4, 0x0000000000000000LL};
Variant c_VectorIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_VectorIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_VectorIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_VectorIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_VectorIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_VectorIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant NEVER_INLINE c_VectorIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_VectorIterator);
  }
  c_VectorIterator *self ATTRIBUTE_UNUSED (static_cast<c_VectorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_VectorIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_VectorIterator);
  }
  c_VectorIterator *self ATTRIBUTE_UNUSED (static_cast<c_VectorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("current", 0, 1);
  return (self->t_current());
}
Variant NEVER_INLINE c_VectorIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_VectorIterator);
  }
  c_VectorIterator *self ATTRIBUTE_UNUSED (static_cast<c_VectorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("key", 0, 1);
  return (self->t_key());
}
Variant NEVER_INLINE c_VectorIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_VectorIterator);
  }
  c_VectorIterator *self ATTRIBUTE_UNUSED (static_cast<c_VectorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("valid", 0, 1);
  return (self->t_valid());
}
Variant NEVER_INLINE c_VectorIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_VectorIterator);
  }
  c_VectorIterator *self ATTRIBUTE_UNUSED (static_cast<c_VectorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("next", 0, 1);
  return (self->t_next(), null);
}
Variant NEVER_INLINE c_VectorIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_VectorIterator);
  }
  c_VectorIterator *self ATTRIBUTE_UNUSED (static_cast<c_VectorIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("rewind", 0, 1);
  return (self->t_rewind(), null);
}
extern const MethodCallInfoTable cw_VectorIterator$$call_info_table[] = {
  { 0x024E8C51, 1, 3, "key", &ci_VectorIterator$$key },
  { 0x54808C44, 1, 5, "valid", &ci_VectorIterator$$valid },
  { 0x3B8102B8, 1, 4, "next", &ci_VectorIterator$$next },
  { 0x5E27AF6A, 1, 6, "rewind", &ci_VectorIterator$$rewind },
  { 0x046B21DC, 1, 7, "current", &ci_VectorIterator$$current },
  { 0x229C615F, 1, 11, "__construct", &ci_VectorIterator$$__construct },
};
extern const int cw_VectorIterator$$call_info_index[] = {
  15,
  -1,0,-1,-1,1,-1,-1,-1,
  2,-1,3,-1,4,-1,-1,5,

};
c_VectorIterator *c_VectorIterator::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_VectorIterator$$call_info_table[];
extern const int cw_VectorIterator$$call_info_index[];
extern const InstanceOfInfo cw_VectorIterator$$instanceof_table[];
extern const int cw_VectorIterator$$instanceof_index[];
const ObjectStaticCallbacks cw_VectorIterator = {
  (ObjectData*(*)(ObjectData*))coo_VectorIterator,
  cw_VectorIterator$$call_info_table,cw_VectorIterator$$call_info_index,
  cw_VectorIterator$$instanceof_table,cw_VectorIterator$$instanceof_index,
  &c_VectorIterator::s_class_name,
  0,&ci_VectorIterator$$__construct,0,0,0x0,
  &c_VectorIterator::s_cls
};
ObjectData *coo_LibXMLError() {
  return NEWOBJ(c_LibXMLError)();
}
IMPLEMENT_CLASS(LibXMLError)
extern const InstanceOfInfo cw_LibXMLError$$instanceof_table[] = {
  {0x34FC8CCB,1,"LibXMLError",&cw_LibXMLError},
};
const int cw_LibXMLError$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_LibXMLError$$__construct = { (void*)&c_LibXMLError::i___construct, (void*)&c_LibXMLError::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_LibXMLError::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_LibXMLError::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_LibXMLError);
  }
  c_LibXMLError *self ATTRIBUTE_UNUSED (static_cast<c_LibXMLError*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
extern const MethodCallInfoTable cw_LibXMLError$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_LibXMLError$$__construct },
};
extern const int cw_LibXMLError$$call_info_index[] = {
  1,
  -1,0,
};
c_LibXMLError *c_LibXMLError::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_LibXMLError$$call_info_table[];
extern const int cw_LibXMLError$$call_info_index[];
extern const InstanceOfInfo cw_LibXMLError$$instanceof_table[];
extern const int cw_LibXMLError$$instanceof_index[];
const ObjectStaticCallbacks cw_LibXMLError = {
  (ObjectData*(*)(ObjectData*))coo_LibXMLError,
  cw_LibXMLError$$call_info_table,cw_LibXMLError$$call_info_index,
  cw_LibXMLError$$instanceof_table,cw_LibXMLError$$instanceof_index,
  &c_LibXMLError::s_class_name,
  0,&ci_LibXMLError$$__construct,0,0,0x0,
  &c_LibXMLError::s_cls
};
ObjectData *coo_DOMComment() {
  return NEWOBJ(c_DOMComment)();
}
IMPLEMENT_CLASS(DOMComment)
extern const InstanceOfInfo cw_DOMComment$$instanceof_table[] = {
  {0x7FE59D68,1,"DOMComment",&cw_DOMComment},
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x564B1453,1,"DOMCharacterData",&cw_DOMCharacterData},
};
const int cw_DOMComment$$instanceof_index[] = {
  7,
  0,-1,1,2,-1,-1,-1,-1,

};
extern const CallInfo ci_DOMComment$$__construct = { (void*)&c_DOMComment::i___construct, (void*)&c_DOMComment::ifa___construct, 1, 4, 0x0000000000000000LL};
Variant c_DOMComment::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant NEVER_INLINE c_DOMComment::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMComment);
  }
  c_DOMComment *self ATTRIBUTE_UNUSED (static_cast<c_DOMComment*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("__construct", 1, 1);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
extern const MethodCallInfoTable cw_DOMComment$$call_info_table[] = {
  { 0x229C615F, 1, 11, "__construct", &ci_DOMComment$$__construct },
};
extern const int cw_DOMComment$$call_info_index[] = {
  1,
  -1,0,
};
c_DOMComment *c_DOMComment::create(String a0) {
  CountableHelper h(this);
  init();
  t___construct(a0);
  return this;
}
extern const MethodCallInfoTable cw_DOMComment$$call_info_table[];
extern const int cw_DOMComment$$call_info_index[];
extern const InstanceOfInfo cw_DOMComment$$instanceof_table[];
extern const int cw_DOMComment$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMComment = {
  (ObjectData*(*)(ObjectData*))coo_DOMComment,
  cw_DOMComment$$call_info_table,cw_DOMComment$$call_info_index,
  cw_DOMComment$$instanceof_table,cw_DOMComment$$instanceof_index,
  &c_DOMComment::s_class_name,
  0,&ci_DOMComment$$__construct,0,&cw_DOMCharacterData,0x0,
  &c_DOMComment::s_cls
};
ObjectData *coo_ImageSprite() {
  return NEWOBJ(c_ImageSprite)();
}
IMPLEMENT_CLASS(ImageSprite)
extern const InstanceOfInfo cw_ImageSprite$$instanceof_table[] = {
  {0x647C3908,1,"ImageSprite",&cw_ImageSprite},
};
const int cw_ImageSprite$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_ImageSprite$$clear = { (void*)&c_ImageSprite::i_clear, (void*)&c_ImageSprite::ifa_clear, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$loadimages = { (void*)&c_ImageSprite::i_loadimages, (void*)&c_ImageSprite::ifa_loadimages, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$addfile = { (void*)&c_ImageSprite::i_addfile, (void*)&c_ImageSprite::ifa_addfile, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$__construct = { (void*)&c_ImageSprite::i___construct, (void*)&c_ImageSprite::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$mapping = { (void*)&c_ImageSprite::i_mapping, (void*)&c_ImageSprite::ifa_mapping, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$__destruct = { (void*)&c_ImageSprite::i___destruct, (void*)&c_ImageSprite::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$loaddims = { (void*)&c_ImageSprite::i_loaddims, (void*)&c_ImageSprite::ifa_loaddims, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$addurl = { (void*)&c_ImageSprite::i_addurl, (void*)&c_ImageSprite::ifa_addurl, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$output = { (void*)&c_ImageSprite::i_output, (void*)&c_ImageSprite::ifa_output, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$geterrors = { (void*)&c_ImageSprite::i_geterrors, (void*)&c_ImageSprite::ifa_geterrors, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$addstring = { (void*)&c_ImageSprite::i_addstring, (void*)&c_ImageSprite::ifa_addstring, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_ImageSprite$$css = { (void*)&c_ImageSprite::i_css, (void*)&c_ImageSprite::ifa_css, 4, 4, 0x0000000000000000LL};
Variant c_ImageSprite::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_ImageSprite::i_addfile(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addfile);
}
Variant c_ImageSprite::i_addstring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addstring);
}
Variant c_ImageSprite::i_addurl(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_addurl);
}
Variant c_ImageSprite::i_clear(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_clear);
}
Variant c_ImageSprite::i_loaddims(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_loaddims);
}
Variant c_ImageSprite::i_loadimages(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_loadimages);
}
Variant c_ImageSprite::i_output(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_output);
}
Variant c_ImageSprite::i_css(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_css);
}
Variant c_ImageSprite::i_geterrors(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_geterrors);
}
Variant c_ImageSprite::i_mapping(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_mapping);
}
Variant c_ImageSprite::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_ImageSprite::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_ImageSprite::ifa_addfile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addfile, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("addfile", count, 1, 2, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_addfile(arg0));
  CVarRef arg1(a1);
  return (self->t_addfile(arg0, arg1));
}
Variant NEVER_INLINE c_ImageSprite::ifa_addstring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addstring, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("addstring", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_addstring(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_addstring(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_ImageSprite::ifa_addurl(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addurl, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 3)) return throw_wrong_arguments("addurl", count, 1, 3, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_addurl(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_addurl(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_addurl(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_ImageSprite::ifa_clear(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clear, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("clear", 1, 1);
  if (count <= 0) return (self->t_clear());
  CVarRef arg0(a0);
  return (self->t_clear(arg0));
}
Variant NEVER_INLINE c_ImageSprite::ifa_loaddims(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loaddims, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("loaddims", 1, 1);
  if (count <= 0) return (self->t_loaddims());
  CVarRef arg0(a0);
  return (self->t_loaddims(arg0));
}
Variant NEVER_INLINE c_ImageSprite::ifa_loadimages(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadimages, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 1)) return throw_toomany_arguments("loadimages", 1, 1);
  if (count <= 0) return (self->t_loadimages());
  CVarRef arg0(a0);
  return (self->t_loadimages(arg0));
}
Variant NEVER_INLINE c_ImageSprite::ifa_output(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_output, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 3)) return throw_toomany_arguments("output", 3, 1);
  if (count <= 0) return (self->t_output());
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_output(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_output(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_output(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_ImageSprite::ifa_css(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_css, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 4)) return throw_wrong_arguments("css", count, 1, 4, 1);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t_css(arg0));
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_css(arg0, arg1));
  CVarRef arg2(a2);
  if (count <= 3) return (self->t_css(arg0, arg1, arg2));
  CVarRef arg3(a3);
  return (self->t_css(arg0, arg1, arg2, arg3));
}
Variant NEVER_INLINE c_ImageSprite::ifa_geterrors(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_geterrors, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("geterrors", 0, 1);
  return (self->t_geterrors());
}
Variant NEVER_INLINE c_ImageSprite::ifa_mapping(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_mapping, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("mapping", 0, 1);
  return (self->t_mapping());
}
Variant NEVER_INLINE c_ImageSprite::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_ImageSprite);
  }
  c_ImageSprite *self ATTRIBUTE_UNUSED (static_cast<c_ImageSprite*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_ImageSprite$$call_info_table[] = {
  { 0x24310200, 1, 9, "getErrors", &ci_ImageSprite$$geterrors },
  { 0x457D57A2, 1, 8, "loadDims", &ci_ImageSprite$$loaddims },
  { 0x5A226667, 1, 5, "clear", &ci_ImageSprite$$clear },
  { 0x21D1906F, 1, 7, "addFile", &ci_ImageSprite$$addfile },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_ImageSprite$$__destruct },
  { 0x2EC0B554, 1, 10, "loadImages", &ci_ImageSprite$$loadimages },
  { 0x7A2CA297, 1, 7, "mapping", &ci_ImageSprite$$mapping },
  { 0x132D233A, 1, 9, "addString", &ci_ImageSprite$$addstring },
  { 0x3871547C, 1, 3, "css", &ci_ImageSprite$$css },
  { 0x0DC84A7D, 1, 6, "addUrl", &ci_ImageSprite$$addurl },
  { 0x229C615F, 0, 11, "__construct", &ci_ImageSprite$$__construct },
  { 0x377C677F, 1, 6, "output", &ci_ImageSprite$$output },
};
extern const int cw_ImageSprite$$call_info_index[] = {
  31,
  0,-1,1,-1,-1,-1,-1,2,
  -1,-1,-1,-1,-1,-1,-1,3,
  -1,-1,-1,4,5,-1,-1,6,
  -1,-1,7,-1,8,9,-1,10,

};
c_ImageSprite *c_ImageSprite::create() {
  CountableHelper h(this);
  init();
  t___construct();
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_ImageSprite$$call_info_table[];
extern const int cw_ImageSprite$$call_info_index[];
extern const InstanceOfInfo cw_ImageSprite$$instanceof_table[];
extern const int cw_ImageSprite$$instanceof_index[];
const ObjectStaticCallbacks cw_ImageSprite = {
  (ObjectData*(*)(ObjectData*))coo_ImageSprite,
  cw_ImageSprite$$call_info_table,cw_ImageSprite$$call_info_index,
  cw_ImageSprite$$instanceof_table,cw_ImageSprite$$instanceof_index,
  &c_ImageSprite::s_class_name,
  0,&ci_ImageSprite$$__construct,0,0,0x0,
  &c_ImageSprite::s_cls
};
ObjectData *coo_DateTime() {
  return NEWOBJ(c_DateTime)();
}
IMPLEMENT_CLASS(DateTime)
extern const InstanceOfInfo cw_DateTime$$instanceof_table[] = {
  {0x5A602A1E,1,"DateTime",&cw_DateTime},
};
const int cw_DateTime$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_DateTime$$format = { (void*)&c_DateTime::i_format, (void*)&c_DateTime::ifa_format, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$settimezone = { (void*)&c_DateTime::i_settimezone, (void*)&c_DateTime::ifa_settimezone, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$setisodate = { (void*)&c_DateTime::i_setisodate, (void*)&c_DateTime::ifa_setisodate, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$settime = { (void*)&c_DateTime::i_settime, (void*)&c_DateTime::ifa_settime, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$modify = { (void*)&c_DateTime::i_modify, (void*)&c_DateTime::ifa_modify, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$__construct = { (void*)&c_DateTime::i___construct, (void*)&c_DateTime::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$getoffset = { (void*)&c_DateTime::i_getoffset, (void*)&c_DateTime::ifa_getoffset, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$setdate = { (void*)&c_DateTime::i_setdate, (void*)&c_DateTime::ifa_setdate, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_DateTime$$gettimezone = { (void*)&c_DateTime::i_gettimezone, (void*)&c_DateTime::ifa_gettimezone, 0, 4, 0x0000000000000000LL};
Variant c_DateTime::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DateTime::i_format(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_format);
}
Variant c_DateTime::i_getoffset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getoffset);
}
Variant c_DateTime::i_gettimezone(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_gettimezone);
}
Variant c_DateTime::i_modify(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_modify);
}
Variant c_DateTime::i_setdate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setdate);
}
Variant c_DateTime::i_setisodate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_setisodate);
}
Variant c_DateTime::i_settime(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_settime);
}
Variant c_DateTime::i_settimezone(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_settimezone);
}
Variant NEVER_INLINE c_DateTime::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("__construct", 2, 1);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_DateTime::ifa_format(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_format, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("format", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_format(arg0));
}
Variant NEVER_INLINE c_DateTime::ifa_getoffset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getoffset, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getoffset", 0, 1);
  return (self->t_getoffset());
}
Variant NEVER_INLINE c_DateTime::ifa_gettimezone(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettimezone, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("gettimezone", 0, 1);
  return (self->t_gettimezone());
}
Variant NEVER_INLINE c_DateTime::ifa_modify(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_modify, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("modify", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_modify(arg0));
}
Variant NEVER_INLINE c_DateTime::ifa_setdate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setdate, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("setdate", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_setdate(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DateTime::ifa_setisodate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setisodate, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("setisodate", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_setisodate(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_setisodate(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DateTime::ifa_settime(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_settime, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count < 2 || count > 3)) return throw_wrong_arguments("settime", count, 2, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t_settime(arg0, arg1));
  CVarRef arg2(a2);
  return (self->t_settime(arg0, arg1, arg2));
}
Variant NEVER_INLINE c_DateTime::ifa_settimezone(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_settimezone, coo_DateTime);
  }
  c_DateTime *self ATTRIBUTE_UNUSED (static_cast<c_DateTime*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("settimezone", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_settimezone(arg0));
}
extern const MethodCallInfoTable cw_DateTime$$call_info_table[] = {
  { 0x0F080587, 1, 6, "modify", &ci_DateTime$$modify },
  { 0x0B55BD0B, 0, 9, "getOffset", &ci_DateTime$$getoffset },
  { 0x5C9D120B, 1, 7, "setDate", &ci_DateTime$$setdate },
  { 0x3BE7716C, 1, 11, "getTimezone", &ci_DateTime$$gettimezone },
  { 0x6EE55A74, 1, 10, "setISODate", &ci_DateTime$$setisodate },
  { 0x34F4C258, 0, 7, "setTime", &ci_DateTime$$settime },
  { 0x0B957CB8, 1, 11, "setTimezone", &ci_DateTime$$settimezone },
  { 0x2AF8CA9B, 1, 6, "format", &ci_DateTime$$format },
  { 0x229C615F, 1, 11, "__construct", &ci_DateTime$$__construct },
};
extern const int cw_DateTime$$call_info_index[] = {
  31,
  -1,-1,-1,-1,-1,-1,-1,0,
  -1,-1,-1,1,3,-1,-1,-1,
  -1,-1,-1,-1,4,-1,-1,-1,
  5,-1,-1,7,-1,-1,-1,8,

};
c_DateTime *c_DateTime::create(String a0, Object a1) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1);
  return this;
}
extern const MethodCallInfoTable cw_DateTime$$call_info_table[];
extern const int cw_DateTime$$call_info_index[];
extern const InstanceOfInfo cw_DateTime$$instanceof_table[];
extern const int cw_DateTime$$instanceof_index[];
const ObjectStaticCallbacks cw_DateTime = {
  (ObjectData*(*)(ObjectData*))coo_DateTime,
  cw_DateTime$$call_info_table,cw_DateTime$$call_info_index,
  cw_DateTime$$instanceof_table,cw_DateTime$$instanceof_index,
  &c_DateTime::s_class_name,
  &c_DateTime::os_prop_table,&ci_DateTime$$__construct,0,0,0x0,
  &c_DateTime::s_cls
};
ObjectData *coo_DOMNotation() {
  return NEWOBJ(c_DOMNotation)();
}
IMPLEMENT_CLASS(DOMNotation)
extern const InstanceOfInfo cw_DOMNotation$$instanceof_table[] = {
  {0x33523662,1,"DOMNode",&cw_DOMNode},
  {0x5A85E60B,1,"DOMNotation",&cw_DOMNotation},
};
const int cw_DOMNotation$$instanceof_index[] = {
  3,
  -1,-1,0,1,
};
extern const CallInfo ci_DOMNotation$$__isset = { (void*)&c_DOMNotation::i___isset, (void*)&c_DOMNotation::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNotation$$__get = { (void*)&c_DOMNotation::i___get, (void*)&c_DOMNotation::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNotation$$__set = { (void*)&c_DOMNotation::i___set, (void*)&c_DOMNotation::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNotation$$__construct = { (void*)&c_DOMNotation::i___construct, (void*)&c_DOMNotation::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_DOMNotation::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMNotation::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMNotation::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMNotation::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant NEVER_INLINE c_DOMNotation::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMNotation);
  }
  c_DOMNotation *self ATTRIBUTE_UNUSED (static_cast<c_DOMNotation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMNotation::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMNotation);
  }
  c_DOMNotation *self ATTRIBUTE_UNUSED (static_cast<c_DOMNotation*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMNotation::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMNotation);
  }
  c_DOMNotation *self ATTRIBUTE_UNUSED (static_cast<c_DOMNotation*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNotation::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMNotation);
  }
  c_DOMNotation *self ATTRIBUTE_UNUSED (static_cast<c_DOMNotation*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
extern const MethodCallInfoTable cw_DOMNotation$$call_info_table[] = {
  { 0x03340395, 1, 5, "__set", &ci_DOMNotation$$__set },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMNotation$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMNotation$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMNotation$$__get },
};
extern const int cw_DOMNotation$$call_info_index[] = {
  7,
  -1,-1,-1,-1,-1,0,1,2,

};
c_DOMNotation *c_DOMNotation::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMNotation$$call_info_table[];
extern const int cw_DOMNotation$$call_info_index[];
extern const InstanceOfInfo cw_DOMNotation$$instanceof_table[];
extern const int cw_DOMNotation$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMNotation = {
  (ObjectData*(*)(ObjectData*))coo_DOMNotation,
  cw_DOMNotation$$call_info_table,cw_DOMNotation$$call_info_index,
  cw_DOMNotation$$instanceof_table,cw_DOMNotation$$instanceof_index,
  &c_DOMNotation::s_class_name,
  0,&ci_DOMNotation$$__construct,0,&cw_DOMNode,0x0,
  &c_DOMNotation::s_cls
};
ObjectData *coo_GenericContinuation() {
  return NEWOBJ(c_GenericContinuation)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(GenericContinuation)
extern const InstanceOfInfo cw_GenericContinuation$$instanceof_table[] = {
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x7790E9E2,1,"Continuation",&cw_Continuation},
  {0x1B58533D,1,"GenericContinuation",&cw_GenericContinuation},
  {0x4AF9D29E,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int cw_GenericContinuation$$instanceof_index[] = {
  7,
  -1,0,1,-1,-1,2,3,-1,

};
extern const CallInfo ci_GenericContinuation$$getvars = { (void*)&c_GenericContinuation::i_getvars, (void*)&c_GenericContinuation::ifa_getvars, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_GenericContinuation$$__destruct = { (void*)&c_GenericContinuation::i___destruct, (void*)&c_GenericContinuation::ifa___destruct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_GenericContinuation$$update = { (void*)&c_GenericContinuation::i_update, (void*)&c_GenericContinuation::ifa_update, 3, 4, 0x0000000000000000LL};
extern const CallInfo ci_GenericContinuation$$__construct = { (void*)&c_GenericContinuation::i___construct, (void*)&c_GenericContinuation::ifa___construct, 7, 4, 0x0000000000000000LL};
Variant c_GenericContinuation::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_GenericContinuation);
  }
  c_GenericContinuation *self ATTRIBUTE_UNUSED (static_cast<c_GenericContinuation*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 5 || count > 7)) return throw_wrong_arguments("__construct", count, 5, 7, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2((ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3((ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 5) return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
    CVarRef arg5((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 6) return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
    CVarRef arg6((ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5, arg6), null);
  }
}
Variant c_GenericContinuation::i_update(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_update);
}
Variant c_GenericContinuation::i_getvars(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getvars);
}
Variant c_GenericContinuation::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___destruct);
}
Variant NEVER_INLINE c_GenericContinuation::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_GenericContinuation);
  }
  c_GenericContinuation *self ATTRIBUTE_UNUSED (static_cast<c_GenericContinuation*>(mcp.obj));
  if (UNLIKELY(count < 5)) return throw_wrong_arguments("__construct", count, 5, 7, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  CVarRef arg3(a3);
  CVarRef arg4(a4);
  if (count <= 5) return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
  CVarRef arg5(a5);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
}
Variant NEVER_INLINE c_GenericContinuation::ifa_update(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_update, coo_GenericContinuation);
  }
  c_GenericContinuation *self ATTRIBUTE_UNUSED (static_cast<c_GenericContinuation*>(mcp.obj));
  if (UNLIKELY(count != 3)) return throw_wrong_arguments("update", count, 3, 3, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  CVarRef arg2(a2);
  return (self->t_update(arg0, arg1, arg2), null);
}
Variant NEVER_INLINE c_GenericContinuation::ifa_getvars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getvars, coo_GenericContinuation);
  }
  c_GenericContinuation *self ATTRIBUTE_UNUSED (static_cast<c_GenericContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getvars", 0, 1);
  return (self->t_getvars());
}
Variant NEVER_INLINE c_GenericContinuation::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_GenericContinuation);
  }
  c_GenericContinuation *self ATTRIBUTE_UNUSED (static_cast<c_GenericContinuation*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__destruct", 0, 1);
  return (self->t___destruct());
}
extern const MethodCallInfoTable cw_GenericContinuation$$call_info_table[] = {
  { 0x28D472A0, 1, 6, "update", &ci_GenericContinuation$$update },
  { 0x2ACC1EF3, 1, 10, "__destruct", &ci_GenericContinuation$$__destruct },
  { 0x037A2236, 1, 7, "getVars", &ci_GenericContinuation$$getvars },
  { 0x229C615F, 1, 11, "__construct", &ci_GenericContinuation$$__construct },
};
extern const int cw_GenericContinuation$$call_info_index[] = {
  7,
  0,-1,-1,1,-1,-1,2,3,

};
c_GenericContinuation *c_GenericContinuation::create(int64 a0, int64 a1, bool a2, String a3, Array a4, Variant a5, Array a6) {
  CountableHelper h(this);
  init();
  t___construct(a0, a1, a2, a3, a4, a5, a6);
  clearNoDestruct();
  return this;
}
extern const MethodCallInfoTable cw_GenericContinuation$$call_info_table[];
extern const int cw_GenericContinuation$$call_info_index[];
extern const InstanceOfInfo cw_GenericContinuation$$instanceof_table[];
extern const int cw_GenericContinuation$$instanceof_index[];
const ObjectStaticCallbacks cw_GenericContinuation = {
  (ObjectData*(*)(ObjectData*))coo_GenericContinuation,
  cw_GenericContinuation$$call_info_table,cw_GenericContinuation$$call_info_index,
  cw_GenericContinuation$$instanceof_table,cw_GenericContinuation$$instanceof_index,
  &c_GenericContinuation::s_class_name,
  0,&ci_GenericContinuation$$__construct,0,&cw_Continuation,0x0,
  &c_GenericContinuation::s_cls
};
ObjectData *coo_DebuggerClient() {
  return NEWOBJ(c_DebuggerClient)();
}
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DebuggerClient)
extern const InstanceOfInfo cw_DebuggerClient$$instanceof_table[] = {
  {0x3F521A63,1,"DebuggerClient",&cw_DebuggerClient},
};
const int cw_DebuggerClient$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_DebuggerClient$$processcmd = { (void*)&c_DebuggerClient::i_processcmd, (void*)&c_DebuggerClient::ifa_processcmd, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClient$$init = { (void*)&c_DebuggerClient::i_init, (void*)&c_DebuggerClient::ifa_init, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClient$$__construct = { (void*)&c_DebuggerClient::i___construct, (void*)&c_DebuggerClient::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DebuggerClient$$getstate = { (void*)&c_DebuggerClient::i_getstate, (void*)&c_DebuggerClient::ifa_getstate, 0, 4, 0x0000000000000000LL};
Variant c_DebuggerClient::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DebuggerClient::i_getstate(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getstate);
}
Variant c_DebuggerClient::i_init(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_init);
}
Variant c_DebuggerClient::i_processcmd(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_processcmd);
}
Variant NEVER_INLINE c_DebuggerClient::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DebuggerClient);
  }
  c_DebuggerClient *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DebuggerClient::ifa_getstate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstate, coo_DebuggerClient);
  }
  c_DebuggerClient *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClient*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getstate", 0, 1);
  return (self->t_getstate());
}
Variant NEVER_INLINE c_DebuggerClient::ifa_init(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_init, coo_DebuggerClient);
  }
  c_DebuggerClient *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClient*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("init", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_init(arg0));
}
Variant NEVER_INLINE c_DebuggerClient::ifa_processcmd(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_processcmd, coo_DebuggerClient);
  }
  c_DebuggerClient *self ATTRIBUTE_UNUSED (static_cast<c_DebuggerClient*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("processcmd", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_processcmd(arg0, arg1));
}
extern const MethodCallInfoTable cw_DebuggerClient$$call_info_table[] = {
  { 0x6B435A03, 1, 4, "init", &ci_DebuggerClient$$init },
  { 0x3E95130C, 1, 8, "getState", &ci_DebuggerClient$$getstate },
  { 0x0BD0F64E, 1, 10, "processCmd", &ci_DebuggerClient$$processcmd },
  { 0x229C615F, 1, 11, "__construct", &ci_DebuggerClient$$__construct },
};
extern const int cw_DebuggerClient$$call_info_index[] = {
  7,
  -1,-1,-1,0,1,-1,2,3,

};
c_DebuggerClient *c_DebuggerClient::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DebuggerClient$$call_info_table[];
extern const int cw_DebuggerClient$$call_info_index[];
extern const InstanceOfInfo cw_DebuggerClient$$instanceof_table[];
extern const int cw_DebuggerClient$$instanceof_index[];
const ObjectStaticCallbacks cw_DebuggerClient = {
  (ObjectData*(*)(ObjectData*))coo_DebuggerClient,
  cw_DebuggerClient$$call_info_table,cw_DebuggerClient$$call_info_index,
  cw_DebuggerClient$$instanceof_table,cw_DebuggerClient$$instanceof_index,
  &c_DebuggerClient::s_class_name,
  &c_DebuggerClient::os_prop_table,&ci_DebuggerClient$$__construct,0,0,0x0,
  &c_DebuggerClient::s_cls
};
ObjectData *coo_Closure() {
  return NEWOBJ(c_Closure)();
}
IMPLEMENT_CLASS(Closure)
extern const InstanceOfInfo cw_Closure$$instanceof_table[] = {
  {0x12E92A6C,1,"Closure",&cw_Closure},
};
const int cw_Closure$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_Closure$$__invoke = { (void*)&c_Closure::i___invoke, (void*)&c_Closure::ifa___invoke, 0, 5, 0x0000000000000000LL};
extern const CallInfo ci_Closure$$__clone = { (void*)&c_Closure::i___clone, (void*)&c_Closure::ifa___clone, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Closure$$__construct = { (void*)&c_Closure::i___construct, (void*)&c_Closure::ifa___construct, 0, 4, 0x0000000000000000LL};
Variant c_Closure::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Closure::i___invoke(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___invoke, coo_Closure);
  }
  c_Closure *self ATTRIBUTE_UNUSED (static_cast<c_Closure*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  const Array &p(count > 0 ? ArrayUtil::EnsureIntKeys(params) : Array());
  return (self->t___invoke(count, p));
}
Variant c_Closure::i___clone(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___clone);
}
Variant NEVER_INLINE c_Closure::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Closure);
  }
  c_Closure *self ATTRIBUTE_UNUSED (static_cast<c_Closure*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_Closure::ifa___invoke(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___invoke, coo_Closure);
  }
  c_Closure *self ATTRIBUTE_UNUSED (static_cast<c_Closure*>(mcp.obj));
  Array p;
  if (count >= 1) p.append(a0);
  if (count >= 2) p.append(a1);
  if (count >= 3) p.append(a2);
  if (count >= 4) p.append(a3);
  if (count >= 5) p.append(a4);
  if (count >= 6) p.append(a5);
  return (self->t___invoke(count, p));
}
Variant NEVER_INLINE c_Closure::ifa___clone(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___clone, coo_Closure);
  }
  c_Closure *self ATTRIBUTE_UNUSED (static_cast<c_Closure*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__clone", 0, 1);
  return (self->t___clone());
}
extern const MethodCallInfoTable cw_Closure$$call_info_table[] = {
  { 0x0004BE9B, 1, 7, "__clone", &ci_Closure$$__clone },
  { 0x1BD81D65, 1, 8, "__invoke", &ci_Closure$$__invoke },
  { 0x229C615F, 1, 11, "__construct", &ci_Closure$$__construct },
};
extern const int cw_Closure$$call_info_index[] = {
  7,
  -1,-1,-1,0,-1,1,-1,2,

};
c_Closure *c_Closure::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_Closure$$call_info_table[];
extern const int cw_Closure$$call_info_index[];
extern const InstanceOfInfo cw_Closure$$instanceof_table[];
extern const int cw_Closure$$instanceof_index[];
const ObjectStaticCallbacks cw_Closure = {
  (ObjectData*(*)(ObjectData*))coo_Closure,
  cw_Closure$$call_info_table,cw_Closure$$call_info_index,
  cw_Closure$$instanceof_table,cw_Closure$$instanceof_index,
  &c_Closure::s_class_name,
  0,&ci_Closure$$__construct,0,0,0x0,
  &c_Closure::s_cls
};
ObjectData *coo_DOMNodeList() {
  return NEWOBJ(c_DOMNodeList)();
}
IMPLEMENT_CLASS(DOMNodeList)
extern const InstanceOfInfo cw_DOMNodeList$$instanceof_table[] = {
  {0x3B20B8B1,0,"DOMNodeList",&cw_DOMNodeList},
  {0x45E6F0A1,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x40363017,1,"IteratorAggregate",(const ObjectStaticCallbacks*)2},
};
const int cw_DOMNodeList$$instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,-1,2,

};
extern const CallInfo ci_DOMNodeList$$getiterator = { (void*)&c_DOMNodeList::i_getiterator, (void*)&c_DOMNodeList::ifa_getiterator, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeList$$__set = { (void*)&c_DOMNodeList::i___set, (void*)&c_DOMNodeList::ifa___set, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeList$$__get = { (void*)&c_DOMNodeList::i___get, (void*)&c_DOMNodeList::ifa___get, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeList$$__isset = { (void*)&c_DOMNodeList::i___isset, (void*)&c_DOMNodeList::ifa___isset, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeList$$__construct = { (void*)&c_DOMNodeList::i___construct, (void*)&c_DOMNodeList::ifa___construct, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_DOMNodeList$$item = { (void*)&c_DOMNodeList::i_item, (void*)&c_DOMNodeList::ifa_item, 1, 4, 0x0000000000000000LL};
Variant c_DOMNodeList::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DOMNodeList::i_item(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_item);
}
Variant c_DOMNodeList::i___get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___get);
}
Variant c_DOMNodeList::i___set(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___set);
}
Variant c_DOMNodeList::i___isset(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___isset);
}
Variant c_DOMNodeList::i_getiterator(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getiterator);
}
Variant NEVER_INLINE c_DOMNodeList::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DOMNodeList);
  }
  c_DOMNodeList *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeList*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("__construct", 0, 1);
  return (self->t___construct(), null);
}
Variant NEVER_INLINE c_DOMNodeList::ifa_item(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_item, coo_DOMNodeList);
  }
  c_DOMNodeList *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeList*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("item", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_item(arg0));
}
Variant NEVER_INLINE c_DOMNodeList::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_DOMNodeList);
  }
  c_DOMNodeList *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeList*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__get", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___get(arg0));
}
Variant NEVER_INLINE c_DOMNodeList::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_DOMNodeList);
  }
  c_DOMNodeList *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeList*>(mcp.obj));
  if (UNLIKELY(count != 2)) return throw_wrong_arguments("__set", count, 2, 2, 1);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___set(arg0, arg1));
}
Variant NEVER_INLINE c_DOMNodeList::ifa___isset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___isset, coo_DOMNodeList);
  }
  c_DOMNodeList *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeList*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("__isset", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t___isset(arg0));
}
Variant NEVER_INLINE c_DOMNodeList::ifa_getiterator(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getiterator, coo_DOMNodeList);
  }
  c_DOMNodeList *self ATTRIBUTE_UNUSED (static_cast<c_DOMNodeList*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("getiterator", 0, 1);
  return (self->t_getiterator());
}
extern const MethodCallInfoTable cw_DOMNodeList$$call_info_table[] = {
  { 0x32A12503, 1, 11, "getIterator", &ci_DOMNodeList$$getiterator },
  { 0x03340395, 1, 5, "__set", &ci_DOMNodeList$$__set },
  { 0x030902C6, 1, 4, "item", &ci_DOMNodeList$$item },
  { 0x2E2178EE, 1, 7, "__isset", &ci_DOMNodeList$$__isset },
  { 0x229C615F, 0, 11, "__construct", &ci_DOMNodeList$$__construct },
  { 0x74FA338F, 1, 5, "__get", &ci_DOMNodeList$$__get },
};
extern const int cw_DOMNodeList$$call_info_index[] = {
  15,
  -1,-1,-1,0,-1,1,2,-1,
  -1,-1,-1,-1,-1,-1,3,4,

};
c_DOMNodeList *c_DOMNodeList::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
extern const MethodCallInfoTable cw_DOMNodeList$$call_info_table[];
extern const int cw_DOMNodeList$$call_info_index[];
extern const InstanceOfInfo cw_DOMNodeList$$instanceof_table[];
extern const int cw_DOMNodeList$$instanceof_index[];
const ObjectStaticCallbacks cw_DOMNodeList = {
  (ObjectData*(*)(ObjectData*))coo_DOMNodeList,
  cw_DOMNodeList$$call_info_table,cw_DOMNodeList$$call_info_index,
  cw_DOMNodeList$$instanceof_table,cw_DOMNodeList$$instanceof_index,
  &c_DOMNodeList::s_class_name,
  0,&ci_DOMNodeList$$__construct,0,0,0x0,
  &c_DOMNodeList::s_cls
};
struct hashNodeCTD {
  int64 hash;
  int32 flags;
  int32 cdec;
  const char *name;
  int64 ptv1;
};
static const hashNodeCTD ctdBuckets[] = {
  {0x647C3908,1,0,"ImageSprite",(int64)&cw_ImageSprite },
  {0x1574EC09,1,0,"ReflectionFunction",(int64)&cw_ReflectionFunction },
  {0x5A85E60B,0,0,"DOMNotation",(int64)&cw_DOMNotation },
  {0x429CFE0B,1,0,"ErrorException",(int64)&cw_ErrorException },
  {0x4359F411,1,0,"SpoofChecker",(int64)&cw_SpoofChecker },
  {0x3B7CC713,1,0,"SimpleXMLElement",(int64)&cw_SimpleXMLElement },
  {0x255D2515,1,0,"SoapFault",(int64)&cw_SoapFault },
  {0x468B501A,1,0,"DOMEntityReference",(int64)&cw_DOMEntityReference },
  {0x6AE2E71D,1,0,"ReflectionClass",(int64)&cw_ReflectionClass },
  {0x5A602A1E,1,0,"DateTime",(int64)&cw_DateTime },
  {0x180A6325,1,0,"XMLReader",(int64)&cw_XMLReader },
  {0x6AB5BF2B,1,0,"SimpleXMLElementIterator",(int64)&cw_SimpleXMLElementIterator },
  {0x0CA95F2F,1,0,"MutableArrayIterator",(int64)&cw_MutableArrayIterator },
  {0x67488231,1,0,"FilterIterator",(int64)&cw_FilterIterator },
  {0x5E2EAA32,1,0,"RecursiveIteratorIterator",(int64)&cw_RecursiveIteratorIterator },
  {0x443AFA34,1,0,"IteratorIterator",(int64)&cw_IteratorIterator },
  {0x14376235,1,0,"SoapVar",(int64)&cw_SoapVar },
  {0x2616EF37,1,0,"DOMNodeIterator",(int64)&cw_DOMNodeIterator },
  {0x5DE95538,1,0,"ReflectionException",(int64)&cw_ReflectionException },
  {0x4F5CA03D,0,0,"Collator",(int64)&cw_Collator },
  {0x1B58533D,1,0,"GenericContinuation",(int64)&cw_GenericContinuation },
  {0x7B878C3E,1,0,"SoapServer",(int64)&cw_SoapServer },
  {0x5B143841,1,0,"OutOfBoundsException",(int64)&cw_OutOfBoundsException },
  {0x3C5F1842,1,0,"Vector",(int64)&cw_Vector },
  {0x0B734244,0,0,"PDOStatement",(int64)&cw_PDOStatement },
  {0x4A964744,1,0,"EncodingMatch",(int64)&cw_EncodingMatch },
  {0x4527B946,0,0,"DOMNamedNodeMap",(int64)&cw_DOMNamedNodeMap },
  {0x4ACBAD46,0,0,"MapIterator",(int64)&cw_MapIterator },
  {0x64EF4E46,1,0,"BadFunctionCallException",(int64)&cw_BadFunctionCallException },
  {0x2E0D3849,1,0,"UnexpectedValueException",(int64)&cw_UnexpectedValueException },
  {0x1822944A,0,0,"DebuggerClientCmdUser",(int64)&cw_DebuggerClientCmdUser },
  {0x4192034A,1,0,"Memcached",(int64)&cw_Memcached },
  {0x1B0E6D4B,1,0,"LogicException",(int64)&cw_LogicException },
  {0x2C49174D,1,0,"DOMText",(int64)&cw_DOMText },
  {0x186A3D4E,1,0,"SoapHeader",(int64)&cw_SoapHeader },
  {0x7BA7A64F,1,0,"SplObjectStorage",(int64)&cw_SplObjectStorage },
  {0x29F87A50,1,0,"Normalizer",(int64)&cw_Normalizer },
  {0x564B1453,0,0,"DOMCharacterData",(int64)&cw_DOMCharacterData },
  {0x776A9D53,1,0,"RangeException",(int64)&cw_RangeException },
  {0x17E8A15E,1,0,"DirectoryIterator",(int64)&cw_DirectoryIterator },
  {0x1FBF9761,1,0,"DOMDocumentType",(int64)&cw_DOMDocumentType },
  {0x33523662,1,0,"DOMNode",(int64)&cw_DOMNode },
  {0x3F521A63,1,0,"DebuggerClient",(int64)&cw_DebuggerClient },
  {0x3B3DA065,1,0,"XMLWriter",(int64)&cw_XMLWriter },
  {0x5C55D968,0,0,"SoapParam",(int64)&cw_SoapParam },
  {0x7FE59D68,1,0,"DOMComment",(int64)&cw_DOMComment },
  {0x31A4566A,1,0,"DOMException",(int64)&cw_DOMException },
  {0x5071A86B,0,0,"VectorIterator",(int64)&cw_VectorIterator },
  {0x22AAD16B,1,0,"LengthException",(int64)&cw_LengthException },
  {0x12E92A6C,1,0,"Closure",(int64)&cw_Closure },
  {0x4FA06573,0,0,"ReflectionExtension",(int64)&cw_ReflectionExtension },
  {0x3BF89873,1,0,"ArrayIterator",(int64)&cw_ArrayIterator },
  {0x5393D475,1,0,"InvalidArgumentException",(int64)&cw_InvalidArgumentException },
  {0x1254DD7A,1,0,"ReflectionObject",(int64)&cw_ReflectionObject },
  {0x2572EF7D,0,0,"SQLite3Result",(int64)&cw_SQLite3Result },
  {0x7633B87D,1,0,"DOMDocumentFragment",(int64)&cw_DOMDocumentFragment },
  {0x4D987F80,1,0,"DOMProcessingInstruction",(int64)&cw_DOMProcessingInstruction },
  {0x35281082,1,0,"ReflectionFunctionAbstract",(int64)&cw_ReflectionFunctionAbstract },
  {0x7D3E8383,1,0,"DateTimeZone",(int64)&cw_DateTimeZone },
  {0x66A7BA84,1,0,"DomainException",(int64)&cw_DomainException },
  {0x3618ED87,1,0,"EncodingDetector",(int64)&cw_EncodingDetector },
  {0x29BA228F,0,0,"DummyClosure",(int64)&cw_DummyClosure },
  {0x11506C8F,1,0,"Directory",(int64)&cw_Directory },
  {0x3CDEA590,1,0,"BadMethodCallException",(int64)&cw_BadMethodCallException },
  {0x68A05993,1,0,"ReflectionParameter",(int64)&cw_ReflectionParameter },
  {0x15CABE94,0,0,"DOMCDATASection",(int64)&cw_DOMCDATASection },
  {0x4E24D694,0,0,"__PHP_Incomplete_Class",(int64)&cw___PHP_Incomplete_Class },
  {0x00B66A94,1,0,"Exception",(int64)&cw_Exception },
  {0x3B1A8E9D,1,0,"InvalidOperationException",(int64)&cw_InvalidOperationException },
  {0x7E923FA7,1,0,"SplFileInfo",(int64)&cw_SplFileInfo },
  {0x09C6DBA8,1,0,"DOMXPath",(int64)&cw_DOMXPath },
  {0x500E11A9,1,0,"SQLite3",(int64)&cw_SQLite3 },
  {0x72DFE4AA,1,0,"Locale",(int64)&cw_Locale },
  {0x06867BAD,0,0,"DebuggerProxyCmdUser",(int64)&cw_DebuggerProxyCmdUser },
  {0x67C804AD,1,0,"PDO",(int64)&cw_PDO },
  {0x3A043AAF,1,0,"DOMDocument",(int64)&cw_DOMDocument },
  {0x728E44B0,1,0,"ReflectionMethod",(int64)&cw_ReflectionMethod },
  {0x3B20B8B1,1,0,"DOMNodeList",(int64)&cw_DOMNodeList },
  {0x799762BA,1,0,"FB_MySQLLexer",(int64)&cw_FB_MySQLLexer },
  {0x1E320CBD,0,0,"StableMapIterator",(int64)&cw_StableMapIterator },
  {0x519F77BD,1,0,"PDOException",(int64)&cw_PDOException },
  {0x77F5DDC3,1,0,"DOMElement",(int64)&cw_DOMElement },
  {0x549781C8,1,0,"AppendIterator",(int64)&cw_AppendIterator },
  {0x34FC8CCB,1,0,"LibXMLError",(int64)&cw_LibXMLError },
  {0x059C72D0,1,0,"Memcache",(int64)&cw_Memcache },
  {0x18BD84D1,0,0,"DummyContinuation",(int64)&cw_DummyContinuation },
  {0x20DCFAD1,1,0,"Map",(int64)&cw_Map },
  {0x3841AED2,0,0,"SQLite3Stmt",(int64)&cw_SQLite3Stmt },
  {0x2259EDD2,1,0,"SplFileObject",(int64)&cw_SplFileObject },
  {0x77B068D4,1,0,"UnderflowException",(int64)&cw_UnderflowException },
  {0x431A6ED8,1,0,"RecursiveDirectoryIterator",(int64)&cw_RecursiveDirectoryIterator },
  {0x76A727D9,1,0,"OverflowException",(int64)&cw_OverflowException },
  {0x38182BDA,1,0,"SoapClient",(int64)&cw_SoapClient },
  {0x18A8B3DC,1,0,"RuntimeException",(int64)&cw_RuntimeException },
  {0x7790E9E2,1,0,"Continuation",(int64)&cw_Continuation },
  {0x3DB659E4,1,0,"ReflectionProperty",(int64)&cw_ReflectionProperty },
  {0x06B952EC,1,0,"StableMap",(int64)&cw_StableMap },
  {0x1D4912F4,1,0,"DOMAttr",(int64)&cw_DOMAttr },
  {0x78BA13F7,1,0,"stdClass",(int64)&cw_stdClass },
  {0x7E2A01FC,1,0,"OutOfRangeException",(int64)&cw_OutOfRangeException },
  {0x246387FD,0,0,"DOMImplementation",(int64)&cw_DOMImplementation },
  {0x33ED12FD,1,0,"XhprofFrame",(int64)&cw_XhprofFrame },
  {0x574B86FF,1,0,"DOMEntity",(int64)&cw_DOMEntity },
};
static const int ctdMapTable[] = {
  -1,-1,-1,-1,-1,-1,-1,-1,
  0,1,-1,2,-1,-1,-1,-1,
  -1,4,-1,5,-1,6,-1,-1,
  -1,-1,7,-1,-1,8,9,-1,
  -1,-1,-1,-1,-1,10,-1,-1,
  -1,-1,-1,11,-1,-1,-1,12,
  -1,13,14,-1,15,16,-1,17,
  18,-1,-1,-1,-1,19,21,-1,
  -1,22,23,-1,24,-1,26,-1,
  -1,29,30,32,-1,33,34,35,
  36,-1,-1,37,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,39,-1,
  -1,40,41,42,-1,43,-1,-1,
  44,-1,46,47,49,-1,-1,-1,
  -1,-1,-1,50,-1,52,-1,-1,
  -1,-1,53,-1,-1,54,-1,-1,
  56,-1,57,58,59,-1,-1,60,
  -1,-1,-1,-1,-1,-1,-1,61,
  63,-1,-1,64,65,-1,-1,-1,
  -1,-1,-1,-1,-1,68,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,69,
  70,71,72,-1,-1,73,-1,75,
  76,77,-1,-1,-1,-1,-1,-1,
  -1,-1,78,-1,-1,79,-1,-1,
  -1,-1,-1,81,-1,-1,-1,-1,
  82,-1,-1,83,-1,-1,-1,-1,
  84,85,87,-1,89,-1,-1,-1,
  90,91,92,-1,93,-1,-1,-1,
  -1,-1,94,-1,95,-1,-1,-1,
  -1,-1,-1,-1,96,-1,-1,-1,
  -1,-1,-1,-1,97,-1,-1,98,
  -1,-1,-1,-1,99,100,-1,102,

};

static const hashNodeCTD *
findCTD(CStrRef name) {
  int64 hash = name->hash();
  int o = ctdMapTable[hash & 255];
  if (UNLIKELY(o < 0)) return NULL;
  const hashNodeCTD *p = &ctdBuckets[o];
  do {
    int64 h = p->hash;
    if (h == hash && (LIKELY(p->name==name.data())||LIKELY(!strcasecmp(p->name, name.data())))) return p;
  } while (!(p++->flags & 1));
  return NULL;
}
const ObjectStaticCallbacks * get_builtin_object_static_callbacks(CStrRef s) {
  const hashNodeCTD *p = findCTD(s);
  if (p) {
    return ((const ObjectStaticCallbacks *)p->ptv1);
  }
  return NULL;
}
ObjectData *create_builtin_object_only_no_init(CStrRef s, ObjectData* root /* = NULL*/) {
  const ObjectStaticCallbacks *cwo = get_builtin_object_static_callbacks(s);
  if (LIKELY(cwo != 0)) return cwo->createOnlyNoInit(root);
  return 0;
}
Object create_builtin_object_only(CStrRef s, ObjectData* root /* = NULL*/) {
  ObjectData *obj = create_builtin_object_only_no_init(s, root);
  if (UNLIKELY(!obj)) throw_missing_class(s);
  Object r = obj;
  obj->init();
  return r;
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&q_Collator$$SORT_REGULAR,
  0x0000000000000037,
  (int64)&q_Collator$$ON,
  0x0000000200000037,
  (int64)&q_Collator$$NUMERIC_COLLATION,
  0x0000000400000037,
  (int64)&q_Collator$$HIRAGANA_QUATERNARY_MODE,
  0x0000000600000037,
  (int64)&q_Collator$$QUATERNARY,
  0x0000000800000037,
  (int64)&q_Collator$$SORT_NUMERIC,
  0x0000000a00000037,
  (int64)&q_Collator$$NON_IGNORABLE,
  0x0000000c00000037,
  (int64)&q_Collator$$DEFAULT_VALUE,
  0x0000000e00000037,
  (int64)&q_Collator$$CASE_LEVEL,
  0x0000001000000037,
  (int64)&q_Collator$$LOWER_FIRST,
  0x0000001200000037,
  (int64)&q_Collator$$UPPER_FIRST,
  0x0000001400000037,
  (int64)&q_Collator$$IDENTICAL,
  0x0000001600000037,
  (int64)&q_Collator$$PRIMARY,
  0x0000001800000037,
  (int64)&q_Collator$$FRENCH_COLLATION,
  0x0000001a00000037,
  (int64)&q_Collator$$SECONDARY,
  0x0000001c00000037,
  (int64)&q_Collator$$TERTIARY,
  0x0000001e00000037,
  (int64)&q_Collator$$STRENGTH,
  0x0000002000000037,
  (int64)&q_Collator$$DEFAULT_STRENGTH,
  0x0000002200000037,
  (int64)&q_Collator$$CASE_FIRST,
  0x0000002400000037,
  (int64)&q_Collator$$NORMALIZATION_MODE,
  0x0000002600000037,
  (int64)&q_Collator$$ALTERNATE_HANDLING,
  0x0000002800000037,
  (int64)&q_Collator$$SORT_STRING,
  0x0000002a00000037,
  (int64)&q_Collator$$SHIFTED,
  0x0000002c00000037,
  (int64)&q_Collator$$OFF,
  0x0000002e00000037,
  (int64)&q_DateTime$$RSS,
  0x0000003000000077,
  (int64)&q_DateTime$$ATOM,
  0x0000003200000077,
  (int64)&q_DateTime$$ISO8601,
  0x0000003400000077,
  (int64)&q_DateTime$$RFC850,
  0x0000003600000077,
  (int64)&q_DateTime$$COOKIE,
  0x0000003800000077,
  (int64)&q_DateTime$$RFC1036,
  0x0000003a00000077,
  (int64)&q_DateTime$$RFC3339,
  0x0000003c00000077,
  (int64)&q_DateTime$$RFC2822,
  0x0000003e00000077,
  (int64)&q_DateTime$$RFC822,
  0x0000004000000077,
  (int64)&q_DateTime$$W3C,
  0x0000004200000077,
  (int64)&q_DateTime$$RFC1123,
  0x0000004400000077,
  (int64)&q_DateTimeZone$$AFRICA,
  0x0000004600000037,
  (int64)&q_DateTimeZone$$EUROPE,
  0x0000004800000037,
  (int64)&q_DateTimeZone$$ARCTIC,
  0x0000004a00000037,
  (int64)&q_DateTimeZone$$AMERICA,
  0x0000004c00000037,
  (int64)&q_DateTimeZone$$PACIFIC,
  0x0000004e00000037,
  (int64)&q_DateTimeZone$$PER_COUNTRY,
  0x0000005000000037,
  (int64)&q_DateTimeZone$$UTC,
  0x0000005200000037,
  (int64)&q_DateTimeZone$$ASIA,
  0x0000005400000037,
  (int64)&q_DateTimeZone$$INDIAN,
  0x0000005600000037,
  (int64)&q_DateTimeZone$$ALL,
  0x0000005800000037,
  (int64)&q_DateTimeZone$$ATLANTIC,
  0x0000005a00000037,
  (int64)&q_DateTimeZone$$AUSTRALIA,
  0x0000005c00000037,
  (int64)&q_DateTimeZone$$ALL_WITH_BC,
  0x0000005e00000037,
  (int64)&q_DateTimeZone$$ANTARCTICA,
  0x0000006000000037,
  (int64)&q_DebuggerClient$$STATE_UNINIT,
  0x0000006200000037,
  (int64)&q_DebuggerClient$$STATE_INITIALIZING,
  0x0000006400000037,
  (int64)&q_DebuggerClient$$STATE_BUSY,
  0x0000006600000037,
  (int64)&q_DebuggerClient$$STATE_INVALID,
  0x0000006800000037,
  (int64)&q_DebuggerClient$$STATE_READY_FOR_COMMAND,
  0x0000006a00000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_VARIABLES,
  0x0000006c00000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_FILENAMES,
  0x0000006e00000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASSES,
  0x0000007000000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASS_CONSTANTS,
  0x0000007200000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASS_PROPERTIES,
  0x0000007400000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_CODE,
  0x0000007600000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASS_METHODS,
  0x0000007800000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_KEYWORDS,
  0x0000007a00000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_CONSTANTS,
  0x0000007c00000037,
  (int64)&q_DebuggerClientCmdUser$$AUTO_COMPLETE_FUNCTIONS,
  0x0000007e00000037,
  (int64)&q_Locale$$VALID_LOCALE,
  0x0000008000000037,
  (int64)&q_Locale$$ACTUAL_LOCALE,
  0x0000008200000037,
  (int64)&q_Memcached$$RES_ERRNO,
  0x0000008400000037,
  (int64)&q_Memcached$$OPT_TCP_NODELAY,
  0x0000008600000037,
  (int64)&q_Memcached$$RES_BUFFERED,
  0x0000008800000037,
  (int64)&q_Memcached$$OPT_SERVER_FAILURE_LIMIT,
  0x0000008a00000037,
  (int64)&q_Memcached$$RES_NO_SERVERS,
  0x0000008c00000037,
  (int64)&q_Memcached$$OPT_LIBKETAMA_COMPATIBLE,
  0x0000008e00000037,
  (int64)&q_Memcached$$RES_SUCCESS,
  0x0000009000000037,
  (int64)&q_Memcached$$OPT_PREFIX_KEY,
  0x0000009200000037,
  (int64)&q_Memcached$$OPT_HASH,
  0x0000009400000037,
  (int64)&q_Memcached$$DISTRIBUTION_CONSISTENT,
  0x0000009600000037,
  (int64)&q_Memcached$$HASH_HSIEH,
  0x0000009800000037,
  (int64)&q_Memcached$$OPT_BINARY_PROTOCOL,
  0x0000009a00000037,
  (int64)&q_Memcached$$RES_UNKNOWN_READ_FAILURE,
  0x0000009c00000037,
  (int64)&q_Memcached$$RES_NOTFOUND,
  0x0000009e00000037,
  (int64)&q_Memcached$$RES_PROTOCOL_ERROR,
  0x000000a000000037,
  (int64)&q_Memcached$$RES_CLIENT_ERROR,
  0x000000a200000037,
  (int64)&q_Memcached$$RES_SERVER_ERROR,
  0x000000a400000037,
  (int64)&q_Memcached$$HASH_FNV1A_64,
  0x000000a600000037,
  (int64)&q_Memcached$$OPT_CACHE_LOOKUPS,
  0x000000a800000037,
  (int64)&q_Memcached$$HASH_FNV1_64,
  0x000000aa00000037,
  (int64)&q_Memcached$$OPT_SEND_TIMEOUT,
  0x000000ac00000037,
  (int64)&q_Memcached$$RES_TIMEOUT,
  0x000000ae00000037,
  (int64)&q_Memcached$$RES_BAD_KEY_PROVIDED,
  0x000000b000000037,
  (int64)&q_Memcached$$RES_SOME_ERRORS,
  0x000000b200000037,
  (int64)&q_Memcached$$OPT_SOCKET_SEND_SIZE,
  0x000000b400000037,
  (int64)&q_Memcached$$OPT_COMPRESSION,
  0x000000b600000037,
  (int64)&q_Memcached$$SERIALIZER_PHP,
  0x000000b800000037,
  (int64)&q_Memcached$$OPT_RETRY_TIMEOUT,
  0x000000ba00000037,
  (int64)&q_Memcached$$HAVE_JSON,
  0x000000bc00000027,
  (int64)&q_Memcached$$SERIALIZER_JSON,
  0x000000be00000037,
  (int64)&q_Memcached$$SERIALIZER_IGBINARY,
  0x000000c000000037,
  (int64)&q_Memcached$$OPT_NO_BLOCK,
  0x000000c200000037,
  (int64)&q_Memcached$$DISTRIBUTION_MODULA,
  0x000000c400000037,
  (int64)&q_Memcached$$HASH_CRC,
  0x000000c600000037,
  (int64)&q_Memcached$$RES_WRITE_FAILURE,
  0x000000c800000037,
  (int64)&q_Memcached$$HASH_FNV1_32,
  0x000000ca00000037,
  (int64)&q_Memcached$$OPT_SOCKET_RECV_SIZE,
  0x000000cc00000037,
  (int64)&q_Memcached$$OPT_POLL_TIMEOUT,
  0x000000ce00000037,
  (int64)&q_Memcached$$OPT_DISTRIBUTION,
  0x000000d000000037,
  (int64)&q_Memcached$$RES_CONNECTION_SOCKET_CREATE_FAILURE,
  0x000000d200000037,
  (int64)&q_Memcached$$OPT_RECV_TIMEOUT,
  0x000000d400000037,
  (int64)&q_Memcached$$GET_PRESERVE_ORDER,
  0x000000d600000037,
  (int64)&q_Memcached$$HASH_DEFAULT,
  0x000000d800000037,
  (int64)&q_Memcached$$OPT_BUFFER_WRITES,
  0x000000da00000037,
  (int64)&q_Memcached$$HASH_FNV1A_32,
  0x000000dc00000037,
  (int64)&q_Memcached$$RES_HOST_LOOKUP_FAILURE,
  0x000000de00000037,
  (int64)&q_Memcached$$RES_DATA_EXISTS,
  0x000000e000000037,
  (int64)&q_Memcached$$RES_NOTSTORED,
  0x000000e200000037,
  (int64)&q_Memcached$$HASH_MD5,
  0x000000e400000037,
  (int64)&q_Memcached$$RES_END,
  0x000000e600000037,
  (int64)&q_Memcached$$OPT_SERIALIZER,
  0x000000e800000037,
  (int64)&q_Memcached$$RES_FAILURE,
  0x000000ea00000037,
  (int64)&q_Memcached$$HAVE_IGBINARY,
  0x000000ec00000027,
  (int64)&q_Memcached$$OPT_CONNECT_TIMEOUT,
  0x000000ee00000037,
  (int64)&q_Memcached$$RES_PARTIAL_READ,
  0x000000f000000037,
  (int64)&q_Memcached$$HASH_MURMUR,
  0x000000f200000037,
  (int64)&q_Memcached$$RES_PAYLOAD_FAILURE,
  0x000000f400000037,
  (int64)&q_Normalizer$$FORM_KD,
  0x000000f600000037,
  (int64)&q_Normalizer$$FORM_KC,
  0x000000f800000037,
  (int64)&q_Normalizer$$NFKC,
  0x000000fa00000037,
  (int64)&q_Normalizer$$FORM_D,
  0x000000fc00000037,
  (int64)&q_Normalizer$$NFC,
  0x000000fe00000037,
  (int64)&q_Normalizer$$NFD,
  0x0000010000000037,
  (int64)&q_Normalizer$$NFKD,
  0x0000010200000037,
  (int64)&q_Normalizer$$NONE,
  0x0000010400000037,
  (int64)&q_Normalizer$$FORM_C,
  0x0000010600000037,
  (int64)&q_PDO$$ATTR_CASE,
  0x0000010800000037,
  (int64)&q_PDO$$ATTR_STATEMENT_CLASS,
  0x0000010a00000037,
  (int64)&q_PDO$$ERRMODE_EXCEPTION,
  0x0000010c00000037,
  (int64)&q_PDO$$CASE_NATURAL,
  0x0000010e00000037,
  (int64)&q_PDO$$FETCH_OBJ,
  0x0000011000000037,
  (int64)&q_PDO$$FETCH_INTO,
  0x0000011200000037,
  (int64)&q_PDO$$FETCH_BOUND,
  0x0000011400000037,
  (int64)&q_PDO$$MYSQL_ATTR_INIT_COMMAND,
  0x0000011600000037,
  (int64)&q_PDO$$ATTR_CLIENT_VERSION,
  0x0000011800000037,
  (int64)&q_PDO$$ATTR_FETCH_CATALOG_NAMES,
  0x0000011a00000037,
  (int64)&q_PDO$$CASE_LOWER,
  0x0000011c00000037,
  (int64)&q_PDO$$FETCH_GROUP,
  0x0000011e00000037,
  (int64)&q_PDO$$CASE_UPPER,
  0x0000012000000037,
  (int64)&q_PDO$$PARAM_EVT_FETCH_POST,
  0x0000012200000037,
  (int64)&q_PDO$$ATTR_TIMEOUT,
  0x0000012400000037,
  (int64)&q_PDO$$PARAM_EVT_EXEC_PRE,
  0x0000012600000037,
  (int64)&q_PDO$$ATTR_ERRMODE,
  0x0000012800000037,
  (int64)&q_PDO$$ATTR_DEFAULT_FETCH_MODE,
  0x0000012a00000037,
  (int64)&q_PDO$$ATTR_EMULATE_PREPARES,
  0x0000012c00000037,
  (int64)&q_PDO$$ATTR_PREFETCH,
  0x0000012e00000037,
  (int64)&q_PDO$$FETCH_UNIQUE,
  0x0000013000000037,
  (int64)&q_PDO$$MYSQL_ATTR_READ_DEFAULT_GROUP,
  0x0000013200000037,
  (int64)&q_PDO$$ATTR_SERVER_INFO,
  0x0000013400000037,
  (int64)&q_PDO$$PARAM_EVT_NORMALIZE,
  0x0000013600000037,
  (int64)&q_PDO$$ATTR_CONNECTION_STATUS,
  0x0000013800000037,
  (int64)&q_PDO$$ATTR_ORACLE_NULLS,
  0x0000013a00000037,
  (int64)&q_PDO$$MYSQL_ATTR_FOUND_ROWS,
  0x0000013c00000037,
  (int64)&q_PDO$$FETCH_ORI_NEXT,
  0x0000013e00000037,
  (int64)&q_PDO$$ATTR_FETCH_TABLE_NAMES,
  0x0000014000000037,
  (int64)&q_PDO$$FETCH_ORI_REL,
  0x0000014200000037,
  (int64)&q_PDO$$FETCH_ASSOC,
  0x0000014400000037,
  (int64)&q_PDO$$ATTR_CURSOR_NAME,
  0x0000014600000037,
  (int64)&q_PDO$$ATTR_MAX_COLUMN_LEN,
  0x0000014800000037,
  (int64)&q_PDO$$ATTR_AUTOCOMMIT,
  0x0000014a00000037,
  (int64)&q_PDO$$PARAM_NULL,
  0x0000014c00000037,
  (int64)&q_PDO$$PARAM_EVT_ALLOC,
  0x0000014e00000037,
  (int64)&q_PDO$$PARAM_BOOL,
  0x0000015000000037,
  (int64)&q_PDO$$NULL_NATURAL,
  0x0000015200000037,
  (int64)&q_PDO$$PARAM_INT,
  0x0000015400000037,
  (int64)&q_PDO$$FETCH_NUM,
  0x0000015600000037,
  (int64)&q_PDO$$FETCH_ORI_PRIOR,
  0x0000015800000037,
  (int64)&q_PDO$$PARAM_EVT_EXEC_POST,
  0x0000015a00000037,
  (int64)&q_PDO$$MYSQL_ATTR_USE_BUFFERED_QUERY,
  0x0000015c00000037,
  (int64)&q_PDO$$PARAM_STR,
  0x0000015e00000037,
  (int64)&q_PDO$$ATTR_CURSOR,
  0x0000016000000037,
  (int64)&q_PDO$$ATTR_DRIVER_NAME,
  0x0000016200000037,
  (int64)&q_PDO$$FETCH_USE_DEFAULT,
  0x0000016400000037,
  (int64)&q_PDO$$ATTR_SERVER_VERSION,
  0x0000016600000037,
  (int64)&q_PDO$$MYSQL_ATTR_DIRECT_QUERY,
  0x0000016800000037,
  (int64)&q_PDO$$FETCH_PROPS_LATE,
  0x0000016a00000037,
  (int64)&q_PDO$$FETCH_COLUMN,
  0x0000016c00000037,
  (int64)&q_PDO$$FETCH_CLASSTYPE,
  0x0000016e00000037,
  (int64)&q_PDO$$FETCH_SERIALIZE,
  0x0000017000000037,
  (int64)&q_PDO$$MYSQL_ATTR_LOCAL_INFILE,
  0x0000017200000037,
  (int64)&q_PDO$$FETCH_BOTH,
  0x0000017400000037,
  (int64)&q_PDO$$FETCH_KEY_PAIR,
  0x0000017600000037,
  (int64)&q_PDO$$PARAM_EVT_FETCH_PRE,
  0x0000017800000037,
  (int64)&q_PDO$$CURSOR_FWDONLY,
  0x0000017a00000037,
  (int64)&q_PDO$$FETCH_ORI_FIRST,
  0x0000017c00000037,
  (int64)&q_PDO$$CURSOR_SCROLL,
  0x0000017e00000037,
  (int64)&q_PDO$$FETCH_ORI_LAST,
  0x0000018000000037,
  (int64)&q_PDO$$ATTR_PERSISTENT,
  0x0000018200000037,
  (int64)&q_PDO$$NULL_EMPTY_STRING,
  0x0000018400000037,
  (int64)&q_PDO$$ATTR_STRINGIFY_FETCHES,
  0x0000018600000037,
  (int64)&q_PDO$$MYSQL_ATTR_READ_DEFAULT_FILE,
  0x0000018800000037,
  (int64)&q_PDO$$FETCH_FUNC,
  0x0000018a00000037,
  (int64)&q_PDO$$FETCH_ORI_ABS,
  0x0000018c00000037,
  (int64)&q_PDO$$NULL_TO_STRING,
  0x0000018e00000037,
  (int64)&q_PDO$$MYSQL_ATTR_MAX_BUFFER_SIZE,
  0x0000019000000037,
  (int64)&q_PDO$$FETCH_CLASS,
  0x0000019200000037,
  (int64)&q_PDO$$FETCH_LAZY,
  0x0000019400000037,
  (int64)&q_PDO$$MYSQL_ATTR_COMPRESS,
  0x0000019600000037,
  (int64)&q_PDO$$ERRMODE_WARNING,
  0x0000019800000037,
  (int64)&q_PDO$$ERRMODE_SILENT,
  0x0000019a00000037,
  (int64)&q_PDO$$ERR_NONE,
  0x0000019c00000077,
  (int64)&q_PDO$$PARAM_LOB,
  0x0000019e00000037,
  (int64)&q_PDO$$FETCH_NAMED,
  0x000001a000000037,
  (int64)&q_PDO$$PARAM_INPUT_OUTPUT,
  0x000001a200000037,
  (int64)&q_PDO$$MYSQL_ATTR_IGNORE_SPACE,
  0x000001a400000037,
  (int64)&q_PDO$$PARAM_STMT,
  0x000001a600000037,
  (int64)&q_PDO$$PARAM_EVT_FREE,
  0x000001a800000037,
  (int64)&q_SpoofChecker$$SINGLE_SCRIPT_CONFUSABLE,
  0x000001aa00000037,
  (int64)&q_SpoofChecker$$WHOLE_SCRIPT_CONFUSABLE,
  0x000001ac00000037,
  (int64)&q_SpoofChecker$$CHAR_LIMIT,
  0x000001ae00000037,
  (int64)&q_SpoofChecker$$INVISIBLE,
  0x000001b000000037,
  (int64)&q_SpoofChecker$$SINGLE_SCRIPT,
  0x000001b200000037,
  (int64)&q_SpoofChecker$$ANY_CASE,
  0x000001b400000037,
  (int64)&q_SpoofChecker$$MIXED_SCRIPT_CONFUSABLE,
  0x000001b600000037,
  (int64)&q_XMLReader$$DOC_FRAGMENT,
  0x000001b800000037,
  (int64)&q_XMLReader$$NOTATION,
  0x000001ba00000037,
  (int64)&q_XMLReader$$COMMENT,
  0x000001bc00000037,
  (int64)&q_XMLReader$$ELEMENT,
  0x000001be00000037,
  (int64)&q_XMLReader$$SUBST_ENTITIES,
  0x000001c000000037,
  (int64)&q_XMLReader$$DEFAULTATTRS,
  0x000001c200000037,
  (int64)&q_XMLReader$$CDATA,
  0x000001c400000037,
  (int64)&q_XMLReader$$LOADDTD,
  0x000001c600000037,
  (int64)&q_XMLReader$$TEXT,
  0x000001c800000037,
  (int64)&q_XMLReader$$WHITESPACE,
  0x000001ca00000037,
  (int64)&q_XMLReader$$DOC_TYPE,
  0x000001cc00000037,
  (int64)&q_XMLReader$$SIGNIFICANT_WHITESPACE,
  0x000001ce00000037,
  (int64)&q_XMLReader$$PI,
  0x000001d000000037,
  (int64)&q_XMLReader$$DOC,
  0x000001d200000037,
  (int64)&q_XMLReader$$ENTITY,
  0x000001d400000037,
  (int64)&q_XMLReader$$END_ELEMENT,
  0x000001d600000037,
  (int64)&q_XMLReader$$XML_DECLARATION,
  0x000001d800000037,
  (int64)&q_XMLReader$$NONE,
  0x000001da00000037,
  (int64)&q_XMLReader$$END_ENTITY,
  0x000001dc00000037,
  (int64)&q_XMLReader$$ATTRIBUTE,
  0x000001de00000037,
  (int64)&q_XMLReader$$VALIDATE,
  0x000001e000000037,
  (int64)&q_XMLReader$$ENTITY_REF,
  0x000001e200000037,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x7595A403,5,1,0,36,3,0,&NAMSTR(s_sys_ss7595a403, "SORT_REGULAR") },
  {0x2933DFC3,21,3,0,100,3,0,&NAMSTR(s_sys_ss2933dfc3, "ON") },
  {0x1B088E44,5,5,0,100,3,0,&NAMSTR(s_sys_ss1b088e44, "NUMERIC_COLLATION") },
  {0x5D2A4107,-1,7,0,100,3,0,&NAMSTR(s_sys_ss5d2a4107, "HIRAGANA_QUATERNARY_MODE") },
  {0x755E648C,7,9,0,100,3,0,&NAMSTR(s_sys_ss755e648c, "QUATERNARY") },
  {0x5F49E8D4,16,11,0,36,3,0,&NAMSTR(s_sys_ss5f49e8d4, "SORT_NUMERIC") },
  {0x372ABD54,3,13,0,100,3,0,&NAMSTR(s_sys_ss372abd54, "NON_IGNORABLE") },
  {0x4693E955,5,15,0,100,3,0,&NAMSTR(s_sys_ss4693e955, "DEFAULT_VALUE") },
  {0x4EDAD218,11,17,0,36,3,0,&NAMSTR(s_sys_ss4edad218, "CASE_LEVEL") },
  {0x6BE5D798,1,19,0,100,3,0,&NAMSTR(s_sys_ss6be5d798, "LOWER_FIRST") },
  {0x478AF4DB,0,21,0,100,3,0,&NAMSTR(s_sys_ss478af4db, "UPPER_FIRST") },
  {0x6C59E4DD,12,23,0,100,3,0,&NAMSTR(s_sys_ss6c59e4dd, "IDENTICAL") },
  {0x428C3A20,2,25,0,100,3,0,&NAMSTR(s_sys_ss428c3a20, "PRIMARY") },
  {0x0B4C7661,7,27,0,36,3,0,&NAMSTR(s_sys_ss0b4c7661, "FRENCH_COLLATION") },
  {0x10EC5FE1,1,29,0,36,3,0,&NAMSTR(s_sys_ss10ec5fe1, "SECONDARY") },
  {0x020550A1,2,31,0,100,3,0,&NAMSTR(s_sys_ss020550a1, "TERTIARY") },
  {0x7DBF8563,-13,33,0,100,3,0,&NAMSTR(s_sys_ss7dbf8563, "STRENGTH") },
  {0x1A7C8BE7,-13,35,0,100,3,0,&NAMSTR(s_sys_ss1a7c8be7, "DEFAULT_STRENGTH") },
  {0x45B7486D,-10,37,0,100,3,0,&NAMSTR(s_sys_ss45b7486d, "CASE_FIRST") },
  {0x0A8525F4,-3,39,0,100,3,0,&NAMSTR(s_sys_ss0a8525f4, "NORMALIZATION_MODE") },
  {0x49EFE835,-2,41,0,100,3,0,&NAMSTR(s_sys_ss49efe835, "ALTERNATE_HANDLING") },
  {0x497C62FC,-8,43,0,36,3,0,&NAMSTR(s_sys_ss497c62fc, "SORT_STRING") },
  {0x3620143C,-16,45,0,100,3,0,&NAMSTR(s_sys_ss3620143c, "SHIFTED") },
  {0x651A75FD,-22,47,0,100,3,0,&NAMSTR(s_sys_ss651a75fd, "OFF") },

  {0x175D4C44,9,49,0,100,7,0,&NAMSTR(s_sys_ss175d4c44, "RSS") },
  {0x54584B05,3,51,0,100,7,0,&NAMSTR(s_sys_ss54584b05, "ATOM") },
  {0x3EAD7BC9,6,53,0,100,7,0,&NAMSTR(s_sys_ss3a38037b, "ISO8601") },
  {0x76F8FF8A,2,55,0,100,7,0,&NAMSTR(s_sys_ss0ec93dd2, "RFC850") },
  {0x364F7D2C,-2,57,0,36,7,0,&NAMSTR(s_sys_ss364f7d2c, "COOKIE") },
  {0x1858652C,5,59,0,36,7,0,&NAMSTR(s_sys_ss188aaf11, "RFC1036") },
  {0x6861602C,-6,61,0,100,7,0,&NAMSTR(s_sys_ss27a57f90, "RFC3339") },
  {0x7D83F017,-1,63,0,100,7,0,&NAMSTR(s_sys_ss55edae9f, "RFC2822") },
  {0x426F891B,-5,65,0,36,7,0,&NAMSTR(s_sys_ss71ebb708, "RFC822") },
  {0x4002B3DB,0,67,0,100,7,0,&NAMSTR(s_sys_ss1577acb0, "W3C") },
  {0x7968F7FE,-3,69,0,100,7,0,&NAMSTR(s_sys_ss35b92826, "RFC1123") },

  {0x66554802,3,71,0,100,3,0,&NAMSTR(s_sys_ss66554802, "AFRICA") },
  {0x44E3CA2A,7,73,0,100,3,0,&NAMSTR(s_sys_ss44e3ca2a, "EUROPE") },
  {0x6EA96ECC,5,75,0,100,3,0,&NAMSTR(s_sys_ss6ea96ecc, "ARCTIC") },
  {0x5E0C038D,10,77,0,100,3,0,&NAMSTR(s_sys_ss5e0c038d, "AMERICA") },
  {0x0573E5EF,2,79,0,100,3,0,&NAMSTR(s_sys_ss0573e5ef, "PACIFIC") },
  {0x49C301F3,0,81,0,100,3,0,&NAMSTR(s_sys_ss49c301f3, "PER_COUNTRY") },
  {0x2364CA14,3,83,0,100,3,0,&NAMSTR(s_sys_ss2364ca14, "UTC") },
  {0x261E0FF7,3,85,0,36,3,0,&NAMSTR(s_sys_ss261e0ff7, "ASIA") },
  {0x2D25E137,-4,87,0,100,3,0,&NAMSTR(s_sys_ss2d25e137, "INDIAN") },
  {0x0A9EEBF8,3,89,0,100,3,0,&NAMSTR(s_sys_ss0a9eebf8, "ALL") },
  {0x3E63BC79,1,91,0,100,3,0,&NAMSTR(s_sys_ss3e63bc79, "ATLANTIC") },
  {0x6522549E,-10,93,0,36,3,0,&NAMSTR(s_sys_ss6522549e, "AUSTRALIA") },
  {0x3A732B5E,-7,95,0,100,3,0,&NAMSTR(s_sys_ss3a732b5e, "ALL_WITH_BC") },
  {0x746EAFDF,-11,97,0,100,3,0,&NAMSTR(s_sys_ss746eafdf, "ANTARCTICA") },

  {0x410FE591,1,99,0,100,3,0,&NAMSTR(s_sys_ss410fe591, "STATE_UNINIT") },
  {0x10F6B8B6,3,101,0,100,3,0,&NAMSTR(s_sys_ss10f6b8b6, "STATE_INITIALIZING") },
  {0x74AC1CDB,0,103,0,100,3,0,&NAMSTR(s_sys_ss74ac1cdb, "STATE_BUSY") },
  {0x531FF28D,-3,105,0,100,3,0,&NAMSTR(s_sys_ss531ff28d, "STATE_INVALID") },
  {0x64D6C96F,-2,107,0,100,3,0,&NAMSTR(s_sys_ss64d6c96f, "STATE_READY_FOR_COMMAND") },

  {0x45604DE2,8,109,0,100,3,0,&NAMSTR(s_sys_ss45604de2, "AUTO_COMPLETE_VARIABLES") },
  {0x3034F827,-1,111,0,36,3,0,&NAMSTR(s_sys_ss3034f827, "AUTO_COMPLETE_FILENAMES") },
  {0x6C004CA7,7,113,0,100,3,0,&NAMSTR(s_sys_ss6c004ca7, "AUTO_COMPLETE_CLASSES") },
  {0x7DC24A29,4,115,0,100,3,0,&NAMSTR(s_sys_ss7dc24a29, "AUTO_COMPLETE_CLASS_CONSTANTS") },
  {0x1222BC8B,-1,117,0,36,3,0,&NAMSTR(s_sys_ss1222bc8b, "AUTO_COMPLETE_CLASS_PROPERTIES") },
  {0x61E87B6B,0,119,0,100,3,0,&NAMSTR(s_sys_ss61e87b6b, "AUTO_COMPLETE_CODE") },
  {0x3AAC70EF,-2,121,0,36,3,0,&NAMSTR(s_sys_ss3aac70ef, "AUTO_COMPLETE_CLASS_METHODS") },
  {0x53E2108F,-2,123,0,100,3,0,&NAMSTR(s_sys_ss53e2108f, "AUTO_COMPLETE_KEYWORDS") },
  {0x002235D3,-6,125,0,100,3,0,&NAMSTR(s_sys_ss002235d3, "AUTO_COMPLETE_CONSTANTS") },
  {0x6EF6449F,-3,127,0,100,3,0,&NAMSTR(s_sys_ss6ef6449f, "AUTO_COMPLETE_FUNCTIONS") },

  {0x3BF3BAE1,0,129,0,100,3,0,&NAMSTR(s_sys_ss3bf3bae1, "VALID_LOCALE") },
  {0x347AF8CD,-1,131,0,100,3,0,&NAMSTR(s_sys_ss347af8cd, "ACTUAL_LOCALE") },

  {0x38D29583,2,133,0,100,3,0,&NAMSTR(s_sys_ss38d29583, "RES_ERRNO") },
  {0x7B6B9E85,23,135,0,100,3,0,&NAMSTR(s_sys_ss7b6b9e85, "OPT_TCP_NODELAY") },
  {0x0A77E707,19,137,0,100,3,0,&NAMSTR(s_sys_ss0a77e707, "RES_BUFFERED") },
  {0x49B2E58A,49,139,0,36,3,0,&NAMSTR(s_sys_ss49b2e58a, "OPT_SERVER_FAILURE_LIMIT") },
  {0x30D6540A,45,141,0,100,3,0,&NAMSTR(s_sys_ss30d6540a, "RES_NO_SERVERS") },
  {0x1563B68D,38,143,0,36,3,0,&NAMSTR(s_sys_ss1563b68d, "OPT_LIBKETAMA_COMPATIBLE") },
  {0x4D9ACC0D,45,145,0,100,3,0,&NAMSTR(s_sys_ss4d9acc0d, "RES_SUCCESS") },
  {0x11A71D96,1,147,0,36,3,0,&NAMSTR(s_sys_ss11a71d96, "OPT_PREFIX_KEY") },
  {0x6649F716,34,149,0,100,3,0,&NAMSTR(s_sys_ss6649f716, "OPT_HASH") },
  {0x47A41498,-4,151,0,100,3,0,&NAMSTR(s_sys_ss47a41498, "DISTRIBUTION_CONSISTENT") },
  {0x662DFB1C,45,153,0,36,3,0,&NAMSTR(s_sys_ss662dfb1c, "HASH_HSIEH") },
  {0x09E1749C,20,155,0,36,3,0,&NAMSTR(s_sys_ss09e1749c, "OPT_BINARY_PROTOCOL") },
  {0x16D2411C,2,157,0,100,3,0,&NAMSTR(s_sys_ss16d2411c, "RES_UNKNOWN_READ_FAILURE") },
  {0x0AA5869D,41,159,0,100,3,0,&NAMSTR(s_sys_ss0aa5869d, "RES_NOTFOUND") },
  {0x2966E7A2,1,161,0,36,3,0,&NAMSTR(s_sys_ss2966e7a2, "RES_PROTOCOL_ERROR") },
  {0x326D0922,1,163,0,100,3,0,&NAMSTR(s_sys_ss326d0922, "RES_CLIENT_ERROR") },
  {0x7B5D80A3,18,165,0,100,3,0,&NAMSTR(s_sys_ss7b5d80a3, "RES_SERVER_ERROR") },
  {0x4B78B3A5,18,167,0,100,3,0,&NAMSTR(s_sys_ss3e91a4e3, "HASH_FNV1A_64") },
  {0x1DDE422F,-15,169,0,100,3,0,&NAMSTR(s_sys_ss1dde422f, "OPT_CACHE_LOOKUPS") },
  {0x627341B2,-2,171,0,100,3,0,&NAMSTR(s_sys_ss5769d4fd, "HASH_FNV1_64") },
  {0x51F05334,20,173,0,100,3,0,&NAMSTR(s_sys_ss51f05334, "OPT_SEND_TIMEOUT") },
  {0x3C6E7CC3,1,175,0,36,3,0,&NAMSTR(s_sys_ss3c6e7cc3, "RES_TIMEOUT") },
  {0x4FA655C3,17,177,0,100,3,0,&NAMSTR(s_sys_ss4fa655c3, "RES_BAD_KEY_PROVIDED") },
  {0x12BBA544,-19,179,0,100,3,0,&NAMSTR(s_sys_ss12bba544, "RES_SOME_ERRORS") },
  {0x5592E4C6,12,181,0,100,3,0,&NAMSTR(s_sys_ss5592e4c6, "OPT_SOCKET_SEND_SIZE") },
  {0x138A7DC7,25,183,0,100,3,0,&NAMSTR(s_sys_ss138a7dc7, "OPT_COMPRESSION") },
  {0x4C4DE648,4,185,0,100,3,0,&NAMSTR(s_sys_ss4c4de648, "SERIALIZER_PHP") },
  {0x39FD244B,-7,187,0,100,3,0,&NAMSTR(s_sys_ss39fd244b, "OPT_RETRY_TIMEOUT") },
  {0x74C8D7CE,13,189,0,100,2,0,&NAMSTR(s_sys_ss74c8d7ce, "HAVE_JSON") },
  {0x7870C1D0,-22,191,0,100,3,0,&NAMSTR(s_sys_ss7870c1d0, "SERIALIZER_JSON") },
  {0x0C7596D1,-1,193,0,36,3,0,&NAMSTR(s_sys_ss0c7596d1, "SERIALIZER_IGBINARY") },
  {0x600D2651,-30,195,0,100,3,0,&NAMSTR(s_sys_ss600d2651, "OPT_NO_BLOCK") },
  {0x65627AD4,-23,197,0,100,3,0,&NAMSTR(s_sys_ss65627ad4, "DISTRIBUTION_MODULA") },
  {0x387BA2D5,-14,199,0,36,3,0,&NAMSTR(s_sys_ss387ba2d5, "HASH_CRC") },
  {0x7F112855,12,201,0,100,3,0,&NAMSTR(s_sys_ss7f112855, "RES_WRITE_FAILURE") },
  {0x2FB1B557,9,203,0,36,3,0,&NAMSTR(s_sys_ss2bfdc708, "HASH_FNV1_32") },
  {0x4684B3D7,17,205,0,100,3,0,&NAMSTR(s_sys_ss4684b3d7, "OPT_SOCKET_RECV_SIZE") },
  {0x1A9F1AD8,-19,207,0,100,3,0,&NAMSTR(s_sys_ss1a9f1ad8, "OPT_POLL_TIMEOUT") },
  {0x465BCDDB,-6,209,0,36,3,0,&NAMSTR(s_sys_ss465bcddb, "OPT_DISTRIBUTION") },
  {0x2957C9DB,17,211,0,100,3,0,&NAMSTR(s_sys_ss2957c9db, "RES_CONNECTION_SOCKET_CREATE_FAILURE") },
  {0x13209DDE,-3,213,0,100,3,0,&NAMSTR(s_sys_ss13209dde, "OPT_RECV_TIMEOUT") },
  {0x2664C361,-35,215,0,100,3,0,&NAMSTR(s_sys_ss2664c361, "GET_PRESERVE_ORDER") },
  {0x601E8C64,6,217,0,100,3,0,&NAMSTR(s_sys_ss601e8c64, "HASH_DEFAULT") },
  {0x2B4408EB,-32,219,0,100,3,0,&NAMSTR(s_sys_ss2b4408eb, "OPT_BUFFER_WRITES") },
  {0x49DFDCEC,-34,221,0,36,3,0,&NAMSTR(s_sys_ss08c5e518, "HASH_FNV1A_32") },
  {0x49F88DEC,-33,223,0,100,3,0,&NAMSTR(s_sys_ss49f88dec, "RES_HOST_LOOKUP_FAILURE") },
  {0x45701DED,1,225,0,100,3,0,&NAMSTR(s_sys_ss45701ded, "RES_DATA_EXISTS") },
  {0x6D687E6E,-34,227,0,100,3,0,&NAMSTR(s_sys_ss6d687e6e, "RES_NOTSTORED") },
  {0x4A5085F0,-15,229,0,100,3,0,&NAMSTR(s_sys_ss7e91db32, "HASH_MD5") },
  {0x5AD2F9F1,-49,231,0,100,3,0,&NAMSTR(s_sys_ss5ad2f9f1, "RES_END") },
  {0x4A0C5D74,-24,233,0,100,3,0,&NAMSTR(s_sys_ss4a0c5d74, "OPT_SERIALIZER") },
  {0x0F0524F8,-6,235,0,100,3,0,&NAMSTR(s_sys_ss0f0524f8, "RES_FAILURE") },
  {0x2E707EF9,-24,237,0,100,2,0,&NAMSTR(s_sys_ss2e707ef9, "HAVE_IGBINARY") },
  {0x5AD42EFB,-26,239,0,36,3,0,&NAMSTR(s_sys_ss5ad42efb, "OPT_CONNECT_TIMEOUT") },
  {0x421E5F7B,-31,241,0,100,3,0,&NAMSTR(s_sys_ss421e5f7b, "RES_PARTIAL_READ") },
  {0x2F5D27FE,-17,243,0,100,3,0,&NAMSTR(s_sys_ss2f5d27fe, "HASH_MURMUR") },
  {0x3210F37F,0,245,0,100,3,0,&NAMSTR(s_sys_ss3210f37f, "RES_PAYLOAD_FAILURE") },

  {0x79A28381,6,247,0,36,3,0,&NAMSTR(s_sys_ss79a28381, "FORM_KD") },
  {0x14B76C41,1,249,0,36,3,0,&NAMSTR(s_sys_ss14b76c41, "FORM_KC") },
  {0x7BD09921,0,251,0,100,3,0,&NAMSTR(s_sys_ss7bd09921, "NFKC") },
  {0x0ADD1AE2,2,253,0,100,3,0,&NAMSTR(s_sys_ss0add1ae2, "FORM_D") },
  {0x1BEFCD86,-3,255,0,100,3,0,&NAMSTR(s_sys_ss1befcd86, "NFC") },
  {0x0FA834EF,-5,257,0,36,3,0,&NAMSTR(s_sys_ss0fa834ef, "NFD") },
  {0x23C185CF,2,259,0,100,3,0,&NAMSTR(s_sys_ss23c185cf, "NFKD") },
  {0x22BFB273,-4,261,0,100,3,0,&NAMSTR(s_sys_ss22bfb273, "NONE") },
  {0x5A9A9E7F,-4,263,0,100,3,0,&NAMSTR(s_sys_ss5a9a9e7f, "FORM_C") },

  {0x28884D00,31,265,0,100,3,0,&NAMSTR(s_sys_ss28884d00, "ATTR_CASE") },
  {0x5A431902,27,267,0,100,3,0,&NAMSTR(s_sys_ss5a431902, "ATTR_STATEMENT_CLASS") },
  {0x791D9C04,1,269,0,100,3,0,&NAMSTR(s_sys_ss791d9c04, "ERRMODE_EXCEPTION") },
  {0x5980AA08,7,271,0,100,3,0,&NAMSTR(s_sys_ss5980aa08, "CASE_NATURAL") },
  {0x27CCC20D,2,273,0,100,3,0,&NAMSTR(s_sys_ss27ccc20d, "FETCH_OBJ") },
  {0x76C6E511,60,275,0,100,3,0,&NAMSTR(s_sys_ss76c6e511, "FETCH_INTO") },
  {0x0C710019,44,277,0,100,3,0,&NAMSTR(s_sys_ss0c710019, "FETCH_BOUND") },
  {0x3627FE1B,57,279,0,100,3,0,&NAMSTR(s_sys_ss3627fe1b, "MYSQL_ATTR_INIT_COMMAND") },
  {0x3CCCD01C,14,281,0,100,3,0,&NAMSTR(s_sys_ss3cccd01c, "ATTR_CLIENT_VERSION") },
  {0x11A7B41D,36,283,0,100,3,0,&NAMSTR(s_sys_ss11a7b41d, "ATTR_FETCH_CATALOG_NAMES") },
  {0x0218F11E,2,285,0,100,3,0,&NAMSTR(s_sys_ss0218f11e, "CASE_LOWER") },
  {0x30DD7E23,9,287,0,100,3,0,&NAMSTR(s_sys_ss30dd7e23, "FETCH_GROUP") },
  {0x62FB6A25,25,289,0,100,3,0,&NAMSTR(s_sys_ss62fb6a25, "CASE_UPPER") },
  {0x4029992A,10,291,0,100,3,0,&NAMSTR(s_sys_ss4029992a, "PARAM_EVT_FETCH_POST") },
  {0x57726933,2,293,0,100,3,0,&NAMSTR(s_sys_ss57726933, "ATTR_TIMEOUT") },
  {0x3EE0243B,26,295,0,100,3,0,&NAMSTR(s_sys_ss3ee0243b, "PARAM_EVT_EXEC_PRE") },
  {0x1673D43C,31,297,0,36,3,0,&NAMSTR(s_sys_ss1673d43c, "ATTR_ERRMODE") },
  {0x74DD863C,56,299,0,100,3,0,&NAMSTR(s_sys_ss74dd863c, "ATTR_DEFAULT_FETCH_MODE") },
  {0x4101D73D,-1,301,0,100,3,0,&NAMSTR(s_sys_ss4101d73d, "ATTR_EMULATE_PREPARES") },
  {0x22363544,-5,303,0,100,3,0,&NAMSTR(s_sys_ss22363544, "ATTR_PREFETCH") },
  {0x4BB99E48,35,305,0,100,3,0,&NAMSTR(s_sys_ss4bb99e48, "FETCH_UNIQUE") },
  {0x36E93B4E,50,307,0,100,3,0,&NAMSTR(s_sys_ss36e93b4e, "MYSQL_ATTR_READ_DEFAULT_GROUP") },
  {0x336C6152,2,309,0,100,3,0,&NAMSTR(s_sys_ss336c6152, "ATTR_SERVER_INFO") },
  {0x73C81556,23,311,0,100,3,0,&NAMSTR(s_sys_ss73c81556, "PARAM_EVT_NORMALIZE") },
  {0x7262F15B,-24,313,0,36,3,0,&NAMSTR(s_sys_ss7262f15b, "ATTR_CONNECTION_STATUS") },
  {0x1D85275B,36,315,0,100,3,0,&NAMSTR(s_sys_ss1d85275b, "ATTR_ORACLE_NULLS") },
  {0x28F12E61,52,317,0,100,3,0,&NAMSTR(s_sys_ss28f12e61, "MYSQL_ATTR_FOUND_ROWS") },
  {0x70275465,13,319,0,100,3,0,&NAMSTR(s_sys_ss70275465, "FETCH_ORI_NEXT") },
  {0x34F1C068,-19,321,0,100,3,0,&NAMSTR(s_sys_ss34f1c068, "ATTR_FETCH_TABLE_NAMES") },
  {0x757FD66F,28,323,0,100,3,0,&NAMSTR(s_sys_ss757fd66f, "FETCH_ORI_REL") },
  {0x66F43D70,9,325,0,100,3,0,&NAMSTR(s_sys_ss66f43d70, "FETCH_ASSOC") },
  {0x790FC071,13,327,0,100,3,0,&NAMSTR(s_sys_ss790fc071, "ATTR_CURSOR_NAME") },
  {0x36711374,-14,329,0,100,3,0,&NAMSTR(s_sys_ss36711374, "ATTR_MAX_COLUMN_LEN") },
  {0x1370EE75,-14,331,0,100,3,0,&NAMSTR(s_sys_ss1370ee75, "ATTR_AUTOCOMMIT") },
  {0x1EC73379,4,333,0,36,3,0,&NAMSTR(s_sys_ss1ec73379, "PARAM_NULL") },
  {0x031D7D79,45,335,0,100,3,0,&NAMSTR(s_sys_ss031d7d79, "PARAM_EVT_ALLOC") },
  {0x01520C7D,-2,337,0,100,3,0,&NAMSTR(s_sys_ss01520c7d, "PARAM_BOOL") },
  {0x0D7D087E,25,339,0,100,3,0,&NAMSTR(s_sys_ss0d7d087e, "NULL_NATURAL") },
  {0x35132983,5,341,0,100,3,0,&NAMSTR(s_sys_ss35132983, "PARAM_INT") },
  {0x28057784,15,343,0,100,3,0,&NAMSTR(s_sys_ss28057784, "FETCH_NUM") },
  {0x627DD885,18,345,0,100,3,0,&NAMSTR(s_sys_ss627dd885, "FETCH_ORI_PRIOR") },
  {0x2ABCB786,15,347,0,36,3,0,&NAMSTR(s_sys_ss2abcb786, "PARAM_EVT_EXEC_POST") },
  {0x391D7486,11,349,0,100,3,0,&NAMSTR(s_sys_ss391d7486, "MYSQL_ATTR_USE_BUFFERED_QUERY") },
  {0x5A925F88,32,351,0,100,3,0,&NAMSTR(s_sys_ss5a925f88, "PARAM_STR") },
  {0x5E21EA8A,-19,353,0,100,3,0,&NAMSTR(s_sys_ss5e21ea8a, "ATTR_CURSOR") },
  {0x14A81E8D,18,355,0,100,3,0,&NAMSTR(s_sys_ss14a81e8d, "ATTR_DRIVER_NAME") },
  {0x73355A8E,24,357,0,100,3,0,&NAMSTR(s_sys_ss73355a8e, "FETCH_USE_DEFAULT") },
  {0x4608BE8F,-39,359,0,36,3,0,&NAMSTR(s_sys_ss4608be8f, "ATTR_SERVER_VERSION") },
  {0x6147488F,-22,361,0,100,3,0,&NAMSTR(s_sys_ss6147488f, "MYSQL_ATTR_DIRECT_QUERY") },
  {0x386C2796,27,363,0,100,3,0,&NAMSTR(s_sys_ss386c2796, "FETCH_PROPS_LATE") },
  {0x741C4999,19,365,0,36,3,0,&NAMSTR(s_sys_ss741c4999, "FETCH_COLUMN") },
  {0x0D8C9099,1,367,0,100,3,0,&NAMSTR(s_sys_ss0d8c9099, "FETCH_CLASSTYPE") },
  {0x06F4FD9C,-3,369,0,100,3,0,&NAMSTR(s_sys_ss06f4fd9c, "FETCH_SERIALIZE") },
  {0x02FBF4A0,15,371,0,100,3,0,&NAMSTR(s_sys_ss02fbf4a0, "MYSQL_ATTR_LOCAL_INFILE") },
  {0x376FEEA2,-50,373,0,36,3,0,&NAMSTR(s_sys_ss376feea2, "FETCH_BOTH") },
  {0x768A88A2,-4,375,0,100,3,0,&NAMSTR(s_sys_ss768a88a2, "FETCH_KEY_PAIR") },
  {0x5234FCA4,-43,377,0,100,3,0,&NAMSTR(s_sys_ss5234fca4, "PARAM_EVT_FETCH_PRE") },
  {0x6842FAA8,2,379,0,100,3,0,&NAMSTR(s_sys_ss6842faa8, "CURSOR_FWDONLY") },
  {0x7A454FA9,2,381,0,100,3,0,&NAMSTR(s_sys_ss7a454fa9, "FETCH_ORI_FIRST") },
  {0x6B305EAA,-17,383,0,100,3,0,&NAMSTR(s_sys_ss6b305eaa, "CURSOR_SCROLL") },
  {0x75701AAB,6,385,0,100,3,0,&NAMSTR(s_sys_ss75701aab, "FETCH_ORI_LAST") },
  {0x20F5D8B4,-60,387,0,100,3,0,&NAMSTR(s_sys_ss20f5d8b4, "ATTR_PERSISTENT") },
  {0x05DD08B8,5,389,0,100,3,0,&NAMSTR(s_sys_ss05dd08b8, "NULL_EMPTY_STRING") },
  {0x493319C5,-31,391,0,100,3,0,&NAMSTR(s_sys_ss493319c5, "ATTR_STRINGIFY_FETCHES") },
  {0x3B46C9C6,-43,393,0,100,3,0,&NAMSTR(s_sys_ss3b46c9c6, "MYSQL_ATTR_READ_DEFAULT_FILE") },
  {0x175C98C8,-54,395,0,36,3,0,&NAMSTR(s_sys_ss175c98c8, "FETCH_FUNC") },
  {0x64FA26C8,-37,397,0,100,3,0,&NAMSTR(s_sys_ss64fa26c8, "FETCH_ORI_ABS") },
  {0x6E0615CA,7,399,0,100,3,0,&NAMSTR(s_sys_ss6e0615ca, "NULL_TO_STRING") },
  {0x068D19CB,-61,401,0,100,3,0,&NAMSTR(s_sys_ss068d19cb, "MYSQL_ATTR_MAX_BUFFER_SIZE") },
  {0x464634D0,-64,403,0,100,3,0,&NAMSTR(s_sys_ss464634d0, "FETCH_CLASS") },
  {0x2F23C4D1,-40,405,0,100,3,0,&NAMSTR(s_sys_ss2f23c4d1, "FETCH_LAZY") },
  {0x7EC3A5D3,-23,407,0,100,3,0,&NAMSTR(s_sys_ss7ec3a5d3, "MYSQL_ATTR_COMPRESS") },
  {0x772C54DC,-70,409,0,100,3,0,&NAMSTR(s_sys_ss772c54dc, "ERRMODE_WARNING") },
  {0x2B1F75EB,-1,411,0,100,3,0,&NAMSTR(s_sys_ss2b1f75eb, "ERRMODE_SILENT") },
  {0x58821EF5,-47,413,0,100,7,0,&NAMSTR(s_sys_ss58821ef5, "ERR_NONE") },
  {0x2030C3F6,4,415,0,100,3,0,&NAMSTR(s_sys_ss2030c3f6, "PARAM_LOB") },
  {0x3D7F57F7,-43,417,0,100,3,0,&NAMSTR(s_sys_ss3d7f57f7, "FETCH_NAMED") },
  {0x5D20A1F8,-42,419,0,100,3,0,&NAMSTR(s_sys_ss5d20a1f8, "PARAM_INPUT_OUTPUT") },
  {0x77B7B1FB,0,421,0,100,3,0,&NAMSTR(s_sys_ss77b7b1fb, "MYSQL_ATTR_IGNORE_SPACE") },
  {0x0AE827FD,-2,423,0,100,3,0,&NAMSTR(s_sys_ss0ae827fd, "PARAM_STMT") },
  {0x392D8EFE,-65,425,0,100,3,0,&NAMSTR(s_sys_ss392d8efe, "PARAM_EVT_FREE") },

  {0x3D608481,6,427,0,100,3,0,&NAMSTR(s_sys_ss3d608481, "SINGLE_SCRIPT_CONFUSABLE") },
  {0x435FDA12,4,429,0,100,3,0,&NAMSTR(s_sys_ss435fda12, "WHOLE_SCRIPT_CONFUSABLE") },
  {0x3B53D955,0,431,0,100,3,0,&NAMSTR(s_sys_ss3b53d955, "CHAR_LIMIT") },
  {0x27798546,-1,433,0,100,3,0,&NAMSTR(s_sys_ss27798546, "INVISIBLE") },
  {0x109D364A,-1,435,0,100,3,0,&NAMSTR(s_sys_ss109d364a, "SINGLE_SCRIPT") },
  {0x5A2E533C,-1,437,0,100,3,0,&NAMSTR(s_sys_ss5a2e533c, "ANY_CASE") },
  {0x00D9ABBF,-5,439,0,100,3,0,&NAMSTR(s_sys_ss00d9abbf, "MIXED_SCRIPT_CONFUSABLE") },

  {0x3F212DC1,1,441,0,100,3,0,&NAMSTR(s_sys_ss3f212dc1, "DOC_FRAGMENT") },
  {0x57F152C9,8,443,0,100,3,0,&NAMSTR(s_sys_ss57f152c9, "NOTATION") },
  {0x2F3ECC0D,11,445,0,100,3,0,&NAMSTR(s_sys_ss2f3ecc0d, "COMMENT") },
  {0x40F94F8F,16,447,0,36,3,0,&NAMSTR(s_sys_ss40f94f8f, "ELEMENT") },
  {0x0476210F,0,449,0,100,3,0,&NAMSTR(s_sys_ss0476210f, "SUBST_ENTITIES") },
  {0x4ACCEAD4,15,451,0,100,3,0,&NAMSTR(s_sys_ss4accead4, "DEFAULTATTRS") },
  {0x40570F56,15,453,0,100,3,0,&NAMSTR(s_sys_ss40570f56, "CDATA") },
  {0x2320C4D8,-2,455,0,100,3,0,&NAMSTR(s_sys_ss2320c4d8, "LOADDTD") },
  {0x066BB11D,-2,457,0,36,3,0,&NAMSTR(s_sys_ss066bb11d, "TEXT") },
  {0x39996F9D,2,459,0,100,3,0,&NAMSTR(s_sys_ss39996f9d, "WHITESPACE") },
  {0x11D7AC1F,-10,461,0,100,3,0,&NAMSTR(s_sys_ss11d7ac1f, "DOC_TYPE") },
  {0x12C338E5,4,463,0,100,3,0,&NAMSTR(s_sys_ss12c338e5, "SIGNIFICANT_WHITESPACE") },
  {0x60E4AAAC,-10,465,0,100,3,0,&NAMSTR(s_sys_ss60e4aaac, "PI") },
  {0x0F8EB6ED,-3,467,0,100,3,0,&NAMSTR(s_sys_ss0f8eb6ed, "DOC") },
  {0x786BF72F,-2,469,0,100,3,0,&NAMSTR(s_sys_ss786bf72f, "ENTITY") },
  {0x181568B0,3,471,0,36,3,0,&NAMSTR(s_sys_ss181568b0, "END_ELEMENT") },
  {0x425D0970,-9,473,0,100,3,0,&NAMSTR(s_sys_ss425d0970, "XML_DECLARATION") },
  {0x22BFB273,-14,475,0,36,3,0,&NAMSTR(s_sys_ss22bfb273, "NONE") },
  {0x30DBC573,-2,477,0,100,3,0,&NAMSTR(s_sys_ss30dbc573, "END_ENTITY") },
  {0x247EB4F5,-11,479,0,100,3,0,&NAMSTR(s_sys_ss247eb4f5, "ATTRIBUTE") },
  {0x2262F737,-16,481,0,100,3,0,&NAMSTR(s_sys_ss2262f737, "VALIDATE") },
  {0x39F742FC,-7,483,0,100,3,0,&NAMSTR(s_sys_ss39f742fc, "ENTITY_REF") },

};
static const int cpt_hash_entries[] = {
  // Collator hash
  -1,-1,23,21,-1,-1,-1,-1,-1,-1,20,19,-1,-1,-1,-1,-1,-1,18,-1,-1,-1,-1,-1,17,-1,-1,-1,16,-1,13,12,-1,-1,11,-1,10,-1,-1,8,-1,-1,7,5,-1,-1,-1,-1,-1,-1,-1,4,-1,-1,-1,-1,3,-1,-1,2,0,-1,-1,-1,
  // Collator lists
  -1,
  -1,
  -1,
  // DateTime hash
  -1,10,-1,-1,8,-1,-1,-1,7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,4,-1,3,2,-1,-1,-1,1,0,-1,-1,-1,-1,
  // DateTime lists
  -1,
  -1,
  -1,
  // DateTimeZone hash
  13,11,-1,-1,-1,-1,10,9,7,-1,-1,6,5,-1,-1,-1,4,-1,3,2,-1,1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,
  // DateTimeZone lists
  -1,
  -1,
  -1,
  // DebuggerClient hash
  4,-1,3,-1,2,-1,-1,-1,-1,1,-1,-1,-1,-1,0,-1,
  // DebuggerClient lists
  -1,
  -1,
  -1,
  // DebuggerClientCmdUser hash
  9,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,8,-1,-1,-1,6,-1,-1,-1,4,-1,3,-1,1,-1,-1,-1,-1,0,-1,-1,
  // DebuggerClientCmdUser lists
  -1,
  -1,
  -1,
  // Locale hash
  -1,-1,1,-1,-1,-1,0,-1,
  // Locale lists
  -1,
  -1,
  -1,
  // Memcached hash
  56,55,-1,-1,53,-1,52,51,-1,-1,-1,50,-1,-1,49,48,-1,47,46,44,43,-1,-1,-1,-1,-1,-1,42,-1,-1,41,-1,-1,40,-1,-1,38,-1,-1,37,35,-1,33,32,-1,-1,30,29,-1,28,-1,-1,27,-1,-1,26,25,24,-1,23,21,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,20,-1,19,-1,-1,18,-1,-1,-1,-1,-1,-1,-1,-1,-1,17,-1,16,14,-1,-1,-1,-1,13,10,-1,-1,-1,9,-1,7,-1,-1,-1,-1,-1,-1,-1,-1,5,-1,-1,3,-1,-1,2,-1,1,-1,0,-1,-1,-1,
  // Memcached lists
  -1,
  -1,
  -1,
  // Normalizer hash
  8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,7,-1,-1,-1,5,-1,-1,-1,-1,-1,-1,-1,-1,4,-1,-1,-1,3,0,-1,
  // Normalizer lists
  -1,
  -1,
  -1,
  // PDO hash
  -1,80,79,-1,78,-1,-1,77,76,75,74,-1,-1,-1,-1,-1,-1,-1,-1,-1,73,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,72,-1,-1,-1,-1,-1,-1,-1,-1,71,-1,70,69,-1,-1,-1,-1,68,67,-1,65,-1,64,63,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,62,-1,-1,-1,61,-1,-1,-1,-1,-1,-1,-1,-1,60,59,58,57,-1,-1,-1,56,-1,54,-1,53,-1,-1,-1,52,-1,-1,50,-1,-1,49,-1,-1,-1,-1,-1,-1,47,46,45,-1,-1,44,-1,43,-1,41,40,39,38,-1,-1,-1,-1,37,36,-1,-1,-1,34,-1,-1,-1,33,32,-1,-1,31,30,29,-1,-1,-1,-1,-1,-1,28,-1,-1,27,-1,-1,-1,26,-1,-1,-1,-1,-1,24,-1,-1,-1,-1,23,-1,-1,-1,22,-1,-1,-1,21,-1,-1,-1,-1,-1,20,-1,-1,-1,19,-1,-1,-1,-1,-1,-1,18,16,15,-1,-1,-1,-1,-1,-1,-1,14,-1,-1,-1,-1,-1,-1,-1,-1,13,-1,-1,-1,-1,12,-1,11,-1,-1,-1,-1,10,9,8,7,-1,6,-1,-1,-1,-1,-1,-1,-1,5,-1,-1,-1,4,-1,-1,-1,-1,3,-1,-1,-1,2,-1,1,-1,0,
  // PDO lists
  -1,
  -1,
  -1,
  // SpoofChecker hash
  6,-1,-1,5,-1,4,-1,-1,-1,3,2,-1,-1,1,0,-1,
  // SpoofChecker lists
  -1,
  -1,
  -1,
  // XMLReader hash
  -1,-1,-1,21,-1,-1,-1,-1,20,-1,19,-1,17,-1,-1,15,14,-1,13,12,-1,-1,-1,-1,-1,-1,11,-1,-1,-1,-1,-1,10,-1,8,-1,-1,-1,-1,7,-1,6,-1,5,-1,-1,-1,-1,3,-1,2,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,-1,0,-1,
  // XMLReader lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Collator::os_prop_table = {
  -1,-1,-1,-1,63,0,1,0,
  cpt_hash_entries+64,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_DateTime::os_prop_table = {
  -1,-1,-1,-1,31,1,1,0,
  cpt_hash_entries+99,0,cpt_table_entries+24,cpt_static_inits
};
const ClassPropTable c_DateTimeZone::os_prop_table = {
  -1,-1,-1,-1,31,0,1,0,
  cpt_hash_entries+134,0,cpt_table_entries+35,cpt_static_inits
};
const ClassPropTable c_DebuggerClient::os_prop_table = {
  -1,-1,-1,-1,15,3,1,0,
  cpt_hash_entries+153,0,cpt_table_entries+49,cpt_static_inits
};
const ClassPropTable c_DebuggerClientCmdUser::os_prop_table = {
  -1,-1,-1,-1,31,1,1,0,
  cpt_hash_entries+188,0,cpt_table_entries+54,cpt_static_inits
};
const ClassPropTable c_Locale::os_prop_table = {
  -1,-1,-1,-1,7,1,1,0,
  cpt_hash_entries+199,0,cpt_table_entries+64,cpt_static_inits
};
const ClassPropTable c_Memcached::os_prop_table = {
  -1,-1,-1,-1,127,25,1,0,
  cpt_hash_entries+330,0,cpt_table_entries+66,cpt_static_inits
};
const ClassPropTable c_Normalizer::os_prop_table = {
  -1,-1,-1,-1,31,7,1,0,
  cpt_hash_entries+365,0,cpt_table_entries+123,cpt_static_inits
};
const ClassPropTable c_PDO::os_prop_table = {
  -1,-1,-1,-1,255,36,1,0,
  cpt_hash_entries+624,0,cpt_table_entries+132,cpt_static_inits
};
const ClassPropTable c_SpoofChecker::os_prop_table = {
  -1,-1,-1,-1,15,0,1,0,
  cpt_hash_entries+643,0,cpt_table_entries+213,cpt_static_inits
};
const ClassPropTable c_XMLReader::os_prop_table = {
  -1,-1,-1,-1,63,17,1,0,
  cpt_hash_entries+710,0,cpt_table_entries+220,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
