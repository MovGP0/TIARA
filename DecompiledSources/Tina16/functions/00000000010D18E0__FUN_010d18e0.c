/* Ghidra address: 010d18e0 */
/* Ghidra symbol: FUN_010d18e0 */


void FUN_010d18e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_308 [752];
  
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    iVar2 = iVar2 + -1;
    FUN_010d3290(param_1,iVar2,local_308);
    cVar1 = FUN_010d1930(param_1,local_308);
    if (cVar1 != '\0') break;
  } while (iVar2 != 0);
  FUN_00b94e60(param_1,iVar2);
  return;
}

