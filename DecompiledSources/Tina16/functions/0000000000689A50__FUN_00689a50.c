/* Ghidra address: 00689a50 */
/* Ghidra symbol: FUN_00689a50 */


void FUN_00689a50(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_88;
  local_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if (cVar1 != '\0') {
    local_20 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_48,local_20);
    cVar1 = (**(code **)(*local_48 + 0x78))(local_48);
    if (cVar1 != '\0') goto LAB_00689cc8;
    local_28 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_50,local_28);
    cVar1 = (**(code **)(*local_50 + 0x48))(local_50);
    if (cVar1 != '\0') {
      local_30 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_58,local_30);
      (**(code **)(*local_58 + 0x58))(local_58);
    }
  }
  cVar1 = *(char *)((longlong)param_1 + 0x49a);
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_1 + 0x499) == '\0') {
      FUN_00689da0(param_1,1);
    }
    else {
      FUN_00689da0(param_1,2);
    }
  }
  else if (cVar1 == '\x01') {
    FUN_00689da0(param_1,0);
  }
  else if (cVar1 == '\x02') {
    FUN_00689da0(param_1,1);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if (cVar1 != '\0') {
    local_38 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_60,local_38);
    cVar1 = (**(code **)(*local_60 + 0x88))(local_60);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db1f0(uVar3);
    }
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,4);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db850(uVar3);
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db970(uVar3);
  }
LAB_00689cc8:
  FUN_00417840(&local_60,&DAT_00484dc8,4);
  return;
}

