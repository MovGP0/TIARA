/* Ghidra address: 01993ec0 */
/* Ghidra symbol: FUN_01993ec0 */


undefined8 FUN_01993ec0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  
  local_30 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      cVar1 = FUN_01993e90(auStack_58,uVar2);
      if (cVar1 != '\0') {
        FUN_00b94e60(param_1,iVar3);
        return local_30;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return local_30;
}

