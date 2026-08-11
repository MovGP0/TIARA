/* Ghidra address: 010702a0 */
/* Ghidra symbol: FUN_010702a0 */


void FUN_010702a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
  if (iVar2 == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
              (*(longlong **)(param_1 + 0x740),&local_30,0);
    FUN_00414ad0(param_1 + 0x748,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
              (*(longlong **)(param_1 + 0x740),&local_38,1);
    FUN_00414ad0(param_1 + 0x750,local_38);
    plVar3 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0x748));
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,iVar4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(plVar3);
    plVar3 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0x750));
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,iVar4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_48,4);
  return;
}

