/* Ghidra address: 01d69d00 */
/* Ghidra symbol: FUN_01d69d00 */


void FUN_01d69d00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

