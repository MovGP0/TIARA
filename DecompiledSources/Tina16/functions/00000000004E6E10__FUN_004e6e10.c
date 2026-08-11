/* Ghidra address: 004e6e10 */
/* Ghidra symbol: FUN_004e6e10 */


void FUN_004e6e10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + -0x20))(*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}

