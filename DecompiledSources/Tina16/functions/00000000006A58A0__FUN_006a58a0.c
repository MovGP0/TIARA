/* Ghidra address: 006a58a0 */
/* Ghidra symbol: FUN_006a58a0 */


void FUN_006a58a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    thunk_FUN_04172795(*(undefined8 *)(param_2 + 0x38));
  }
  (**(code **)(**(longlong **)(param_2 + 0x60) + 0x28))(*(undefined8 *)(param_2 + 0x60));
  return;
}

