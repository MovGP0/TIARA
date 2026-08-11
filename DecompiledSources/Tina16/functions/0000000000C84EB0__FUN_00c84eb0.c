/* Ghidra address: 00c84eb0 */
/* Ghidra symbol: FUN_00c84eb0 */


int FUN_00c84eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18 [2];
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00c84a70(param_1,local_20,local_24,local_res18[0]);
      iVar2 = FUN_00416db0(local_20[0],param_2);
      if (iVar2 == 0) break;
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return local_24;
}

