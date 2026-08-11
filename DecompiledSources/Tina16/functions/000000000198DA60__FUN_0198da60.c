/* Ghidra address: 0198da60 */
/* Ghidra symbol: FUN_0198da60 */


void FUN_0198da60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70 [7];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_70[2] = 0;
  local_70[1] = 0;
  FUN_01d41fa0();
  FUN_01a98210(*(undefined8 *)(param_1 + 0x210),&local_38);
  if ((*(char *)(param_1 + 0x98) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x210) + 0x12d) == '\0')) {
    local_38 = local_38 - *(int *)PTR_DAT_02002620;
    local_34 = local_34 - *(int *)PTR_DAT_02001fb0;
  }
  FUN_00b95860(&local_38,0xffffffce,0xffffffce);
  local_30 = local_30 + 100;
  local_2c = local_2c + 100;
  if ((*(char *)(param_1 + 0x98) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x210) + 0x12d) == '\0')) {
    FUN_01a99b80(*(undefined8 *)(param_1 + 0x210));
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0xe8))(*(longlong **)(param_1 + 0x210),4);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0xb8))(*(longlong **)(param_1 + 0x210),0xc0c0c0)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
              (*(longlong **)(param_1 + 0x210),*(int *)(param_1 + 0xac) + 2,
               *(int *)(param_1 + 0xa8) + 5);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
              (*(longlong **)(param_1 + 0x210),*(int *)(param_1 + 0xac) + 2,
               *(int *)(param_1 + 0xb0) + 2);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
              (*(longlong **)(param_1 + 0x210),*(int *)(param_1 + 0xa4) + 5,
               *(int *)(param_1 + 0xb0) + 2);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0xe8))(*(longlong **)(param_1 + 0x210),0);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0xb8))(*(longlong **)(param_1 + 0x210),0x808080)
    ;
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x58))
              (*(longlong **)(param_1 + 0x210),*(undefined4 *)(param_1 + 0xa4),
               *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    local_b0 = ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa4)) - *(int *)(param_1 + 0xb4)) -
               *(int *)(param_1 + 0xbc);
    local_a4 = ((*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xa8)) - *(int *)(param_1 + 0xb8)) -
               *(int *)(param_1 + 0xc0);
    local_ac = *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xb4);
    local_a8 = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xb8);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0xb8))(*(longlong **)(param_1 + 0x210),0xc0c0c0)
    ;
    uVar5 = local_b0 / *(int *)(param_1 + 0x9c);
    iVar4 = 0;
    if (uVar5 < 0x80000000) {
      iVar6 = uVar5 + 1;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
                  (*(longlong **)(param_1 + 0x210),local_ac + iVar4 * *(int *)(param_1 + 0x9c),
                   local_a8);
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                  (*(longlong **)(param_1 + 0x210),local_ac + iVar4 * *(int *)(param_1 + 0x9c),
                   local_a8 + local_a4);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar5 = local_a4 / *(int *)(param_1 + 0xa0);
    iVar4 = 0;
    if (uVar5 < 0x80000000) {
      iVar6 = uVar5 + 1;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
                  (*(longlong **)(param_1 + 0x210),local_ac,
                   local_a8 + iVar4 * *(int *)(param_1 + 0xa0));
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                  (*(longlong **)(param_1 + 0x210),local_ac + local_b0,
                   local_a8 + iVar4 * *(int *)(param_1 + 0xa0));
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x241) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x210) + 0x12d) == '\0')) {
    FUN_01995090(param_1,&local_38,1);
  }
  if (*(char *)(param_1 + 0xd1) == '\0') {
    FUN_0199c750(param_1,&local_38,*(undefined8 *)(param_1 + 0x210));
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_00b94e60(param_1,iVar6);
      FUN_0198d660(auStack_f8,uVar3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*PTR_DAT_02003f60 == '\0') {
    if (*(longlong *)PTR_DAT_02003660 == 0) {
      bVar7 = false;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02003660 + 0x730);
      FUN_019ac280(param_1,local_70);
      if (lVar1 == local_70[0]) {
        bVar7 = true;
      }
      else if ((lVar1 == 0) || (local_70[0] == 0)) {
        bVar7 = false;
      }
      else {
        iVar4 = FUN_0043e420(lVar1,local_70[0]);
        bVar7 = iVar4 == 0;
      }
    }
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    bVar7 = true;
  }
  else if ((((*(longlong *)PTR_DAT_02003ba0 == 0) ||
            (*(char *)(*(longlong *)PTR_DAT_02003ba0 + 0xa9) == '\0')) ||
           (*(longlong *)(param_1 + 0xe08) == 0)) ||
          (*(longlong *)(*(longlong *)(param_1 + 0xe08) + 8) == 0)) {
    bVar7 = false;
  }
  else {
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)(param_1 + 0xe08) + 8),&local_78);
    lVar1 = local_78;
    FUN_019ac280(param_1,&local_80);
    if (lVar1 == local_80) {
      bVar7 = true;
    }
    else if ((lVar1 == 0) || (local_80 == 0)) {
      bVar7 = false;
    }
    else {
      iVar4 = FUN_0043e420(lVar1,local_80);
      bVar7 = iVar4 == 0;
    }
  }
  if (bVar7) {
    bVar7 = true;
  }
  else if (((*(longlong *)PTR_DAT_02002418 == 0) ||
           (*(char *)(*(longlong *)PTR_DAT_02002418 + 0xa9) == '\0')) ||
          ((*(longlong *)(param_1 + 0xe08) == 0 ||
           (*(longlong *)(*(longlong *)(param_1 + 0xe08) + 8) == 0)))) {
    bVar7 = false;
  }
  else {
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)(param_1 + 0xe08) + 8),&local_88);
    lVar1 = local_88;
    FUN_019ac280(param_1,&local_90);
    if (lVar1 == local_90) {
      bVar7 = true;
    }
    else if ((lVar1 == 0) || (local_90 == 0)) {
      bVar7 = false;
    }
    else {
      iVar4 = FUN_0043e420(lVar1,local_90);
      bVar7 = iVar4 == 0;
    }
  }
  if (bVar7) {
    bVar7 = true;
  }
  else if ((((*(longlong *)PTR_DAT_02004e40 == 0) ||
            (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 7000) == 0)) ||
           ((cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 7000),
                                  &PTR_FUN_013631b0), cVar2 == '\0' &&
            (cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 7000),
                                  &PTR_FUN_01363488), cVar2 == '\0')))) ||
          ((*(longlong *)(param_1 + 0xe08) == 0 ||
           (*(longlong *)(*(longlong *)(param_1 + 0xe08) + 8) == 0)))) {
    bVar7 = false;
  }
  else {
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)(param_1 + 0xe08) + 8),&local_98);
    lVar1 = local_98;
    FUN_019ac280(param_1,&local_a0);
    if (lVar1 == local_a0) {
      bVar7 = true;
    }
    else if ((lVar1 == 0) || (local_a0 == 0)) {
      bVar7 = false;
    }
    else {
      iVar4 = FUN_0043e420(lVar1,local_a0);
      bVar7 = iVar4 == 0;
    }
  }
  if ((bVar7) && (cVar2 = FUN_01995420(param_1), cVar2 != '\0')) {
    uVar3 = FUN_019a4630();
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_0198f380(param_1,uVar3,*(undefined8 *)(param_1 + 0x210),0);
  }
  FUN_01d41f90();
  FUN_00414560(&local_a0,9);
  return;
}

