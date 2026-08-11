/* Ghidra address: 00bf6d50 */
/* Ghidra symbol: FUN_00bf6d50 */


longlong * FUN_00bf6d50(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  FUN_00414ad0(param_2,param_3);
  iVar6 = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    iVar8 = *(int *)(param_3 + -4);
  }
  FUN_004169f0(param_2,iVar8 * 2);
  iVar8 = 0;
  if (param_3 != 0) {
    iVar8 = *(int *)(param_3 + -4);
  }
  iVar5 = 1;
  if (0 < iVar8) {
    do {
      iVar6 = iVar6 + 1;
      uVar1 = FUN_00bd4cc0(*(undefined8 *)(param_1 + 0x620),
                           *(undefined2 *)(param_3 + -2 + (longlong)iVar5 * 2));
      uVar2 = FUN_00bf1610(uVar1,*(undefined2 *)(param_1 + 0x4d4));
      uVar7 = uVar2 & 0xffff;
      iVar3 = 0;
      lVar4 = *param_2;
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar4 + -4);
      }
      if (iVar3 < (int)(iVar6 + (uVar2 & 0xffff))) {
        iVar3 = 0;
        if (lVar4 != 0) {
          iVar3 = *(int *)(lVar4 + -4);
        }
        FUN_004169f0(param_2,iVar3 + 0x80);
      }
      if (1 < (uVar2 & 0xffff)) {
        do {
          lVar4 = FUN_00414de0(param_2);
          *(undefined2 *)(lVar4 + -2 + (longlong)iVar6 * 2) = 0xe000;
          iVar6 = iVar6 + 1;
          uVar7 = uVar7 - 1;
        } while (1 < (int)uVar7);
      }
      lVar4 = FUN_00414de0(param_2);
      *(undefined2 *)(lVar4 + -2 + (longlong)iVar6 * 2) =
           *(undefined2 *)(param_3 + -2 + (longlong)iVar5 * 2);
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_004169f0(param_2,iVar6);
  return param_2;
}

