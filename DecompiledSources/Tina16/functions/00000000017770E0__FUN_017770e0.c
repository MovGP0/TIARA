/* Ghidra address: 017770e0 */
/* Ghidra symbol: FUN_017770e0 */


void FUN_017770e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x48,local_res10[0]);
  FUN_00416cd0(&local_10,3,*(undefined8 *)PTR_DAT_020049a0,&LAB_017771a4,local_res10[0]);
  FUN_00440a20(local_10,1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

