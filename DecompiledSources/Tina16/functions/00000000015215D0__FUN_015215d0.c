/* Ghidra address: 015215d0 */
/* Ghidra symbol: FUN_015215d0 */


void FUN_015215d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong local_28;
  longlong local_20;
  
  local_28 = 0;
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0xe38);
  iVar2 = (**(code **)(*plVar1 + 0x270))(plVar1);
  if (iVar2 != 1) {
    (**(code **)(*plVar1 + 0x288))(plVar1,1);
  }
  iVar3 = (**(code **)(*plVar1 + 0x278))(plVar1);
  FUN_0064dd90(plVar1,&local_20);
  iVar2 = 0;
  if (local_20 != 0) {
    iVar2 = *(int *)(local_20 + -4);
  }
  if (iVar2 + -1 <= iVar3) {
    FUN_0064dd90(plVar1,&local_28);
    iVar2 = 0;
    if (local_28 != 0) {
      iVar2 = *(int *)(local_28 + -4);
    }
    (**(code **)(*plVar1 + 0x290))(plVar1,iVar2 + -2);
  }
  iVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
  if (iVar2 < 4) {
    (**(code **)(*plVar1 + 0x290))(plVar1,3);
  }
  FUN_00414560(&local_28,2);
  return;
}

