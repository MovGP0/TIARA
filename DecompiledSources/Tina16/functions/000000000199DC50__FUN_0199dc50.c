/* Ghidra address: 0199dc50 */
/* Ghidra symbol: FUN_0199dc50 */


void FUN_0199dc50(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  FUN_0199ded0(param_1,1,1);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_0199d510(auStack_38,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

