/* Ghidra address: 006d4d60 */
/* Ghidra symbol: FUN_006d4d60 */


void FUN_006d4d60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    (**(code **)(param_1 + 0x4e8))(*(undefined8 *)(param_1 + 0x4f0),param_1);
  }
  return;
}

