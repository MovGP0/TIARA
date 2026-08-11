/* Ghidra address: 00ccf370 */
/* Ghidra symbol: FUN_00ccf370 */


void FUN_00ccf370(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    (**(code **)(param_1 + 0x208))(*(undefined8 *)(param_1 + 0x210),param_1,param_2,param_3);
  }
  return;
}

