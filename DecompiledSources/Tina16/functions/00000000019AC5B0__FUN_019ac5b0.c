/* Ghidra address: 019ac5b0 */
/* Ghidra symbol: FUN_019ac5b0 */


longlong * FUN_019ac5b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong local_res10 [3];
  longlong *local_40;
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_40 = (longlong *)0x0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  plVar3 = local_40;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
        iVar2 = FUN_00416db0(local_30,local_res10[0]);
        if ((iVar2 == 0) && (local_res10[0] != 0)) break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      plVar3 = local_40;
    } while (iVar5 != 0);
  }
  local_40 = plVar3;
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_40;
}

