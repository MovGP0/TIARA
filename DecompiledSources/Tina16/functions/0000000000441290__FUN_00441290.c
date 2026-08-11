/* Ghidra address: 00441290 */
/* Ghidra symbol: FUN_00441290 */


void FUN_00441290(longlong param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_03c6f61e(*(undefined8 *)(param_1 + 0x28),param_1 + 0x30);
  if (iVar1 == 0) {
    thunk_FUN_03ce33a6();
  }
  else {
    FUN_00441190(param_1);
  }
  return;
}

