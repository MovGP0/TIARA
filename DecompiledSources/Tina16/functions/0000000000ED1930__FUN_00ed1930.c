/* Ghidra address: 00ed1930 */
/* Ghidra symbol: FUN_00ed1930 */


void FUN_00ed1930(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  FUN_00ec9120(&local_20,*(undefined8 *)(param_1 + 0x8c0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x4a0),0,
               *(undefined4 *)(param_1 + 0x908));
  if ((local_20 != 0) && (-1 < iVar2)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,iVar2);
    iVar3 = FUN_004170c0(&LAB_00ed1b78,local_28,1);
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00416e20(&local_28,iVar3 + 2,uVar4);
    FUN_00416ba0(&local_40,local_28,local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar2,local_40);
    plVar1 = *(longlong **)(param_1 + 0x748);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_48,uVar4);
    FUN_00ea9ca0(&local_30,local_48);
    plVar1 = *(longlong **)(param_1 + 0x750);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_50,uVar4);
    FUN_00ea9ca0(&local_38,local_50);
    FUN_00ed3300(param_1,local_30,local_38);
    plVar1 = *(longlong **)(param_1 + 0x858);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar4,1);
  }
  FUN_00414560(&local_50,7);
  return;
}

