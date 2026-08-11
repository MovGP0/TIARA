/* Ghidra address: 008029c0 */
/* Ghidra symbol: FUN_008029c0 */


void FUN_008029c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    (**(code **)(param_1 + 0x5e0))(*(undefined8 *)(param_1 + 0x5e8),param_1);
  }
  return;
}

