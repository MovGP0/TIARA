/* Ghidra address: 00a9ba10 */
/* Ghidra symbol: FUN_00a9ba10 */


undefined8 FUN_00a9ba10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      plVar2 = (longlong *)FUN_00ac3910(param_1,iVar3);
      cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (cVar1 != '\x01') {
        return 2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 1;
}

