/* Ghidra address: 01a492a0 */
/* Ghidra symbol: FUN_01a492a0 */


longlong * FUN_01a492a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_50 = (longlong *)0x0;
  iVar4 = *(int *)(param_1 + 0x2b54);
  iVar3 = 0;
  plVar1 = local_50;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2b08) + (longlong)iVar3 * 8);
      (**(code **)(*plVar1 + 0x288))(plVar1,&local_30);
      FUN_0043e130(local_40,local_30);
      FUN_0043e130(&local_48,local_res10[0]);
      iVar2 = FUN_00416db0(local_40[0],local_48);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      plVar1 = local_50;
    } while (iVar4 != 0);
  }
  local_50 = plVar1;
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_50;
}

