/* Ghidra address: 009dfd30 */
/* Ghidra symbol: FUN_009dfd30 */


undefined8 FUN_009dfd30(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  while( true ) {
    FUN_00416780(&local_18,param_3);
    iVar2 = FUN_004170c0(local_18,local_res10[0],1);
    if (iVar2 == 0) break;
    FUN_00416780(&local_10,param_3);
    uVar1 = FUN_004170c0(local_10,local_res10[0],1);
    FUN_00416e20(local_res10,uVar1,1);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return param_1;
}

