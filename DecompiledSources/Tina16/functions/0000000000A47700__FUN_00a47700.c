/* Ghidra address: 00a47700 */
/* Ghidra symbol: FUN_00a47700 */


void FUN_00a47700(longlong *param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; iVar1 = param_3, param_4 < param_6; param_4 = param_4 + param_8) {
    for (; iVar1 < param_5; iVar1 = iVar1 + param_7) {
      (**(code **)(*param_1 + 0x60))(param_1,param_2,iVar1,param_4,param_7,param_8,param_9);
    }
  }
  return;
}

