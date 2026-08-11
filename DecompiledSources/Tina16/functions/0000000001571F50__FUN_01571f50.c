/* Ghidra address: 01571f50 */
/* Ghidra symbol: FUN_01571f50 */


undefined8 FUN_01571f50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_50 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  uVar2 = local_50;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_01571ee0(param_1,iVar3);
      FUN_01571a60(uVar2,local_30);
      FUN_0043e130(&local_38,local_30[0]);
      FUN_0043e130(&local_40,local_res10[0]);
      iVar1 = FUN_00416db0(local_38,local_40);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      uVar2 = local_50;
    } while (iVar4 != 0);
  }
  local_50 = uVar2;
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return local_50;
}

