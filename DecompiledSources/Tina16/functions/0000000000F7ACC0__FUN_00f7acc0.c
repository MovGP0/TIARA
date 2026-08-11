/* Ghidra address: 00f7acc0 */
/* Ghidra symbol: FUN_00f7acc0 */


void FUN_00f7acc0(longlong param_1,longlong param_2)

{
  FUN_00658310(param_1,param_2);
  *(uint *)(param_1 + 0x5a0) = (uint)*(ushort *)(param_2 + 8);
  if (*(longlong *)(param_1 + 0x590) != 0) {
    (**(code **)(param_1 + 0x590))(*(undefined8 *)(param_1 + 0x598),param_1);
  }
  return;
}

