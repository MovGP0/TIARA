/* Ghidra address: 004e5ed0 */
/* Ghidra symbol: FUN_004e5ed0 */


void FUN_004e5ed0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1,param_2,param_3);
  }
  return;
}

