/* Ghidra address: 01c99ca0 */
/* Ghidra symbol: FUN_01c99ca0 */


void FUN_01c99ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  uVar1 = FUN_007fc180(&PTR_FUN_010a0fa8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_020047b0 = uVar1;
  FUN_010a4370(*(undefined8 *)PTR_DAT_020047b0,param_2,local_res18,local_res20);
  FUN_008059a0(*(undefined8 *)PTR_DAT_020047b0);
  FUN_010a58b0(*(undefined8 *)PTR_DAT_020047b0);
  FUN_00414560(&local_res18,2);
  return;
}

