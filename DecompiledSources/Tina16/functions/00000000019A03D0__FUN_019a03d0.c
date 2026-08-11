/* Ghidra address: 019a03d0 */
/* Ghidra symbol: FUN_019a03d0 */


longlong FUN_019a03d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  longlong local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_01995600(param_1,0,0);
  if (cVar1 != '\0') {
    local_40 = FUN_01995660(param_1,1,0);
    while (local_40 != 0) {
      FUN_01d03160(local_40);
      FUN_017ff4a0(local_40,local_20);
      iVar2 = FUN_00416db0(local_20[0],local_res10[0]);
      if (iVar2 == 0) goto LAB_019a0487;
      FUN_01995800(param_1,0,0);
      local_40 = FUN_01995660(param_1,0);
    }
  }
  local_40 = 0;
LAB_019a0487:
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return local_40;
}

