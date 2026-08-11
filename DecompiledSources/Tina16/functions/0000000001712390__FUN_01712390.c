/* Ghidra address: 01712390 */
/* Ghidra symbol: FUN_01712390 */


longlong FUN_01712390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     char param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  if (param_5 == '\0') {
    plVar4 = *(longlong **)(param_1 + 8);
  }
  else if (param_5 == '\x01') {
    plVar4 = *(longlong **)(param_1 + 0x10);
  }
  else if (param_5 == '\x02') {
    plVar4 = *(longlong **)(param_1 + 0x18);
  }
  else if (param_5 == '\x03') {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x28);
  }
  cVar2 = (**(code **)(*plVar4 + 0x140))(plVar4,local_res10,&local_1c);
  if (cVar2 == '\0') {
    local_48 = 0;
  }
  else {
    bVar1 = false;
    while (!bVar1) {
      iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (iVar3 <= local_1c) break;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_40,local_1c);
      iVar3 = FUN_00416db0(local_40,local_res10);
      if (iVar3 != 0) break;
      local_48 = (**(code **)(*plVar4 + 0x30))(plVar4,local_1c);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_30,local_1c);
      iVar3 = FUN_00416db0(local_30[0],local_res10);
      if (iVar3 == 0) {
        iVar3 = FUN_00416db0(*(undefined8 *)(local_48 + 0x40),local_res20);
        if (iVar3 != 0) goto LAB_017124e3;
        FUN_00416880(&local_38,*(undefined8 *)(local_48 + 0x20));
        iVar3 = FUN_00416db0(local_38,local_res18);
        if (iVar3 != 0) goto LAB_017124e3;
        bVar1 = true;
      }
      else {
LAB_017124e3:
        bVar1 = false;
      }
      if (!bVar1) {
        local_1c = local_1c + 1;
      }
    }
  }
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res10,3);
  return local_48;
}

