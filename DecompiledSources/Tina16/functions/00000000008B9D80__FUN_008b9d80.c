/* Ghidra address: 008b9d80 */
/* Ghidra symbol: FUN_008b9d80 */


void FUN_008b9d80(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

