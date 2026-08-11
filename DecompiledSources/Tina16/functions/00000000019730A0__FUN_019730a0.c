/* Ghidra address: 019730a0 */
/* Ghidra symbol: FUN_019730a0 */


void FUN_019730a0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    (**(code **)(param_1 + 0x2c8))(*(undefined8 *)(param_1 + 0x2d0),param_2);
  }
  FUN_01973030(param_1,param_2,*(undefined8 *)(param_2 + 0x160),0);
  return;
}

