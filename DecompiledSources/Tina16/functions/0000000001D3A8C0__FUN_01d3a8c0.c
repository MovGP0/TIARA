/* Ghidra address: 01d3a8c0 */
/* Ghidra symbol: FUN_01d3a8c0 */


undefined8 FUN_01d3a8c0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res20;
  undefined8 local_20;
  
  local_20 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar1 = FUN_00b94e60(param_1,param_3 + -1);
  uVar2 = FUN_0172a2b0(&DAT_01728b68,1,local_res20);
  FUN_004169a0(&local_20,lVar1 + 10);
  FUN_0172bb00(uVar2,param_2,local_20,local_res20,0);
  FUN_00410f20(uVar2);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res20);
  return param_2;
}

