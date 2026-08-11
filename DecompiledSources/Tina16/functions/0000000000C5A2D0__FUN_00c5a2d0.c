/* Ghidra address: 00c5a2d0 */
/* Ghidra symbol: FUN_00c5a2d0 */


void FUN_00c5a2d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00680640(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00c5a450(param_1);
    FUN_00c5a4c0(param_1,iVar2 + *(int *)(param_1 + 0x4e0));
  }
  else {
    thunk_FUN_03f3ed6d(0);
  }
  return;
}

