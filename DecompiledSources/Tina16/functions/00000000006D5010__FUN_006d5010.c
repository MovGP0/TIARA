/* Ghidra address: 006d5010 */
/* Ghidra symbol: FUN_006d5010 */


void FUN_006d5010(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  if (*(longlong *)(param_1 + 0x508) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))(*(longlong **)(param_1 + 0x490),param_3);
  }
  else {
    (**(code **)(param_1 + 0x508))(*(undefined8 *)(param_1 + 0x510),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

