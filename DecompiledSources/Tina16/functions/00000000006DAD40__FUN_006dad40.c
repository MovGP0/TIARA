/* Ghidra address: 006dad40 */
/* Ghidra symbol: FUN_006dad40 */


void FUN_006dad40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  if (*(longlong *)(param_1 + 0x4f0) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0xa8))(*(longlong **)(param_1 + 0x4a8),param_3);
  }
  else {
    (**(code **)(param_1 + 0x4f0))(*(undefined8 *)(param_1 + 0x4f8),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

