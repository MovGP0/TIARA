/* Ghidra address: 018ca570 */
/* Ghidra symbol: FUN_018ca570 */


void FUN_018ca570(longlong param_1)

{
  double *pdVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))(*(longlong **)(param_1 + 0x98),0);
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x98) + 0x80) + 0x30))();
  local_24 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x80);
      local_30 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_24);
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      if (*pdVar1 <= (double)local_30[0x14] + (double)local_30[0x16] &&
          (double)local_30[0x14] + (double)local_30[0x16] != *pdVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                  (*(longlong **)(param_1 + 0x98),(double)local_30[0x14] + (double)local_30[0x16]);
      }
      if (((0 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10)) &&
          (cVar3 = FUN_004113d0(local_30,&PTR_FUN_01923c30), plVar2 = local_30, cVar3 != '\0')) &&
         ((char)local_30[0x55] == '\x03')) {
        iVar5 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xa8),local_30);
        if (iVar5 == -1) {
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa8),plVar2);
          local_30[0x56] = 0;
        }
        FUN_004ae7e0(local_20,plVar2);
      }
      local_24 = local_24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(local_20 + 0x10);
  local_24 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_30 = (longlong *)FUN_004aeac0(local_20,local_24);
      (**(code **)(*local_30 + 0xe0))
                (local_30,*(double *)(*(longlong *)(param_1 + 0x98) + 0xb0) - (double)local_30[0x14]
                );
      local_24 = local_24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(local_20);
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x10) == 0) {
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x98) + 0x80) + 0x30))();
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x80);
        local_30 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_24);
        FUN_01950ac0(local_30);
        if ((char)local_30[0x34] == '\x05') {
          (**(code **)(*local_30 + 0xd0))
                    (local_30,*(double *)(*(longlong *)(param_1 + 0x98) + 0xb0) -
                              (double)local_30[0x16]);
        }
        else {
          cVar3 = FUN_018cb070(*(undefined8 *)(param_1 + 0x90),local_30);
          if (cVar3 != '\0') {
            (**(code **)(*local_30 + 0xe0))
                      (local_30,*(double *)(*(longlong *)(param_1 + 0x98) + 0xb0) -
                                (double)local_30[0x14]);
          }
        }
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

