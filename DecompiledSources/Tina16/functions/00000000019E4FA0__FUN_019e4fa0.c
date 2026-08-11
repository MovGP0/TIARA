/* Ghidra address: 019e4fa0 */
/* Ghidra symbol: FUN_019e4fa0 */


void FUN_019e4fa0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x7b8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x7b8) + -0x20))(*(undefined8 *)(param_2 + 0x7b8),1);
    *(undefined8 *)(param_2 + 0x7b8) = 0;
  }
  return;
}

