/* Ghidra address: 0163e2d0 */
/* Ghidra symbol: FUN_0163e2d0 */


longlong * FUN_0163e2d0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
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
  *param_3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),iVar3);
      (**(code **)(*plVar2 + 0x288))(plVar2,&local_30);
      FUN_0043e1a0(local_40,local_30);
      FUN_0043e1a0(&local_48,local_res10[0]);
      iVar1 = FUN_00416db0(local_40[0],local_48);
      if (iVar1 == 0) {
        *param_3 = 1;
        local_50 = plVar2;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_50;
}

