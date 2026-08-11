/* Ghidra address: 00d75ef0 */
/* Ghidra symbol: FUN_00d75ef0 */


void FUN_00d75ef0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_58 [6];
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_40 = 0;
  iVar3 = FUN_00d77c90(param_1);
  uVar9 = iVar3 - 1;
  FUN_00419260(&local_40,&DAT_00d75ea8,1,(longlong)iVar3);
  iVar6 = 0;
  iVar8 = iVar3;
  if (-1 < (int)uVar9) {
    do {
      uVar4 = FUN_00d77ca0(param_1,iVar6);
      *(undefined8 *)(local_40 + (longlong)iVar6 * 8) = uVar4;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00d77cb0(param_1,&local_38);
  iVar6 = 0;
  iVar8 = iVar3;
  if (uVar9 < 0x80000000) {
    do {
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\x04') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_38,local_34,local_30,local_34 + *(int *)(lVar1 + 0x88));
        FUN_00d77b90(lVar1,local_58);
        local_34 = local_34 + *(int *)(lVar1 + 0x88);
      }
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\b') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_38,local_2c - *(int *)(lVar1 + 0x88),local_30,local_2c);
        FUN_00d77b90(lVar1,local_58);
        local_2c = local_2c - *(int *)(lVar1 + 0x88);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar6 = 0;
  iVar8 = iVar3;
  if (uVar9 < 0x80000000) {
    do {
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\x02') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_38,local_34,local_38 + *(int *)(lVar1 + 0x84),local_2c);
        FUN_00d77b90(lVar1,local_58);
        local_38 = local_38 + *(int *)(lVar1 + 0x84);
      }
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\x06') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_30 - *(int *)(lVar1 + 0x84),local_34,local_30,local_2c);
        FUN_00d77b90(lVar1,local_58);
        local_30 = local_30 - *(int *)(lVar1 + 0x84);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar6 = 0;
  iVar8 = iVar3;
  if (uVar9 < 0x80000000) {
    do {
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\x03') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_38,local_34,local_30,local_34 + *(int *)(lVar1 + 0x88));
        FUN_00d77b90(lVar1,local_58);
        local_34 = local_34 + *(int *)(lVar1 + 0x88);
      }
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\a') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_38,local_2c - *(int *)(lVar1 + 0x88),local_30,local_2c);
        FUN_00d77b90(lVar1,local_58);
        local_2c = local_2c - *(int *)(lVar1 + 0x88);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar6 = 0;
  iVar8 = iVar3;
  if (-1 < (int)uVar9) {
    do {
      if ((*(char *)(*(longlong *)(local_40 + (longlong)iVar6 * 8) + 0x78) == '\x01') &&
         (*(char *)(*(longlong *)(local_40 + (longlong)iVar6 * 8) + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_38,local_34,local_38 + *(int *)(lVar1 + 0x84),local_2c);
        FUN_00d77b90(lVar1,local_58);
        local_38 = local_38 + *(int *)(lVar1 + 0x84);
      }
      if ((*(char *)(*(longlong *)(local_40 + (longlong)iVar6 * 8) + 0x78) == '\x05') &&
         (*(char *)(*(longlong *)(local_40 + (longlong)iVar6 * 8) + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
        FUN_004238d0(local_58,local_30 - *(int *)(lVar1 + 0x84),local_34,local_30,local_2c);
        FUN_00d77b90(lVar1,local_58);
        local_30 = local_30 - *(int *)(lVar1 + 0x84);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar7 = uVar9;
  if (-1 < (int)uVar9) {
    do {
      if ((*(char *)(*(longlong *)(local_40 + (longlong)(int)uVar7 * 8) + 0x8c) != '\0') &&
         (*(char *)(*(longlong *)(local_40 + (longlong)(int)uVar7 * 8) + 0x78) == '\x0f')) {
        plVar2 = *(longlong **)(local_40 + (longlong)(int)uVar7 * 8);
        uVar4 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
        uVar5 = thunk_FUN_040ef593(0);
        FUN_005ffb10(uVar4,uVar5);
        uVar5 = (**(code **)(*plVar2 + 0x88))(plVar2);
        FUN_005ff880(uVar4,uVar5);
        iVar8 = FUN_00d57c50(uVar4,plVar2[0x17],0);
        FUN_00d77d50(plVar2,(int)plVar2[0x19] + *(int *)((longlong)plVar2 + 0xc4) + iVar8);
        uVar5 = FUN_005ffa40(uVar4);
        thunk_FUN_041a9b5c(0,uVar5);
        FUN_005ffb10(uVar4,0);
        FUN_00410f20(uVar4);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0xffffffff);
  }
  uVar7 = uVar9;
  if (-1 < (int)uVar9) {
    do {
      if ((*(char *)(*(longlong *)(local_40 + (longlong)(int)uVar7 * 8) + 0x78) == '\x0e') &&
         (*(char *)(*(longlong *)(local_40 + (longlong)(int)uVar7 * 8) + 0x8c) != '\0')) {
        lVar1 = *(longlong *)(local_40 + (longlong)(int)uVar7 * 8);
        FUN_004238d0(local_58,local_38 + ((local_30 - local_38) - *(int *)(lVar1 + 0x84)) / 2,
                     local_34 + ((local_2c - local_34) - *(int *)(lVar1 + 0x88)) / 2,
                     local_38 + ((local_30 - local_38) - *(int *)(lVar1 + 0x84)) / 2 +
                     *(int *)(lVar1 + 0x84),
                     local_34 + ((local_2c - local_34) - *(int *)(lVar1 + 0x88)) / 2 +
                     *(int *)(lVar1 + 0x88));
        FUN_00d77b90(lVar1,local_58);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0xffffffff);
  }
  iVar6 = 0;
  iVar8 = iVar3;
  if (uVar9 < 0x80000000) {
    do {
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\t') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        FUN_004238d0(local_58,local_38,local_34,local_30,local_2c);
        FUN_00d77b90(lVar1,local_58);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar6 = 0;
  iVar8 = iVar3;
  if (uVar9 < 0x80000000) {
    do {
      lVar1 = *(longlong *)(local_40 + (longlong)iVar6 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\x11') && (*(char *)(lVar1 + 0x8c) != '\0')) {
        FUN_004238d0(local_58,0,0,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
        FUN_00d77b90(lVar1);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = 0;
  if (-1 < (int)uVar9) {
    do {
      lVar1 = *(longlong *)(local_40 + (longlong)iVar8 * 8);
      if (*(char *)(lVar1 + 0x78) == '\x10') {
        FUN_004238d0(local_58,*(int *)(param_1 + 0x84) - *(int *)(lVar1 + 0x84),0,
                     *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(lVar1 + 0x88));
        FUN_00d77b90(lVar1,local_58);
      }
      lVar1 = *(longlong *)(local_40 + (longlong)iVar8 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\n') && (0 < *(int *)(param_1 + 0xa8))) {
        FUN_004238d0(local_58,*(int *)(lVar1 + 0x7c) +
                              (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0xb0)),
                     *(int *)(lVar1 + 0x80) + (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xb4)),
                     *(int *)(lVar1 + 0x7c) + (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0xb0))
                     + *(int *)(lVar1 + 0x84),
                     *(int *)(lVar1 + 0x80) + (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xb4))
                     + *(int *)(lVar1 + 0x88));
        FUN_00d77b90(lVar1,local_58);
      }
      lVar10 = (longlong)iVar8;
      lVar1 = *(longlong *)(local_40 + lVar10 * 8);
      if ((*(char *)(lVar1 + 0x78) == '\v') && (0 < *(int *)(param_1 + 0xa8))) {
        FUN_004238d0(local_58,((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0xb0)) +
                              *(int *)(param_1 + 0x84)) -
                              (*(int *)(param_1 + 0xa8) - *(int *)(lVar1 + 0x7c)),
                     *(int *)(lVar1 + 0x80) + (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xb4)),
                     (((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0xb0)) +
                      *(int *)(param_1 + 0x84)) -
                     (*(int *)(param_1 + 0xa8) - *(int *)(lVar1 + 0x7c))) + *(int *)(lVar1 + 0x84),
                     *(int *)(lVar1 + 0x80) + (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xb4))
                     + *(int *)(lVar1 + 0x88));
        FUN_00d77b90(lVar1,local_58);
      }
      if (*(char *)(*(longlong *)(local_40 + lVar10 * 8) + 0x78) == '\f') {
        *(int *)(*(longlong *)(local_40 + lVar10 * 8) + 0x80) =
             *(int *)(param_1 + 0x88) -
             (*(int *)(param_1 + 0xac) - *(int *)(*(longlong *)(local_40 + lVar10 * 8) + 0x80));
      }
      if (*(char *)(*(longlong *)(local_40 + lVar10 * 8) + 0x78) == '\r') {
        *(int *)(*(longlong *)(local_40 + lVar10 * 8) + 0x7c) =
             *(int *)(param_1 + 0x84) - *(int *)(*(longlong *)(local_40 + lVar10 * 8) + 0x7c);
        *(int *)(*(longlong *)(local_40 + lVar10 * 8) + 0x80) =
             *(int *)(param_1 + 0x88) - *(int *)(*(longlong *)(local_40 + lVar10 * 8) + 0x80);
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00419430(&local_40,&DAT_00d75ea8);
  return;
}

