/* Ghidra address: 00d25030 */
/* Ghidra symbol: FUN_00d25030 */


void FUN_00d25030(longlong param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar2 = iVar5 * -0x61c88647;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  piVar1 = *(int **)(param_1 + 0x68);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar4 = uVar4 - ((uVar3 * 0x10 + piVar1[2] ^ uVar3) + iVar2 ^ (uVar3 >> 5) + piVar1[3]);
    uVar3 = uVar3 - ((uVar4 * 0x10 + *piVar1 ^ uVar4) + iVar2 ^ (uVar4 >> 5) + piVar1[1]);
    iVar2 = iVar2 + 0x61c88647;
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  return;
}

