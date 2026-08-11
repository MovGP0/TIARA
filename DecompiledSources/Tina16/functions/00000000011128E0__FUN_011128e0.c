/* Ghidra address: 011128e0 */
/* Ghidra symbol: FUN_011128e0 */


void FUN_011128e0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    (**(code **)(param_1 + 0x5f0))(*(undefined8 *)(param_1 + 0x5f8),param_1,param_2);
  }
  return;
}

