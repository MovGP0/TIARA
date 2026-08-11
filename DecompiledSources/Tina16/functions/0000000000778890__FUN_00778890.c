/* Ghidra address: 00778890 */
/* Ghidra symbol: FUN_00778890 */


void FUN_00778890(HDC param_1,longlong param_2,LPRECT param_3,uint param_4,int param_5,
                 undefined4 param_6,ulonglong *param_7)

{
  int iPartId;
  int iStateId;
  longlong *plVar1;
  HTHEME hTheme;
  LPCWSTR pszText;
  undefined8 uVar2;
  undefined8 uVar3;
  int cchText;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff40;
  uint uVar5;
  DTTOPTS local_80;
  undefined8 local_34;
  int local_2c;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  local_34 = *param_7;
  local_2c = (int)param_7[1];
  if (*(int *)PTR_DAT_02001bd8 < 6) {
    plVar1 = (longlong *)FUN_007810f0();
    uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,local_34 & 0xff);
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(undefined4 *)(param_2 + -4);
    }
    uVar3 = FUN_00416740(param_2);
    (**(code **)PTR_DAT_02004d08)
              (uVar2,param_1,local_34._4_4_,local_2c,uVar3,uVar4,param_4,(ulonglong)uVar5 << 0x20,
               param_3);
  }
  else {
    FUN_0040d200(&local_80,0x48,0);
    local_80.dwSize = 0x48;
    local_80.dwFlags = 0x2001;
    if (0 < param_5) {
      local_80.dwFlags = 0x2801;
    }
    if ((param_4 & 0x400) == 0x400) {
      local_80.dwFlags = local_80.dwFlags | 0x200;
    }
    local_80.crText = FUN_005fbf20(param_6);
    local_80.iGlowSize = param_5;
    plVar1 = (longlong *)FUN_007810f0();
    hTheme = (HTHEME)(**(code **)(*plVar1 + 0xa8))(plVar1,local_34 & 0xff);
    iStateId = local_2c;
    cchText = 0;
    if (param_2 != 0) {
      cchText = *(int *)(param_2 + -4);
    }
    iPartId = local_34._4_4_;
    pszText = (LPCWSTR)FUN_00416740(param_2);
    DrawThemeTextEx(hTheme,param_1,iPartId,iStateId,pszText,cchText,param_4,param_3,&local_80);
  }
  return;
}

