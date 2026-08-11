/* Ghidra address: 01bc1460 */
/* Ghidra symbol: FUN_01bc1460 */


void FUN_01bc1460(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x2b0))(*(longlong **)(param_1 + 0x6e0));
  if (iVar2 == 0) {
    FUN_00414ad0(param_1 + 0x728,L"You have to select a signal!");
    *(undefined1 *)(param_1 + 0x718) = 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_20,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_40,uVar3);
  FUN_00414ad0(param_1 + 0x740,local_40);
  uVar4 = FUN_01bbbe90(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),local_20[0]);
  uVar4 = FUN_01bbbbd0(uVar4,1,*(undefined8 *)(param_1 + 0x740));
  FUN_01bbb5e0(uVar4,&local_28,2);
  iVar2 = FUN_00416db0(local_28,L"POWER");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_28,&DAT_01bc16d8);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_28,&PTR_DAT_01bc16ec);
      if (iVar2 != 0) goto LAB_01bc15fa;
    }
  }
  FUN_00416ba0(param_1 + 0x728,*(undefined8 *)(param_1 + 0x740),
               L": cannot import , (POWER, GND, NC are special models, you cannot import them!)");
  *(undefined1 *)(param_1 + 0x718) = 1;
LAB_01bc15fa:
  if (*(char *)(param_1 + 0x718) == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8))
    ;
    *(undefined4 *)(param_1 + 0x738) = uVar3;
  }
  else {
    FUN_016fd940(*(undefined8 *)(param_1 + 0x728));
  }
  FUN_00414560(&local_40,5);
  return;
}

