/* Ghidra address: 0064ec10 */
/* Ghidra symbol: FUN_0064ec10 */


void FUN_0064ec10(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    (**(code **)(param_1 + 0x1d8))(*(undefined8 *)(param_1 + 0x1e0),param_1,param_2);
  }
  return;
}

