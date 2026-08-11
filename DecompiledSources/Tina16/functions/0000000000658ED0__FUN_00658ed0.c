/* Ghidra address: 00658ed0 */
/* Ghidra symbol: FUN_00658ed0 */


void FUN_00658ed0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    (**(code **)(param_1 + 0x3c8))(*(undefined8 *)(param_1 + 0x3d0),param_1);
  }
  return;
}

