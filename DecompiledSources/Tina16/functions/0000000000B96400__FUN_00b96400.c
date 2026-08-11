/* Ghidra address: 00b96400 */
/* Ghidra symbol: FUN_00b96400 */


void FUN_00b96400(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    (**(code **)(param_1 + 0x4d0))(*(undefined8 *)(param_1 + 0x4d8),param_2);
  }
  FUN_00656f10(param_1,param_2);
  return;
}

