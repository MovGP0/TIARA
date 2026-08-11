/* Ghidra address: 007420c0 */
/* Ghidra symbol: FUN_007420c0 */


void FUN_007420c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_48 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,1);
  if (cVar1 != '\0') {
    uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_30,uVar6);
    cVar1 = (**(code **)(*local_30 + 0x48))(local_30);
    if (cVar1 != '\0') {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_38,uVar6);
      (**(code **)(*local_38 + 0x58))(local_38);
    }
  }
  if (*(char *)((longlong)param_1 + 0xae) != '\0') {
    iVar2 = FUN_00605610(param_1[99]);
    if (0 < iVar2) {
      iVar2 = FUN_00605640(param_1[99]);
      if (0 < iVar2) {
        uVar3 = FUN_00605610(param_1[99]);
        uVar4 = FUN_00605640(param_1[99]);
        (**(code **)(*param_1 + 400))
                  (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),uVar3,uVar4)
        ;
      }
    }
  }
  plVar5 = *(longlong **)(param_1[99] + 0x18);
  if (plVar5 == (longlong *)0x0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
  }
  else {
    cVar1 = FUN_004113d0(plVar5,&PTR_FUN_005f86c8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(plVar5,&PTR_FUN_005fa0c8);
      if (cVar1 == '\0') {
        (**(code **)(*plVar5 + 0x80))(plVar5,*(undefined1 *)((longlong)param_1 + 0x343));
      }
    }
    FUN_007418a0(param_1,&local_28);
    cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5);
    if ((((cVar1 == '\0') && (local_28 < 1)) && (local_24 < 1)) &&
       (((int)param_1[0x13] <= local_20 && (*(int *)((longlong)param_1 + 0x9c) <= local_1c)))) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x40;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
    }
    cVar1 = FUN_00741cd0(param_1);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x344) != '\0')) {
      (**(code **)(*param_1 + 0x198))(param_1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x344) == '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,1);
  if (cVar1 != '\0') {
    uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_40,uVar6);
    cVar1 = (**(code **)(*local_40 + 0x88))(local_40);
    if (cVar1 != '\0') {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_48,uVar6);
      (**(code **)(*local_48 + 0x40))(local_48);
    }
  }
  FUN_00417840(&local_48,&DAT_00484dc8,4);
  return;
}

