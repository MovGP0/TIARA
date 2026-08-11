/* Ghidra address: 00be2c00 */
/* Ghidra symbol: FUN_00be2c00 */


void FUN_00be2c00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + -0x20))(*(undefined8 *)(param_2 + 0x88),1);
  }
  return;
}

