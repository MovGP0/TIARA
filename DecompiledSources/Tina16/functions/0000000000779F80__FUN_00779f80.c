/* Ghidra address: 00779f80 */
/* Ghidra symbol: FUN_00779f80 */


undefined1
FUN_00779f80(longlong *param_1,HDC param_2,ulonglong *param_3,longlong param_4,LPRECT param_5,
            uint param_6,ulonglong *param_7,undefined4 param_8)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  HRESULT HVar4;
  DWORD *pDVar5;
  HTHEME hTheme;
  LPCWSTR pszText;
  undefined8 uVar6;
  bool bVar7;
  uint *local_c0;
  undefined4 local_ac;
  int local_a0;
  byte local_99;
  DTTOPTS local_98;
  DWORD local_50;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  LONG local_34;
  LONG LStack_30;
  int local_2c;
  undefined8 local_28;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = *param_3;
  local_20 = (int)param_3[1];
  local_48 = *param_7;
  local_40 = param_7[1];
  local_38 = (undefined4)param_7[2];
  local_34 = (LONG)(param_7[2] >> 0x20);
  LStack_30 = (LONG)param_7[3];
  local_2c = (int)(param_7[3] >> 0x20);
  local_28._0_1_ = (char)uVar1;
  if ((byte)((char)local_28 - 0x20U) < 0x10) {
    bVar7 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << ((char)local_28 - 0x20U & 0x1f)
            & 0x3ffU) != 0;
  }
  else {
    bVar7 = false;
  }
  local_28 = uVar1;
  if (bVar7) {
    local_28._4_4_ = (int)(uVar1 >> 0x20);
    uVar2 = local_28._4_4_;
    local_49 = (**(code **)(param_1[(uVar1 & 0xff) - 0x1d] + 0x18))
                         (param_1[(uVar1 & 0xff) - 0x1d],param_1,param_2,uVar2);
  }
  else {
    uVar2 = FUN_0060f550(param_6);
    local_50 = FUN_0060f500(uVar2);
    if (*(int *)PTR_DAT_02001bd8 < 6) {
      if ((local_48 & 1) == 0) {
        uVar6 = (**(code **)(*param_1 + 0xa8))(param_1,local_28 & 0xff);
        FUN_00416740(param_4);
        iVar3 = (**(code **)PTR_DAT_02004d08)(uVar6,param_2,local_28._4_4_,local_20);
        local_49 = iVar3 == 0;
      }
      else {
        uVar2 = FUN_005fbf20(local_48._4_4_);
        local_1c = thunk_FUN_0412a071(param_2,uVar2);
        local_ac = 0;
        if (param_4 != 0) {
          local_ac = *(undefined4 *)(param_4 + -4);
        }
        uVar6 = FUN_00416740(param_4);
        thunk_FUN_041a24be(param_2,uVar6,local_ac,param_5);
        thunk_FUN_0412a071(param_2,local_1c);
        local_49 = 1;
      }
    }
    else {
      FUN_0040d200(&local_98,0x48,0);
      local_98.dwSize = 0x48;
      local_99 = 0;
      pDVar5 = &DAT_01e08618;
      local_c0 = &DAT_01e08618;
      do {
        if (local_99 < 8) {
          iVar3 = (int)CONCAT71((int7)((ulonglong)pDVar5 >> 8),1) << (local_99 & 0x1f);
          pDVar5 = (DWORD *)(ulonglong)
                            CONCAT31((int3)((uint)iVar3 >> 8),((byte)iVar3 & (byte)local_48) != 0);
        }
        else {
          pDVar5 = (DWORD *)0x0;
        }
        if ((char)pDVar5 != '\0') {
          pDVar5 = &local_98.dwFlags;
          local_98.dwFlags = local_98.dwFlags | *local_c0;
        }
        local_99 = local_99 + 1;
        local_c0 = local_c0 + 1;
      } while (local_99 != 6);
      local_98.crText = FUN_005fbf20(local_48._4_4_);
      local_98.crBorder = FUN_005fbf20(local_40 & 0xffffffff);
      local_98.iBorderSize = local_40._4_4_;
      local_98.crShadow = FUN_005fbf20(local_38);
      local_98.ptShadowOffset.y = LStack_30;
      local_98.ptShadowOffset.x = local_34;
      local_98.iGlowSize = local_2c;
      if ((param_6 & 0x800000) != 0) {
        local_98.dwFlags = local_98.dwFlags | 0x2000;
      }
      if ((param_6 & 2) != 0) {
        local_98.dwFlags = local_98.dwFlags | 0x200;
      }
      hTheme = (HTHEME)(**(code **)(*param_1 + 0xb0))(param_1,local_28 & 0xff,param_8);
      local_a0 = 0;
      if (param_4 != 0) {
        local_a0 = *(int *)(param_4 + -4);
      }
      pszText = (LPCWSTR)FUN_00416740(param_4);
      HVar4 = DrawThemeTextEx(hTheme,param_2,local_28._4_4_,local_20,pszText,local_a0,local_50,
                              param_5,&local_98);
      local_49 = HVar4 == 0;
    }
  }
  return local_49;
}

