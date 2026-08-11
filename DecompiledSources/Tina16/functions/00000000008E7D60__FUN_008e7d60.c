/* Ghidra address: 008e7d60 */
/* Ghidra symbol: FUN_008e7d60 */


int FUN_008e7d60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  
  iVar4 = 1;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  iVar2 = 0;
  for (; 0 < iVar3; iVar3 = iVar3 - iVar1) {
    iVar1 = FUN_008e7c70(auStack_48,param_2,iVar4);
    iVar4 = iVar4 + iVar1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

