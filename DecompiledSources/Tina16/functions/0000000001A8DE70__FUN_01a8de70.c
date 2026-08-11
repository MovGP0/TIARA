/* Ghidra address: 01a8de70 */
/* Ghidra symbol: FUN_01a8de70 */


void FUN_01a8de70(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_005fd4e0(param_1[0xf],0);
  FUN_005fd6d0(param_1[0xf],1);
  FUN_005fd640(param_1[0xf],0xf);
  (**(code **)(*param_1 + 200))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0xc0))(param_1,param_4,param_5);
  return;
}

