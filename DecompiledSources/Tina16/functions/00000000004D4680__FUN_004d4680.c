/* Ghidra address: 004d4680 */
/* Ghidra symbol: FUN_004d4680 */


void FUN_004d4680(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_004115b0();
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))(*(longlong **)(param_1 + 0x38));
  }
  return;
}

