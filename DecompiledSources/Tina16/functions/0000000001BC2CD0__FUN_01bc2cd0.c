/* Ghidra address: 01bc2cd0 */
/* Ghidra symbol: FUN_01bc2cd0 */


void FUN_01bc2cd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  short *local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  local_40 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0xd8))
            (*(longlong **)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x770));
  iVar4 = -1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x18))
                (*(longlong **)(param_1 + 0x760),local_50,iVar6);
      FUN_0043ea00(&local_30,local_50[0]);
      if ((local_30 != (short *)0x0) && (*local_30 != 0x3b)) {
        FUN_00416dc0(&local_58,local_30,1,2);
        iVar3 = FUN_00416db0(local_58,&DAT_01bc301c);
        if (iVar3 == 0) {
          if (-1 < iVar4) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
            iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
            (**(code **)(*plVar1 + 0x48))(plVar1,iVar4 + -1,(longlong)iVar6);
          }
          iVar4 = FUN_004170c0(&DAT_01bc3030,local_30,1);
          FUN_00416dc0(&local_38,local_30,3,iVar4 + -3);
          iVar4 = FUN_004170c0(L"id_group",local_38,1);
          if (iVar4 < 1) {
            FUN_00414b50(&local_40,local_38);
          }
          else {
            FUN_00c848f0(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),&local_40,local_38,
                         *(undefined8 *)PTR_DAT_02001f18);
          }
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
          iVar4 = iVar6;
        }
        else {
          FUN_00416dc0(&local_60,local_30,1,2);
          iVar3 = FUN_00416db0(local_60,&LAB_01bc3060);
          if (iVar3 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
            iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
            (**(code **)(*plVar1 + 0x48))(plVar1,iVar3 + -1,(longlong)iVar6);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar4) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4 + -1);
    if (lVar5 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
      iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x48))(plVar1,iVar4 + -1,(longlong)iVar6);
    }
  }
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_40,3);
  return;
}

