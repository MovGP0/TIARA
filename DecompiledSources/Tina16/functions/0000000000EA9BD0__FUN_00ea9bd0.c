/* Ghidra address: 00ea9bd0 */
/* Ghidra symbol: FUN_00ea9bd0 */


undefined8 *
FUN_00ea9bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined2 *local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414ad0(param_1,local_res10);
  while( true ) {
    iVar1 = FUN_004170c0(local_res18,*param_1,1);
    if (iVar1 < 1) break;
    lVar2 = FUN_00414de0(param_1);
    iVar1 = FUN_004170c0(local_res18,*param_1,1);
    *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = *local_res20;
  }
  FUN_00414560(&local_res10,3);
  return param_1;
}

