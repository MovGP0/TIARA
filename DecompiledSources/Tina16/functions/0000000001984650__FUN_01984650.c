/* Ghidra address: 01984650 */
/* Ghidra symbol: FUN_01984650 */


void FUN_01984650(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x28))(*(longlong **)(param_1 + 0x750));
  if ((0 < iVar2) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xa8))
                        (*(longlong **)(param_1 + 0x740)), cVar1 != '\0')) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00414480(&local_30);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x728) + 0x4a4);
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x728),local_40,iVar4,0);
        FUN_00416cd0(&local_30,3,local_30,local_40[0],&DAT_01984890);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*plVar3 + 0x78))(plVar3,local_30);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_0043f750(&local_48,iVar4 + 1);
        (**(code **)(**(longlong **)(param_1 + 0x750) + 0x18))
                  (*(longlong **)(param_1 + 0x750),&local_50,iVar4);
        FUN_00416cd0(&local_30,4,local_48,&LAB_019848a0,&DAT_01984890,local_50);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_30);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00724270(*(undefined8 *)(param_1 + 0x740),&local_58);
    (**(code **)(*plVar3 + 0x100))(plVar3,local_58);
    FUN_00410f20(plVar3);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return;
}

