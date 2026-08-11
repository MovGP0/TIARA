/* Ghidra address: 018ce4a0 */
/* Ghidra symbol: FUN_018ce4a0 */


void FUN_018ce4a0(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  char local_42;
  char local_41;
  longlong local_40;
  
  local_70 = auStack_98;
  local_58 = 0;
  local_60 = 0;
  puVar1 = auStack_98;
  if (((char)param_2[0x46] != '\0') &&
     (cVar2 = FUN_004113d0(param_2,&PTR_FUN_01930480), puVar1 = local_70, cVar2 == '\0')) {
    local_40 = param_1[0x11];
    FUN_00414ad0(param_1[8] + 0x158,param_2[2]);
    (**(code **)(*param_2 + 0x278))(param_2);
    FUN_01973050(param_1[8],param_2);
    FUN_018ca2e0(param_1,param_2);
    param_1[0x11] = 0;
    *(int *)(param_1 + 2) = (int)param_2[0x45];
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x22c);
    *(undefined1 *)(param_1[7] + 8) = 1;
    local_58 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar4 = *(int *)(param_1[0x2a] + 0x10);
    local_64 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar3 = FUN_004aeac0(param_1[0x2a],local_64);
        FUN_004ae7e0(local_58,uVar3);
        local_64 = local_64 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_60 = param_1[0x29];
    puVar1 = local_70;
  }
  local_70 = puVar1;
  if (*(char *)((longlong)param_2 + 0x1cc) != '\0') {
    FUN_018cddc0(auStack_98);
    return;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0192d4e8);
  if ((cVar2 == '\0') || ((int)param_2[0x4a] < 2)) {
    local_41 = '\0';
  }
  else {
    local_41 = '\x01';
  }
  local_42 = '\0';
  if ((((((char)param_1[0x14] == '\0') && (*(char *)((longlong)param_2 + 0xc5) != '\0')) &&
       (*(char *)((longlong)param_2 + 0x1c9) != '\0')) && (param_1[0x24] == 0)) &&
     (((cVar2 = FUN_004113d0(param_2,&PTR_FUN_0192d4e8), cVar2 == '\0' &&
       (cVar2 = FUN_004113d0(param_2,&PTR_FUN_019317f0), cVar2 == '\0')) ||
      ((int)param_2[0x45] != 1)))) {
    param_1[0x27] = (longlong)param_2;
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_019317f0);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0x256) != '\0')) {
      (**(code **)(*(longlong *)param_1[7] + 0x98))((longlong *)param_1[7]);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    param_1[0x27] = 0;
  }
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0);
  param_2[0x47] = param_2[0x16];
  if (*(char *)((longlong)param_2 + 0xc5) == '\0') goto code_r0x018cedcc;
  if ((((local_41 == '\0') && (cVar2 = FUN_004113d0(param_2,&PTR_FUN_01933a98), cVar2 == '\0')) &&
      (cVar2 = FUN_004113d0(param_2,&PTR_FUN_01933ed0), cVar2 == '\0')) &&
     (dVar5 = (double)(**(code **)(*param_1 + 0xa0))(param_1),
     0.0001 < (double)param_2[0x16] - dVar5)) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_01933448);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0x244) == '\x02')) {
      *(undefined1 *)(param_1 + 0x2d) = 1;
      FUN_018cee60(0,local_70);
      return;
    }
    if (param_1[0x24] == 0) {
      if ((char)param_2[0x34] == '\0') {
LAB_018ce95e:
        dVar5 = (double)(**(code **)(*param_1 + 0x20))(param_1);
        dVar6 = (double)(**(code **)(*param_1 + 0x98))(param_1);
        if (((double)param_2[0x16] <= dVar5 - dVar6) || ((char)param_2[0x46] != '\0')) {
          if (*(char *)((longlong)param_1 + 0xf1) == '\0') {
            FUN_018cd810(param_1,param_2);
          }
          cVar2 = FUN_004113d0(param_2,&PTR_FUN_01933448);
          if ((cVar2 == '\0') || ((char)param_1[0x23] == '\0')) {
            (**(code **)(*param_1 + 0x40))(param_1);
          }
          goto LAB_018ceab1;
        }
      }
      else if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
        dVar5 = (double)(**(code **)(*param_1 + 0x20))(param_1);
        dVar6 = (double)(**(code **)(*param_1 + 0x90))(param_1,0);
        dVar7 = (double)(**(code **)(*param_1 + 0x98))(param_1);
        if (((double)param_1[0x12] - (double)param_1[0x1f]) + (double)param_2[0x16] <=
            (dVar5 - dVar6) - dVar7) goto LAB_018ce95e;
      }
      if ((((char)param_2[0x34] == '\0') && (1 < *(int *)((longlong)param_2 + 0x22c))) &&
         (*(char *)((longlong)param_2 + 0x1c9) == '\0')) {
        param_1[0x15] = (longlong)param_2;
        (**(code **)(*param_1 + 0x40))(param_1);
      }
      if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
        FUN_018cf2f0(param_1,param_2);
      }
      FUN_018cd620(param_1,param_2);
      local_42 = '\x01';
    }
  }
LAB_018ceab1:
  if (local_42 == '\0') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_01933ed0);
    if (cVar2 == '\0') {
      if (local_41 == '\0') {
        (**(code **)(*param_2 + 200))(param_2,param_1[0x11]);
      }
      else {
        (**(code **)(*param_2 + 200))(param_2,(double)param_2[0x13] + (double)param_1[0x11]);
      }
      (**(code **)(*param_2 + 0xd0))(param_2,param_1[0x12]);
    }
    if (param_1[0x24] == 0) {
      if ((char)param_1[3] != '\0') {
        FUN_01967a70(param_2);
      }
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_01932e38);
      if ((cVar2 != '\0') && ((char)param_2[0x48] != '\0')) {
        dVar5 = (double)(**(code **)(*param_1 + 0xa0))(param_1);
        param_1[0x12] = (longlong)((double)param_1[0x12] + (dVar5 - (double)param_2[0x47]));
        (**(code **)(*param_2 + 0xd0))(param_2,param_1[0x12]);
      }
      if (((char)param_2[0x46] == '\0') ||
         (cVar2 = FUN_004113d0(param_2,&PTR_FUN_01930480), cVar2 != '\0')) {
        if (((char)param_1[0x14] == '\0') ||
           (cVar2 = (**(code **)(*(longlong *)param_1[7] + 200))((longlong *)param_1[7],param_2),
           cVar2 == '\0')) {
          (**(code **)(*(longlong *)param_1[7] + 0x38))((longlong *)param_1[7],param_2);
        }
      }
      else {
        (**(code **)(*(longlong *)param_1[0x2a] + 0x10))((longlong *)param_1[0x2a]);
        iVar4 = *(int *)(local_58 + 0x10);
        local_64 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar3 = FUN_004aeac0(local_58,local_64);
            FUN_004ae7e0(param_1[0x2a],uVar3);
            local_64 = local_64 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_00410f20(local_58);
        param_1[0x29] = local_60;
        (**(code **)(*param_2 + 200))(param_2,0);
        FUN_018cda80(auStack_98);
      }
    }
    else {
      local_50 = (longlong *)FUN_01967910(&PTR_FUN_0192c3a0,1,param_1[0x24]);
      FUN_0194f920(local_50,param_2,1);
      (**(code **)(*local_50 + 0x50))(local_50,param_2[2]);
      if ((char)param_1[3] != '\0') {
        FUN_01967a70(local_50);
      }
    }
    param_1[0x12] = (longlong)((double)param_1[0x12] + (double)param_2[0x16]);
  }
code_r0x018cedcc:
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  FUN_018cd940(param_1,param_2,0);
  if (*(char *)((longlong)param_2 + 0xc5) != '\0') {
    FUN_018cee90(param_1,param_2);
  }
  return;
}

