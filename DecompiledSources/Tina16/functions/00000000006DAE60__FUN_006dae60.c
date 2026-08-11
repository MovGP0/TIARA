/* Ghidra address: 006dae60 */
/* Ghidra symbol: FUN_006dae60 */


void FUN_006dae60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(longlong *)(param_1 + 0x530) != 0) {
    (**(code **)(param_1 + 0x530))(*(undefined8 *)(param_1 + 0x538),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

