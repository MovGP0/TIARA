/* Ghidra address: 00acae80 */
/* Ghidra symbol: FUN_00acae80 */


void FUN_00acae80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x158);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x90))((longlong *)plVar1[0x94]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))
                (*(longlong **)(param_1 + 0x140),&local_30,iVar4);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x78))((longlong *)plVar1[0x94],local_30);
      uVar3 = FUN_00ac9dd0(*(undefined8 *)(param_1 + 0x140),iVar4);
      if ((char)plVar1[0x92] == '\0') {
        if ((char)uVar3 != '\0') {
          (**(code **)(*plVar1 + 0x268))(plVar1,iVar4);
        }
      }
      else {
        FUN_0068bd10(plVar1,iVar4,uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar2 < 0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,0);
  }
  FUN_0068c170(plVar1,0);
  FUN_00414480(&local_30);
  return;
}

