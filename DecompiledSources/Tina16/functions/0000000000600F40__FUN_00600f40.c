/* Ghidra address: 00600f40 */
/* Ghidra symbol: FUN_00600f40 */


undefined8 FUN_00600f40(longlong param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*param_3 == 0) {
    uVar1 = 0x100 - **(int **)(param_1 + 0x168);
  }
  else {
    uVar1 = (uint)*param_3 - **(int **)(param_1 + 0x168);
  }
  if (param_3[1] == 0) {
    uVar5 = 0x100 - *(int *)(*(longlong *)(param_1 + 0x168) + 4);
  }
  else {
    uVar5 = (uint)param_3[1] - *(int *)(*(longlong *)(param_1 + 0x168) + 4);
  }
  if (*param_2 == 0) {
    uVar6 = 0x100 - **(int **)(param_1 + 0x168);
  }
  else {
    uVar6 = (uint)*param_2 - **(int **)(param_1 + 0x168);
  }
  if (param_2[1] == 0) {
    uVar4 = 0x100 - *(int *)(*(longlong *)(param_1 + 0x168) + 4);
  }
  else {
    uVar4 = (uint)param_2[1] - *(int *)(*(longlong *)(param_1 + 0x168) + 4);
  }
  if ((((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
        (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) ||
      (((0 < (int)uVar1 && ((int)uVar6 < (int)uVar1)) ||
       (iVar2 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f),
       (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < iVar2)))) ||
     ((0 < (int)uVar5 && ((int)uVar4 < (int)uVar5)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}

