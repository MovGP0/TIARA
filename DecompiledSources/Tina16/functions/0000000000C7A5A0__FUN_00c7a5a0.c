/* Ghidra address: 00c7a5a0 */
/* Ghidra symbol: FUN_00c7a5a0 */


void FUN_00c7a5a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(param_1 + 0x2f8))(*(undefined8 *)(param_1 + 0x300),param_1,param_2);
  }
  return;
}

