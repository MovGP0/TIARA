/* Ghidra address: 01c8eab0 */
/* Ghidra symbol: FUN_01c8eab0 */


undefined8 FUN_01c8eab0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  
  local_38 = 0xbff0000000000000;
  local_29 = 1;
  lVar1 = *(longlong *)(param_1 + 0x27a8);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_01c8ea00(auStack_58,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return local_38;
}

