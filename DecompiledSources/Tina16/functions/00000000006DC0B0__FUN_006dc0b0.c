/* Ghidra address: 006dc0b0 */
/* Ghidra symbol: FUN_006dc0b0 */


void FUN_006dc0b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    (**(code **)(param_1 + 0x540))(*(undefined8 *)(param_1 + 0x548),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

