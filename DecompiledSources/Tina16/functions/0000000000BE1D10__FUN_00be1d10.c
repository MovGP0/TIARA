/* Ghidra address: 00be1d10 */
/* Ghidra symbol: FUN_00be1d10 */


void FUN_00be1d10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa8) + -0x20))(*(undefined8 *)(param_2 + 0xa8),1);
  }
  return;
}

