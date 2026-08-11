/* Ghidra address: 00acb880 */
/* Ghidra symbol: FUN_00acb880 */


void FUN_00acb880(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x158);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x90))((longlong *)plVar1[0x9e]);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))
                (*(longlong **)(param_1 + 0x140),&local_30,iVar4);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x78))((longlong *)plVar1[0x9e],local_30);
      cVar2 = FUN_00ac9dd0(*(undefined8 *)(param_1 + 0x140),iVar4);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar4);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar3 < 0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,0);
  }
  FUN_00414480(&local_30);
  return;
}

