/* Ghidra address: 00684ec0 */
/* Ghidra symbol: FUN_00684ec0 */


void FUN_00684ec0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    (**(code **)(param_1 + 0x4d8))(*(undefined8 *)(param_1 + 0x4e0),param_1);
  }
  return;
}

