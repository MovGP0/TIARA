/* Ghidra address: 006eb550 */
/* Ghidra symbol: FUN_006eb550 */


void FUN_006eb550(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x520) != 0) {
    (**(code **)(param_1 + 0x520))(*(undefined8 *)(param_1 + 0x528),param_1);
  }
  return;
}

