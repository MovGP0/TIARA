/* Ghidra address: 009a11d0 */
/* Ghidra symbol: FUN_009a11d0 */


void FUN_009a11d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

