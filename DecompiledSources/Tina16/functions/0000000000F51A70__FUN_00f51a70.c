/* Ghidra address: 00f51a70 */
/* Ghidra symbol: FUN_00f51a70 */


void FUN_00f51a70(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *PTR_DAT_02002ce0 = 0;
  uVar1 = FUN_01b07df0(param_1);
  FUN_017ca500(8,param_1,uVar1,param_2);
  FUN_016f5570(param_1,0);
  FUN_01b077a0(param_1,1);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_016f66e0(param_1);
  return;
}

