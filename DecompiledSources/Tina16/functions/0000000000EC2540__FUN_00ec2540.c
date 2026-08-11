/* Ghidra address: 00ec2540 */
/* Ghidra symbol: FUN_00ec2540 */


void FUN_00ec2540(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
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
  
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
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
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  if (0 < iVar3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar3);
    iVar5 = iVar3 + -1;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar5);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_30,1);
    FUN_00416e20(&local_30,1,uVar4);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_38,1);
    FUN_00416e20(&local_38,1,uVar4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar5);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,iVar5);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_60,1);
    FUN_00416dc0(&local_50,local_58,1,uVar4);
    FUN_00416ad0(&local_50,local_30);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar5,local_50);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,iVar3);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_78,iVar3);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_78,1);
    FUN_00416dc0(&local_68,local_70,1,uVar4);
    FUN_00416ad0(&local_68,local_38);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar3,local_68);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar5);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_30,1);
    FUN_00416e20(&local_30,1,uVar4);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_38,1);
    FUN_00416e20(&local_38,1,uVar4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_88,iVar5);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_90,iVar5);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_90,1);
    FUN_00416dc0(&local_80,local_88,1,uVar4);
    FUN_00416ad0(&local_80,local_30);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar5,local_80);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_a0,iVar3);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_a8,iVar3);
    uVar4 = FUN_004170c0(&LAB_00ec2b18,local_a8,1);
    FUN_00416dc0(&local_98,local_a0,1,uVar4);
    FUN_00416ad0(&local_98,local_38);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar3,local_98);
    plVar1 = *(longlong **)(param_1 + 0x7a8);
    iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*plVar1 + 0x268))(plVar1,iVar3 + -1);
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_b0,uVar4);
    FUN_00ea9ca0(&local_40,local_b0);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_b8,uVar4);
    FUN_00ea9ca0(&local_48,local_b8);
    FUN_00ec7250(param_1,local_40,local_48);
    plVar1 = *(longlong **)(param_1 + 0x818);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar4,1);
  }
  FUN_00414560(&local_b8,0x12);
  return;
}

