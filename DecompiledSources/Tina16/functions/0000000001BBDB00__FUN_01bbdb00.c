/* Ghidra address: 01bbdb00 */
/* Ghidra symbol: FUN_01bbdb00 */


undefined8 FUN_01bbdb00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_01bbabd0(&DAT_01bb7ad8,1,8,0,param_3);
  FUN_01bbad00(uVar1,local_res10[0]);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar1);
  FUN_00414480(local_res10);
  return uVar1;
}

