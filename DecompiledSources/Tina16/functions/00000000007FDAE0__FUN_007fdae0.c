/* Ghidra address: 007fdae0 */
/* Ghidra symbol: FUN_007fdae0 */


void FUN_007fdae0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    (**(code **)(param_1 + 0x5d0))(*(undefined8 *)(param_1 + 0x5d8),param_1);
  }
  return;
}

