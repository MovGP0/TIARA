/* Ghidra address: 00606bd0 */
/* Ghidra symbol: FUN_00606bd0 */


void FUN_00606bd0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1[9] == 0) {
    FUN_00606460(param_1);
  }
  lVar1 = param_1[9];
  *(undefined4 *)(lVar1 + 0x30) = 0;
  if (*(int *)(lVar1 + 0x1c) != param_2) {
    FUN_00606d90(param_1);
    *(int *)(param_1[9] + 0x1c) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

