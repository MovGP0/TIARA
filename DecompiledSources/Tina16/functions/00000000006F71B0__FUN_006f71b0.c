/* Ghidra address: 006f71b0 */
/* Ghidra symbol: FUN_006f71b0 */


void FUN_006f71b0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x700) != 0) {
    (**(code **)(param_1 + 0x700))(*(undefined8 *)(param_1 + 0x708),param_1,param_2);
  }
  return;
}

