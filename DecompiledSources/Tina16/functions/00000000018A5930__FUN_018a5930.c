/* Ghidra address: 018a5930 */
/* Ghidra symbol: FUN_018a5930 */


bool FUN_018a5930(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  iVar1 = FUN_0064d120(*(undefined8 *)(param_1 + 0xb0));
  if ((iVar1 < *(int *)(param_1 + 0x74)) || (*(int *)(param_1 + 0x7c) < 0)) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x490));
    iVar1 = thunk_FUN_04177e28(uVar2,param_1 + 0x70);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

