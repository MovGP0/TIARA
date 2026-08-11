/* Ghidra address: 01d34e90 */
/* Ghidra symbol: FUN_01d34e90 */


void FUN_01d34e90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  
  FUN_01d33380(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01d347d0(param_1,iVar2);
      FUN_01d34e60(auStack_48,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

