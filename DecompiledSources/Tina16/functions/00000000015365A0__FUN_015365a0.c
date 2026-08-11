/* Ghidra address: 015365a0 */
/* Ghidra symbol: FUN_015365a0 */


void FUN_015365a0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *PTR_DAT_02002ce0 = 0;
  *(undefined8 *)PTR_DAT_02005168 = 0;
  uVar1 = FUN_01b07df0(param_1);
  FUN_017ca500(8,param_1,uVar1,param_2);
  FUN_016f5570(param_1,0);
  FUN_01b077a0(param_1,1);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_016f66e0(param_1);
  return;
}

