/* Ghidra address: 0199c750 */
/* Ghidra symbol: FUN_0199c750 */


void FUN_0199c750(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  
  FUN_0199c670(param_1);
  FUN_01a9a440(param_3,9);
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_0199c700(auStack_48,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

