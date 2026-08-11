/* Ghidra address: 0068eb30 */
/* Ghidra symbol: FUN_0068eb30 */


void FUN_0068eb30(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    (**(code **)(param_1 + 0x4c0))(*(undefined8 *)(param_1 + 0x4c8),param_1,param_2,param_3);
  }
  return;
}

