/* Ghidra address: 00d05a80 */
/* Ghidra symbol: FUN_00d05a80 */


/* WARNING: Type propagation algorithm not settling */

char FUN_00d05a80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  char local_29 [9];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[1] = 0;
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0x218) + 8) == 0) {
    local_40[0] = 0;
    iVar4 = (**(code **)(**(longlong **)(param_3 + 0xe8) + 0x28))();
    iVar6 = 0;
    lVar2 = local_40[0];
    if (-1 < iVar4 + -1) {
      do {
        local_40[0] = lVar2;
        (**(code **)(**(longlong **)(param_3 + 0xe8) + 0x18))
                  (*(longlong **)(param_3 + 0xe8),local_40 + 1,iVar6);
        FUN_00874ee0(local_50,local_40 + 1,&LAB_00d05d98,1,1);
        local_40[0] = FUN_00cdd870(local_50[0]);
        if (local_40[0] != 0) break;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
        lVar2 = 0;
      } while (iVar4 != 0);
    }
    if (*(longlong *)(param_1 + 0x250) != 0) {
      (**(code **)(param_1 + 0x250))
                (*(undefined8 *)(param_1 + 600),param_1,local_40,*(undefined8 *)(param_3 + 0xe8));
    }
    if (local_40[0] == 0) {
      local_29[0] = '\0';
      goto LAB_00d05d2d;
    }
    uVar5 = (**(code **)(local_40[0] + 0x38))(local_40[0],1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x218) + 8) = uVar5;
  }
  if ((*(longlong *)(param_1 + 0x270) == 0) &&
     (FUN_0043ea00(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x10)), local_58 == 0)
     ) {
    local_29[0] = '\0';
  }
  else {
    local_29[0] = '\x01';
  }
  if (local_29[0] != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 8);
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x28));
    (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x10));
    FUN_00cdda30(plVar1,*(undefined8 *)(param_3 + 0xe8));
    local_29[0] = '\0';
    do {
      while (cVar3 = FUN_00cddb60(plVar1), cVar3 == '\0') {
        if (*(longlong *)(param_1 + 0x270) != 0) {
          (**(code **)(*plVar1 + 0x30))
                    (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x28));
          (**(code **)(*plVar1 + 0x28))
                    (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x10));
          (**(code **)(param_1 + 0x270))(*(undefined8 *)(param_1 + 0x278),param_1,plVar1,local_29);
          if (local_29[0] == '\0') goto LAB_00d05d2d;
          FUN_00cddbf0(plVar1,&local_60);
          FUN_00414ad0(*(longlong *)(param_1 + 0x218) + 0x28,local_60);
          FUN_00cddba0(plVar1,&local_68);
          FUN_00414ad0(*(longlong *)(param_1 + 0x218) + 0x10,local_68);
        }
      }
      if (cVar3 == '\x01') {
        local_29[0] = '\x01';
        goto LAB_00d05d2d;
      }
    } while (cVar3 != '\x02');
    local_29[0] = '\0';
  }
LAB_00d05d2d:
  FUN_00414560(&local_68,4);
  FUN_00414480(local_40 + 1);
  return local_29[0];
}

