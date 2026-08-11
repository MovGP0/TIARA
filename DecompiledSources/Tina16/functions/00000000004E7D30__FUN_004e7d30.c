/* Ghidra address: 004e7d30 */
/* Ghidra symbol: FUN_004e7d30 */


void FUN_004e7d30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

