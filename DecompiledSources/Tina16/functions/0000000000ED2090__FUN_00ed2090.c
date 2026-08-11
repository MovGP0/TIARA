/* Ghidra address: 00ed2090 */
/* Ghidra symbol: FUN_00ed2090 */


void FUN_00ed2090(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  if (-1 < iVar3) {
    plVar1 = *(longlong **)(param_1 + 0x710);
    iVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
    if (iVar3 <= iVar4 + -2) {
      iVar6 = ((iVar4 + -2) - iVar3) + 1;
      iVar4 = iVar3;
      do {
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_40,iVar4 + 1)
        ;
        uVar5 = FUN_004170c0(&DAT_00ed23ac,local_40[0],1);
        FUN_00416e20(local_40,1,uVar5);
        plVar2 = (longlong *)plVar1[0x94];
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_68,iVar4);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_70,iVar4);
        uVar5 = FUN_004170c0(&DAT_00ed23ac,local_70,1);
        FUN_00416dc0(local_60,local_68,1,uVar5);
        FUN_00416ad0(local_60,local_40[0]);
        (**(code **)(*plVar2 + 0x40))(plVar2,iVar4,local_60[0]);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    plVar2 = (longlong *)plVar1[0x94];
    iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x98))(plVar2,iVar4 + -1);
    iVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
    if (iVar4 + -1 < iVar3) {
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar3 + -1);
    }
    else {
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar3);
    }
    plVar1 = *(longlong **)(param_1 + 0x748);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_78,uVar5);
    FUN_00ea9ca0(&local_48,local_78);
    plVar1 = *(longlong **)(param_1 + 0x750);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_80,uVar5);
    FUN_00ea9ca0(&local_50,local_80);
    FUN_00ed3300(param_1,local_48,local_50);
    FUN_00ecbca0(param_1);
    plVar1 = *(longlong **)(param_1 + 0x858);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar5,1);
  }
  FUN_00414560(&local_80,5);
  FUN_00414560(&local_50,3);
  return;
}

