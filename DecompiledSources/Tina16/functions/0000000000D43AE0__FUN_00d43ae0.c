/* Ghidra address: 00d43ae0 */
/* Ghidra symbol: FUN_00d43ae0 */


bool FUN_00d43ae0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = thunk_FUN_041b2403(*(longlong *)(param_1 + 8),0x157,0,0);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

