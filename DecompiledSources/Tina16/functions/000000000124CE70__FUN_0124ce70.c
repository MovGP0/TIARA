/* Ghidra address: 0124ce70 */
/* Ghidra symbol: FUN_0124ce70 */


undefined4 *
FUN_0124ce70(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  char *pcVar1;
  short *psVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_res8 [4];
  undefined1 auStack_128 [40];
  longlong *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  int local_d4;
  int local_d0;
  short local_cc;
  short local_ca;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_res8[0] = param_1;
  local_100 = param_2;
  local_f8 = param_3;
  local_f0 = param_4;
  FUN_00414610(param_1);
  iVar7 = FUN_00416db0(local_res8[0],L"line");
  if (iVar7 == 0) {
    puVar9 = (undefined4 *)FUN_004095c0(0x28);
    *puVar9 = 0x65;
    puVar9[1] = 0x105;
    puVar9[2] = 0x1c;
    local_e8 = puVar9;
    (**(code **)(*local_100 + 0x100))(local_100,local_60,L"points");
    FUN_00416ba0(&local_48,local_60[0],&DAT_0124dbc0);
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)(puVar9 + 3) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0xe) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)(puVar9 + 4) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x12) = uVar4;
    local_40 = FUN_01242120(puVar9 + 3);
    uVar8 = FUN_00b905f0(*local_f8,(short)local_40 + -1);
    *local_f8 = uVar8;
    uVar8 = FUN_00b905f0(*local_f0,local_40._2_2_ + -1);
    *local_f0 = uVar8;
    uVar8 = FUN_00b905e0(*param_5,local_40._4_2_ + 1);
    *param_5 = uVar8;
    uVar8 = FUN_00b905e0(*param_6,local_40._6_2_ + 1);
    *param_6 = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_68,L"color");
    uVar8 = FUN_0043fd00(local_68,0xff000000);
    uVar8 = FUN_01242280(uVar8);
    puVar9[5] = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_70,L"width");
    uVar4 = FUN_0043fc50(local_70,1);
    *(undefined2 *)(puVar9 + 6) = uVar4;
    *(undefined1 *)((longlong)local_e8 + 0x1a) = 0;
    *(undefined2 *)((longlong)local_e8 + 0x1b) = 100;
    *(undefined4 *)((longlong)local_e8 + 0x1d) = 0xfffffffe;
    *(undefined1 *)((longlong)local_e8 + 0x21) = 0;
    *(undefined2 *)((longlong)local_e8 + 0x22) = 100;
    local_e8[9] = 0xfffffffe;
  }
  iVar7 = FUN_00416db0(local_res8[0],L"rectangle");
  if (((iVar7 == 0) || (iVar7 = FUN_00416db0(local_res8[0],L"ellipse"), iVar7 == 0)) ||
     (iVar7 = FUN_00416db0(local_res8[0],&DAT_0124dc3c), iVar7 == 0)) {
    puVar9 = (undefined4 *)FUN_004095c0(0x1f);
    *puVar9 = 0x66;
    puVar9[1] = 0x105;
    puVar9[2] = 0x13;
    pcVar1 = (char *)(puVar9 + 3);
    local_e8 = puVar9;
    iVar7 = FUN_00416db0(local_res8[0],L"rectangle");
    if (iVar7 == 0) {
      *pcVar1 = '\0';
    }
    else {
      iVar7 = FUN_00416db0(local_res8[0],L"ellipse");
      if (iVar7 == 0) {
        *pcVar1 = '\x01';
      }
      else {
        *pcVar1 = '\x02';
      }
    }
    (**(code **)(*local_100 + 0x100))(local_100,&local_78,L"points");
    FUN_00416ba0(&local_48,local_78,&DAT_0124dbc0);
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0xd) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0xf) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x11) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x13) = uVar4;
    if (*pcVar1 == '\x02') {
      iVar7 = FUN_012421e0(&local_48);
      if ((iVar7 == 0x5a) || (iVar7 == 0xb4)) {
        FUN_01242110((longlong)puVar9 + 0xd,(longlong)puVar9 + 0x11);
      }
      *(short *)((longlong)puVar9 + 0xd) =
           (short)(((int)*(short *)((longlong)puVar9 + 0xd) +
                   (int)*(short *)((longlong)puVar9 + 0x11)) / 2);
      if ((iVar7 == 0xb4) || (iVar7 == 0x10e)) {
        FUN_01242110((longlong)puVar9 + 0xf,(longlong)puVar9 + 0x13);
      }
      *(short *)((longlong)puVar9 + 0x13) =
           (short)(((int)*(short *)((longlong)puVar9 + 0x13) +
                   (int)*(short *)((longlong)puVar9 + 0xf)) / 2);
    }
    local_40 = FUN_01242120((longlong)puVar9 + 0xd);
    uVar8 = FUN_00b905f0(*local_f8,(longlong)(short)local_40);
    *local_f8 = uVar8;
    uVar8 = FUN_00b905f0(*local_f0,(longlong)local_40._2_2_);
    *local_f0 = uVar8;
    uVar8 = FUN_00b905e0(*param_5,(longlong)local_40._4_2_);
    *param_5 = uVar8;
    uVar8 = FUN_00b905e0(*param_6,(longlong)local_40._6_2_);
    *param_6 = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_80,L"color");
    uVar8 = FUN_0043fd00(local_80,0xff000000);
    uVar8 = FUN_01242280(uVar8);
    *(undefined4 *)((longlong)puVar9 + 0x15) = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_50,L"fill");
    if (local_50 == 0) {
      *(undefined4 *)((longlong)puVar9 + 0x19) = 0xfffffffe;
    }
    else {
      uVar8 = FUN_0043fcb0(local_50);
      uVar8 = FUN_01242280(uVar8);
      *(undefined4 *)((longlong)puVar9 + 0x19) = uVar8;
    }
    (**(code **)(*local_100 + 0x100))(local_100,&local_88,L"width");
    uVar4 = FUN_0043fc50(local_88,1);
    *(undefined2 *)((longlong)puVar9 + 0x1d) = uVar4;
  }
  iVar7 = FUN_00416db0(local_res8[0],L"polygon");
  if (iVar7 == 0) {
    (**(code **)(*local_100 + 0x100))(local_100,&local_90,L"points");
    FUN_00416ba0(&local_48,local_90,&DAT_0124dbc0);
    local_d4 = FUN_0124cdd0(auStack_128,local_48);
    iVar7 = local_d4 * 4;
    puVar9 = (undefined4 *)FUN_004095c0((longlong)(iVar7 + 0x20));
    *puVar9 = 0x68;
    puVar9[1] = 0x105;
    puVar9[2] = iVar7 + 0x14;
    local_cc = 0x7fff;
    local_ca = 0x7fff;
    sVar5 = -0x7fff;
    sVar6 = -0x7fff;
    local_d0 = 0;
    local_e0 = puVar9 + 8;
    local_e8 = puVar9;
    while (local_48 != 0) {
      uVar4 = FUN_012421e0(&local_48);
      puVar3 = local_e0;
      lVar11 = (longlong)local_d0;
      *(undefined2 *)(local_e0 + lVar11) = uVar4;
      uVar4 = FUN_012421e0(&local_48);
      *(undefined2 *)((longlong)puVar3 + lVar11 * 4 + 2) = uVar4;
      local_cc = FUN_00b905f0((longlong)local_cc,(longlong)*(short *)(puVar3 + lVar11));
      sVar5 = FUN_00b905e0((longlong)sVar5,(longlong)*(short *)(puVar3 + lVar11));
      local_ca = FUN_00b905f0((longlong)local_ca,
                              (longlong)*(short *)((longlong)puVar3 + lVar11 * 4 + 2));
      sVar6 = FUN_00b905e0((longlong)sVar6,(longlong)*(short *)((longlong)puVar3 + lVar11 * 4 + 2));
      local_d0 = local_d0 + 1;
    }
    uVar10 = FUN_00b95b20((longlong)local_cc,(longlong)local_ca,(longlong)sVar5,(longlong)sVar6);
    *(undefined8 *)(puVar9 + 3) = uVar10;
    local_40 = FUN_01242120(puVar9 + 3);
    uVar8 = FUN_00b905f0(*local_f8,(longlong)(short)local_40);
    *local_f8 = uVar8;
    uVar8 = FUN_00b905f0(*local_f0,(longlong)local_40._2_2_);
    *local_f0 = uVar8;
    uVar8 = FUN_00b905e0(*param_5,(longlong)local_40._4_2_);
    *param_5 = uVar8;
    uVar8 = FUN_00b905e0(*param_6,(longlong)local_40._6_2_);
    *param_6 = uVar8;
    local_d0 = 0;
    iVar7 = local_d4;
    if (-1 < local_d4 + -1) {
      do {
        *(short *)(local_e0 + local_d0) = *(short *)(local_e0 + local_d0) - local_cc;
        psVar2 = (short *)((longlong)local_e0 + (longlong)local_d0 * 4 + 2);
        *psVar2 = *psVar2 - local_ca;
        local_d0 = local_d0 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    (**(code **)(*local_100 + 0x100))(local_100,&local_98,L"color");
    uVar8 = FUN_0043fd00(local_98,0xff000000);
    uVar8 = FUN_01242280(uVar8);
    puVar9[5] = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_50,L"fill");
    if (local_50 == 0) {
      puVar9[6] = 0xfffffffe;
    }
    else {
      uVar8 = FUN_0043fcb0(local_50);
      uVar8 = FUN_01242280(uVar8);
      puVar9[6] = uVar8;
    }
    (**(code **)(*local_100 + 0x100))(local_100,&local_a0,L"width");
    uVar4 = FUN_0043fc50(local_a0,1);
    *(undefined2 *)(puVar9 + 7) = uVar4;
    *(short *)((longlong)puVar9 + 0x1e) = (short)local_d4;
  }
  iVar7 = FUN_00416db0(local_res8[0],L"edfarc");
  if (iVar7 == 0) {
    puVar9 = (undefined4 *)FUN_004095c0(0x28);
    *puVar9 = 0x6b;
    puVar9[1] = 0x105;
    puVar9[2] = 0x16;
    local_e8 = puVar9;
    (**(code **)(*local_100 + 0x100))(local_100,&local_a8,L"points");
    FUN_00416ba0(&local_48,local_a8,&DAT_0124dbc0);
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)(puVar9 + 3) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0xe) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)(puVar9 + 4) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x12) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)(puVar9 + 5) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x16) = uVar4;
    local_40 = FUN_01242120(puVar9 + 3);
    uVar8 = FUN_00b905f0(*local_f8,(longlong)(short)local_40);
    *local_f8 = uVar8;
    uVar8 = FUN_00b905f0(*local_f0,(longlong)local_40._2_2_);
    *local_f0 = uVar8;
    uVar8 = FUN_00b905e0(*param_5,(longlong)local_40._4_2_);
    *param_5 = uVar8;
    uVar8 = FUN_00b905e0(*param_6,(longlong)local_40._6_2_);
    *param_6 = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_b0,L"color");
    uVar8 = FUN_0043fd00(local_b0,0xff000000);
    uVar8 = FUN_01242280(uVar8);
    puVar9[6] = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_50,L"fill");
    if (local_50 == 0) {
      puVar9[7] = 0xfffffffe;
    }
    else {
      uVar8 = FUN_0043fcb0(local_50);
      uVar8 = FUN_01242280(uVar8);
      puVar9[7] = uVar8;
    }
    (**(code **)(*local_100 + 0x100))(local_100,&local_b8,L"width");
    uVar4 = FUN_0043fc50(local_b8,1);
    *(undefined2 *)(puVar9 + 8) = uVar4;
  }
  iVar7 = FUN_00416db0(local_res8[0],L"arrowarc");
  if (iVar7 == 0) {
    puVar9 = (undefined4 *)FUN_004095c0(0x27);
    *puVar9 = 0x69;
    puVar9[1] = 0x105;
    puVar9[2] = 0x1b;
    local_e8 = puVar9;
    (**(code **)(*local_100 + 0x100))(local_100,&local_c0,L"points");
    FUN_00416ba0(&local_48,local_c0,&DAT_0124dbc0);
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0xd) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0xf) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x11) = uVar4;
    uVar4 = FUN_012421e0(&local_48);
    *(undefined2 *)((longlong)puVar9 + 0x13) = uVar4;
    iVar7 = FUN_012421e0(&local_48);
    if (iVar7 < 0x10f) {
      if (iVar7 < -0xb4) {
        FUN_01242110((longlong)puVar9 + 0xf,(longlong)puVar9 + 0x13);
      }
      else if (0x5a < iVar7) {
        FUN_01242110((longlong)puVar9 + 0xd,(longlong)puVar9 + 0x11);
        FUN_01242110((longlong)puVar9 + 0xf,(longlong)puVar9 + 0x13);
      }
    }
    else {
      FUN_01242110((longlong)puVar9 + 0xd,(longlong)puVar9 + 0x11);
    }
    local_40 = FUN_01242120((longlong)puVar9 + 0xd);
    uVar8 = FUN_00b905f0(*local_f8,(short)local_40 + -1);
    *local_f8 = uVar8;
    uVar8 = FUN_00b905f0(*local_f0,local_40._2_2_ + -1);
    *local_f0 = uVar8;
    uVar8 = FUN_00b905e0(*param_5,local_40._4_2_ + 1);
    *param_5 = uVar8;
    uVar8 = FUN_00b905e0(*param_6,local_40._6_2_ + 1);
    *param_6 = uVar8;
    (**(code **)(*local_100 + 0x100))(local_100,&local_c8,L"color");
    uVar8 = FUN_0043fd00(local_c8,0xff000000);
    uVar8 = FUN_01242280(uVar8);
    *(undefined4 *)((longlong)puVar9 + 0x15) = uVar8;
    *(undefined1 *)((longlong)local_e8 + 0x19) = 0;
    *(undefined2 *)((longlong)local_e8 + 0x1a) = 100;
    local_e8[7] = 0xfffffffe;
    *(undefined1 *)(local_e8 + 8) = 0;
    *(undefined2 *)((longlong)local_e8 + 0x21) = 100;
    *(undefined4 *)((longlong)local_e8 + 0x23) = 0xfffffffe;
  }
  FUN_00414560(&local_c8,0xe);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_res8);
  return local_e8;
}

