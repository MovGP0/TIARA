/* Ghidra address: 00f130a0 */
/* Ghidra symbol: FUN_00f130a0 */


undefined8 FUN_00f130a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 200);
  iVar3 = iVar1 + *(int *)(param_1 + 0xd0);
  if (iVar3 <= iVar1) {
    iVar1 = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0xcc);
  iVar4 = iVar3 + *(int *)(param_1 + 0xd4);
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  uVar2 = FUN_00498310(iVar1,iVar4);
  return uVar2;
}

