/* Ghidra address: 016f5570 */
/* Ghidra symbol: FUN_016f5570 */


/* WARNING: Removing unreachable block (ram,0x016f5842) */

void FUN_016f5570(ulonglong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_6c;
  int local_5c;
  undefined8 local_50 [4];
  
  local_50[0] = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x6c8);
    *PTR_DAT_02003fd8 = 0;
    uVar2 = FUN_0040c770(*(undefined8 *)(param_1 + 2000));
    *(undefined1 *)(param_1 + 0x32a) = uVar2;
    *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x7b8);
    *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x7c0);
    *(double *)(param_1 + 0x418) = *(double *)(param_1 + 0x7c8) / 100.0;
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x6b8);
    if (*(double *)(param_1 + 0x3d0) <= 1e-14 && *(double *)(param_1 + 0x3d0) != 1e-14) {
      *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(PTR_DAT_02001120 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x6a8);
    uVar11 = FUN_00b90620(*(undefined8 *)(param_1 + 0x6b0),*(double *)(param_1 + 0x3d8) * 0.01);
    *(undefined8 *)(param_1 + 0x3e0) = uVar11;
    *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x6c0);
    *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x3c8);
    *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x748);
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x798);
    uVar11 = FUN_00b90620((0.001 / *(double *)(param_1 + 0x3c8)) * 20.0,0x401c000000000000);
    uVar12 = FUN_00b90620(*(undefined8 *)(param_1 + 0x738),0x3ff0000000000000);
    uVar11 = FUN_00b90650(uVar11,uVar12);
    *(undefined8 *)(param_1 + 0x3f8) = uVar11;
    lVar5 = FUN_0040c770(*(undefined8 *)(param_1 + 0x6e0));
    *(bool *)(param_1 + 0x32f) = lVar5 != 0;
    *(bool *)(param_1 + 0x32d) = 1e-30 < *(double *)(param_1 + 0x7d8);
    *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x7d8);
    *(bool *)(param_1 + 0x32e) = 1e-30 < *(double *)(param_1 + 0x7e8);
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x7e8);
    uVar2 = FUN_0040c770(*(undefined8 *)(param_1 + 0x7e0));
    *(undefined1 *)(param_1 + 0x32c) = uVar2;
    if (*(double *)(param_1 + 0x430) < *(double *)(param_1 + 0x468) ||
        *(double *)(param_1 + 0x430) == *(double *)(param_1 + 0x468)) {
      *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_1 + 0x458);
    }
    else {
      *(double *)(param_1 + 0x440) = 1.0 / *(double *)(param_1 + 0x430);
    }
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x788);
    *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x718);
    *(undefined1 *)(param_1 + 0x50c) = 0;
    local_6c = 0;
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    while (local_6c < *(int *)(param_1 + 0x2d8)) {
      local_6c = local_6c + 1;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_6c * 8);
      plVar1 = *(longlong **)(lVar5 + 0x128);
      uVar6 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      uVar6 = (uVar6 & 0xffff) - 0x78;
      if (uVar6 < 8) {
        uVar6 = (int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)uVar6 & 0x1f);
        param_2 = (ulonglong)uVar6;
        bVar10 = (uVar6 & 1) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        param_2 = param_1;
        FUN_016eed30(lVar5,param_1);
      }
    }
    local_6c = 0;
    while (local_6c < *(int *)(param_1 + 0x2d8)) {
      local_6c = local_6c + 1;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_6c * 8);
      uVar3 = (**(code **)(**(longlong **)(lVar5 + 0x128) + 0xf8))(*(longlong **)(lVar5 + 0x128));
      *(ushort *)(lVar5 + 0x13a) = uVar3;
      if (uVar3 - 0x78 < 8) {
        uVar6 = (int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)(uVar3 - 0x78) & 0x1f);
        param_2 = (ulonglong)uVar6;
        bVar10 = (uVar6 & 1) != 0;
      }
      else {
        bVar10 = false;
      }
      if (!bVar10) {
        param_2 = param_1;
        FUN_016eed30(lVar5,param_1);
      }
      if (*(char *)(lVar5 + 0x113) == '\0') {
        if (*(char *)(lVar5 + 0x112) != '\0') {
          *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
      }
      if (uVar3 == 0x40b) {
        *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
      }
      else if (uVar3 == 0x40a) {
        *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
      }
    }
    if (0 < *(int *)(param_1 + 0x2dc)) {
      uVar11 = FUN_00409570((longlong)(*(int *)(param_1 + 0x2dc) * 8));
      *(undefined8 *)(param_1 + 0x2b8) = uVar11;
    }
    if (0 < *(int *)(param_1 + 0x2e0)) {
      uVar11 = FUN_00409570((longlong)(*(int *)(param_1 + 0x2e0) * 8));
      *(undefined8 *)(param_1 + 0x2c0) = uVar11;
    }
    if (0 < *(int *)(param_1 + 0x2e4)) {
      uVar11 = FUN_00409570((longlong)(*(int *)(param_1 + 0x2e4) * 8));
      *(undefined8 *)(param_1 + 0x2c8) = uVar11;
    }
    if (0 < *(int *)(param_1 + 0x2e8)) {
      uVar11 = FUN_00409570((longlong)(*(int *)(param_1 + 0x2e8) * 8));
      *(undefined8 *)(param_1 + 0x2d0) = uVar11;
    }
    local_6c = 0;
    local_5c = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    while (local_6c < *(int *)(param_1 + 0x2d8)) {
      local_6c = local_6c + 1;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_6c * 8);
      sVar4 = (**(code **)(**(longlong **)(lVar5 + 0x128) + 0xf8))(*(longlong **)(lVar5 + 0x128));
      *(longlong *)(*(longlong *)(lVar5 + 0x128) + 0x570) = lVar5;
      if (*(char *)(lVar5 + 0x113) == '\0') {
        if (*(char *)(lVar5 + 0x112) != '\0') {
          iVar7 = iVar7 + 1;
          *(longlong *)(*(longlong *)(param_1 + 0x2c0) + -8 + (longlong)iVar7 * 8) = lVar5;
        }
      }
      else {
        local_5c = local_5c + 1;
        *(longlong *)(*(longlong *)(param_1 + 0x2b8) + -8 + (longlong)local_5c * 8) = lVar5;
      }
      if (sVar4 == 0x40b) {
        iVar8 = iVar8 + 1;
        *(longlong *)(*(longlong *)(param_1 + 0x2c8) + -8 + (longlong)iVar8 * 8) = lVar5;
      }
      else if (sVar4 == 0x40a) {
        iVar9 = iVar9 + 1;
        *(longlong *)(*(longlong *)(param_1 + 0x2d0) + -8 + (longlong)iVar9 * 8) = lVar5;
      }
    }
    FUN_017c99b0(param_1);
  }
  else {
    FUN_016eed30(param_2,param_1);
    FUN_017c99b0(param_1);
  }
  FUN_00414480(local_50);
  return;
}

