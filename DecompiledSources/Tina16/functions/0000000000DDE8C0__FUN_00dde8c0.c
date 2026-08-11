/* Ghidra address: 00dde8c0 */
/* Ghidra symbol: FUN_00dde8c0 */


void FUN_00dde8c0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  piVar2 = *(int **)(param_1[0x92] + 0x28);
  iVar4 = *(int *)(param_1[0x92] + 0x20);
  iVar6 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      if (param_2 == *piVar2) break;
      piVar2 = piVar2 + 1;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (iVar6 == *(int *)(param_1[0x92] + 0x20)) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    lVar3 = 0;
    if ((400 < *(int *)(param_1[0x92] + 0x3c)) &&
       (uVar1 = *(uint *)(param_1[0x92] + 0x70), uVar1 != 0)) {
      lVar3 = (longlong)param_1 + (ulonglong)uVar1;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_00410ca0(*param_1);
      lVar3 = (longlong)param_1 + (longlong)(int)(*(uint *)(lVar3 + -0x80) & 0xfffffff7);
    }
    puVar5 = (undefined8 *)(lVar3 + (iVar6 << 4));
    *param_3 = *puVar5;
    param_3[1] = puVar5[1];
  }
  return;
}

