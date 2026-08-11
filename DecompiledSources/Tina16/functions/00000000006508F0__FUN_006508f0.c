/* Ghidra address: 006508f0 */
/* Ghidra symbol: FUN_006508f0 */


void FUN_006508f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    (**(code **)(param_1 + 0x208))(*(undefined8 *)(param_1 + 0x210),param_1);
  }
  return;
}

