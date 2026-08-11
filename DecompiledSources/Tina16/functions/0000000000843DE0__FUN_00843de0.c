/* Ghidra address: 00843de0 */
/* Ghidra symbol: FUN_00843de0 */


void FUN_00843de0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    (**(code **)(param_1 + 0x540))(*(undefined8 *)(param_1 + 0x548),param_1,param_2,param_3);
  }
  return;
}

