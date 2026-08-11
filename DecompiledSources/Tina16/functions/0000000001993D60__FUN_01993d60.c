/* Ghidra address: 01993d60 */
/* Ghidra symbol: FUN_01993d60 */


undefined8 FUN_01993d60(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  
  local_40 = 0;
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_00b94e60(param_1,iVar2);
      cVar1 = FUN_01993c90(auStack_68,uVar3);
      if (cVar1 != '\0') {
        FUN_00b94e60(param_1,iVar2);
        break;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_40 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_017c5070(local_40);
  }
  return uVar3;
}

