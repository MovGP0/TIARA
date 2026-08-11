/* Ghidra address: 00c0e6f0 */
/* Ghidra symbol: FUN_00c0e6f0 */


void FUN_00c0e6f0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x690) != 0) {
    (**(code **)(param_1 + 0x690))(*(undefined8 *)(param_1 + 0x698),param_1,param_2);
  }
  return;
}

