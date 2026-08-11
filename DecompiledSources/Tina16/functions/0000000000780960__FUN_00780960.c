/* Ghidra address: 00780960 */
/* Ghidra symbol: FUN_00780960 */


void FUN_00780960(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

