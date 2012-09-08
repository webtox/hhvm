
#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/fbmysqllexer.fws.h>
#include <php/classes/fbmysqllexer.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/fbmysqllexer.php line 40 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(FB_MySQLLexer)
extern const InstanceOfInfo cw_FB_MySQLLexer$$instanceof_table[] = {
  {0x799762BA,1,"FB_MySQLLexer",&cw_FB_MySQLLexer},
};
const int cw_FB_MySQLLexer$$instanceof_index[] = {
  1,
  0,-1,
};
extern const CallInfo ci_FB_MySQLLexer$$iscompop = { (void*)&c_FB_MySQLLexer::i_iscompop, (void*)&c_FB_MySQLLexer::ifa_iscompop, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$unget = { (void*)&c_FB_MySQLLexer::i_unget, (void*)&c_FB_MySQLLexer::ifa_unget, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$get = { (void*)&c_FB_MySQLLexer::i_get, (void*)&c_FB_MySQLLexer::ifa_get, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$pushback = { (void*)&c_FB_MySQLLexer::i_pushback, (void*)&c_FB_MySQLLexer::ifa_pushback, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$nexttoken = { (void*)&c_FB_MySQLLexer::i_nexttoken, (void*)&c_FB_MySQLLexer::ifa_nexttoken, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$revert = { (void*)&c_FB_MySQLLexer::i_revert, (void*)&c_FB_MySQLLexer::ifa_revert, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$lex = { (void*)&c_FB_MySQLLexer::i_lex, (void*)&c_FB_MySQLLexer::ifa_lex, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$__construct = { (void*)&c_FB_MySQLLexer::i___construct, (void*)&c_FB_MySQLLexer::ifa___construct, 2, 4, 0x0000000000000000LL};
extern const CallInfo ci_FB_MySQLLexer$$skip = { (void*)&c_FB_MySQLLexer::i_skip, (void*)&c_FB_MySQLLexer::ifa_skip, 0, 4, 0x0000000000000000LL};
Variant c_FB_MySQLLexer::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_FB_MySQLLexer::i_get(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_get);
}
Variant c_FB_MySQLLexer::i_unget(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_unget);
}
Variant c_FB_MySQLLexer::i_skip(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_skip);
}
Variant c_FB_MySQLLexer::i_revert(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_revert);
}
Variant c_FB_MySQLLexer::i_iscompop(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_iscompop);
}
Variant c_FB_MySQLLexer::i_pushback(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_pushback);
}
Variant c_FB_MySQLLexer::i_lex(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_lex);
}
Variant c_FB_MySQLLexer::i_nexttoken(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_nexttoken);
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 2)) return throw_toomany_arguments("FB_MySQLLexer::__construct", 2, 2);
  if (count <= 0) return (self->t___construct(), null);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_get, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::get", 0, 1);
  return (self->t_get());
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_unget(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_unget, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::unget", 0, 1);
  return (self->t_unget(), null);
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_skip(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_skip, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::skip", 0, 1);
  return (self->t_skip());
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_revert(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_revert, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::revert", 0, 1);
  return (self->t_revert(), null);
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_iscompop(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_iscompop, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("FB_MySQLLexer::isCompop", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_iscompop(arg0));
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_pushback(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_pushback, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::pushBack", 0, 1);
  return (self->t_pushback(), null);
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_lex(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_lex, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::lex", 0, 1);
  return (self->t_lex());
}
Variant NEVER_INLINE c_FB_MySQLLexer::ifa_nexttoken(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_nexttoken, coo_FB_MySQLLexer);
  }
  c_FB_MySQLLexer *self ATTRIBUTE_UNUSED (static_cast<c_FB_MySQLLexer*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("FB_MySQLLexer::nextToken", 0, 1);
  return (self->t_nexttoken());
}
extern const MethodCallInfoTable cw_FB_MySQLLexer$$call_info_table[] = {
  { 0x753ED923, 1, 8, "isCompop", &ci_FB_MySQLLexer$$iscompop },
  { 0x7DB002A7, 1, 3, "lex", &ci_FB_MySQLLexer$$lex },
  { 0x569AD828, 1, 3, "get", &ci_FB_MySQLLexer$$get },
  { 0x356694EC, 1, 6, "revert", &ci_FB_MySQLLexer$$revert },
  { 0x14CBAFB1, 1, 8, "pushBack", &ci_FB_MySQLLexer$$pushback },
  { 0x594564B4, 0, 4, "skip", &ci_FB_MySQLLexer$$skip },
  { 0x4CBBE314, 1, 9, "nextToken", &ci_FB_MySQLLexer$$nexttoken },
  { 0x7B8EC915, 1, 5, "unget", &ci_FB_MySQLLexer$$unget },
  { 0x229C615F, 1, 11, "__construct", &ci_FB_MySQLLexer$$__construct },
};
extern const int cw_FB_MySQLLexer$$call_info_index[] = {
  31,
  -1,-1,-1,0,-1,-1,-1,1,
  2,-1,-1,-1,3,-1,-1,-1,
  -1,4,-1,-1,5,7,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,8,

};
c_FB_MySQLLexer *c_FB_MySQLLexer::create(CVarRef v_string //  = NAMVAR(s_sys_svs00000000, "")
, CVarRef v_lookahead //  = NAMVAR(s_sys_svif01bca90, 0LL)
) {
  CountableHelper h(this);
  init();
  t___construct(v_string, v_lookahead);
  return this;
}
extern const MethodCallInfoTable cw_FB_MySQLLexer$$call_info_table[];
extern const int cw_FB_MySQLLexer$$call_info_index[];
extern const InstanceOfInfo cw_FB_MySQLLexer$$instanceof_table[];
extern const int cw_FB_MySQLLexer$$instanceof_index[];
const ObjectStaticCallbacks cw_FB_MySQLLexer = {
  (ObjectData*(*)(ObjectData*))coo_FB_MySQLLexer,
  cw_FB_MySQLLexer$$call_info_table,cw_FB_MySQLLexer$$call_info_index,
  cw_FB_MySQLLexer$$instanceof_table,cw_FB_MySQLLexer$$instanceof_index,
  &c_FB_MySQLLexer::s_class_name,
  &c_FB_MySQLLexer::os_prop_table,&ci_FB_MySQLLexer$$__construct,0,0,0x0,
  &c_FB_MySQLLexer::s_cls
};
void c_FB_MySQLLexer::init() {
  m_symbols = s_sys_sa00000000;
  m_tokPtr = 0LL;
  m_tokStart = 0LL;
  m_tokLen = 0LL;
  m_tokText = NAMSTR(s_sys_ss00000000, "");
  m_lineNo = 0LL;
  m_lineBegin = 0LL;
  m_string = NAMSTR(s_sys_ss00000000, "");
  m_stringLen = 0LL;
  m_tokAbsStart = 0LL;
  m_skipText = NAMSTR(s_sys_ss00000000, "");
  m_lookahead = 0LL;
  m_tokenStack = s_sys_sa00000000;
  m_stackPtr = 0LL;
}
/* SRC: classes/fbmysqllexer.php line 69 */
void c_FB_MySQLLexer::t___construct(Variant v_string //  = NAMSTR(s_sys_ss00000000, "")
, Variant v_lookahead //  = 0LL
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::__construct);
  ObjectData *obj_tmp UNUSED;
  m_string.assignVal(v_string);
  {
    int64 tmp0((x_strlen(toString(v_string))));
    m_stringLen = tmp0;
  }
  m_lookahead.assignVal(v_lookahead);
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 76 */
Variant c_FB_MySQLLexer::t_get() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::get);
  ObjectData *obj_tmp UNUSED;
  ++m_tokPtr;
  ++m_tokLen;
  return (not_more(m_tokPtr, m_stringLen) ? ((Variant)(m_string.rvalAt((m_tokPtr - 1LL), AccessFlags::Error))) : ((Variant)(null)));
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 82 */
void c_FB_MySQLLexer::t_unget() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::unget);
  ObjectData *obj_tmp UNUSED;
  --m_tokPtr;
  --m_tokLen;
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 87 */
Variant c_FB_MySQLLexer::t_skip() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::skip);
  ObjectData *obj_tmp UNUSED;
  ++m_tokStart;
  {
    Variant tmp0;
    if (!equal(m_tokPtr, m_stringLen)) {
      Primitive tmp1((m_tokPtr++));
      tmp0 = (m_string.rvalAt(tmp1, AccessFlags::Error));
    } else {
      tmp0 = (NAMSTR(s_sys_ss00000000, ""));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 92 */
void c_FB_MySQLLexer::t_revert() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::revert);
  ObjectData *obj_tmp UNUSED;
  m_tokPtr.assignVal(m_tokStart);
  m_tokLen = 0LL;
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 97 */
bool c_FB_MySQLLexer::t_iscompop(CVarRef v_c) {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::isCompop);
  return (((equal(v_c, NAMSTR(s_sys_ss2e7b6cab, "<")) || equal(v_c, NAMSTR(s_sys_ss1767c666, ">"))) || equal(v_c, NAMSTR(s_sys_ss7adc04d2, "="))) || equal(v_c, NAMSTR(s_sys_ss5fdeba7c, "!")));
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 109 */
void c_FB_MySQLLexer::t_pushback() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::pushBack);
  ObjectData *obj_tmp UNUSED;
  {
    bool tmp0;
    {
      bool tmp1 = (more(m_lookahead, 0LL));
      if (tmp1) {
        int64 tmp2((x_count(m_tokenStack)));
        tmp1 = (more(tmp2, 0LL));
      }
      tmp0 = ((tmp1 && more(m_stackPtr, 0LL)));
    }
    if (tmp0) {
      {
        m_stackPtr--;
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 118 */
Variant c_FB_MySQLLexer::t_lex() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::lex);
  Variant v_token;
  int64 v_i = 0;

  Variant tmp_ref;
  ObjectData *obj_tmp UNUSED;
  if (more(m_lookahead, 0LL)) {
    {
      {
        bool tmp0;
        {
          Variant tmp1((m_stackPtr));
          int64 tmp2((x_count(m_tokenStack)));
          tmp0 = (less(tmp1, tmp2));
        }
        if (tmp0) {
          {
            {
              Variant tmp0((m_stackPtr));
              const Variant &tmp1((m_tokenStack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_sys_ss55febcf5, "tokText"), AccessFlags::Error_Key)));
              m_tokText.assignVal(tmp1);
              tmp_ref.unset();
            }
            {
              Variant tmp0((m_stackPtr));
              const Variant &tmp1((m_tokenStack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_sys_ss38d0aa49, "skipText"), AccessFlags::Error_Key)));
              m_skipText.assignVal(tmp1);
              tmp_ref.unset();
            }
            {
              Variant tmp0((m_stackPtr));
              const Variant &tmp1((m_tokenStack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_sys_ss111a03e7, "token"), AccessFlags::Error_Key)));
              v_token.assignVal(tmp1);
              tmp_ref.unset();
            }
            m_stackPtr++;
            return v_token;
          }
        }
        else {
          {
            if (equal(m_stackPtr, m_lookahead)) {
              {
                {
                  LOOP_COUNTER(1);
                  for (v_i = 0LL; ; v_i++) {
                    {
                      int64 tmp0((x_count(m_tokenStack)));
                      int64 tmp1(((tmp0 - 1LL)));
                      if (!((less(v_i, tmp1)))) break;
                    }
                    LOOP_COUNTER_CHECK(1);
                    {
                      {
                        int64 tmp0(((v_i + 1LL)));
                        const Variant &tmp1((m_tokenStack.rvalAt(tmp0, AccessFlags::Error)));
                        m_tokenStack.set(v_i, (tmp1));
                      }
                    }
                  }
                }
                m_stackPtr--;
              }
            }
            {
              const Variant &tmp0((t_nexttoken()));
              v_token.assignVal(tmp0);
            }
            m_tokenStack.set(m_stackPtr, (VarNR(Array(ArrayInit(3).add(NAMSTR(s_sys_ss111a03e7, "token"), v_token, true).add(NAMSTR(s_sys_ss55febcf5, "tokText"), m_tokText, true).add(NAMSTR(s_sys_ss38d0aa49, "skipText"), m_skipText, true).create()))));
            m_stackPtr++;
            return v_token;
          }
        }
      }
    }
  }
  else {
    {
      return t_nexttoken();
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: classes/fbmysqllexer.php line 172 */
Variant c_FB_MySQLLexer::t_nexttoken() {
  INSTANCE_METHOD_INJECTION_BUILTIN(FB_MySQLLexer, FB_MySQLLexer::nextToken);
  int64 v_state = 0;
  Variant v_c;
  Variant v_t;
  Variant v_quote;
  String v_testToken;
  bool v_bail = false;
  String v_text;

  ObjectData *obj_tmp UNUSED;
  if (equal(m_string, NAMSTR(s_sys_ss00000000, ""))) {
    return null;
  }
  v_state = 0LL;
  m_tokAbsStart.assignVal(m_tokStart);
  LOOP_COUNTER(1);
  {
    while (true) {
      LOOP_COUNTER_CHECK(1);
      {
        switch ((v_state)) {
        case 0LL:
          {
            m_tokPtr.assignVal(m_tokStart);
            m_tokText = NAMSTR(s_sys_ss00000000, "");
            m_tokLen = 0LL;
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if (x_is_null(v_c)) {
              {
                v_state = 1000LL;
                break;
              }
            }
            LOOP_COUNTER(3);
            {
              while ((((equal(v_c, NAMSTR(s_sys_ss7cae4ca0, " ")) || equal(v_c, NAMSTR(s_sys_ss03a6ba5d, "\t"))) || equal(v_c, NAMSTR(s_sys_ss66d2232c, "\n"))) || equal(v_c, NAMSTR(s_sys_ss4a90151e, "\r")))) {
                LOOP_COUNTER_CHECK(3);
                {
                  if ((equal(v_c, NAMSTR(s_sys_ss66d2232c, "\n")) || equal(v_c, NAMSTR(s_sys_ss4a90151e, "\r")))) {
                    {
                      if (equal(v_c, NAMSTR(s_sys_ss4a90151e, "\r"))) {
                        {
                          {
                            const Variant &tmp0((t_skip()));
                            v_c.assignVal(tmp0);
                          }
                          if (!equal(v_c, NAMSTR(s_sys_ss66d2232c, "\n"))) {
                            t_unget();
                          }
                        }
                      }
                      ++m_lineNo;
                      m_lineBegin.assignVal(m_tokPtr);
                    }
                  }
                  {
                    const Variant &tmp0((t_skip()));
                    v_c.assignVal(tmp0);
                  }
                  m_tokLen = 1LL;
                }
              }
            }
            if (equal(v_c, NAMSTR(s_sys_ss559e789f, "\\"))) {
              {
                {
                  const Variant &tmp0((t_get()));
                  v_t.assignVal(tmp0);
                }
                if (((equal(v_t, NAMSTR(s_sys_ss607b87c4, "'")) || equal(v_t, NAMSTR(s_sys_ss559e789f, "\\"))) || equal(v_t, NAMSTR(s_sys_ss7e5fc106, "\"")))) {
                  {
                    m_tokText.assignVal(v_t);
                    m_tokStart.assignVal(m_tokPtr);
                    return m_tokText;
                  }
                }
                else {
                  {
                    t_unget();
                    v_state = 999LL;
                    break;
                  }
                }
              }
            }
            if ((equal(v_c, NAMSTR(s_sys_ss607b87c4, "'")) || equal(v_c, NAMSTR(s_sys_ss7e5fc106, "\"")))) {
              {
                v_quote.assignVal(v_c);
                v_state = 12LL;
                break;
              }
            }
            if (equal(v_c, NAMSTR(s_sys_ss7f06ffcd, "_"))) {
              {
                v_state = 18LL;
                break;
              }
            }
            if (equal(v_c, NAMSTR(s_sys_ss5dcae8d1, "`"))) {
              {
                v_state = 20LL;
                break;
              }
            }
            if (x_ctype_alpha(v_c)) {
              {
                v_state = 1LL;
                break;
              }
            }
            if (x_ctype_digit(v_c)) {
              {
                v_state = 5LL;
                break;
              }
            }
            if (equal(v_c, NAMSTR(s_sys_ss013a8f64, "."))) {
              {
                {
                  const Variant &tmp0((t_get()));
                  v_t.assignVal(tmp0);
                }
                if (equal(v_t, NAMSTR(s_sys_ss013a8f64, "."))) {
                  {
                    {
                      bool tmp0;
                      {
                        const Variant &tmp1((t_get()));
                        tmp0 = (equal(tmp1, NAMSTR(s_sys_ss013a8f64, ".")));
                      }
                      if (tmp0) {
                        {
                          m_tokText = NAMSTR(s_sys_ss5042ef13, "...");
                          m_tokStart.assignVal(m_tokPtr);
                          return m_tokText;
                        }
                      }
                      else {
                        {
                          v_state = 999LL;
                          break;
                        }
                      }
                    }
                  }
                }
                else if (x_ctype_digit(v_t)) {
                  {
                    t_unget();
                    v_state = 7LL;
                    break;
                  }
                }
                else {
                  {
                    t_unget();
                  }
                }
              }
            }
            if (equal(v_c, NAMSTR(s_sys_ss0dc355aa, "#"))) {
              {
                v_state = 14LL;
                break;
              }
            }
            if (equal(v_c, NAMSTR(s_sys_ss135fd125, "-"))) {
              {
                {
                  const Variant &tmp0((t_get()));
                  v_t.assignVal(tmp0);
                }
                if (equal(v_t, NAMSTR(s_sys_ss135fd125, "-"))) {
                  {
                    v_state = 14LL;
                    break;
                  }
                }
                else {
                  {
                    v_state = 999LL;
                    break;
                  }
                }
              }
            }
            if (t_iscompop(v_c)) {
              {
                v_state = 10LL;
                break;
              }
            }
            v_state = 999LL;
            break;
          }
        case 1LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if ((x_ctype_alnum(v_c) || equal(v_c, NAMSTR(s_sys_ss7f06ffcd, "_")))) {
              {
                v_state = 1LL;
                break;
              }
            }
            v_state = 2LL;
            break;
          }
        case 20LL:
          {
            {
              LOOP_COUNTER(4);
              do {
                LOOP_COUNTER_CHECK(4);
                {
                  {
                    const Variant &tmp0((t_get()));
                    v_c.assignVal(tmp0);
                  }
                }
              } while (!equal(NAMSTR(s_sys_ss5dcae8d1, "`"), v_c));
            }
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            v_state = 2LL;
            break;
          }
        case 2LL:
          {
            t_unget();
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokStart), toInt32(m_tokLen))));
              m_tokText.assignVal(tmp0);
            }
            {
              const String &tmp0((x_strtolower(toString(m_tokText))));
              v_testToken = tmp0;
            }
            {
              bool tmp0;
              {
                tmp0 = (isset(m_symbols, v_testToken));
              }
              if (tmp0) {
                {
                  {
                    const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
                    m_skipText.assignVal(tmp0);
                  }
                  m_tokStart.assignVal(m_tokPtr);
                  return v_testToken;
                }
              }
              else {
                {
                  {
                    const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
                    m_skipText.assignVal(tmp0);
                  }
                  m_tokStart.assignVal(m_tokPtr);
                  {
                    const String &tmp0((x_trim(toString(m_tokText), NAMSTR(s_sys_ss5dcae8d1, "`"))));
                    m_tokText = tmp0;
                  }
                  return NAMSTR(s_sys_ss23455f47, "ident");
                }
              }
            }
            break;
          }
        case 5LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if (x_ctype_digit(v_c)) {
              {
                v_state = 5LL;
                break;
              }
            }
            else if (equal(v_c, NAMSTR(s_sys_ss013a8f64, "."))) {
              {
                {
                  const Variant &tmp0((t_get()));
                  v_t.assignVal(tmp0);
                }
                if (equal(v_t, NAMSTR(s_sys_ss013a8f64, "."))) {
                  {
                    t_unget();
                  }
                }
                else {
                  {
                    v_state = 7LL;
                    break;
                  }
                }
              }
            }
            else if (x_ctype_alpha(v_c)) {
              {
                v_state = 999LL;
                break;
              }
            }
            else {
              {
                v_state = 6LL;
                break;
              }
            }
          }
        case 6LL:
          {
            t_unget();
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokStart), toInt32(m_tokLen))));
              int64 tmp1((x_intval(tmp0)));
              m_tokText = tmp1;
            }
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
              m_skipText.assignVal(tmp0);
            }
            m_tokStart.assignVal(m_tokPtr);
            return NAMSTR(s_sys_ss324f875e, "int_val");
            break;
          }
        case 7LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if ((equal(v_c, NAMSTR(s_sys_ss6b7ea7eb, "e")) || equal(v_c, NAMSTR(s_sys_ss29f79558, "E")))) {
              {
                v_state = 15LL;
                break;
              }
            }
            if (x_ctype_digit(v_c)) {
              {
                v_state = 7LL;
                break;
              }
            }
            v_state = 8LL;
            break;
          }
        case 8LL:
          {
            t_unget();
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokStart), toInt32(m_tokLen))));
              double tmp1((x_floatval(tmp0)));
              m_tokText = tmp1;
            }
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
              m_skipText.assignVal(tmp0);
            }
            m_tokStart.assignVal(m_tokPtr);
            return NAMSTR(s_sys_ss5c06d1b5, "real_val");
          }
        case 10LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if (t_iscompop(v_c)) {
              {
                v_state = 10LL;
                break;
              }
            }
            v_state = 11LL;
            break;
          }
        case 11LL:
          {
            t_unget();
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokStart), toInt32(m_tokLen))));
              m_tokText.assignVal(tmp0);
            }
            if (toBoolean(m_tokText)) {
              {
                {
                  const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
                  m_skipText.assignVal(tmp0);
                }
                m_tokStart.assignVal(m_tokPtr);
                return m_tokText;
              }
            }
            v_state = 999LL;
            break;
          }
        case 12LL:
          {
            v_bail = false;
            v_text = NAMSTR(s_sys_ss00000000, "");
            LOOP_COUNTER(5);
            {
              while (!(v_bail)) {
                LOOP_COUNTER_CHECK(5);
                {
                  {
                    const Variant &tmp0((t_get()));
                    v_c.assignVal(tmp0);
                  }
                  {
                    Variant switch7 = (v_c);
                    if (equal(switch7, (NAMSTR(s_sys_ss00000000, "")))) goto case_7_0;
                    if (equal(switch7, (NAMSTR(s_sys_ss559e789f, "\\")))) goto case_7_1;
                    if (equal(switch7, (v_quote))) goto case_7_2;
                    goto case_7_3;
                  }

                  case_7_0:
                    {
                      m_tokText.assignVal(null);
                      v_bail = true;
                      goto break6;
                    }
                  case_7_1:
                    {
                      {
                        const Variant &tmp0((t_get()));
                        v_c.assignVal(tmp0);
                      }
                      {
                        Variant switch9;
                        switch9 = (v_c);
                        bool needsOrder;
                        int64 hash;
                        hash = switch9.hashForStringSwitch(304416507LL, 0LL, 0LL, 0LL, 0LL, 8LL, needsOrder);
                        switch (((uint64) hash) & 7UL) {
                        case 0UL:
                          if (equal(switch9, (NAMSTR(s_sys_ss40fdaad5, "0")))) goto case_9_0;
                          if (UNLIKELY(needsOrder)) goto case_9_h_s1;
                          goto case_9_4;
                        case_9_h_s2:
                        case 1UL:
                          if (equal(switch9, (NAMSTR(s_sys_ss64662809, "n")))) goto case_9_2;
                          if (UNLIKELY(needsOrder)) goto case_9_h_s3;
                          goto case_9_4;
                        case_9_h_s3:
                        case 2UL:
                          if (equal(switch9, (NAMSTR(s_sys_ss2f66e5e2, "Z")))) goto case_9_3;
                          goto case_9_4;
                        case_9_h_s1:
                        case 3UL:
                          if (equal(switch9, (NAMSTR(s_sys_ss0d42ecf6, "r")))) goto case_9_1;
                          if (UNLIKELY(needsOrder)) goto case_9_h_s2;
                          goto case_9_4;
                        default: goto case_9_4;
                        }
                      }
                      case_9_0:
                        {
                          concat_assign(v_text, NAMSTR(s_sys_ss00000000_1, "\000"));
                          goto break8;
                        }
                      case_9_1:
                        {
                          concat_assign(v_text, NAMSTR(s_sys_ss4a90151e, "\r"));
                          goto break8;
                        }
                      case_9_2:
                        {
                          concat_assign(v_text, NAMSTR(s_sys_ss66d2232c, "\n"));
                          goto break8;
                        }
                      case_9_3:
                        {
                          concat_assign(v_text, NAMSTR(s_sys_ss15202a3c, "\032"));
                          goto break8;
                        }
                      case_9_4:
                        {
                          if (!(toBoolean(v_c))) {
                            {
                              m_tokText.assignVal(null);
                              v_bail = true;
                            }
                          }
                          else {
                            {
                              concat_assign(v_text, toString(v_c));
                            }
                          }
                        }
                      break8:;
                      goto break6;
                    }
                  case_7_2:
                    {
                      m_tokText = v_text;
                      v_bail = true;
                      goto break6;
                    }
                  case_7_3:
                    {
                      concat_assign(v_text, toString(v_c));
                      goto break6;
                    }
                  break6:;
                }
              }
            }
            if (!(x_is_null(m_tokText))) {
              {
                v_state = 13LL;
                break;
              }
            }
            v_state = 999LL;
            break;
          }
        case 13LL:
          {
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
              m_skipText.assignVal(tmp0);
            }
            m_tokStart.assignVal(m_tokPtr);
            return NAMSTR(s_sys_ss3500bed0, "text_val");
            break;
          }
        case 14LL:
          {
            {
              const Variant &tmp0((t_skip()));
              v_c.assignVal(tmp0);
            }
            if (((equal(v_c, NAMSTR(s_sys_ss66d2232c, "\n")) || equal(v_c, NAMSTR(s_sys_ss4a90151e, "\r"))) || equal(v_c, NAMSTR(s_sys_ss00000000, "")))) {
              {
                if (equal(v_c, NAMSTR(s_sys_ss4a90151e, "\r"))) {
                  {
                    {
                      const Variant &tmp0((t_skip()));
                      v_c.assignVal(tmp0);
                    }
                    if (!equal(v_c, NAMSTR(s_sys_ss66d2232c, "\n"))) {
                      {
                        t_unget();
                      }
                    }
                  }
                }
                if (!equal(v_c, NAMSTR(s_sys_ss00000000, ""))) {
                  {
                    ++m_lineNo;
                    m_lineBegin.assignVal(m_tokPtr);
                  }
                }
                m_tokStart.assignVal(m_tokPtr);
                v_state = 0LL;
              }
            }
            else {
              {
                v_state = 14LL;
              }
            }
            break;
          }
        case 15LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if ((equal(v_c, NAMSTR(s_sys_ss135fd125, "-")) || equal(v_c, NAMSTR(s_sys_ss7aed5cac, "+")))) {
              {
                v_state = 16LL;
                break;
              }
            }
            v_state = 999LL;
            break;
          }
        case 16LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if (x_ctype_digit(v_c)) {
              {
                v_state = 17LL;
                break;
              }
            }
            v_state = 999LL;
            break;
          }
        case 17LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if (x_ctype_digit(v_c)) {
              {
                v_state = 17LL;
                break;
              }
            }
            v_state = 8LL;
            break;
          }
        case 18LL:
          {
            {
              const Variant &tmp0((t_get()));
              v_c.assignVal(tmp0);
            }
            if ((x_ctype_alnum(v_c) || equal(v_c, NAMSTR(s_sys_ss7f06ffcd, "_")))) {
              {
                v_state = 18LL;
                break;
              }
            }
            v_state = 19LL;
            break;
          }
        case 19LL:
          {
            t_unget();
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokStart), toInt32(m_tokLen))));
              m_tokText.assignVal(tmp0);
            }
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
              m_skipText.assignVal(tmp0);
            }
            m_tokStart.assignVal(m_tokPtr);
            return NAMSTR(s_sys_ss3bfd18ca, "sys_var");
          }
        case 999LL:
          {
            t_revert();
            {
              const Variant &tmp0((t_get()));
              m_tokText.assignVal(tmp0);
            }
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
              m_skipText.assignVal(tmp0);
            }
            m_tokStart.assignVal(m_tokPtr);
            return m_tokText;
          }
        case 1000LL:
          {
            m_tokText = NAMSTR(s_sys_ss08c6db96, "*end of input*");
            {
              const Variant &tmp0((x_substr(toString(m_string), toInt32(m_tokAbsStart), toInt32((m_tokStart - m_tokAbsStart)))));
              m_skipText.assignVal(tmp0);
            }
            m_tokStart.assignVal(m_tokPtr);
            return null;
          }
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_FB_MySQLLexer() {
  return NEWOBJ(c_FB_MySQLLexer)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sys_sva00000000,
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
  (int64)&NAMVAR(s_sys_svs00000000, ""),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x00040DC0,9,0,0,4,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_symbols),&NAMSTR(s_sys_ss335c39ca, "symbols") },
  {0x6C565160,4,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_tokStart),&NAMSTR(s_sys_ss1ee01d21, "tokStart") },
  {0x3D85DE21,10,2,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_skipText),&NAMSTR(s_sys_ss38d0aa49, "skipText") },
  {0x09782043,10,0,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_tokenStack),&NAMSTR(s_sys_ss44d65cff, "tokenStack") },
  {0x7A090D24,4,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_stringLen),&NAMSTR(s_sys_ss6c97e639, "stringLen") },
  {0x751EE4C7,1,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_tokLen),&NAMSTR(s_sys_ss2dcf782a, "tokLen") },
  {0x56C37A48,5,2,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_tokText),&NAMSTR(s_sys_ss55febcf5, "tokText") },
  {0x0D0C8149,-3,2,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_string),&NAMSTR(s_sys_ss69ad4382, "string") },
  {0x532C6CCE,-6,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_tokAbsStart),&NAMSTR(s_sys_ss2dd58f33, "tokAbsStart") },
  {0x2FC45E90,-8,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_tokPtr),&NAMSTR(s_sys_ss28d27535, "tokPtr") },
  {0x2F758F12,-3,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_lineBegin),&NAMSTR(s_sys_ss0d52a69c, "lineBegin") },
  {0x77E6D414,-1,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_lineNo),&NAMSTR(s_sys_ss744f6ae2, "lineNo") },
  {0x2A8F8659,-9,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_lookahead),&NAMSTR(s_sys_ss7a697dda, "lookahead") },
  {0x5D9ACBDE,0,1,0,68,-1,GET_PROPERTY_OFFSET(c_FB_MySQLLexer, m_stackPtr),&NAMSTR(s_sys_ss0b06f0b2, "stackPtr") },

};
static const int cpt_hash_entries[] = {
  // FB_MySQLLexer hash
  0,2,-1,3,4,-1,-1,5,6,7,-1,-1,-1,-1,8,-1,9,-1,10,-1,11,-1,-1,-1,-1,12,-1,-1,-1,-1,13,-1,
  // FB_MySQLLexer lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_FB_MySQLLexer::os_prop_table = {
  31,0,-1,-1,-1,-1,33,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
