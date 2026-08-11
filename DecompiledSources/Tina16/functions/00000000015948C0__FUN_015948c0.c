/* Ghidra address: 015948c0 */
/* Ghidra symbol: FUN_015948c0 */


void FUN_015948c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x158) + 0x1c))();
  }
  return;
}

