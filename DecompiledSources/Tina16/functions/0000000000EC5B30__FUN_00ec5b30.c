/* Ghidra address: 00ec5b30 */
/* Ghidra symbol: FUN_00ec5b30 */


void FUN_00ec5b30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00eb9040(&local_20,*(undefined8 *)(param_1 + 0x878),
               *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x4a0),1);
  if (local_20 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_0043f750(&local_48,iVar3 + 1);
    FUN_00416cd0(local_40,4,&DAT_00ec5e2c,local_48,&DAT_00ec5e3c,local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
    uVar4 = FUN_004170c0(&LAB_00ec5e50,local_20,1);
    FUN_00416e20(&local_20,1,uVar4);
    plVar1 = *(longlong **)(param_1 + 0x7a8);
    plVar2 = (longlong *)plVar1[0x94];
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_0043f750(&local_58,iVar3 + 1);
    FUN_00416cd0(&local_50,4,&DAT_00ec5e2c,local_58,&DAT_00ec5e3c,local_20);
    uVar4 = (**(code **)(*plVar2 + 0x78))(plVar2,local_50);
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar4);
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_60,uVar4);
    FUN_00ea9ca0(&local_28,local_60);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_68,uVar4);
    FUN_00ea9ca0(&local_30,local_68);
    FUN_00ec7250(param_1,local_28,local_30);
    FUN_00ec0380(param_1);
    plVar1 = *(longlong **)(param_1 + 0x818);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar4,1);
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_30,3);
  return;
}

