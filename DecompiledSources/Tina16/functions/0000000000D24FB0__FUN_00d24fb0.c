/* Ghidra address: 00d24fb0 */
/* Ghidra symbol: FUN_00d24fb0 */


void FUN_00d24fb0(longlong param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  piVar1 = *(int **)(param_1 + 0x68);
  for (iVar2 = *(int *)(param_1 + 0x78); iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar3 = iVar3 + -0x61c88647;
    uVar4 = uVar4 + ((uVar5 * 0x10 + *piVar1 ^ uVar5) + iVar3 ^ (uVar5 >> 5) + piVar1[1]);
    uVar5 = uVar5 + ((uVar4 * 0x10 + piVar1[2] ^ uVar4) + iVar3 ^ (uVar4 >> 5) + piVar1[3]);
  }
  *param_2 = uVar4;
  param_2[1] = uVar5;
  return;
}

