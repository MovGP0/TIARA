/* Ghidra address: 00650d70 */
/* Ghidra symbol: FUN_00650d70 */


void FUN_00650d70(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined8 *)(param_1 + 0x170),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

