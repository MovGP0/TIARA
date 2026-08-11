/* Ghidra address: 00ee6e20 */
/* Ghidra symbol: FUN_00ee6e20 */


int FUN_00ee6e20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_res10 [3];
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xa98) + 0x10);
  local_34 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0xa98),local_34);
      FUN_004169a0(&local_28,*(undefined8 *)(lVar2 + 8));
      FUN_0043e130(local_20,local_28);
      FUN_0043e130(&local_30,local_res10[0]);
      iVar1 = FUN_00416db0(local_20[0],local_30);
      if (iVar1 == 0) break;
      local_34 = local_34 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return local_34;
}

