/* Ghidra address: 00ec2320 */
/* Ghidra symbol: FUN_00ec2320 */


void FUN_00ec2320(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x8c0) == '\0') goto LAB_00ec2431;
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_28,uVar3);
  FUN_00ea9ca0(local_20,local_28);
  iVar4 = FUN_00416db0(local_20[0],*(undefined8 *)(param_1 + 0x8a8));
  if (iVar4 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_38,uVar3);
    FUN_00ea9ca0(&local_30,local_38);
    iVar4 = FUN_00416db0(local_30,*(undefined8 *)(param_1 + 0x8a0));
    if (iVar4 != 0) goto LAB_00ec2421;
    uVar2 = 1;
  }
  else {
LAB_00ec2421:
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x8c0) = uVar2;
LAB_00ec2431:
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_48,uVar3);
  FUN_00ea9ca0(&local_40,local_48);
  FUN_00414ad0(param_1 + 0x860,local_40);
  FUN_00ec0aa0(param_1);
  FUN_00ec0380(param_1);
  FUN_00414560(&local_48,6);
  return;
}

