/* Ghidra address: 013cab80 */
/* Ghidra symbol: FUN_013cab80 */


void FUN_013cab80(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  short *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = (short *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_38 = 0;
  local_30[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                (*(longlong **)(param_1 + 0x878),local_30,iVar6);
      FUN_0044f900(&PTR_DAT_013cb314,local_30[0]);
      (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                (*(longlong **)(param_1 + 0x878),&local_38,iVar6);
      FUN_0044f900(&LAB_013cb328,local_38);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                        (*(longlong **)(param_1 + 0x878),iVar6);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
      iVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1,uVar5);
      if (iVar4 == -1) {
        if (*(char *)(param_1 + 0x92d) == '\0') {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                            (*(longlong **)(param_1 + 0x878),iVar6);
          cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001288,uVar5);
          if ((cVar2 == '\0') ||
             (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                                (*(longlong **)(param_1 + 0x7b8)), cVar2 == '\0')) {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                              (*(longlong **)(param_1 + 0x878),iVar6);
            cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_020059d8,uVar5);
            if ((cVar2 == '\0') ||
               (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                                  (*(longlong **)(param_1 + 0x7c0)),
               cVar2 == '\0' && param_2 == '\0')) {
              uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                                (*(longlong **)(param_1 + 0x878),iVar6);
              cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005118,uVar5);
              if ((cVar2 == '\0') ||
                 (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                                    (*(longlong **)(param_1 + 0x7c0)),
                 cVar2 == '\0' && param_2 == '\0')) {
                uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                                  (*(longlong **)(param_1 + 0x878),iVar6);
                cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001630,uVar5);
                if ((cVar2 == '\0') ||
                   (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                                      (*(longlong **)(param_1 + 0x7c0)),
                   cVar2 == '\0' && param_2 == '\0')) {
                  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                                    (*(longlong **)(param_1 + 0x878),iVar6);
                  cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001d00,uVar5);
                  if (((cVar2 == '\0') ||
                      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x260))
                                         (*(longlong **)(param_1 + 0x7c8)), cVar2 == '\0')) &&
                     (((**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                                 (*(longlong **)(param_1 + 0x878),&local_40,iVar6), local_40 == 0 ||
                      ((((**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                                   (*(longlong **)(param_1 + 0x878),&local_48,iVar6),
                        *local_48 != 0x56 ||
                        ((**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                                   (*(longlong **)(param_1 + 0x878),&local_50,iVar6),
                        *(short *)(local_50 + 2) != 0x50)) ||
                       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))
                                          (*(longlong **)(param_1 + 0x7a0)),
                       cVar2 == '\0' && param_2 == '\0')))))) {
                    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                              (*(longlong **)(param_1 + 0x878),&local_58,iVar6);
                    if (local_58 != 0) {
                      (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                                (*(longlong **)(param_1 + 0x878),&local_60,iVar6);
                      iVar4 = FUN_0044f900(&PTR_DAT_013cb314,local_60);
                      if ((iVar4 == 1) &&
                         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))
                                            (*(longlong **)(param_1 + 0x7a8)),
                         cVar2 != '\0' || param_2 != '\0')) goto LAB_013cb1ab;
                    }
                    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                              (*(longlong **)(param_1 + 0x878),&local_68,iVar6);
                    if (local_68 != 0) {
                      (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                                (*(longlong **)(param_1 + 0x878),&local_70,iVar6);
                      iVar4 = FUN_0044f900(&LAB_013cb328,local_70);
                      if ((iVar4 == 1) &&
                         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))
                                            (*(longlong **)(param_1 + 0x7b0)),
                         cVar2 != '\0' || param_2 != '\0')) goto LAB_013cb1ab;
                    }
                    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                                      (*(longlong **)(param_1 + 0x878),iVar6);
                    cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005188,uVar5);
                    if ((cVar2 == '\0') ||
                       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                                          (*(longlong **)(param_1 + 0x7b8)), cVar2 == '\0')) {
                      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                                        (*(longlong **)(param_1 + 0x878),iVar6);
                      cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02004fb8,uVar5);
                      if ((cVar2 == '\0') ||
                         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                                            (*(longlong **)(param_1 + 0x7b8)), cVar2 == '\0'))
                      goto LAB_013cb0b9;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_013cb0b9:
          if (*(char *)(param_1 + 0x92d) == '\0') goto LAB_013cb26c;
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                            (*(longlong **)(param_1 + 0x878),iVar6);
          cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02003118,uVar5);
          if ((cVar2 == '\0') ||
             (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                                (*(longlong **)(param_1 + 0x7b8)), cVar2 == '\0')) {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                              (*(longlong **)(param_1 + 0x878),iVar6);
            cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005188,uVar5);
            if ((cVar2 == '\0') ||
               (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                                  (*(longlong **)(param_1 + 0x7b8)), cVar2 == '\0')) {
              uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                                (*(longlong **)(param_1 + 0x878),iVar6);
              cVar2 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02004fb8,uVar5);
              if ((cVar2 == '\0') ||
                 (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                                    (*(longlong **)(param_1 + 0x7b8)), cVar2 == '\0'))
              goto LAB_013cb26c;
            }
          }
        }
LAB_013cb1ab:
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x810),&local_78);
        if (local_78 == 0) {
          cVar2 = '\x01';
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                    (*(longlong **)(param_1 + 0x878),&local_80,iVar6);
          uVar5 = local_80;
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x810),&local_88);
          cVar2 = FUN_005b83d0(uVar5,local_88);
        }
        if (cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                    (*(longlong **)(param_1 + 0x878),&local_90,iVar6);
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                            (*(longlong **)(param_1 + 0x878),iVar6);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
          (**(code **)(*plVar1 + 0x80))(plVar1,local_90,uVar5);
        }
      }
LAB_013cb26c:
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_90);
  FUN_00414480(&local_88);
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,9);
  return;
}

