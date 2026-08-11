/* Ghidra address: 0064ec80 */
/* Ghidra symbol: FUN_0064ec80 */


void FUN_0064ec80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    (**(code **)(param_1 + 0x1e8))(*(undefined8 *)(param_1 + 0x1f0),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

