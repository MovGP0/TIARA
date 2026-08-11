/* Ghidra address: 00f38290 */
/* Ghidra symbol: FUN_00f38290 */


void FUN_00f38290(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48),param_1,param_2,param_3);
  }
  return;
}

