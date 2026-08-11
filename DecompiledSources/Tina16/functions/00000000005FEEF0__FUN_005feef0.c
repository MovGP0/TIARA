/* Ghidra address: 005feef0 */
/* Ghidra symbol: FUN_005feef0 */


void FUN_005feef0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,9);
  thunk_FUN_0418bc71(param_1[0xc],param_2,param_3,param_4,
                     *(undefined2 *)(&DAT_01decf50 + (ulonglong)param_5 * 2));
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

