/* Ghidra address: 01d40850 */
/* Ghidra symbol: FUN_01d40850 */


int FUN_01d40850(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_4c = -1;
  iVar2 = (**(code **)(*param_1 + 0x1c8))();
  iVar4 = 0;
  iVar1 = local_4c;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x298))(param_1,local_30,iVar4);
      FUN_0043e1a0(local_40,local_30[0]);
      FUN_0043e1a0(&local_48,local_res10[0]);
      iVar3 = FUN_00416db0(local_40[0],local_48);
      iVar1 = iVar4;
      if (iVar3 == 0) break;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
      iVar1 = local_4c;
    } while (iVar2 != 0);
  }
  local_4c = iVar1;
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_4c;
}

