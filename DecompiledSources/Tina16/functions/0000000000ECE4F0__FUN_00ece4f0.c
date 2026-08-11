/* Ghidra address: 00ece4f0 */
/* Ghidra symbol: FUN_00ece4f0 */


void FUN_00ece4f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 < iVar4 + -1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar3);
    iVar4 = iVar3 + 1;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar4);
    uVar5 = FUN_004170c0(&LAB_00ece8a8,local_30,1);
    FUN_00416e20(&local_30,1,uVar5);
    uVar5 = FUN_004170c0(&LAB_00ece8a8,local_38,1);
    FUN_00416e20(&local_38,1,uVar5);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar4);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,iVar4);
    uVar5 = FUN_004170c0(&LAB_00ece8a8,local_60,1);
    FUN_00416dc0(&local_50,local_58,1,uVar5);
    FUN_00416ad0(&local_50,local_30);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar4,local_50);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,iVar3);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_78,iVar3);
    uVar5 = FUN_004170c0(&LAB_00ece8a8,local_78,1);
    FUN_00416dc0(&local_68,local_70,1,uVar5);
    FUN_00416ad0(&local_68,local_38);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar3,local_68);
    plVar1 = *(longlong **)(param_1 + 0x710);
    iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*plVar1 + 0x268))(plVar1,iVar3 + 1);
    plVar1 = *(longlong **)(param_1 + 0x748);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_80,uVar5);
    FUN_00ea9ca0(&local_40,local_80);
    plVar1 = *(longlong **)(param_1 + 0x750);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_88,uVar5);
    FUN_00ea9ca0(&local_48,local_88);
    FUN_00ed3300(param_1,local_40,local_48);
    plVar1 = *(longlong **)(param_1 + 0x858);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar5,1);
  }
  FUN_00414560(&local_88,0xc);
  return;
}

