/* Ghidra address: 01d2c870 */
/* Ghidra symbol: FUN_01d2c870 */


void FUN_01d2c870(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if ((1 < (int)param_1[9]) && (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 != '\0')) {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],param_1[0xc]);
    uVar2 = FUN_005fd4d0(param_1[0xc]);
    uVar2 = FUN_01a90ee0(uVar2);
    FUN_005fd4e0(param_2[0xf],uVar2);
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],param_1[0xd]);
    FUN_005fdcb0(param_2[0x10],7);
    if ((char)param_1[2] != '\0') {
      uVar2 = FUN_01a90ee0(0xff);
      FUN_005fd4e0(param_2[0xf],uVar2);
      uVar2 = FUN_01a90ee0(0xff);
      FUN_005fdab0(param_2[0x10],uVar2);
    }
    if ((*PTR_DAT_02002c80 != '\0') && (DAT_01ff3f85 != '\0')) {
      uVar2 = FUN_01a90ee0(0);
      FUN_005fd4e0(param_2[0xf],uVar2);
    }
    iVar7 = (int)param_1[9];
    iVar6 = 1;
    if (0 < iVar7) {
      do {
        lVar8 = (longlong)iVar6;
        iVar9 = *(int *)(param_1[10] + -0x10 + lVar8 * 0x10);
        iVar3 = *(int *)((longlong)param_1 + 0x14);
        if (*(int *)((longlong)param_1 + 0x14) <= iVar9) {
          iVar3 = iVar9;
        }
        iVar9 = *(int *)(param_1[10] + -0xc + lVar8 * 0x10);
        iVar4 = (int)param_1[3];
        if ((int)param_1[3] <= iVar9) {
          iVar4 = iVar9;
        }
        iVar9 = *(int *)(param_1[10] + -8 + lVar8 * 0x10);
        iVar5 = *(int *)((longlong)param_1 + 0x1c);
        if (iVar9 <= *(int *)((longlong)param_1 + 0x1c)) {
          iVar5 = iVar9;
        }
        iVar9 = *(int *)(param_1[10] + -4 + lVar8 * 0x10);
        if ((int)param_1[4] < iVar9) {
          iVar9 = (int)param_1[4];
        }
        (**(code **)(*param_2 + 0xf8))(param_2,iVar3,iVar4,iVar5,iVar9);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

