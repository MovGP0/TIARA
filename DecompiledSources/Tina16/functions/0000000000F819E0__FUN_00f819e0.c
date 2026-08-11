/* Ghidra address: 00f819e0 */
/* Ghidra symbol: FUN_00f819e0 */


undefined8 FUN_00f819e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_0043e130(&local_20,local_res10[0]);
      lVar2 = FUN_004aeac0(param_1,iVar3);
      FUN_0043e130(&local_28,*(undefined8 *)(lVar2 + 8));
      iVar1 = FUN_00416db0(local_20,local_28);
      if (iVar1 == 0) {
        local_30 = FUN_004aeac0(param_1,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_30;
}

