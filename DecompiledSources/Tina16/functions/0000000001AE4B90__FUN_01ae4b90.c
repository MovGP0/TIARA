/* Ghidra address: 01ae4b90 */
/* Ghidra symbol: FUN_01ae4b90 */


void FUN_01ae4b90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  
  local_30[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(param_1,local_30);
  if (cVar1 == '\x02') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_010ecd58);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&LAB_00f10748);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FUN_004aeac0(local_30[0],0);
        *(longlong **)(param_2 + 0x80) = plVar2;
        (**(code **)(*plVar2 + 0x100))(plVar2,param_2);
      }
    }
    else {
      plVar2 = (longlong *)FUN_004aeac0(local_30[0],0);
      *(longlong **)(param_2 + 0x80) = plVar2;
      (**(code **)(*plVar2 + 0x100))(plVar2,param_2);
    }
  }
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_010ecd58);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&LAB_00f10748);
    if (cVar1 != '\0') {
      *(longlong *)(param_2 + 0x78) = param_1;
    }
  }
  else {
    *(longlong *)(param_2 + 0x78) = param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x80))
            (*(longlong **)(param_1 + 0xe0),L"Circle/Line",param_2);
  FUN_00410f20(local_30[0]);
  return;
}

