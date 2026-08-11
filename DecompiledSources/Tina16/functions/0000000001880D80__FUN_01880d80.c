/* Ghidra address: 01880d80 */
/* Ghidra symbol: FUN_01880d80 */


void FUN_01880d80(longlong param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  FUN_01880030(param_1);
  iVar2 = 0xf;
  ppuVar1 = &PTR_u_mrNone_01fb0cc8;
  do {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

