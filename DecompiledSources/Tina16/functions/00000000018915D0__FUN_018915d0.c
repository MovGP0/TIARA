/* Ghidra address: 018915d0 */
/* Ghidra symbol: FUN_018915d0 */


void FUN_018915d0(longlong param_1,undefined8 param_2,undefined2 param_3,int param_4,
                 undefined4 param_5)

{
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  if ((1 < param_4) && (param_4 < *(int *)(param_1 + 0x9c))) {
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x298))(*(longlong **)(param_1 + 0x4c0));
  }
  return;
}

