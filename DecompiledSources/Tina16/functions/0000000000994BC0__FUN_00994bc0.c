/* Ghidra address: 00994bc0 */
/* Ghidra symbol: FUN_00994bc0 */


bool FUN_00994bc0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x118))(plVar1);
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}

