/* Ghidra address: 019960d0 */
/* Ghidra symbol: FUN_019960d0 */


undefined8 FUN_019960d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_00b94e60(param_1,iVar2);
      cVar1 = FUN_01996050(auStack_48,uVar3);
      if (cVar1 != '\0') {
        uVar3 = FUN_00b94e60(param_1,iVar2);
        return uVar3;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

