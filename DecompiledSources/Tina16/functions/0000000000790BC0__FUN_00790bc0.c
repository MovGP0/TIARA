/* Ghidra address: 00790bc0 */
/* Ghidra symbol: FUN_00790bc0 */


void FUN_00790bc0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

