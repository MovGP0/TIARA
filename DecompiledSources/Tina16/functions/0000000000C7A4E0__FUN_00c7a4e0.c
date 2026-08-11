/* Ghidra address: 00c7a4e0 */
/* Ghidra symbol: FUN_00c7a4e0 */


void FUN_00c7a4e0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(param_1 + 0x308))(*(undefined8 *)(param_1 + 0x310),param_1,param_2);
  }
  return;
}

