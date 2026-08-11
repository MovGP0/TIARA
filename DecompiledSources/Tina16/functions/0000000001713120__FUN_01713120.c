/* Ghidra address: 01713120 */
/* Ghidra symbol: FUN_01713120 */


void FUN_01713120(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*param_2 + 0x18))(param_2,&local_50,1);
  FUN_0043ea00(&local_20,local_50);
  (**(code **)(*param_2 + 0x18))(param_2,&local_58,2);
  FUN_0043ea00(&local_28,local_58);
  iVar1 = FUN_004170c0(&DAT_01713684,local_28,1);
  if (0 < iVar1) {
    iVar2 = 0;
    if (local_28 != 0) {
      iVar2 = *(int *)(local_28 + -4);
    }
    FUN_00416e20(&local_28,iVar1,iVar2 - iVar1);
  }
  (**(code **)(*param_2 + 0x18))(param_2,&local_60,3);
  FUN_0043ea00(&local_38,local_60);
  lVar3 = FUN_01712390(param_1,local_20,local_28,local_38,
                       in_stack_ffffffffffffff58 & 0xffffffffffffff00);
  (**(code **)(*param_2 + 0x18))(param_2,&local_68,4);
  FUN_0043ea00(&local_30,local_68);
  iVar1 = FUN_00416db0(local_30,L"[Internal]");
  if (iVar1 == 0) {
    bVar5 = true;
  }
  else if (local_30 == local_28) {
    bVar5 = true;
  }
  else if ((local_30 == 0) || (local_28 == 0)) {
    bVar5 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_30,local_28);
    bVar5 = iVar1 == 0;
  }
  if ((lVar3 != 0) && (!bVar5)) {
    iVar1 = FUN_004170c0(&DAT_01713684,local_30,1);
    if (iVar1 < 1) {
      FUN_00414480(&local_40);
    }
    else {
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      FUN_00416dc0(&local_40,local_30,iVar1 + 1,(iVar2 - iVar1) + -1);
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      FUN_00416e20(&local_30,iVar1,iVar2 - iVar1);
      if (*(longlong *)(lVar3 + 0x38) == 0) {
        FUN_00414ad0(lVar3 + 0x38,local_40);
      }
      else {
        FUN_00416cd0(lVar3 + 0x38,3,*(undefined8 *)(lVar3 + 0x38),&DAT_017136b8,local_40);
      }
    }
    if (*(longlong *)(lVar3 + 0x28) == 0) {
      FUN_00415dd0(lVar3 + 0x28,local_30,0);
    }
    else {
      FUN_004156b0(&local_70,*(undefined8 *)(lVar3 + 0x28),&DAT_017136c8);
      FUN_00416880(&local_78,local_70);
      FUN_00416ad0(&local_78,local_30);
      FUN_00415dd0(lVar3 + 0x28,local_78,0);
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                      (*(longlong **)(param_1 + 0x58),local_30);
    if (iVar1 == -1) {
      plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))
                (*(longlong **)(param_1 + 0x58),local_30,plVar4);
    }
    else {
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                         (*(longlong **)(param_1 + 0x58),iVar1);
    }
    (**(code **)(*plVar4 + 0x78))(plVar4,local_20);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                      (*(longlong **)(param_1 + 0x30),local_38);
    if (-1 < iVar1) {
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                         (*(longlong **)(param_1 + 0x30),iVar1);
      iVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4,local_30);
      if (iVar1 == -1) {
        FUN_00416ba0(&local_80,local_30,&DAT_017136d8);
        iVar1 = (**(code **)(*plVar4 + 0x78))(plVar4,local_80);
      }
      if (local_40 != 0) {
        FUN_004b5390(plVar4,&local_48,iVar1);
        if (local_48 == 0) {
          FUN_00416cd0(&local_48,3,&DAT_017136e8,local_40,&DAT_017136e8);
        }
        else {
          iVar2 = FUN_004170c0(local_40,local_48,1);
          if (iVar2 == 0) {
            FUN_00416cd0(&local_48,4,local_48,&LAB_017136f8,local_40,&DAT_017136e8);
          }
        }
        FUN_004b5450(plVar4,iVar1,local_48);
      }
    }
  }
  FUN_00414560(&local_80,2);
  FUN_004144d0(&local_70);
  FUN_00414560(&local_68,10);
  return;
}

