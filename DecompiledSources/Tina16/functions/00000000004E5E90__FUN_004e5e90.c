/* Ghidra address: 004e5e90 */
/* Ghidra symbol: FUN_004e5e90 */


void FUN_004e5e90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1,param_2,param_3);
  }
  return;
}

