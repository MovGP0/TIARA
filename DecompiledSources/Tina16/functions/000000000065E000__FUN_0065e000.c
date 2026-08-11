/* Ghidra address: 0065e000 */
/* Ghidra symbol: FUN_0065e000 */


void FUN_0065e000(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  undefined8 uVar4;
  HWND pHVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  ushort local_a6;
  undefined4 local_a4;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  int local_80;
  int iStack_7c;
  int local_78;
  int local_74;
  tagGESTUREINFO local_70;
  longlong local_38;
  tagPOINT local_30;
  short local_28 [2];
  undefined8 local_24;
  byte local_1c;
  double local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_b0 = auStack_d8;
  if (*(longlong *)(param_1 + 0x458) == 0) {
    local_b0 = auStack_d8;
    uVar4 = FUN_0065b870(param_1);
    uVar4 = thunk_FUN_03e425c0(uVar4,*param_2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
    return;
  }
  FUN_0040d200(&local_70,0x38,0);
  local_70.cbSize = 0x38;
  BVar3 = GetGestureInfo(*(HGESTUREINFO *)(param_2 + 4),&local_70);
  if (BVar3 == 0) {
    return;
  }
  uVar7 = 0;
  FUN_0040d200(local_28,0x20,0);
  local_28[0] = (short)local_70.dwID + 0x100;
  if ((local_28[0] == 0x101) || (local_28[0] == 0x102)) {
    uVar4 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x468),*param_2,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
    goto code_r0x0065e46a;
  }
  lVar1 = *(longlong *)(param_1 + 0x458);
  do {
    local_38 = lVar1;
    if ((*(longlong *)(local_38 + 0x78) == 0) ||
       ((*(byte *)(*(longlong *)(local_38 + 0x130) + 0x21) & 0x10) == 0)) break;
    if ((byte)(&DAT_01df73f4)[local_28[0] + -0x103] < 8) {
      uVar6 = (int)CONCAT71((int7)(uVar7 >> 8),1) << ((&DAT_01df73f4)[local_28[0] + -0x103] & 0x1f);
      uVar7 = (ulonglong)uVar6;
      bVar8 = ((byte)uVar6 & *(byte *)(*(longlong *)(local_38 + 0x130) + 0x20)) != 0;
    }
    else {
      bVar8 = false;
    }
    lVar1 = *(longlong *)(local_38 + 0x78);
  } while (!bVar8);
  local_80 = (int)local_70.ptsLocation.x;
  iStack_7c = (int)local_70.ptsLocation.y;
  local_30.y = iStack_7c;
  local_30.x = local_80;
  local_78 = iStack_7c;
  local_74 = local_80;
  PhysicalToLogicalPoint(*(HWND *)(param_1 + 0x468),&local_30);
  local_24 = FUN_0064d3a0(local_38,&local_30);
  local_1c = (local_70.dwFlags & 1) == 1;
  if ((local_70.dwFlags & 2) == 2) {
    local_1c = local_1c | 2;
  }
  if ((local_70.dwFlags & 4) == 4) {
    local_1c = local_1c | 4;
  }
  if (local_28[0] < 0x106) {
    if (local_28[0] == 0x105) {
      local_a6 = (ushort)local_70.ullArguments;
      local_18 = ((double)(ushort)local_70.ullArguments / 65535.0) * 12.5663706 - 6.2831853;
    }
    else {
      if (local_28[0] == 0x103) goto LAB_0065e2aa;
      if (local_28[0] == 0x104) {
        local_c = CONCAT22(local_70.ullArguments._2_2_,(ushort)local_70.ullArguments);
        local_10 = local_70.ullArguments._4_4_;
      }
    }
  }
  else if (local_28[0] == 0x106) {
LAB_0065e2aa:
    local_c = CONCAT22(local_70.ullArguments._2_2_,(ushort)local_70.ullArguments);
  }
  else if (local_28[0] == 0x107) {
    local_98 = (int)(short)(ushort)local_70.ullArguments;
    iStack_94 = (int)local_70.ullArguments._2_2_;
    local_30.y = iStack_94 + local_70.ptsLocation.y;
    local_30.x = local_98 + local_70.ptsLocation.x;
    cVar2 = FUN_004113d0(local_38,&PTR_FUN_00640c18);
    if (cVar2 == '\0') {
      pHVar5 = (HWND)FUN_0065b870(*(undefined8 *)(local_38 + 0x78));
      PhysicalToLogicalPoint(pHVar5,&local_30);
    }
    else {
      pHVar5 = (HWND)FUN_0065b870(local_38);
      PhysicalToLogicalPoint(pHVar5,&local_30);
    }
    uVar4 = FUN_0064d3a0(local_38,&local_30);
    local_a0._0_2_ = (undefined2)uVar4;
    local_a0._4_2_ = (undefined2)((ulonglong)uVar4 >> 0x20);
    local_a4 = CONCAT22(local_a0._4_2_,(undefined2)local_a0);
    local_c = local_a4;
    local_a0 = uVar4;
  }
  uVar4 = FUN_0064fce0(local_38,0xb052,0,local_28);
  *(undefined8 *)(param_2 + 6) = uVar4;
  if (*(longlong *)(param_2 + 6) != 1) {
    uVar4 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x468),*param_2,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
  }
code_r0x0065e46a:
  CloseGestureInfoHandle(*(HGESTUREINFO *)(param_2 + 4));
  if (local_28[0] == 0x102) {
    *(undefined8 *)(param_1 + 0x458) = 0;
  }
  return;
}

