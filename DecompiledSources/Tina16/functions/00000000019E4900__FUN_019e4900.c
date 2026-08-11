/* Ghidra address: 019e4900 */
/* Ghidra symbol: FUN_019e4900 */


void FUN_019e4900(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x9f8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x9f8) + -0x20))(*(undefined8 *)(param_2 + 0x9f8),1);
  }
  return;
}

