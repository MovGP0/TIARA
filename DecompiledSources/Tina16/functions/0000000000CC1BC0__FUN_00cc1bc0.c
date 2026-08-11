/* Ghidra address: 00cc1bc0 */
/* Ghidra symbol: FUN_00cc1bc0 */


void FUN_00cc1bc0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x90),param_1,param_2);
  }
  return;
}

