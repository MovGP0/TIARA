/* Ghidra address: 01c8d930 */
/* Ghidra symbol: FUN_01c8d930 */


void FUN_01c8d930(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x27a8);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_01c8d7f0(auStack_48,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

