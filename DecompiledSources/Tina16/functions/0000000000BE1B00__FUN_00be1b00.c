/* Ghidra address: 00be1b00 */
/* Ghidra symbol: FUN_00be1b00 */


void FUN_00be1b00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + -0x20))(*(undefined8 *)(param_2 + 0x68),1);
  }
  return;
}

