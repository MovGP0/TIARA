/* Ghidra address: 00454e70 */
/* Ghidra symbol: FUN_00454e70 */


longlong FUN_00454e70(longlong param_1,int param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_88;
  undefined1 local_80;
  int local_78;
  undefined1 local_70;
  wchar_t *local_68;
  undefined1 local_60;
  int local_58;
  undefined1 local_50;
  wchar_t *local_48;
  undefined1 local_40;
  
  if (param_2 + -1 < *(int *)(param_1 + 0x10)) {
    if (param_2 < 0) {
      local_48 = (wchar_t *)CONCAT44(local_48._4_4_,param_2);
      local_40 = 0;
      uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,&local_48,0);
      FUN_004134c0(uVar2);
    }
  }
  else {
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,param_2);
    local_40 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,&local_48,0);
    FUN_004134c0(uVar2);
  }
  if (param_4 < 0) {
    local_48 = L"StartIndex";
    local_40 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
    FUN_004134c0(uVar2);
  }
  if (param_5 < 0) {
    local_48 = L"CharCount";
    local_40 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
    FUN_004134c0(uVar2);
  }
  lVar3 = 0;
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_3 + -8);
  }
  if (lVar3 < param_4 + param_5) {
    local_88 = L"StartIndex";
    local_80 = 0x11;
    local_70 = 0;
    local_68 = L"CharCount";
    local_60 = 0x11;
    local_58 = param_5;
    local_50 = 0;
    local_78 = param_4;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02002f78,&local_88,3);
    FUN_004134c0(uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_00455960(param_1,iVar1 + param_5);
  if (param_2 < iVar1) {
    lVar3 = FUN_00414de0(param_1 + 8);
    lVar4 = FUN_00414de0(param_1 + 8);
    FUN_00409a70(lVar3 + (longlong)param_2 * 2,lVar4 + (longlong)(param_2 + param_5) * 2,
                 (longlong)((iVar1 - param_2) * 2));
  }
  lVar3 = FUN_00414de0(param_1 + 8);
  FUN_00409a70(param_3 + (longlong)param_4 * 2,lVar3 + (longlong)param_2 * 2,(longlong)(param_5 * 2)
              );
  return param_1;
}

