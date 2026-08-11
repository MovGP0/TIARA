/* Ghidra address: 00c0e960 */
/* Ghidra symbol: FUN_00c0e960 */


void FUN_00c0e960(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x700) != 0) {
    (**(code **)(param_1 + 0x700))(*(undefined8 *)(param_1 + 0x708),param_1,param_2);
  }
  return;
}

