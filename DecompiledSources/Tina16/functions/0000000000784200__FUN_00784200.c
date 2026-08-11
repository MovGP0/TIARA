/* Ghidra address: 00784200 */
/* Ghidra symbol: FUN_00784200 */


undefined1
FUN_00784200(longlong param_1,longlong *param_2,HDC param_3,undefined4 param_4,int param_5,
            longlong param_6,LPRECT param_7,uint param_8,undefined8 *param_9,undefined4 param_10)

{
  char cVar1;
  undefined4 uVar2;
  DWORD dwTextFlags;
  HRESULT HVar3;
  longlong *plVar4;
  LPCWSTR pszText;
  undefined8 uVar5;
  undefined1 auStackY_148 [32];
  POINT local_f8;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  HTHEME local_d0;
  int local_c4;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b8;
  COLORREF local_b4;
  DTTOPTS local_b0;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_4d;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_e0 = auStackY_148;
  local_4c = *param_9;
  uStack_44 = param_9[1];
  uStack_3c = param_9[2];
  uStack_34 = param_9[3];
  if ((param_5 == 2) || ((param_8 & 2) != 0)) {
    local_e0 = auStackY_148;
    (**(code **)(*param_2 + 0x118))(param_2,local_f0,2);
    local_4d = FUN_00779040(param_2,param_3,local_f0,param_6);
  }
  else if (*(int *)PTR_DAT_02001bd8 < 6) {
    local_60._0_4_ = param_7->left;
    local_60._4_4_ = param_7->top;
    uStack_58._0_4_ = param_7->right;
    uStack_58._4_4_ = param_7->bottom;
    uVar2 = FUN_0060f550(param_8);
    local_64 = FUN_0060f500(uVar2);
    FUN_00423b50(&local_60,1,1);
    cVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_4,param_5);
    if ((cVar1 == '\0') || (local_b4 == 0x1fffffff)) {
      local_b4 = FUN_005fbf20(0xff000014);
    }
    local_2c = thunk_FUN_0412a071(param_3,local_b4);
    local_d4 = 0;
    if (param_6 != 0) {
      local_d4 = *(undefined4 *)(param_6 + -4);
    }
    uVar5 = FUN_00416740(param_6);
    thunk_FUN_041a24be(param_3,uVar5,local_d4,&local_60);
    FUN_00423b50(&local_60,0xffffffff,0xffffffff);
    cVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_4,param_5);
    if ((cVar1 == '\0') || (local_b4 == 0x1fffffff)) {
      local_b4 = FUN_005fbf20(0xff000010);
    }
    thunk_FUN_0412a071(param_3,local_b4);
    local_d8 = 0;
    if (param_6 != 0) {
      local_d8 = *(undefined4 *)(param_6 + -4);
    }
    uVar5 = FUN_00416740(param_6);
    thunk_FUN_041a24be(param_3,uVar5,local_d8,&local_60);
    thunk_FUN_0412a071(param_3,local_2c);
    local_4d = 1;
  }
  else {
    local_e0 = auStackY_148;
    FUN_0040d200(&local_b0,0x48,0);
    local_b0.dwSize = 0x48;
    local_b0.dwFlags = local_b0.dwFlags | 0x1d;
    cVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_4,param_5);
    if ((cVar1 == '\0') || (local_b4 == 0x1fffffff)) {
      local_b0.crText = FUN_005fbf20(0xff000010);
    }
    else {
      local_b0.crText = local_b4;
    }
    cVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_4,param_5);
    if ((cVar1 == '\0') || (local_b4 == 0x1fffffff)) {
      local_b0.crShadow = FUN_005fbf20(0xff000014);
    }
    else {
      local_b0.crShadow = local_b4;
    }
    FUN_00422db0(&local_f8,1,1);
    local_b0.ptShadowOffset = local_f8;
    local_b0.iTextShadowType = 1;
    if ((param_8 & 0x800000) != 0) {
      local_b0.dwFlags = local_b0.dwFlags | 0x2000;
    }
    if ((param_8 & 2) != 0) {
      local_b0.dwFlags = local_b0.dwFlags | 0x200;
    }
    plVar4 = (longlong *)FUN_007810f0();
    (**(code **)(*plVar4 + 0x118))(plVar4,local_c0,5);
    plVar4 = (longlong *)FUN_007810f0();
    local_d0 = (HTHEME)(**(code **)(*plVar4 + 0xb0))(plVar4,local_c0[0],param_10);
    local_c4 = 0;
    if (param_6 != 0) {
      local_c4 = *(int *)(param_6 + -4);
    }
    pszText = (LPCWSTR)FUN_00416740(param_6);
    uVar2 = FUN_0060f550(param_8);
    dwTextFlags = FUN_0060f500(uVar2);
    HVar3 = DrawThemeTextEx(local_d0,param_3,local_bc,local_b8,pszText,local_c4,dwTextFlags,param_7,
                            &local_b0);
    local_4d = HVar3 == 0;
  }
  return local_4d;
}

