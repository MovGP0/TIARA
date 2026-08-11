/* Ghidra address: 00c7a0d0 */
/* Ghidra symbol: FUN_00c7a0d0 */


void FUN_00c7a0d0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    (**(code **)(param_1 + 0x2d8))(*(undefined8 *)(param_1 + 0x2e0),param_1,param_2);
  }
  return;
}

