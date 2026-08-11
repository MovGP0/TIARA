/* Ghidra address: 01b11ca0 */
/* Ghidra symbol: FUN_01b11ca0 */


void FUN_01b11ca0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

