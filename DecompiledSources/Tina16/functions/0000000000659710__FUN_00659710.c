/* Ghidra address: 00659710 */
/* Ghidra symbol: FUN_00659710 */


void FUN_00659710(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  if (*(longlong *)(param_1 + 1000) != 0) {
    (**(code **)(param_1 + 1000))(*(undefined8 *)(param_1 + 0x3f0),param_1,param_2,param_3);
  }
  return;
}

