/* Ghidra address: 00d25740 */
/* Ghidra symbol: FUN_00d25740 */


void FUN_00d25740(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x68);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  iVar6 = 0x10;
  do {
    uVar3 = uVar3 ^ *(int *)(&DAT_01ebde10 + (ulonglong)(uVar2 & 0x3ff) * 4) + *piVar1;
    uVar4 = uVar4 ^ *(int *)(&DAT_01ebde10 + (ulonglong)(uVar3 & 0x3ff) * 4) + piVar1[1];
    uVar3 = uVar3 << 10 | uVar3 >> 0x16;
    uVar5 = uVar5 ^ *(int *)(&DAT_01ebde10 + (ulonglong)(uVar4 & 0x3ff) * 4) + piVar1[2];
    uVar4 = uVar4 << 10 | uVar4 >> 0x16;
    uVar2 = (uVar2 << 10 | uVar2 >> 0x16) ^
            *(int *)(&DAT_01ebde10 + (ulonglong)(uVar5 & 0x3ff) * 4) + piVar1[3];
    piVar1 = piVar1 + 4;
    uVar5 = uVar5 << 10 | uVar5 >> 0x16;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return;
}

