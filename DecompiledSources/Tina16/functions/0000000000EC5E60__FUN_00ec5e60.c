/* Ghidra address: 00ec5e60 */
/* Ghidra symbol: FUN_00ec5e60 */


void FUN_00ec5e60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  if (-1 < iVar4) {
    plVar1 = *(longlong **)(param_1 + 0x7a8);
    iVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
    if (iVar4 <= iVar5 + -2) {
      iVar7 = ((iVar5 + -2) - iVar4) + 1;
      iVar5 = iVar4;
      do {
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_40,iVar5 + 1)
        ;
        uVar6 = FUN_004170c0(&DAT_00ec62dc,local_40[0],1);
        FUN_00416e20(local_40,1,uVar6);
        plVar2 = (longlong *)plVar1[0x94];
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_68,iVar5);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_70,iVar5);
        uVar6 = FUN_004170c0(&DAT_00ec62dc,local_70,1);
        FUN_00416dc0(local_60,local_68,1,uVar6);
        FUN_00416ad0(local_60,local_40[0]);
        (**(code **)(*plVar2 + 0x40))(plVar2,iVar5,local_60[0]);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    plVar2 = (longlong *)plVar1[0x94];
    iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x98))(plVar2,iVar5 + -1);
    iVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
    if (iVar5 + -1 < iVar4) {
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar4 + -1);
    }
    else {
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar4);
    }
    lVar3 = *(longlong *)(param_1 + 0x790);
    iVar5 = (**(code **)(**(longlong **)(lVar3 + 0x4a0) + 0x28))(*(longlong **)(lVar3 + 0x4a0));
    if (iVar4 <= iVar5 + -2) {
      iVar5 = ((iVar5 + -2) - iVar4) + 1;
      do {
        (**(code **)(**(longlong **)(lVar3 + 0x4a0) + 0x18))
                  (*(longlong **)(lVar3 + 0x4a0),local_40,iVar4 + 1);
        uVar6 = FUN_004170c0(&DAT_00ec62dc,local_40[0],1);
        FUN_00416e20(local_40,1,uVar6);
        plVar1 = *(longlong **)(lVar3 + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_80,iVar4);
        (**(code **)(**(longlong **)(lVar3 + 0x4a0) + 0x18))
                  (*(longlong **)(lVar3 + 0x4a0),&local_88,iVar4);
        uVar6 = FUN_004170c0(&DAT_00ec62dc,local_88,1);
        FUN_00416dc0(&local_78,local_80,1,uVar6);
        FUN_00416ad0(&local_78,local_40[0]);
        (**(code **)(*plVar1 + 0x40))(plVar1,iVar4,local_78);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    plVar1 = *(longlong **)(lVar3 + 0x4a0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x98))(plVar1,iVar4 + -1);
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_90,uVar6);
    FUN_00ea9ca0(&local_48,local_90);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_98,uVar6);
    FUN_00ea9ca0(&local_50,local_98);
    FUN_00ec7250(param_1,local_48,local_50);
    FUN_00ec0380(param_1);
    plVar1 = *(longlong **)(param_1 + 0x818);
    uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar6,1);
  }
  FUN_00414560(&local_98,8);
  FUN_00414560(&local_50,3);
  return;
}

