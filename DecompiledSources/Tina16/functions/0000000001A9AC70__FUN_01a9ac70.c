/* Ghidra address: 01a9ac70 */
/* Ghidra symbol: FUN_01a9ac70 */


void FUN_01a9ac70(longlong *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_378 [32];
  undefined4 *local_358;
  int local_350;
  double local_348;
  double local_340;
  int local_338;
  int *local_330;
  undefined4 local_328;
  byte local_320;
  undefined1 local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  longlong *local_2e8;
  undefined1 local_2de;
  undefined1 local_2dd;
  int local_2dc;
  int *local_2d8;
  int *local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [2];
  int local_290;
  int local_28c;
  undefined8 local_288;
  int local_280;
  int local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240 [256];
  undefined1 local_140 [256];
  byte *local_40 [3];
  
  local_2c0 = 0;
  local_2c8 = 0;
  local_2a8 = 0;
  local_2a0[0] = 0;
  iVar9 = *param_2;
  local_2e8 = param_1;
  local_2d8 = param_2;
  if (iVar9 < 0x69) {
    if (iVar9 == 0x68) {
      uVar7 = (**(code **)(*param_1 + 0xd8))(param_1,param_2[5]);
      FUN_01a9cba0(local_2e8,uVar7,(longlong)(short)param_2[7]);
      if ((param_2[6] == -2) || ((*(ushort *)(local_2e8 + 0x2c) & 2) != 0)) {
        FUN_01a9cf50(local_2e8);
      }
      else {
        uVar7 = (**(code **)(*local_2e8 + 0xd8))(local_2e8,param_2[6]);
        FUN_01a9cf10(local_2e8,uVar7);
      }
      local_358 = (undefined4 *)CONCAT44(local_358._4_4_,(int)*(short *)((longlong)param_2 + 0x1e));
      FUN_01a9d640(local_2e8,(longlong)(short)param_2[3],
                   (longlong)*(short *)((longlong)param_2 + 0xe),param_2 + 8);
    }
    else if (iVar9 == 100) {
      bVar2 = *(byte *)((longlong)param_2 + 0x1f);
      if ((bVar2 & 4) == 0) {
        uVar7 = (**(code **)(*param_1 + 0xd0))(param_1,0x17);
        FUN_01a9cba0(local_2e8,uVar7,1);
        uVar7 = 300;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0xd0))(param_1,0x17);
        FUN_01a9cba0(local_2e8,uVar7,2);
        uVar7 = 600;
      }
      FUN_01a9cf50(local_2e8);
      FUN_01a9d890(local_2e8,(char)param_2[8],(longlong)*(short *)((longlong)param_2 + 0x21),
                   (longlong)*(short *)((longlong)param_2 + 0x23));
      uVar8 = *(byte *)((longlong)param_2 + 0x1f) / 0x10;
      iVar9 = uVar8 * 4;
      local_268 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x2a),
                           iVar9 + 2 + *(int *)((longlong)param_2 + 0x26));
      if (uVar8 != 0) {
        if ((bVar2 & 2) != 0) {
          FUN_01a9d770(local_2e8,iVar9,0xfffffffd);
          FUN_01a9d7c0(local_2e8,iVar9 + 3,0);
          FUN_01a9d7c0(local_2e8,iVar9,3);
        }
        if ((bVar2 & 0xf) < 8) {
          if ((bVar2 & 1) != 0) {
            iVar9 = iVar9 + -4;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          FUN_01a9d770(local_2e8,0,0);
          FUN_01a9d7c0(local_2e8,iVar9,0);
          if ((bVar2 & 1) != 0) {
            local_358 = &local_270;
            FUN_01a9d810(local_2e8,iVar9,0xfffffffe,&local_26c);
            local_358 = &local_278;
            FUN_01a9d810(local_2e8,iVar9 + 4,2,&local_274);
            local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_278);
            FUN_01a9d0e0(local_2e8,local_26c,local_270,local_274);
          }
        }
      }
      if ((*(char *)((longlong)param_2 + 0x1d) != '\0') &&
         ((*(ushort *)(local_2e8 + 0x2c) & 2) == 0)) {
        cVar3 = (char)param_2[8];
        if (cVar3 == '\0') {
          if (*(char *)((longlong)local_2e8 + 0x164) == '\0') {
            local_2de = 0;
          }
          else {
            local_2de = 2;
          }
          local_2dd = 1;
        }
        else if (cVar3 == '\x01') {
          local_2de = 2;
          local_2dd = 1;
        }
        else if (cVar3 == '\x02') {
          if (*(char *)((longlong)local_2e8 + 0x164) == '\0') {
            local_2de = 0;
          }
          else {
            local_2de = 2;
          }
          local_2dd = 1;
        }
        else if (cVar3 == '\x03') {
          local_2de = 2;
          local_2dd = 1;
        }
        if ((*(ushort *)(local_2e8 + 0x2c) & 1) == 0) {
          local_338 = (**(code **)(*local_2e8 + 0xd8))
                                (local_2e8,*(undefined4 *)((longlong)param_2 + 0x36));
        }
        else {
          local_338 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,7);
        }
        if ((*(ushort *)(local_2e8 + 0x2c) & 4) != 0) {
          local_338 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,0);
        }
        if ((*(ushort *)(local_2e8 + 0x2c) & 0x20) != 0) {
          local_338 = 0x66d7;
        }
        local_358 = (undefined4 *)((longlong)&local_268 + 4);
        FUN_01a9d810(local_2e8,local_268 & 0xffffffff,local_268._4_4_,&local_268);
        local_268 = FUN_01a9cdf0(local_2e8,&local_268);
        FUN_004169a0(local_2a0,param_2 + 3);
        local_358 = (undefined4 *)CONCAT71(local_358._1_7_,local_2dd);
        local_350 = CONCAT31(local_350._1_3_,
                             (char)((ulonglong)
                                    ((uint)*(byte *)(param_2 + 8) +
                                    (uint)*(byte *)((longlong)local_2e8 + 0x162)) % 4));
        local_348 = (*(double *)((longlong)param_2 + 0x2e) * 0.9) / 8.0;
        local_340 = (*(double *)((longlong)param_2 + 0x2e) * 0.9) / 8.0;
        local_330 = (int *)CONCAT44(local_330._4_4_,*(undefined4 *)((longlong)local_2e8 + 0xfc));
        local_320 = 0;
        local_318 = (*(ushort *)(local_2e8 + 0x2c) & 2) != 0;
        local_310 = local_2e8[0x21];
        local_308 = local_2a0[0];
        local_300 = 0;
        local_2f8 = 0;
        local_328 = uVar7;
        FUN_01a98770(local_2e8,local_268 & 0xffffffff,local_268._4_4_,local_2de);
      }
      if (((*(char *)((longlong)param_2 + 0x1d) == '\0') &&
          ((*(ushort *)(local_2e8 + 0x2c) & 0x10) != 0)) &&
         ((*(ushort *)(local_2e8 + 0x2c) & 2) == 0)) {
        cVar3 = (char)param_2[8];
        if (cVar3 == '\0') {
          if (*(char *)((longlong)local_2e8 + 0x164) == '\0') {
            local_2de = 2;
          }
          else {
            local_2de = 0;
          }
          local_2dd = 1;
        }
        else if (cVar3 == '\x01') {
          local_2de = 1;
          if (*(char *)((longlong)local_2e8 + 0x164) == '\0') {
            local_2dd = 2;
          }
          else {
            local_2dd = 0;
          }
        }
        else if (cVar3 == '\x02') {
          if (*(char *)((longlong)local_2e8 + 0x164) == '\0') {
            local_2de = 0;
          }
          else {
            local_2de = 2;
          }
          local_2dd = 1;
        }
        else if (cVar3 == '\x03') {
          local_2de = 1;
          if (*(char *)((longlong)local_2e8 + 0x164) == '\0') {
            local_2dd = 0;
          }
          else {
            local_2dd = 2;
          }
        }
        if ((*(ushort *)(local_2e8 + 0x2c) & 1) == 0) {
          iVar9 = (**(code **)(*local_2e8 + 0xd8))
                            (local_2e8,*(undefined4 *)((longlong)param_2 + 0x36));
        }
        else {
          iVar9 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,7);
        }
        if ((*(ushort *)(local_2e8 + 0x2c) & 4) != 0) {
          iVar9 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,0);
        }
        if ((*(ushort *)(local_2e8 + 0x2c) & 0x20) != 0) {
          iVar9 = 0x66d7;
        }
        local_268 = 0xfffffffc;
        local_358 = (undefined4 *)((longlong)&local_268 + 4);
        FUN_01a9d810(local_2e8,0xfffffffc,0,&local_268);
        local_268 = FUN_01a9cdf0(local_2e8,&local_268);
        FUN_004169a0(&local_2a8,param_2 + 3);
        local_358 = (undefined4 *)CONCAT71(local_358._1_7_,local_2dd);
        local_350 = CONCAT31(local_350._1_3_,*(undefined1 *)((longlong)local_2e8 + 0x162));
        local_348 = 0.9;
        local_340 = 0.9;
        local_330 = (int *)CONCAT44(local_330._4_4_,*(undefined4 *)((longlong)local_2e8 + 0xfc));
        local_320 = 0;
        local_318 = (*(ushort *)(local_2e8 + 0x2c) & 2) != 0;
        local_310 = local_2e8[0x21];
        local_308 = local_2a8;
        local_300 = 0;
        local_2f8 = 0;
        local_338 = iVar9;
        local_328 = uVar7;
        FUN_01a98770(local_2e8,local_268 & 0xffffffff,local_268._4_4_,local_2de);
      }
      if (((bVar2 & 0xf) < 0xf) && ((*(ushort *)(local_2e8 + 0x2c) & 0x80) != 0)) {
        uVar7 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,0x19);
        FUN_01a9cba0(local_2e8,uVar7,0);
        FUN_01a9d770(local_2e8,0xffffffff,0xffffffff);
        FUN_01a9d7c0(local_2e8,1,1);
        FUN_01a9d770(local_2e8,1,0xffffffff);
        FUN_01a9d7c0(local_2e8,0xffffffff,1);
      }
    }
    else if (iVar9 == 0x65) {
      piVar1 = param_2 + 3;
      uVar7 = (**(code **)(*param_1 + 0xd8))(param_1,param_2[5]);
      FUN_01a9cba0(local_2e8,uVar7,(longlong)(short)param_2[6]);
      FUN_01a9cce0(local_2e8,(longlong)(short)*piVar1,(longlong)*(short *)((longlong)param_2 + 0xe))
      ;
      FUN_01a9cd30(local_2e8,(longlong)(short)param_2[4],
                   (longlong)*(short *)((longlong)param_2 + 0x12));
      local_288 = FUN_00498310((longlong)(short)*piVar1,
                               (longlong)*(short *)((longlong)param_2 + 0xe));
      local_2b0 = FUN_00498310((longlong)(short)param_2[4],
                               (longlong)*(short *)((longlong)param_2 + 0x12));
      uVar15 = FUN_01a9ac20(&local_288,&local_2b0);
      FUN_01a9a880(local_2e8,&local_288,uVar15,(longlong)param_2 + 0x1a);
      local_288 = FUN_00498310((longlong)(short)param_2[4],
                               (longlong)*(short *)((longlong)param_2 + 0x12));
      local_2b0 = FUN_00498310((longlong)(short)*piVar1,
                               (longlong)*(short *)((longlong)param_2 + 0xe));
      uVar15 = FUN_01a9ac20(&local_288,&local_2b0);
      FUN_01a9a880(local_2e8,&local_288,uVar15,(longlong)param_2 + 0x21);
    }
    else if (iVar9 == 0x66) {
      uVar7 = (**(code **)(*param_1 + 0xd8))(param_1,*(undefined4 *)((longlong)param_2 + 0x15));
      FUN_01a9cba0(local_2e8,uVar7,(longlong)*(short *)((longlong)param_2 + 0x1d));
      if ((*(int *)((longlong)param_2 + 0x19) == -2) || ((*(ushort *)(local_2e8 + 0x2c) & 2) != 0))
      {
        FUN_01a9cf50(local_2e8);
      }
      else {
        uVar7 = (**(code **)(*local_2e8 + 0xd8))
                          (local_2e8,*(undefined4 *)((longlong)param_2 + 0x19));
        FUN_01a9cf10(local_2e8,uVar7);
      }
      cVar3 = (char)param_2[3];
      if (cVar3 == '\0') {
        local_358 = (undefined4 *)
                    CONCAT44(local_358._4_4_,(int)*(short *)((longlong)param_2 + 0x13));
        FUN_01a9cfd0(local_2e8,(longlong)*(short *)((longlong)param_2 + 0xd),
                     (longlong)*(short *)((longlong)param_2 + 0xf),
                     (longlong)*(short *)((longlong)param_2 + 0x11));
      }
      else if (cVar3 == '\x01') {
        local_358 = (undefined4 *)
                    CONCAT44(local_358._4_4_,(int)*(short *)((longlong)param_2 + 0x13));
        FUN_01a9d0e0(local_2e8,(longlong)*(short *)((longlong)param_2 + 0xd),
                     (longlong)*(short *)((longlong)param_2 + 0xf),
                     (longlong)*(short *)((longlong)param_2 + 0x11));
      }
      else if (cVar3 == '\x02') {
        local_248 = FUN_00498310((longlong)*(short *)((longlong)param_2 + 0xd),
                                 (longlong)*(short *)((longlong)param_2 + 0xf));
        uVar10 = FUN_00498310((longlong)*(short *)((longlong)param_2 + 0x11),
                              (longlong)*(short *)((longlong)param_2 + 0x13));
        iVar9 = (int)local_248;
        local_250._0_4_ = (int)uVar10;
        uVar8 = (uint)((int)local_250 < (int)local_248);
        iVar12 = local_248._4_4_;
        local_250._4_4_ = (int)(uVar10 >> 0x20);
        if (local_250._4_4_ < local_248._4_4_) {
          uVar8 = uVar8 + 2;
        }
        local_250 = uVar10;
        if (uVar8 - 1 != 0xffffffff) {
          if (uVar8 - 1 < 2) {
            if (*(int *)((longlong)param_2 + 0x19) != -2) {
              FUN_01a9cf90(local_2e8);
              local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_250._4_4_ * 2 - iVar12);
              local_350 = iVar9;
              local_348 = (double)CONCAT44(local_348._4_4_,iVar12);
              local_340 = (double)CONCAT44(local_340._4_4_,(int)local_250);
              local_338 = local_250._4_4_;
              FUN_01a9d1f0(local_2e8,iVar9 * 2 - (int)local_250,iVar12,(int)local_250);
              uVar7 = (**(code **)(*local_2e8 + 0xd8))
                                (local_2e8,*(undefined4 *)((longlong)param_2 + 0x15));
              FUN_01a9cba0(local_2e8,uVar7,(longlong)*(short *)((longlong)param_2 + 0x1d));
            }
            local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_250._4_4_ * 2 - iVar12);
            local_350 = iVar9;
            local_348 = (double)CONCAT44(local_348._4_4_,iVar12);
            local_340 = (double)CONCAT44(local_340._4_4_,(int)local_250);
            local_338 = local_250._4_4_;
            FUN_01a9d3d0(local_2e8,iVar9 * 2 - (int)local_250,iVar12,(int)local_250);
            goto LAB_01a9cae2;
          }
          if (uVar8 != 3) goto LAB_01a9cae2;
        }
        if (*(int *)((longlong)param_2 + 0x19) != -2) {
          FUN_01a9cf90(local_2e8);
          local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_250._4_4_ * 2 - iVar12);
          local_350 = (int)local_250;
          local_348 = (double)CONCAT44(local_348._4_4_,local_250._4_4_);
          local_340 = (double)CONCAT44(local_340._4_4_,iVar9);
          local_338 = iVar12;
          FUN_01a9d1f0(local_2e8,iVar9 * 2 - (int)local_250,iVar12,(int)local_250);
          uVar7 = (**(code **)(*local_2e8 + 0xd8))
                            (local_2e8,*(undefined4 *)((longlong)param_2 + 0x15));
          FUN_01a9cba0(local_2e8,uVar7,(longlong)*(short *)((longlong)param_2 + 0x1d));
        }
        local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_250._4_4_ * 2 - iVar12);
        local_350 = (int)local_250;
        local_348 = (double)CONCAT44(local_348._4_4_,local_250._4_4_);
        local_340 = (double)CONCAT44(local_340._4_4_,iVar9);
        local_338 = iVar12;
        FUN_01a9d3d0(local_2e8,iVar9 * 2 - (int)local_250,iVar12,(int)local_250);
      }
    }
    else if ((iVar9 == 0x67) && ((*(ushort *)(param_1 + 0x2c) & 2) == 0)) {
      local_40[0] = (byte *)(param_2 + 3);
      FUN_00409a70(local_40[0],local_140,*local_40[0] + 1);
      FUN_00b909d0(local_40,*local_40[0] + 2);
      FUN_00409a70(local_40[0],local_240,*local_40[0] + 1);
      FUN_00b909d0(local_40,*local_40[0] + 2);
      pbVar4 = local_40[0];
      if ((*(ushort *)(local_2e8 + 0x2c) & 1) == 0) {
        iVar9 = (**(code **)(*local_2e8 + 0xd8))(local_2e8,*(undefined4 *)(local_40[0] + 0xe));
      }
      else {
        iVar9 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,0xf);
      }
      if ((*(ushort *)(local_2e8 + 0x2c) & 4) != 0) {
        iVar9 = (**(code **)(*local_2e8 + 0xd0))(local_2e8,0);
      }
      if (pbVar4[0xc] == 0) {
        uVar7 = 300;
      }
      else {
        uVar7 = 700;
      }
      local_2b0 = FUN_00498310((longlong)*(short *)pbVar4,(longlong)*(short *)(pbVar4 + 2));
      local_268 = FUN_01a9cdf0(local_2e8,&local_2b0);
      local_2de = 0;
      local_2dd = 0;
      if (*(char *)((longlong)local_2e8 + 0x164) != '\0') {
        if (*(char *)((longlong)local_2e8 + 0x163) == *(char *)((longlong)local_2e8 + 0x162)) {
          local_2de = 2;
        }
        else {
          cVar3 = *(char *)((longlong)local_2e8 + 0x163);
          if (cVar3 == '\0') {
            local_2de = 2;
            local_2dd = 0;
          }
          else if (cVar3 == '\x01') {
            local_2de = 0;
            local_2dd = 2;
          }
          else if (cVar3 == '\x02') {
            local_2de = 2;
            local_2dd = 0;
          }
          else if (cVar3 == '\x03') {
            local_2de = 0;
            local_2dd = 2;
          }
        }
      }
      FUN_004169a0(&local_2c0,local_240);
      FUN_004169a0(&local_2c8,local_140);
      local_358 = (undefined4 *)CONCAT71(local_358._1_7_,local_2dd);
      local_350 = CONCAT31(local_350._1_3_,*(undefined1 *)((longlong)local_2e8 + 0x162));
      local_348 = *(double *)(pbVar4 + 4);
      local_340 = *(double *)(pbVar4 + 4);
      local_330 = (int *)CONCAT44(local_330._4_4_,*(undefined4 *)((longlong)local_2e8 + 0xfc));
      local_320 = pbVar4[0xd];
      local_318 = (*(ushort *)(local_2e8 + 0x2c) & 2) != 0;
      local_310 = local_2c0;
      local_308 = local_2c8;
      local_300 = 0;
      local_2f8 = 0;
      local_338 = iVar9;
      local_328 = uVar7;
      FUN_01a98770(local_2e8,local_268 & 0xffffffff,local_268._4_4_,local_2de);
    }
  }
  else if (iVar9 == 0x69) {
    local_2d0 = param_2 + 3;
    uVar7 = (**(code **)(*param_1 + 0xd8))(param_1,*(undefined4 *)((longlong)param_2 + 0x15));
    FUN_01a9cba0(local_2e8,uVar7,1);
    FUN_01a9cf50(local_2e8);
    if ((char)*local_2d0 == '\0') {
      uVar8 = (int)*(short *)((longlong)local_2d0 + 5) - (int)*(short *)((longlong)local_2d0 + 1);
      uVar11 = (int)uVar8 >> 0x1f;
      uVar13 = (int)*(short *)((longlong)local_2d0 + 7) - (int)*(short *)((longlong)local_2d0 + 3);
      uVar14 = (int)uVar13 >> 0x1f;
      local_2dc = FUN_00b905f0((longlong)(int)((uVar8 ^ uVar11) - uVar11) / 4 & 0xffffffff,
                               (longlong)(int)((uVar13 ^ uVar14) - uVar14) / 4 & 0xffffffff);
      FUN_01a9cce0(local_2e8,(longlong)*(short *)((longlong)local_2d0 + 1),
                   (longlong)*(short *)((longlong)local_2d0 + 3));
      iVar9 = FUN_01a9ac60(auStack_378,
                           (int)*(short *)((longlong)local_2d0 + 5) -
                           (int)*(short *)((longlong)local_2d0 + 1));
      FUN_01a9cd30(local_2e8,(int)*(short *)((longlong)local_2d0 + 5) - iVar9 * local_2dc,
                   (longlong)*(short *)((longlong)local_2d0 + 3));
      if (0 < local_2dc) {
        iVar9 = FUN_01a9ac60(auStack_378,
                             (int)*(short *)((longlong)local_2d0 + 5) -
                             (int)*(short *)((longlong)local_2d0 + 1));
        iVar12 = FUN_01a9ac60(auStack_378,
                              (int)*(short *)((longlong)local_2d0 + 7) -
                              (int)*(short *)((longlong)local_2d0 + 3));
        if (iVar9 * iVar12 < 0) {
          iVar9 = FUN_01a9ac60(auStack_378,
                               (int)*(short *)((longlong)local_2d0 + 5) -
                               (int)*(short *)((longlong)local_2d0 + 1));
          iVar12 = FUN_01a9ac60(auStack_378,
                                (int)*(short *)((longlong)local_2d0 + 7) -
                                (int)*(short *)((longlong)local_2d0 + 3));
          iVar5 = FUN_01a9ac60(auStack_378,
                               (int)*(short *)((longlong)local_2d0 + 5) -
                               (int)*(short *)((longlong)local_2d0 + 1));
          iVar6 = FUN_01a9ac60(auStack_378,
                               (int)*(short *)((longlong)local_2d0 + 7) -
                               (int)*(short *)((longlong)local_2d0 + 3));
          local_358 = (undefined4 *)
                      CONCAT44(local_358._4_4_,
                               (int)*(short *)((longlong)local_2d0 + 3) + iVar12 * 2 * local_2dc);
          local_350 = (int)*(short *)((longlong)local_2d0 + 5) - iVar5 * local_2dc;
          local_348 = (double)CONCAT44(local_348._4_4_,(int)*(short *)((longlong)local_2d0 + 3));
          local_340 = (double)CONCAT44(local_340._4_4_,(int)*(short *)((longlong)local_2d0 + 5));
          local_338 = (int)*(short *)((longlong)local_2d0 + 3) + iVar6 * local_2dc;
          FUN_01a9d3d0(local_2e8,(int)*(short *)((longlong)local_2d0 + 5) - iVar9 * 2 * local_2dc,
                       (longlong)*(short *)((longlong)local_2d0 + 3),
                       (longlong)*(short *)((longlong)local_2d0 + 5));
        }
        else {
          iVar9 = FUN_01a9ac60(auStack_378,
                               (int)*(short *)((longlong)local_2d0 + 5) -
                               (int)*(short *)((longlong)local_2d0 + 1));
          iVar12 = FUN_01a9ac60(auStack_378,
                                (int)*(short *)((longlong)local_2d0 + 7) -
                                (int)*(short *)((longlong)local_2d0 + 3));
          iVar5 = FUN_01a9ac60(auStack_378,
                               (int)*(short *)((longlong)local_2d0 + 7) -
                               (int)*(short *)((longlong)local_2d0 + 3));
          iVar6 = FUN_01a9ac60(auStack_378,
                               (int)*(short *)((longlong)local_2d0 + 5) -
                               (int)*(short *)((longlong)local_2d0 + 1));
          local_358 = (undefined4 *)
                      CONCAT44(local_358._4_4_,
                               (int)*(short *)((longlong)local_2d0 + 3) + iVar12 * 2 * local_2dc);
          local_350 = (int)*(short *)((longlong)local_2d0 + 5);
          local_348 = (double)CONCAT44(local_348._4_4_,
                                       (int)*(short *)((longlong)local_2d0 + 3) + iVar5 * local_2dc)
          ;
          local_340 = (double)CONCAT44(local_340._4_4_,
                                       (int)*(short *)((longlong)local_2d0 + 5) - iVar6 * local_2dc)
          ;
          local_338 = (int)*(short *)((longlong)local_2d0 + 3);
          FUN_01a9d3d0(local_2e8,(int)*(short *)((longlong)local_2d0 + 5) - iVar9 * 2 * local_2dc,
                       (longlong)*(short *)((longlong)local_2d0 + 3),
                       (longlong)*(short *)((longlong)local_2d0 + 5));
        }
      }
      iVar9 = FUN_01a9ac60(auStack_378,
                           (int)*(short *)((longlong)local_2d0 + 7) -
                           (int)*(short *)((longlong)local_2d0 + 3));
      FUN_01a9cce0(local_2e8,(longlong)*(short *)((longlong)local_2d0 + 5),
                   (int)*(short *)((longlong)local_2d0 + 3) + iVar9 * local_2dc);
      FUN_01a9cd30(local_2e8,(longlong)*(short *)((longlong)local_2d0 + 5),
                   (longlong)*(short *)((longlong)local_2d0 + 7));
      local_288 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 1),
                               (longlong)*(short *)((longlong)local_2d0 + 3));
      local_2b0 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 5),
                               (longlong)*(short *)((longlong)local_2d0 + 3));
      uVar15 = FUN_01a9ac20(&local_288,&local_2b0);
      FUN_01a9a880(local_2e8,&local_288,uVar15,(char *)((longlong)local_2d0 + 0xd));
      local_288 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 5),
                               (longlong)*(short *)((longlong)local_2d0 + 7));
      local_2b0 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 5),
                               (longlong)*(short *)((longlong)local_2d0 + 3));
      uVar15 = FUN_01a9ac20(&local_288,&local_2b0);
      FUN_01a9a880(local_2e8,&local_288,uVar15,local_2d0 + 5);
    }
    else if ((char)*local_2d0 == '\x01') {
      iVar9 = FUN_01a9ac60(auStack_378,
                           (int)*(short *)((longlong)local_2d0 + 5) -
                           (int)*(short *)((longlong)local_2d0 + 1));
      iVar12 = FUN_01a9ac60(auStack_378,
                            (int)*(short *)((longlong)local_2d0 + 7) -
                            (int)*(short *)((longlong)local_2d0 + 3));
      if (iVar9 * iVar12 < 0) {
        local_358 = (undefined4 *)CONCAT44(local_358._4_4_,(int)*(short *)((longlong)local_2d0 + 7))
        ;
        local_350 = (int)*(short *)((longlong)local_2d0 + 1);
        local_348 = (double)CONCAT44(local_348._4_4_,(int)*(short *)((longlong)local_2d0 + 7));
        local_340 = (double)CONCAT44(local_340._4_4_,(int)*(short *)((longlong)local_2d0 + 5));
        local_338 = (int)*(short *)((longlong)local_2d0 + 7);
        FUN_01a9d3d0(local_2e8,(longlong)*(short *)((longlong)local_2d0 + 1),
                     (longlong)*(short *)((longlong)local_2d0 + 3),
                     (longlong)*(short *)((longlong)local_2d0 + 5));
      }
      else {
        local_358 = (undefined4 *)CONCAT44(local_358._4_4_,(int)*(short *)((longlong)local_2d0 + 7))
        ;
        local_350 = (int)*(short *)((longlong)local_2d0 + 5);
        local_348 = (double)CONCAT44(local_348._4_4_,(int)*(short *)((longlong)local_2d0 + 7));
        local_340 = (double)CONCAT44(local_340._4_4_,(int)*(short *)((longlong)local_2d0 + 1));
        local_338 = (int)*(short *)((longlong)local_2d0 + 7);
        FUN_01a9d3d0(local_2e8,(longlong)*(short *)((longlong)local_2d0 + 1),
                     (longlong)*(short *)((longlong)local_2d0 + 3),
                     (longlong)*(short *)((longlong)local_2d0 + 5));
      }
      dVar17 = (double)FUN_0040c760(0x4000000000000000);
      iVar9 = FUN_0040c770(((1.0 - 1.0 / dVar17) / 2.0) *
                           (double)((int)*(short *)((longlong)local_2d0 + 5) -
                                   (int)*(short *)((longlong)local_2d0 + 1)));
      local_288 = CONCAT44(local_288._4_4_,*(short *)((longlong)local_2d0 + 1) + iVar9);
      dVar17 = (double)FUN_0040c760(0x4000000000000000);
      iVar9 = FUN_0040c770(((1.0 / dVar17 + 1.0) / 2.0) *
                           (double)((int)*(short *)((longlong)local_2d0 + 7) -
                                   (int)*(short *)((longlong)local_2d0 + 3)));
      local_288._4_4_ = *(short *)((longlong)local_2d0 + 3) + iVar9;
      local_2b0 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 5),
                               (longlong)*(short *)((longlong)local_2d0 + 7));
      local_2b8 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 1),
                               (longlong)*(short *)((longlong)local_2d0 + 3));
      dVar17 = (double)FUN_01a9ac20(&local_2b0,&local_2b8);
      dVar16 = (double)FUN_0040bdd0(dVar17 - 1.5707963267948966);
      local_280 = FUN_0040c770(dVar16 * 8.0);
      local_280 = (int)local_288 - local_280;
      dVar16 = (double)FUN_0040bcd0(dVar17 - 1.5707963267948966);
      local_27c = FUN_0040c770(dVar16 * 8.0);
      local_27c = local_288._4_4_ + local_27c;
      if (*(char *)((longlong)local_2d0 + 0xd) != '\0') {
        FUN_01a9cce0(local_2e8,(int)local_288,local_288._4_4_);
        FUN_01a9cd30(local_2e8,local_280,local_27c);
        FUN_01a9a880(local_2e8,&local_280,dVar17,(char *)((longlong)local_2d0 + 0xd));
      }
      dVar17 = (double)FUN_0040c760(0x4000000000000000);
      iVar9 = FUN_0040c770(((1.0 / dVar17 + 1.0) / 2.0) *
                           (double)((int)*(short *)((longlong)local_2d0 + 5) -
                                   (int)*(short *)((longlong)local_2d0 + 1)));
      local_288 = CONCAT44(local_288._4_4_,*(short *)((longlong)local_2d0 + 1) + iVar9);
      dVar17 = (double)FUN_0040c760(0x4000000000000000);
      iVar9 = FUN_0040c770(((1.0 / dVar17 + 1.0) / 2.0) *
                           (double)((int)*(short *)((longlong)local_2d0 + 7) -
                                   (int)*(short *)((longlong)local_2d0 + 3)));
      local_288 = CONCAT44(*(short *)((longlong)local_2d0 + 3) + iVar9,(int)local_288);
      local_2b0 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 1),
                               (longlong)*(short *)((longlong)local_2d0 + 7));
      local_2b8 = FUN_00498310((longlong)*(short *)((longlong)local_2d0 + 5),
                               (longlong)*(short *)((longlong)local_2d0 + 3));
      dVar17 = (double)FUN_01a9ac20(&local_2b0,&local_2b8);
      dVar16 = (double)FUN_0040bdd0(dVar17 - 1.5707963267948966);
      local_280 = FUN_0040c770(dVar16 * 8.0);
      local_280 = (int)local_288 - local_280;
      dVar16 = (double)FUN_0040bcd0(dVar17 - 1.5707963267948966);
      local_27c = FUN_0040c770(dVar16 * 8.0);
      local_27c = local_288._4_4_ + local_27c;
      if ((char)local_2d0[5] != '\0') {
        FUN_01a9cce0(local_2e8,local_288 & 0xffffffff,local_288._4_4_);
        FUN_01a9cd30(local_2e8,local_280,local_27c);
        FUN_01a9a880(local_2e8,&local_280,dVar17,local_2d0 + 5);
      }
    }
  }
  else if (iVar9 == 0x6a) {
    local_358 = (undefined4 *)CONCAT71(local_358._1_7_,*(undefined1 *)((longlong)param_2 + 0x11));
    local_350 = CONCAT31(local_350._1_3_,*(undefined1 *)((longlong)param_2 + 0x12));
    local_348 = (double)CONCAT71(local_348._1_7_,*(undefined1 *)((longlong)param_2 + 0x13));
    local_340 = (double)CONCAT44(local_340._4_4_,param_2[5]);
    local_338 = param_2[7];
    local_330 = param_2 + 8;
    FUN_01a9fa10(param_1,(longlong)(short)param_2[3],(longlong)*(short *)((longlong)param_2 + 0xe),
                 (char)param_2[4]);
  }
  else if (iVar9 == 0x6b) {
    uVar7 = (**(code **)(*param_1 + 0xd8))(param_1,param_2[6]);
    FUN_01a9cba0(local_2e8,uVar7,(longlong)(short)param_2[8]);
    if ((param_2[7] == -2) || ((*(ushort *)(local_2e8 + 0x2c) & 2) != 0)) {
      FUN_01a9cf50(local_2e8);
    }
    else {
      uVar7 = (**(code **)(*local_2e8 + 0xd8))(local_2e8,param_2[7]);
      FUN_01a9cf10(local_2e8,uVar7);
    }
    local_248 = FUN_00498310((longlong)(short)param_2[3],
                             (longlong)*(short *)((longlong)param_2 + 0xe));
    local_250 = FUN_00498310((longlong)(short)param_2[4],
                             (longlong)*(short *)((longlong)param_2 + 0x12));
    iVar9 = (int)(short)param_2[3];
    local_290 = ((short)param_2[4] + iVar9) / 2;
    local_28c = ((int)*(short *)((longlong)param_2 + 0xe) +
                (int)*(short *)((longlong)param_2 + 0x12)) / 2;
    iVar9 = (short)param_2[4] - iVar9;
    iVar12 = iVar9 / 2;
    dVar17 = (double)FUN_0040bcd0((double)((float)(int)(short)param_2[5] * 0.017453292),
                                  (longlong)iVar9 % 2 & 0xffffffff);
    local_258 = FUN_0040c770(dVar17 * (double)iVar12);
    local_258 = local_258 + local_290;
    dVar17 = (double)FUN_0040bdd0((double)((float)(int)(short)param_2[5] * 0.017453292));
    iVar9 = FUN_0040c770(-dVar17 * (double)iVar12);
    iVar9 = iVar9 + local_28c;
    local_254 = iVar9;
    dVar17 = (double)FUN_0040bcd0((double)((float)((int)(short)param_2[5] +
                                                  (int)*(short *)((longlong)param_2 + 0x16)) *
                                          0.017453292));
    local_260 = FUN_0040c770(dVar17 * (double)iVar12);
    local_260 = local_260 + local_290;
    dVar17 = (double)FUN_0040bdd0((double)((float)((int)(short)param_2[5] +
                                                  (int)*(short *)((longlong)param_2 + 0x16)) *
                                          0.017453292));
    iVar12 = FUN_0040c770(-dVar17 * (double)iVar12);
    iVar12 = iVar12 + local_28c;
    local_25c = iVar12;
    if (param_2[7] != -2) {
      FUN_01a9cf90(local_2e8);
      local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_250._4_4_);
      local_350 = local_258;
      local_348 = (double)CONCAT44(local_348._4_4_,iVar9);
      local_340 = (double)CONCAT44(local_340._4_4_,local_260);
      local_338 = iVar12;
      FUN_01a9d1f0(local_2e8,local_248 & 0xffffffff,local_248._4_4_,local_250 & 0xffffffff);
      uVar7 = (**(code **)(*local_2e8 + 0xd8))(local_2e8,param_2[6]);
      FUN_01a9cba0(local_2e8,uVar7,(longlong)(short)param_2[8]);
    }
    local_358 = (undefined4 *)CONCAT44(local_358._4_4_,local_250._4_4_);
    local_350 = local_258;
    local_348 = (double)CONCAT44(local_348._4_4_,iVar9);
    local_340 = (double)CONCAT44(local_340._4_4_,local_260);
    local_338 = iVar12;
    FUN_01a9d3d0(local_2e8,local_248 & 0xffffffff,local_248._4_4_,local_250 & 0xffffffff);
  }
LAB_01a9cae2:
  FUN_00414560(&local_2c8,2);
  FUN_00414560(&local_2a8,2);
  return;
}

