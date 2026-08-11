/* Ghidra address: 00d57d20 */
/* Ghidra symbol: FUN_00d57d20 */


void FUN_00d57d20(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_005fdcb0(param_1[0x10],1);
  FUN_005fd670(param_1[0xf],0);
  FUN_005fd4e0(param_1[0xf],param_3);
  (**(code **)(*param_1 + 0xf8))(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  return;
}

