/* Ghidra address: 00b96440 */
/* Ghidra symbol: FUN_00b96440 */


void FUN_00b96440(longlong param_1,undefined8 param_2)

{
  FUN_007fb740(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    (**(code **)(param_1 + 0x4e0))(*(undefined8 *)(param_1 + 0x4e8),param_2);
  }
  return;
}

