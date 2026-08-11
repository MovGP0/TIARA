/* Ghidra address: 019a1df0 */
/* Ghidra symbol: FUN_019a1df0 */


bool FUN_019a1df0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  
  lVar3 = 0;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_019a1d60(auStack_48,uVar2);
      if (cVar1 != '\0') {
        lVar3 = FUN_00b94e60(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return lVar3 != 0;
}

