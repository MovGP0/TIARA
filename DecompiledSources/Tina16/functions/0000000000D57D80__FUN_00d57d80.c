/* Ghidra address: 00d57d80 */
/* Ghidra symbol: FUN_00d57d80 */


void FUN_00d57d80(longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005fdcb0(param_1[0x10],0);
  FUN_005fdab0(param_1[0x10],param_4);
  FUN_005fd4e0(param_1[0xf],*(undefined4 *)(*(longlong *)(param_1[0x10] + 0x18) + 0x28));
  (**(code **)(*param_1 + 0x108))(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_3,param_3)
  ;
  return;
}

