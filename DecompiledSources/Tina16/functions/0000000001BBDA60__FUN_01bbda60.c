/* Ghidra address: 01bbda60 */
/* Ghidra symbol: FUN_01bbda60 */


undefined8 FUN_01bbda60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_01bbabd0(&DAT_01bb7ad8,1,param_2,local_res18[0],param_4);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar1);
  FUN_00414480(local_res18);
  return uVar1;
}

