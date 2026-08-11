/* Ghidra address: 01d86740 */
/* Ghidra symbol: FUN_01d86740 */


void FUN_01d86740(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x480))(*(longlong **)(param_1 + 0x60));
  }
  return;
}

