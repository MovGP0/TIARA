/* Ghidra address: 004d46b0 */
/* Ghidra symbol: FUN_004d46b0 */


void FUN_004d46b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(*(longlong **)(param_1 + 0x38));
  }
  return;
}

