/* Ghidra address: 0127c510 */
/* Ghidra symbol: FUN_0127c510 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0127c510(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 int param_5,int param_6,undefined8 param_7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_388 [32];
  int local_368;
  undefined4 *local_360;
  int local_34c;
  undefined8 local_348;
  undefined1 local_340 [256];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 *local_210;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  int local_1e0;
  undefined1 local_1d9;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c0;
  int local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined8 local_1a0;
  char local_193;
  char local_192;
  char local_191;
  undefined8 *local_190;
  undefined8 local_184;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 *local_168;
  undefined8 local_15f;
  double local_53;
  double local_4b;
  undefined2 local_43;
  char local_41;
  longlong local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_210 = auStack_388;
  local_348 = 0;
  local_240 = 0;
  local_238 = 0;
  local_228 = 0;
  local_230 = 0;
  local_220 = 0;
  local_218 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_1a0 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_00414610(param_7);
  cVar2 = FUN_01b23030();
  local_1d9 = cVar2 == '\0';
  if ((bool)local_1d9) {
    local_1e0 = 10;
  }
  else {
    local_1e0 = 1;
  }
  local_1b0 = local_1e0;
  (**(code **)(*local_res18 + 0xd8))(local_res18,&local_218,L"detail[@idx=\"1\"]");
  FUN_0041b890(local_30,local_218,&DAT_0127d1e2);
  if (local_30[0] != (longlong *)0x0) {
    local_191 = '\0';
    FUN_01275c10(local_30[0],L"parameter[@idx=\"0\"]",8,&local_191);
    local_368 = param_6 + 1;
    local_360 = &local_1ac;
    local_192 = FUN_01d080f0(param_2,param_1,1,param_5 + 1);
    if (local_191 == '\0') {
      if (local_192 == '\0') {
        local_193 = '\x03';
      }
      else {
        local_193 = '\x02';
      }
    }
    else if (local_192 == '\0') {
      local_193 = '\0';
    }
    else {
      local_193 = '\x01';
    }
    if (local_193 != '\x03') {
      puVar5 = (undefined8 *)(PTR_DAT_02001120 + 0x431);
      puVar7 = &local_15f;
      for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
      *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar5 + 4);
      *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar5 + 6);
      cVar2 = FUN_01275c10(local_30[0],L"parameter[@idx=\"4\"]",7,&local_1a0);
      if (cVar2 != '\0') {
        local_41 = FUN_0043fc50(local_1a0,0);
      }
      if (local_41 == '\x02') {
        local_40 = FUN_01d0efe0(&DAT_01d0ae90,1);
        local_1a8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*local_30[0] + 0xd8))(local_30[0],&local_220,L"parameter[@idx=\"5\"]");
        FUN_0041b890(&local_38,local_220,&DAT_0127d1e2);
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0xb8))(local_38,&local_230);
          FUN_0043ea00(&local_228,local_230);
          (**(code **)(*local_1a8 + 0x60))(local_1a8,local_228);
          iVar3 = (**(code **)(*local_1a8 + 0x28))();
          local_34c = iVar3 + -1;
          local_1b4 = 0;
          if (-1 < local_34c) {
            do {
              local_34c = iVar3;
              (**(code **)(*local_1a8 + 0x18))(local_1a8,&local_238,local_1b4);
              local_1c0 = FUN_00b8f030(local_238);
              FUN_01d0f0e0(local_40,local_1c0);
              local_1b4 = local_1b4 + 1;
              local_34c = local_34c + -1;
              iVar3 = local_34c;
            } while (local_34c != 0);
          }
        }
        lVar6 = local_40;
        local_43 = *(undefined2 *)(local_40 + 0x10);
        if (*(int *)(local_40 + 0x10) < 2) {
          local_1e8 = &local_40;
          local_1f0 = local_40;
          local_40 = 0;
          FUN_00410f20(lVar6);
          local_193 = '\x03';
        }
        FUN_00410f20(local_1a8);
      }
      else {
        FUN_01275c10(local_30[0],L"parameter[@idx=\"1\"]",5,&local_53);
        FUN_01275c10(local_30[0],L"parameter[@idx=\"2\"]",5,&local_4b);
        FUN_01275c10(local_30[0],L"parameter[@idx=\"3\"]",0,&local_43);
        if (local_53 == local_4b) {
          local_193 = '\x03';
        }
      }
      if (local_193 == '\0') {
        if ((((local_41 == '\0') && (local_53 != local_4b)) ||
            ((local_41 == '\x01' &&
             (((0.0 < local_53 && (0.0 < local_4b)) && (local_53 != local_4b)))))) ||
           (local_41 == '\x02')) {
          local_168 = (undefined8 *)FUN_004095c0(0x23a);
          *(double *)((longlong)local_168 + 0x10c) = local_53;
          *(double *)((longlong)local_168 + 0x114) = local_4b;
          *(undefined2 *)((longlong)local_168 + 0x11c) = local_43;
          *(char *)((longlong)local_168 + 0x11e) = local_41;
          *local_168 = param_2;
          *(char *)(local_168 + 1) = (char)param_5 + '\x01';
          *(char *)((longlong)local_168 + 9) = (char)param_6 + '\x01';
          *(longlong *)((longlong)local_168 + 0x11f) = local_40;
          FUN_01b1d680(&local_240,param_7);
          FUN_00416910(local_340,local_240,0xff);
          FUN_00415020((longlong)local_168 + 0x22f,local_340,10);
          *(undefined1 *)((longlong)local_168 + 0xc) = 0;
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x470),local_168);
        }
      }
      else if (local_193 == '\x01') {
        local_1d0 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x470),local_1ac);
        FUN_00410f20(*(undefined8 *)(local_1d0 + 0x11f));
        if (local_41 == '\x02') {
          *(longlong *)(local_1d0 + 0x11f) = local_40;
        }
        else {
          *(double *)(local_1d0 + 0x10c) = local_53;
          *(double *)(local_1d0 + 0x114) = local_4b;
        }
        *(undefined2 *)(local_1d0 + 0x11c) = local_43;
        *(char *)(local_1d0 + 0x11e) = local_41;
      }
      else if (local_193 == '\x02') {
        lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x470),local_1ac);
        FUN_00410f20(*(undefined8 *)(lVar6 + 0x11f));
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x470),local_1ac);
        FUN_004095f0(uVar4);
        FUN_004ae870(*(undefined8 *)(param_1 + 0x470),local_1ac);
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x470) + 0x10) == 0) {
      puVar5 = (undefined8 *)(PTR_DAT_02001120 + 0x431);
      puVar7 = (undefined8 *)(param_1 + 0x8c3);
      for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
      *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar5 + 4);
      *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar5 + 6);
    }
    lVar6 = *(longlong *)(param_1 + 0x470);
    if (0 < *(int *)(lVar6 + 0x10)) {
      local_1f8 = lVar6;
      puVar5 = (undefined8 *)FUN_004aeac0(lVar6,0);
      puVar7 = (undefined8 *)(param_1 + 0x8c3);
      for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
      *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar5 + 4);
      *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar5 + 6);
    }
  }
  (**(code **)(*local_res18 + 0xd8))(local_res18,&local_348,L"detail[@idx=\"2\"]");
  FUN_0041b890(local_30,local_348,&DAT_0127d1e2);
  if (local_30[0] != (longlong *)0x0) {
    local_191 = '\0';
    FUN_01275c10(local_30[0],L"parameter[@idx=\"0\"]",8,&local_191);
    local_368 = 0;
    local_360 = &local_1ac;
    local_192 = FUN_01d080f0(param_2,param_1,2,param_5 + 1);
    if (local_191 == '\0') {
      if (local_192 == '\0') {
        local_193 = '\x03';
      }
      else {
        local_193 = '\x02';
      }
    }
    else if (local_192 == '\0') {
      local_193 = '\x03';
      if (*(int *)(*(longlong *)(param_1 + 0x468) + 0x10) < local_1b0) {
        local_193 = '\0';
      }
    }
    else {
      local_193 = '\x01';
    }
    if (local_193 != '\x03') {
      local_184 = *(undefined8 *)(PTR_DAT_02001120 + 0x57f);
      uStack_17c = (undefined4)*(undefined8 *)(PTR_DAT_02001120 + 0x587);
      local_178 = (undefined4)((ulonglong)*(undefined8 *)(PTR_DAT_02001120 + 0x587) >> 0x20);
      uStack_174 = (undefined4)*(undefined8 *)(PTR_DAT_02001120 + 0x58f);
      local_170 = (undefined4)((ulonglong)*(undefined8 *)(PTR_DAT_02001120 + 0x58f) >> 0x20);
      uStack_16c = *(undefined4 *)(PTR_DAT_02001120 + 0x597);
      FUN_01275c10(local_30[0],L"parameter[@idx=\"1\"]",5,&local_178);
      FUN_01275c10(local_30[0],L"parameter[@idx=\"2\"]",5,&local_170);
      if (local_193 == '\0') {
        if ((*(int *)(*(longlong *)(param_1 + 0x468) + 0x10) < 10) &&
           ((double)CONCAT44(uStack_174,local_178) != (double)CONCAT44(uStack_16c,local_170))) {
          local_190 = (undefined8 *)FUN_004095c0(0x24);
          *(ulonglong *)((longlong)local_190 + 0xc) = CONCAT44(uStack_174,local_178);
          *(ulonglong *)((longlong)local_190 + 0x14) = CONCAT44(uStack_16c,local_170);
          *(double *)((longlong)local_190 + 0x1c) =
               ((double)CONCAT44(uStack_174,local_178) + (double)CONCAT44(uStack_16c,local_170)) /
               2.0;
          *local_190 = param_2;
          *(char *)(local_190 + 1) = (char)param_5 + '\x01';
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x468),local_190);
        }
      }
      else if (local_193 == '\x01') {
        local_1d8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x468),local_1ac);
        if ((double)CONCAT44(uStack_174,local_178) != (double)CONCAT44(uStack_16c,local_170)) {
          *(ulonglong *)(local_1d8 + 0xc) = CONCAT44(uStack_174,local_178);
          *(ulonglong *)(local_1d8 + 0x14) = CONCAT44(uStack_16c,local_170);
          *(double *)(local_1d8 + 0x1c) =
               ((double)CONCAT44(uStack_174,local_178) + (double)CONCAT44(uStack_16c,local_170)) /
               2.0;
        }
      }
      else if (local_193 == '\x02') {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x468),local_1ac);
        FUN_004095f0(uVar4);
        FUN_004ae870(*(undefined8 *)(param_1 + 0x468),local_1ac);
      }
    }
    puVar1 = PTR_DAT_02001120;
    lVar6 = *(longlong *)(param_1 + 0x468);
    if (*(int *)(lVar6 + 0x10) < 1) {
      puVar5 = (undefined8 *)(PTR_DAT_02001120 + 0x587);
      *(undefined8 *)(param_1 + 0xa11) = *(undefined8 *)(PTR_DAT_02001120 + 0x57f);
      *(undefined8 *)(param_1 + 0xa19) = *puVar5;
      *(undefined8 *)(param_1 + 0xa21) = *(undefined8 *)(puVar1 + 0x58f);
      *(undefined4 *)(param_1 + 0xa29) = *(undefined4 *)(puVar1 + 0x597);
    }
    else {
      local_200 = lVar6;
      puVar5 = (undefined8 *)FUN_004aeac0(lVar6,0);
      *(undefined8 *)(param_1 + 0xa11) = *puVar5;
      *(undefined8 *)(param_1 + 0xa19) = puVar5[1];
      *(undefined8 *)(param_1 + 0xa21) = puVar5[2];
      *(undefined4 *)(param_1 + 0xa29) = *(undefined4 *)(puVar5 + 3);
    }
  }
  FUN_0041b800(&local_348);
  FUN_00414560(&local_240,4);
  FUN_00417840(&local_220,&DAT_00b9f8e0,2);
  FUN_00414480(&local_1a0);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res18);
  FUN_00414480(&param_7);
  return;
}

