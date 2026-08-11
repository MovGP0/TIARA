/* Ghidra address: 00c78a90 */
/* Ghidra symbol: FUN_00c78a90 */


void FUN_00c78a90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x248) != 0) {
    (**(code **)(param_1 + 0x248))(*(undefined8 *)(param_1 + 0x250),param_1,param_2,param_3);
  }
  return;
}

