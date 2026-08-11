/* Ghidra address: 01610cc0 */
/* Ghidra symbol: FUN_01610cc0 */


void FUN_01610cc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = 0x10;
  plVar1 = (longlong *)(param_1 + 8);
  do {
    if (*plVar1 != 0) {
      FUN_00410f20(*plVar1);
    }
    plVar1 = plVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

