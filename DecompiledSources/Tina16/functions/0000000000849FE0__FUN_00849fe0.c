/* Ghidra address: 00849fe0 */
/* Ghidra symbol: FUN_00849fe0 */


void FUN_00849fe0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    (**(code **)(param_1 + 0x5b8))(*(undefined8 *)(param_1 + 0x5c0),param_1,param_2,param_3);
  }
  return;
}

