/* Ghidra address: 006d8be0 */
/* Ghidra symbol: FUN_006d8be0 */


void FUN_006d8be0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x4b0) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0xa8))(*(longlong **)(param_1 + 0x498),param_3);
  }
  else {
    (**(code **)(param_1 + 0x4b0))(*(undefined8 *)(param_1 + 0x4b8),param_1,param_2,param_3);
  }
  return;
}

