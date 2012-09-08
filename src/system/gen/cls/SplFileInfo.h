
#ifndef __GENERATED_cls_SplFileInfo_h1ae251af__
#define __GENERATED_cls_SplFileInfo_h1ae251af__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern StaticStringProxy s_sys_ssp00000000;
#ifndef s_sys_ss00000000
#define s_sys_ss00000000 (*(StaticString *)(&s_sys_ssp00000000))
#endif
extern StaticStringProxy s_sys_ssp114a58e9;
#ifndef s_sys_ss114a58e9
#define s_sys_ss114a58e9 (*(StaticString *)(&s_sys_ssp114a58e9))
#endif
extern StaticStringProxy s_sys_ssp5d909898;
#ifndef s_sys_ss5d909898
#define s_sys_ss5d909898 (*(StaticString *)(&s_sys_ssp5d909898))
#endif
extern StaticStringProxy s_sys_ssp0d42ecf6;
#ifndef s_sys_ss0d42ecf6
#define s_sys_ss0d42ecf6 (*(StaticString *)(&s_sys_ssp0d42ecf6))
#endif

extern VariantProxy s_sys_svsp00000000;
#ifndef s_sys_svs00000000
#define s_sys_svs00000000 (*(Variant *)&s_sys_svsp00000000)
#endif
extern VariantProxy s_sys_svsp114a58e9;
#ifndef s_sys_svs114a58e9
#define s_sys_svs114a58e9 (*(Variant *)&s_sys_svsp114a58e9)
#endif
extern VariantProxy s_sys_svsp5d909898;
#ifndef s_sys_svs5d909898
#define s_sys_svs5d909898 (*(Variant *)&s_sys_svsp5d909898)
#endif
extern VariantProxy s_sys_svsp0d42ecf6;
#ifndef s_sys_svs0d42ecf6
#define s_sys_svs0d42ecf6 (*(Variant *)&s_sys_svsp0d42ecf6)
#endif

/* SRC: classes/splfile.php line 11 */
FORWARD_DECLARE_CLASS(SplFileInfo);
extern const ObjectStaticCallbacks cw_SplFileInfo;
class c_SplFileInfo : public ExtObjectData {
  public:

  // Properties
  Variant m_rsrc;

  // Destructor
  ~c_SplFileInfo() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(SplFileInfo, SplFileInfo, ObjectData)
  static const ClassPropTable os_prop_table;
  c_SplFileInfo(const ObjectStaticCallbacks *cb = &cw_SplFileInfo) : ExtObjectData(cb), m_rsrc(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_file_name);
  public: c_SplFileInfo *create(CVarRef v_file_name);
  public: String t_getpath();
  public: String t_getfilename();
  public: Object t_getfileinfo(CVarRef v_class_name = NAMVAR(s_sys_svs00000000, ""));
  public: String t_getbasename(CVarRef v_suffix = NAMVAR(s_sys_svs00000000, ""));
  public: String t_getpathname();
  public: Object t_getpathinfo(CVarRef v_class_name = NAMVAR(s_sys_svs00000000, ""));
  public: int64 t_getperms();
  public: int64 t_getinode();
  public: int64 t_getsize();
  public: int64 t_getowner();
  public: int64 t_getgroup();
  public: int64 t_getatime();
  public: int64 t_getmtime();
  public: int64 t_getctime();
  public: String t_gettype();
  public: bool t_iswritable();
  public: bool t_isreadable();
  public: bool t_isexecutable();
  public: bool t_isfile();
  public: bool t_isdir();
  public: bool t_islink();
  public: String t_getlinktarget();
  public: Variant t_getrealpath();
  public: String t___tostring();
  public: Object t_openfile(CVarRef v_mode = NAMVAR(s_sys_svs0d42ecf6, "r"), CVarRef v_use_include_path = false_varNR, CVarRef v_context = null_variant);
  public: void t_setfileclass(CVarRef v_class_name = NAMVAR(s_sys_svs5d909898, "SplFileObject"));
  public: void t_setinfoclass(CVarRef v_class_name = NAMVAR(s_sys_svs114a58e9, "SplFileInfo"));
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getpath);
  DECLARE_METHOD_INVOKE_HELPERS(getfilename);
  DECLARE_METHOD_INVOKE_HELPERS(getfileinfo);
  DECLARE_METHOD_INVOKE_HELPERS(getbasename);
  DECLARE_METHOD_INVOKE_HELPERS(getpathname);
  DECLARE_METHOD_INVOKE_HELPERS(getpathinfo);
  DECLARE_METHOD_INVOKE_HELPERS(getperms);
  DECLARE_METHOD_INVOKE_HELPERS(getinode);
  DECLARE_METHOD_INVOKE_HELPERS(getsize);
  DECLARE_METHOD_INVOKE_HELPERS(getowner);
  DECLARE_METHOD_INVOKE_HELPERS(getgroup);
  DECLARE_METHOD_INVOKE_HELPERS(getatime);
  DECLARE_METHOD_INVOKE_HELPERS(getmtime);
  DECLARE_METHOD_INVOKE_HELPERS(getctime);
  DECLARE_METHOD_INVOKE_HELPERS(gettype);
  DECLARE_METHOD_INVOKE_HELPERS(iswritable);
  DECLARE_METHOD_INVOKE_HELPERS(isreadable);
  DECLARE_METHOD_INVOKE_HELPERS(isexecutable);
  DECLARE_METHOD_INVOKE_HELPERS(isfile);
  DECLARE_METHOD_INVOKE_HELPERS(isdir);
  DECLARE_METHOD_INVOKE_HELPERS(islink);
  DECLARE_METHOD_INVOKE_HELPERS(getlinktarget);
  DECLARE_METHOD_INVOKE_HELPERS(getrealpath);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(openfile);
  DECLARE_METHOD_INVOKE_HELPERS(setfileclass);
  DECLARE_METHOD_INVOKE_HELPERS(setinfoclass);
};
ObjectData *coo_SplFileInfo() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_SplFileInfo_h1ae251af__
