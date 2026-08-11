/* Ghidra address: 00684e00 */
/* Ghidra symbol: FUN_00684e00 */


void FUN_00684e00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    (**(code **)(param_1 + 0x4c8))(*(undefined8 *)(param_1 + 0x4d0),param_1);
  }
  return;
}

