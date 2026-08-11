/* Ghidra address: 01d33060 */
/* Ghidra symbol: FUN_01d33060 */


void FUN_01d33060(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_01d33010(auStack_48,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

