/* Ghidra address: 005fead0 */
/* Ghidra symbol: FUN_005fead0 */


void FUN_005fead0(longlong *param_1,int *param_2,longlong *param_3,int *param_4)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xb);
  (**(code **)(*param_3 + 0x58))(param_3,9);
  thunk_FUN_03c1ffbb(param_1[0xc],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
                     param_3[0xc],*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],
                     (int)param_1[0x12]);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

