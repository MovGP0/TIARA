/* Ghidra address: 004e3600 */
/* Ghidra symbol: FUN_004e3600 */


void FUN_004e3600(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + -0x20))(*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}

