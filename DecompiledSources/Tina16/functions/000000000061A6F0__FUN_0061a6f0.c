/* Ghidra address: 0061a6f0 */
/* Ghidra symbol: FUN_0061a6f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0061a6f0(void)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  if (DAT_01df0878 == (longlong *)0x0) {
    local_19 = 0;
  }
  else {
    (**(code **)*DAT_01df0878)(DAT_01df0878);
    DAT_02012240 = DAT_02012240 + 1;
    if (DAT_02012238 == 0) {
      DAT_02012238 = thunk_FUN_04163be6(L"uxtheme.dll");
      if (DAT_02012238 != 0) {
        DAT_020120b8 = FUN_00427c10(DAT_02012238,L"OpenThemeData");
        DAT_020120c0 = FUN_00427c10(DAT_02012238,L"CloseThemeData");
        DAT_020120c8 = FUN_00427c10(DAT_02012238,L"DrawThemeBackground");
        DAT_020120d0 = FUN_00427c10(DAT_02012238,L"DrawThemeText");
        DAT_020120d8 = FUN_00427c10(DAT_02012238,L"GetThemeBackgroundContentRect");
        _DAT_020120e0 = FUN_00427c10(DAT_02012238,L"GetThemeBackgroundExtent");
        DAT_020120e8 = FUN_00427c10(DAT_02012238,L"GetThemePartSize");
        DAT_020120f0 = FUN_00427c10(DAT_02012238,L"GetThemeTextExtent");
        _DAT_020120f8 = FUN_00427c10(DAT_02012238,L"GetThemeTextMetrics");
        DAT_02012100 = FUN_00427c10(DAT_02012238,L"GetThemeBackgroundRegion");
        _DAT_02012108 = FUN_00427c10(DAT_02012238,L"HitTestThemeBackground");
        DAT_02012110 = FUN_00427c10(DAT_02012238,L"DrawThemeEdge");
        DAT_02012118 = FUN_00427c10(DAT_02012238,L"DrawThemeIcon");
        _DAT_02012120 = FUN_00427c10(DAT_02012238,L"IsThemePartDefined");
        DAT_02012128 = FUN_00427c10(DAT_02012238,L"IsThemeBackgroundPartiallyTransparent");
        DAT_02012130 = FUN_00427c10(DAT_02012238,L"GetThemeColor");
        _DAT_02012138 = FUN_00427c10(DAT_02012238,L"GetThemeMetric");
        _DAT_02012140 = FUN_00427c10(DAT_02012238,L"GetThemeString");
        _DAT_02012148 = FUN_00427c10(DAT_02012238,L"GetThemeBool");
        _DAT_02012150 = FUN_00427c10(DAT_02012238,L"GetThemeInt");
        _DAT_02012158 = FUN_00427c10(DAT_02012238,L"GetThemeEnumValue");
        _DAT_02012160 = FUN_00427c10(DAT_02012238,L"GetThemePosition");
        _DAT_02012168 = FUN_00427c10(DAT_02012238,L"GetThemeFont");
        _DAT_02012170 = FUN_00427c10(DAT_02012238,L"GetThemeRect");
        DAT_02012178 = FUN_00427c10(DAT_02012238,L"GetThemeMargins");
        _DAT_02012180 = FUN_00427c10(DAT_02012238,L"GetThemeIntList");
        _DAT_02012188 = FUN_00427c10(DAT_02012238,L"GetThemePropertyOrigin");
        DAT_02012190 = FUN_00427c10(DAT_02012238,L"SetWindowTheme");
        _DAT_02012198 = FUN_00427c10(DAT_02012238,L"GetThemeFilename");
        DAT_020121a0 = FUN_00427c10(DAT_02012238,L"GetThemeSysColor");
        _DAT_020121a8 = FUN_00427c10(DAT_02012238,L"GetThemeSysColorBrush");
        DAT_020121b0 = FUN_00427c10(DAT_02012238,L"GetThemeSysBool");
        _DAT_020121b8 = FUN_00427c10(DAT_02012238,L"GetThemeSysSize");
        _DAT_020121c0 = FUN_00427c10(DAT_02012238,L"GetThemeSysFont");
        _DAT_020121c8 = FUN_00427c10(DAT_02012238,L"GetThemeSysString");
        _DAT_020121d0 = FUN_00427c10(DAT_02012238,L"GetThemeSysInt");
        DAT_020121d8 = FUN_00427c10(DAT_02012238,L"IsThemeActive");
        DAT_020121e0 = FUN_00427c10(DAT_02012238,L"IsAppThemed");
        _DAT_020121e8 = FUN_00427c10(DAT_02012238,L"GetWindowTheme");
        _DAT_020121f0 = FUN_00427c10(DAT_02012238,L"EnableThemeDialogTexture");
        _DAT_020121f8 = FUN_00427c10(DAT_02012238,L"IsThemeDialogTextureEnabled");
        _DAT_02012200 = FUN_00427c10(DAT_02012238,L"GetThemeAppProperties");
        _DAT_02012208 = FUN_00427c10(DAT_02012238,L"SetThemeAppProperties");
        _DAT_02012210 = FUN_00427c10(DAT_02012238,L"GetCurrentThemeName");
        _DAT_02012218 = FUN_00427c10(DAT_02012238,L"GetThemeDocumentationProperty");
        DAT_02012220 = FUN_00427c10(DAT_02012238,L"DrawThemeParentBackground");
        _DAT_02012228 = FUN_00427c10(DAT_02012238,L"EnableTheming");
      }
    }
    local_19 = DAT_02012238 != 0;
    (**(code **)(*DAT_01df0878 + 8))(DAT_01df0878);
  }
  return local_19;
}

