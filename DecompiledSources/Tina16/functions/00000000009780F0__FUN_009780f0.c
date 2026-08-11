/* Ghidra address: 009780f0 */
/* Ghidra symbol: FUN_009780f0 */


void FUN_009780f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 0xb8),param_1,param_2,param_3);
  }
  return;
}

