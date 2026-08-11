/* Ghidra address: 014695a0 */
/* Ghidra symbol: FUN_014695a0 */


void FUN_014695a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_res10 [3];
  longlong local_48;
  longlong local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x278))(*(longlong **)(param_1 + 0x6e8));
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar5);
    iVar3 = 0;
    if (local_48 != 0) {
      iVar3 = *(int *)(local_48 + -4);
    }
    if (iVar2 <= iVar4 + iVar3) break;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_40,iVar5);
    iVar3 = 0;
    if (local_40[0] != 0) {
      iVar3 = *(int *)(local_40[0] + -4);
    }
    iVar4 = iVar4 + iVar3 + 2;
    iVar5 = iVar5 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar5);
  FUN_00416ea0(local_res10[0],&local_30,(iVar2 - iVar4) + 1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
  (**(code **)(*plVar1 + 0x40))(plVar1,iVar5,local_30);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x290))
            (*(longlong **)(param_1 + 0x6e8),iVar2 + iVar4);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

