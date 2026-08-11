/* Ghidra address: 01242560 */
/* Ghidra symbol: FUN_01242560 */


int FUN_01242560(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_3c = 0;
  FUN_00414480(local_20);
  FUN_00416780(local_30,param_3);
  iVar1 = FUN_004170c0(local_30[0],local_res8,1);
  if (iVar1 < 1) {
    FUN_00414b50(local_20,local_res8);
  }
  else {
    FUN_00416dc0(local_20,local_res8,1,iVar1 + -1);
  }
  while( true ) {
    iVar2 = FUN_00416db0(local_res10,local_20[0]);
    if ((iVar2 == 0) || (iVar1 < 1)) break;
    FUN_00416e20(&local_res8,1,iVar1);
    FUN_00416780(&local_38,param_3);
    iVar1 = FUN_004170c0(local_38,local_res8,1);
    if (iVar1 < 1) {
      FUN_00414b50(local_20,local_res8);
    }
    else {
      FUN_00416dc0(local_20,local_res8,1,iVar1 + -1);
    }
    local_3c = local_3c + 1;
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414560(&local_res8,2);
  return local_3c;
}

