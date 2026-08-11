/* Ghidra address: 009ae4c0 */
/* Ghidra symbol: FUN_009ae4c0 */


void FUN_009ae4c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

