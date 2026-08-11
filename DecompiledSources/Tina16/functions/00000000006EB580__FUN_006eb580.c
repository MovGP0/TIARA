/* Ghidra address: 006eb580 */
/* Ghidra symbol: FUN_006eb580 */


void FUN_006eb580(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    (**(code **)(param_1 + 0x540))(*(undefined8 *)(param_1 + 0x548),param_1,param_2);
  }
  return;
}

