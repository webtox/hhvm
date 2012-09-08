
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/soapfault.fws.h>
#include <php/classes/soapfault.h>

// Dependencies
#include <php/classes/exception.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/soapfault.php line 3 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SoapFault)
extern const InstanceOfInfo cw_SoapFault$$instanceof_table[] = {
  {0x00B66A94,1,"Exception",&cw_Exception},
  {0x255D2515,1,"SoapFault",&cw_SoapFault},
};
const int cw_SoapFault$$instanceof_index[] = {
  3,
  0,1,-1,-1,
};
extern const CallInfo ci_SoapFault$$__tostring = { (void*)&c_SoapFault::i___tostring, (void*)&c_SoapFault::ifa___tostring, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_SoapFault$$__construct = { (void*)&c_SoapFault::i___construct, (void*)&c_SoapFault::ifa___construct, 6, 4, 0x0000000000000000LL};
Variant c_SoapFault::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_SoapFault::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant NEVER_INLINE c_SoapFault::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapFault);
  }
  c_SoapFault *self ATTRIBUTE_UNUSED (static_cast<c_SoapFault*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_wrong_arguments("SoapFault::__construct", count, 2, 6, 2);
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
Variant NEVER_INLINE c_SoapFault::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_SoapFault);
  }
  c_SoapFault *self ATTRIBUTE_UNUSED (static_cast<c_SoapFault*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SoapFault::__toString", 0, 1);
  return (self->t___tostring());
}
extern const MethodCallInfoTable cw_SoapFault$$call_info_table[] = {
  { 0x229C615F, 0, 11, "__construct", &ci_SoapFault$$__construct },
  { 0x14B34A13, 1, 10, "__toString", &ci_SoapFault$$__tostring },
};
extern const int cw_SoapFault$$call_info_index[] = {
  3,
  -1,-1,-1,0,
};
c_SoapFault *c_SoapFault::create(CVarRef v_code, CVarRef v_message, CVarRef v_actor //  = null_variant
, CVarRef v_detail //  = null_variant
, CVarRef v_name //  = null_variant
, CVarRef v_header //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_code, v_message, v_actor, v_detail, v_name, v_header);
  return this;
}
extern const MethodCallInfoTable cw_SoapFault$$call_info_table[];
extern const int cw_SoapFault$$call_info_index[];
extern const InstanceOfInfo cw_SoapFault$$instanceof_table[];
extern const int cw_SoapFault$$instanceof_index[];
const ObjectStaticCallbacks cw_SoapFault = {
  (ObjectData*(*)(ObjectData*))coo_SoapFault,
  cw_SoapFault$$call_info_table,cw_SoapFault$$call_info_index,
  cw_SoapFault$$instanceof_table,cw_SoapFault$$instanceof_index,
  &c_SoapFault::s_class_name,
  &c_SoapFault::os_prop_table,&ci_SoapFault$$__construct,0,&cw_Exception,0x0,
  &c_SoapFault::s_cls
};
/* SRC: classes/soapfault.php line 12 */
void c_SoapFault::t___construct(Variant v_code, Variant v_message, Variant v_actor //  = null
, Variant v_detail //  = null
, Variant v_name //  = null
, Variant v_header //  = null
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SoapFault, SoapFault::__construct);
  Variant v_fault_ns;
  Variant v_fault_code;
  int64 v_SOAP_1_1 = 0;
  int64 v_SOAP_1_2 = 0;
  String v_SOAP_1_1_ENV_NAMESPACE;
  String v_SOAP_1_2_ENV_NAMESPACE;
  int64 v_soap_version = 0;

  ObjectData *obj_tmp UNUSED;
  setNull(v_fault_ns);
  setNull(v_fault_code);
  if (x_is_string(v_code)) {
    {
      v_fault_code.assignVal(v_code);
    }
  }
  else {
    bool tmp0;
    {
      bool tmp1 = (x_is_array(v_code));
      if (tmp1) {
        int64 tmp2((x_count(v_code)));
        tmp1 = (equal(tmp2, 2LL));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          const Variant &tmp0((x_array_values(v_code)));
          v_code.assignVal(tmp0);
        }
        {
          const Variant &tmp0((v_code.rvalAt(0LL, AccessFlags::Error)));
          v_fault_ns.assignVal(tmp0);
        }
        {
          const Variant &tmp0((v_code.rvalAt(1LL, AccessFlags::Error)));
          v_fault_code.assignVal(tmp0);
        }
        if ((!(x_is_string(v_fault_ns)) || !(x_is_string(v_fault_code)))) {
          {
            x_hphp_throw_fatal_error(NAMSTR(s_sys_ss78960b67, "Invalid fault code"));
            return;
          }
        }
      }
    }
    else {
      {
        x_hphp_throw_fatal_error(NAMSTR(s_sys_ss78960b67, "Invalid fault code"));
        return;
      }
    }
  }
  m_faultcodens.assignVal(v_fault_ns);
  m_faultcode.assignVal(v_fault_code);
  if (empty(m_faultcode)) {
    {
      x_hphp_throw_fatal_error(NAMSTR(s_sys_ss78960b67, "Invalid fault code"));
      return;
    }
  }
  {
    Variant tmp0((m_message.assignVal(v_message)));
    m_faultstring.assignVal(tmp0);
  }
  m_faultactor.assignVal(v_actor);
  m_detail.assignVal(v_detail);
  m__name.assignVal(v_name);
  m_headerfault.assignVal(v_header);
  v_SOAP_1_1 = 1LL;
  v_SOAP_1_2 = 2LL;
  v_SOAP_1_1_ENV_NAMESPACE = NAMSTR(s_sys_ss3f0eec1a, "http://schemas.xmlsoap.org/soap/envelope/");
  v_SOAP_1_2_ENV_NAMESPACE = NAMSTR(s_sys_ss30600dcf, "http://www.w3.org/2003/05/soap-envelope");
  {
    int64 tmp0((x__soap_active_version()));
    v_soap_version = tmp0;
  }
  if (empty(m_faultcodens)) {
    {
      if (equal(v_soap_version, v_SOAP_1_1)) {
        {
          if ((((equal(m_faultcode, NAMSTR(s_sys_ss171ea9d1, "Client")) || equal(m_faultcode, NAMSTR(s_sys_ss15d41015, "Server"))) || equal(m_faultcode, NAMSTR(s_sys_ss37f9ce9a, "VersionMismatch"))) || equal(m_faultcode, NAMSTR(s_sys_ss793fc318, "MustUnderstand")))) {
            {
              m_faultcodens = v_SOAP_1_1_ENV_NAMESPACE;
            }
          }
        }
      }
      else if (equal(v_soap_version, v_SOAP_1_2)) {
        {
          if (equal(m_faultcode, NAMSTR(s_sys_ss171ea9d1, "Client"))) {
            {
              m_faultcode = NAMSTR(s_sys_ss28d233c8, "Sender");
              m_faultcodens = v_SOAP_1_2_ENV_NAMESPACE;
            }
          }
          else if (equal(m_faultcode, NAMSTR(s_sys_ss15d41015, "Server"))) {
            {
              m_faultcode = NAMSTR(s_sys_ss47955b0c, "Receiver");
              m_faultcodens = v_SOAP_1_2_ENV_NAMESPACE;
            }
          }
          else if (((equal(m_faultcode, NAMSTR(s_sys_ss37f9ce9a, "VersionMismatch")) || equal(m_faultcode, NAMSTR(s_sys_ss793fc318, "MustUnderstand"))) || equal(m_faultcode, NAMSTR(s_sys_ss3ff88d3e, "DataEncodingUnknown")))) {
            {
              m_faultcodens = v_SOAP_1_2_ENV_NAMESPACE;
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/soapfault.php line 73 */
String c_SoapFault::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SoapFault, SoapFault::__toString);
  ObjectData *obj_tmp UNUSED;
  return concat4(NAMSTR(s_sys_ss5d507d08, "SoapFault exception: ["), toString(m_faultcode), NAMSTR(s_sys_ss0a81fd6d, "] "), toString(m_faultstring));
}
namespace hphp_impl_splitter {}
ObjectData *coo_SoapFault() {
  return NEWOBJ(c_SoapFault)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x3D3926D1,6,0,0,68,-1,GET_PROPERTY_OFFSET(c_SoapFault, m_faultcodens),&NAMSTR(s_sys_ss39540e00, "faultcodens") },
  {0x25A06842,1,0,0,4,-1,GET_PROPERTY_OFFSET(c_SoapFault, m_faultactor),&NAMSTR(s_sys_ss5b7cf41f, "faultactor") },
  {0x27BFC952,2,0,0,68,-1,GET_PROPERTY_OFFSET(c_SoapFault, m_detail),&NAMSTR(s_sys_ss2235bf3d, "detail") },
  {0x6F538D87,0,0,0,68,-1,GET_PROPERTY_OFFSET(c_SoapFault, m_headerfault),&NAMSTR(s_sys_ss40793385, "headerfault") },
  {0x69DC8A09,-1,0,0,68,-1,GET_PROPERTY_OFFSET(c_SoapFault, m__name),&NAMSTR(s_sys_ss6e3a4fdd, "_name") },
  {0x3F4C8D8D,-5,0,0,4,-1,GET_PROPERTY_OFFSET(c_SoapFault, m_faultcode),&NAMSTR(s_sys_ss7f0553c0, "faultcode") },
  {0x00D687AD,-5,0,0,68,-1,GET_PROPERTY_OFFSET(c_SoapFault, m_faultstring),&NAMSTR(s_sys_ss7f4490ec, "faultstring") },

};
static const int cpt_hash_entries[] = {
  // SoapFault hash
  -1,0,1,-1,-1,-1,-1,3,-1,4,-1,-1,-1,5,-1,-1,
  // SoapFault lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_SoapFault::os_prop_table = {
  15,5,-1,-1,-1,-1,17,0,
  cpt_hash_entries+0,&c_Exception::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
