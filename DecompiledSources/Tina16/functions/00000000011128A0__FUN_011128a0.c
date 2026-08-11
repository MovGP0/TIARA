/* Ghidra address: 011128a0 */
/* Ghidra symbol: FUN_011128a0 */


void FUN_011128a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    (**(code **)(param_1 + 0x5e0))(*(undefined8 *)(param_1 + 0x5e8),param_1,param_2,param_3);
  }
  return;
}

