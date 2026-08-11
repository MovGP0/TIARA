/* Ghidra address: 00d056e0 */
/* Ghidra symbol: FUN_00d056e0 */


/* WARNING: Type propagation algorithm not settling */

char FUN_00d056e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  char local_29 [9];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[1] = 0;
  *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
  if (*(longlong *)(param_2 + 0x130) == 0) {
    local_40[0] = 0;
    iVar4 = (**(code **)(**(longlong **)(param_3 + 0xf0) + 0x28))();
    iVar6 = 0;
    lVar2 = local_40[0];
    if (-1 < iVar4 + -1) {
      do {
        local_40[0] = lVar2;
        (**(code **)(**(longlong **)(param_3 + 0xf0) + 0x18))
                  (*(longlong **)(param_3 + 0xf0),local_40 + 1,iVar6);
        FUN_00874ee0(local_50,local_40 + 1,&DAT_00d05a4c,1,1);
        local_40[0] = FUN_00cdd870(local_50[0]);
        if (local_40[0] != 0) break;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
        lVar2 = 0;
      } while (iVar4 != 0);
    }
    if (*(longlong *)(param_1 + 0x240) != 0) {
      (**(code **)(param_1 + 0x240))
                (*(undefined8 *)(param_1 + 0x248),param_1,local_40,*(undefined8 *)(param_3 + 0xf0));
    }
    if (local_40[0] == 0) {
      local_29[0] = '\0';
      goto LAB_00d059d4;
    }
    uVar5 = (**(code **)(local_40[0] + 0x38))(local_40[0],1);
    *(undefined8 *)(param_2 + 0x130) = uVar5;
  }
  if ((*(longlong *)(param_1 + 0x260) == 0) &&
     (FUN_0043ea00(&local_58,*(undefined8 *)(param_2 + 0xf0)), local_58 == 0)) {
    local_29[0] = '\0';
  }
  else {
    local_29[0] = '\x01';
  }
  if (local_29[0] != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x130);
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_2 + 0x108));
    (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(param_2 + 0xf0));
    (**(code **)(**(longlong **)(param_2 + 0x130) + 0x50))
              (*(longlong **)(param_2 + 0x130),&local_60);
    FUN_00cd98b0(plVar1[2],L"Authorization",local_60);
    FUN_00cdda30(plVar1,*(undefined8 *)(param_3 + 0xf0));
    local_29[0] = '\0';
    do {
      while (cVar3 = FUN_00cddb60(plVar1), cVar3 == '\0') {
        if (*(longlong *)(param_1 + 0x260) != 0) {
          (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_2 + 0x108));
          (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(param_2 + 0xf0));
          (**(code **)(param_1 + 0x260))(*(undefined8 *)(param_1 + 0x268),param_1,plVar1,local_29);
          if (local_29[0] == '\0') goto LAB_00d059d4;
          *(undefined1 *)(param_2 + 0x128) = 1;
          FUN_00cddbf0(plVar1,&local_68);
          FUN_00414ad0(param_2 + 0x108,local_68);
          FUN_00cddba0(plVar1,&local_70);
          FUN_00414ad0(param_2 + 0xf0,local_70);
        }
      }
      if (cVar3 == '\x01') {
        local_29[0] = '\x01';
        goto LAB_00d059d4;
      }
    } while (cVar3 != '\x02');
    local_29[0] = '\0';
  }
LAB_00d059d4:
  FUN_00414560(&local_70,5);
  FUN_00414480(local_40 + 1);
  return local_29[0];
}

