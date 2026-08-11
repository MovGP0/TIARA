/* Ghidra address: 01973050 */
/* Ghidra symbol: FUN_01973050 */


void FUN_01973050(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(param_1 + 0x308))(*(undefined8 *)(param_1 + 0x310),param_2);
  }
  FUN_01973030(param_1,param_2,*(undefined8 *)(param_2 + 0x168),0);
  return;
}

