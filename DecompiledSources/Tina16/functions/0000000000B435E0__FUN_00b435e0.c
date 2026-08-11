/* Ghidra address: 00b435e0 */
/* Ghidra symbol: FUN_00b435e0 */


void FUN_00b435e0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x40) + -0x20))(*(undefined8 *)(param_2 + 0x40),1);
  }
  (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  return;
}

