/* Ghidra address: 018cc040 */
/* Ghidra symbol: FUN_018cc040 */


void FUN_018cc040(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_28;
  int local_1c;
  
  local_40 = auStack_68;
  puVar2 = auStack_68;
  if (*(char *)((longlong)param_2 + 0xc5) != '\0') {
    iVar4 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
    local_1c = 0;
    puVar2 = local_40;
    if (-1 < iVar4 + -1) {
      do {
        local_28 = (longlong *)
                   (**(code **)(*(longlong *)param_2[0x10] + 0x20))
                             ((longlong *)param_2[0x10],local_1c);
        FUN_00414ad0(*(longlong *)(param_1 + 0x40) + 0x158,local_28[2]);
        FUN_019730a0(*(undefined8 *)(param_1 + 0x40),local_28);
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
        puVar2 = local_40;
      } while (iVar4 != 0);
    }
  }
  local_40 = puVar2;
  FUN_0194fb90(param_2);
  iVar4 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
  local_1c = 0;
  if (-1 < iVar4 + -1) {
    do {
      if ((param_2 == *(longlong **)(param_1 + 0x148)) && ((int)param_2[0x33] <= local_1c)) break;
      local_28 = (longlong *)
                 (**(code **)(*(longlong *)param_2[0x10] + 0x20))
                           ((longlong *)param_2[0x10],local_1c);
      (**(code **)(*local_28 + 0x288))(local_28);
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x40) + 0x158,param_2[2]);
  FUN_019730a0(*(undefined8 *)(param_1 + 0x40),param_2);
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_0192c3a0);
  if (cVar3 != '\0') {
    (**(code **)(*param_2 + 0x288))(param_2);
  }
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_0192c3a0);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
    FUN_01967cc0(param_2);
  }
  FUN_01950ac0(param_2);
  if ((int)param_2[0x33] != -1) {
    while (iVar4 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))((longlong *)param_2[0x10]),
          (int)param_2[0x33] < iVar4) {
      plVar1 = (longlong *)param_2[0x10];
      iVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar4 + -1);
      FUN_00410f20(uVar5);
    }
    *(undefined4 *)(param_2 + 0x33) = 0xffffffff;
  }
  return;
}

