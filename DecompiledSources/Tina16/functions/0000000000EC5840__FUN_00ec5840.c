/* Ghidra address: 00ec5840 */
/* Ghidra symbol: FUN_00ec5840 */


void FUN_00ec5840(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  FUN_00eb9040(&local_20,*(undefined8 *)(param_1 + 0x888),
               *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x4a0),0);
  if ((local_20 != 0) && (-1 < iVar2)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,iVar2);
    iVar3 = FUN_004170c0(&DAT_00ec5b18,local_28,1);
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00416e20(&local_28,iVar3 + 1,uVar4);
    FUN_00416ba0(&local_40,local_28,local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar2,local_40);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,iVar2);
    iVar3 = FUN_004170c0(&LAB_00ec5b28,local_28,1);
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00416e20(&local_28,iVar3 + 2,uVar4);
    FUN_00416ba0(&local_48,local_28,local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar2,local_48);
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_50,uVar4);
    FUN_00ea9ca0(&local_30,local_50);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_58,uVar4);
    FUN_00ea9ca0(&local_38,local_58);
    FUN_00ec7250(param_1,local_30,local_38);
    plVar1 = *(longlong **)(param_1 + 0x818);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar4,1);
  }
  FUN_00414560(&local_58,8);
  return;
}

