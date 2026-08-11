/* Ghidra address: 019d45b0 */
/* Ghidra symbol: FUN_019d45b0 */


void FUN_019d45b0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00bac3d0(&local_20);
  (**(code **)(*local_20 + 0x148))(local_20,&local_30,L"filter");
  (**(code **)(*local_20 + 0x108))(local_20,local_30);
  (**(code **)(*local_20 + 0x100))(local_20,&local_28);
  iVar3 = 0;
  do {
    FUN_0043f750(&local_40,iVar3);
    FUN_00416ba0(&local_38,L"FloatEdit",local_40);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x808),iVar3);
    FUN_0064dd90(uVar2,&local_48);
    (**(code **)(*local_28 + 0x108))(local_28,local_38,local_48);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  FUN_0043f750(&local_50,uVar1);
  (**(code **)(*local_28 + 0x108))(local_28,L"Type",local_50);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  FUN_0043f750(&local_58,uVar1);
  (**(code **)(*local_28 + 0x108))(local_28,L"Active",local_58);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  FUN_0043f750(&local_60,uVar1);
  (**(code **)(*local_28 + 0x108))(local_28,L"Opamp",local_60);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  FUN_0043f750(&local_68,uVar1);
  (**(code **)(*local_28 + 0x108))(local_28,L"Build",local_68);
  (**(code **)(*local_20 + 0x180))(local_20,local_res10[0],0);
  FUN_00414560(&local_68,4);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,2);
  FUN_00417840(&local_30,&LAB_00b9fca0,2);
  FUN_0041b800(&local_20);
  FUN_00414480(local_res10);
  return;
}

