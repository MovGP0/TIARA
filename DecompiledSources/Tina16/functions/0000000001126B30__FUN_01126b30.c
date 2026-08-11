/* Ghidra address: 01126b30 */
/* Ghidra symbol: FUN_01126b30 */


void FUN_01126b30(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 *local_3d0;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0 [95];
  undefined8 local_a8;
  int local_98;
  undefined4 local_91;
  undefined2 uStack_8d;
  undefined1 uStack_8b;
  int local_3c;
  longlong local_38;
  longlong local_30;
  
  local_3d0 = auStack_438;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3a0[0] = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x10))
            (*(longlong **)(param_1 + 0x9f8),*(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x4e8)
            );
  if (*(int *)(param_1 + 0x8f8) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
    (**(code **)(*plVar1 + 0x38))(plVar1,local_3a0);
    if (*(longlong *)(*(longlong *)(param_1 + 0xde0) + 0x538) != 0) {
      local_3b8 = *(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x538);
      FUN_00410f20(local_3b8);
    }
    uVar3 = FUN_019a4600();
    local_418 = *(undefined8 *)(param_1 + 0xde0);
    local_410 = 0;
    local_3b8 = FUN_010d60d0(&DAT_010d5b88,1,uVar3,local_3a0[0]);
    FUN_010d6700(local_3b8);
    lVar4 = *(longlong *)(param_1 + 0xde0);
    *(undefined1 *)(lVar4 + 0x530) = 1;
    *(undefined8 *)(lVar4 + 0x538) = local_3b8;
    cVar2 = FUN_010d64a0(local_3b8,&local_3a8,&local_3b0,0);
    *(char *)(param_1 + 0xb70) = cVar2;
    if (cVar2 == '\0') {
      FUN_00f08d50(&local_3d8,9);
      FUN_01126090(param_1,local_3d8,0xff0000);
    }
    else {
      FUN_01126090(param_1,local_3b0,0xff);
    }
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x298))(*(longlong **)(param_1 + 0x770));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x770) + 0x4d8);
    (**(code **)(*plVar1 + 0x60))(plVar1,local_3b0);
  }
  else {
    if (*(longlong *)(param_1 + 0xde0) != 0) {
      *(undefined8 *)(param_1 + 0xb74) = *(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x628);
      lVar4 = *(longlong *)(param_1 + 0xde0);
      *(undefined8 *)(param_1 + 0xb80) = *(undefined8 *)(lVar4 + 0x630);
      *(undefined8 *)(param_1 + 0xb88) = *(undefined8 *)(lVar4 + 0x638);
      *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(lVar4 + 0x640);
      *(undefined8 *)(param_1 + 0xb98) = *(undefined8 *)(lVar4 + 0x648);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x650);
      puVar7 = (undefined8 *)(param_1 + 0xba0);
      for (lVar4 = 0x48; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 0xde0));
    }
    local_418 = 0;
    local_410 = 0;
    local_408 = 0;
    lVar4 = FUN_017e1bd0(&DAT_017df868,1,0,0);
    *(longlong *)(param_1 + 0xde0) = lVar4;
    *(undefined8 *)(lVar4 + 0x628) = *(undefined8 *)(param_1 + 0xb74);
    *(undefined8 *)(lVar4 + 0x630) = *(undefined8 *)(param_1 + 0xb80);
    *(undefined8 *)(lVar4 + 0x638) = *(undefined8 *)(param_1 + 0xb88);
    *(undefined8 *)(lVar4 + 0x640) = *(undefined8 *)(param_1 + 0xb90);
    *(undefined8 *)(lVar4 + 0x648) = *(undefined8 *)(param_1 + 0xb98);
    puVar6 = (undefined8 *)(param_1 + 0xba0);
    puVar7 = (undefined8 *)(lVar4 + 0x650);
    for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_01695540(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x4e8));
    lVar4 = *(longlong *)(param_1 + 0xde0);
    *(undefined1 *)(lVar4 + 0x530) = 0;
    FUN_01695da0(lVar4,*PTR_DAT_020052b0);
    FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x550),1,0,0);
    FUN_011162c0(*(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x550));
    local_38 = FUN_010d3b00(&DAT_010d3988,1,*(undefined8 *)(param_1 + 0xde0));
    local_3c = FUN_010d5050(local_38);
    *(bool *)(param_1 + 0xb70) = local_3c != 0;
    if (local_3c != 0) {
      cVar2 = FUN_01695e60(*(undefined8 *)(param_1 + 0xde0));
      if (cVar2 == '\0') {
        cVar2 = FUN_01695ee0(*(undefined8 *)(param_1 + 0xde0));
        if (cVar2 == '\0') {
          FUN_017e2900(*(undefined8 *)(param_1 + 0xde0),0);
          goto LAB_01126fa6;
        }
      }
      FUN_01126020(param_1,param_1 + 0xb68);
    }
LAB_01126fa6:
    if (local_3c == 0) {
      FUN_01696180(*(undefined8 *)(param_1 + 0xde0));
      local_30 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 0xde0));
      local_3c = FUN_010c7360(local_30);
      *(bool *)(param_1 + 0xb70) = local_3c != 0;
      if (local_3c != 0) {
        FUN_01126020(param_1,param_1 + 0xb68);
      }
      if (local_3c == 0) {
        cVar2 = FUN_00c53230(*(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x4f8));
        if (cVar2 != '\0') {
          FUN_017e2900(*(undefined8 *)(param_1 + 0xde0),0x10c);
          *(undefined1 *)(param_1 + 0xb70) = 1;
        }
        cVar2 = FUN_017e28e0(*(undefined8 *)(param_1 + 0xde0));
        if (cVar2 == '\0') {
          FUN_00f08d50(&local_3e0,9);
          FUN_01126090(param_1,local_3e0,0xff0000);
          FUN_010c2250(&local_3e8,0);
          FUN_00414ad0(param_1 + 0xb68,local_3e8);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xde0) + 0x890);
          (**(code **)(*plVar1 + 0x90))(plVar1);
          (**(code **)(**(longlong **)(param_1 + 0x770) + 0x298))(*(longlong **)(param_1 + 0x770));
          FUN_01115c40(*(undefined8 *)(param_1 + 0xde0));
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x770) + 0x4d8);
          (**(code **)(*plVar1 + 0x88))
                    (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x890));
          local_3c0 = *(longlong *)(param_1 + 0xde0);
          FUN_010d3560(*(undefined8 *)(local_3c0 + 0x4f0));
          local_98 = *(int *)(*(longlong *)(local_3c0 + 0x4f0) + 0x10) + -1;
          *(undefined2 *)(local_3c0 + 0x566) = (undefined2)local_98;
          FUN_010d3560(*(undefined8 *)(local_3c0 + 0x4f0));
          local_91 = 0x67695306;
          uStack_8d = 0x616e;
          uStack_8b = 0x6c;
          local_a8 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,1,1);
          FUN_013b3a80(local_a8,local_98);
          FUN_004169a0(&local_3f0,&local_91);
          local_418 = CONCAT44(local_418._4_4_,1);
          FUN_010d2370(*(undefined8 *)(local_3c0 + 0x4f8),local_3f0,local_a8,
                       *(undefined8 *)(local_3c0 + 0x4f0));
        }
        else {
          FUN_01126020(param_1,param_1 + 0xb68);
        }
        if (local_30 != 0) {
          FUN_00410f20(local_30);
        }
        if (local_38 != 0) {
          FUN_00410f20(local_38);
        }
        goto LAB_0112729e;
      }
    }
  }
  FUN_011272d0(0,local_3d0);
LAB_0112729e:
  FUN_00414560(&local_3f0,4);
  FUN_00414560(&local_3b0,3);
  return;
}

