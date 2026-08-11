/* Ghidra address: 00416d10 */
/* Ghidra symbol: FUN_00416d10 */


int FUN_00416d10(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    iVar2 = 0;
  }
  else if (param_1 == 0) {
    iVar2 = -*(int *)(param_2 + -4);
  }
  else if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  else {
    iVar2 = *(int *)(param_1 + -4);
    iVar1 = *(int *)(param_2 + -4);
    iVar5 = iVar2;
    if (iVar1 < iVar2) {
      iVar5 = iVar1;
    }
    puVar3 = (ushort *)FUN_00416740();
    puVar4 = (ushort *)FUN_00416740(param_2);
    for (; 0 < iVar5; iVar5 = iVar5 + -2) {
      if ((uint)*puVar3 - (uint)*puVar4 != 0) {
        return (uint)*puVar3 - (uint)*puVar4;
      }
      if (iVar5 == 1) break;
      if ((uint)puVar3[1] - (uint)puVar4[1] != 0) {
        return (uint)puVar3[1] - (uint)puVar4[1];
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
    }
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}

