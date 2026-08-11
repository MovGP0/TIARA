/* Ghidra address: 007e69a0 */
/* Ghidra symbol: FUN_007e69a0 */


void FUN_007e69a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1,param_2,param_3);
  }
  return;
}

