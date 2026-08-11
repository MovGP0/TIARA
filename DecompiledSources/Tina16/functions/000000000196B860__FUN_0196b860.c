/* Ghidra address: 0196b860 */
/* Ghidra symbol: FUN_0196b860 */


void FUN_0196b860(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_0194ded0(param_3);
  param_1[0x47] = lVar1;
  lVar1 = FUN_0194ded0(param_4);
  param_1[0x45] = lVar1;
  (**(code **)(*param_1 + 0x278))(param_1,param_2);
  FUN_0196baa0(param_1);
  return;
}

