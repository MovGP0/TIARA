/* Ghidra address: 00d25830 */
/* Ghidra symbol: FUN_00d25830 */


void FUN_00d25830(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0xfc);
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  iVar7 = 0x10;
  do {
    uVar2 = uVar2 ^ *(int *)(&DAT_01ebde10 + (ulonglong)(uVar6 >> 10 & 0x3ff) * 4) + *piVar1;
    uVar6 = (uVar6 >> 10 | uVar6 << 0x16) ^
            *(int *)(&DAT_01ebde10 + (ulonglong)(uVar5 >> 10 & 0x3ff) * 4) + piVar1[-1];
    uVar5 = (uVar5 >> 10 | uVar5 << 0x16) ^
            *(int *)(&DAT_01ebde10 + (ulonglong)(uVar4 >> 10 & 0x3ff) * 4) + piVar1[-2];
    uVar3 = uVar2 >> 10;
    uVar2 = uVar3 | uVar2 << 0x16;
    uVar4 = (uVar4 >> 10 | uVar4 << 0x16) ^
            *(int *)(&DAT_01ebde10 + (ulonglong)(uVar3 & 0x3ff) * 4) + piVar1[-3];
    piVar1 = piVar1 + -4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return;
}

