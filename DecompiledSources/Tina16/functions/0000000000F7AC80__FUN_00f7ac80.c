/* Ghidra address: 00f7ac80 */
/* Ghidra symbol: FUN_00f7ac80 */


void FUN_00f7ac80(longlong param_1,longlong param_2)

{
  FUN_00681f70(param_1,param_2);
  if ((*(short *)(param_2 + 10) == 0x602) && (*(longlong *)(param_1 + 0x590) != 0)) {
    (**(code **)(param_1 + 0x590))(*(undefined8 *)(param_1 + 0x598),param_1);
  }
  return;
}

