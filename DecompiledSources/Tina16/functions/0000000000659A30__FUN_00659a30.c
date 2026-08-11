/* Ghidra address: 00659a30 */
/* Ghidra symbol: FUN_00659a30 */


void FUN_00659a30(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    (**(code **)(param_1 + 0x3f8))(*(undefined8 *)(param_1 + 0x400),param_1,param_2);
  }
  return;
}

