/* Ghidra address: 017967b0 */
/* Ghidra symbol: FUN_017967b0 */


void FUN_017967b0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  byte local_2d0;
  int local_2c8;
  int local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong local_290;
  int local_284;
  short *local_280;
  undefined8 local_278;
  int local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [20];
  undefined4 local_234;
  undefined1 local_230 [256];
  undefined1 local_130 [256];
  byte *local_30 [2];
  
  local_258 = 0;
  local_260 = 0;
  local_250 = 0;
  local_234 = *(undefined4 *)(param_2 + 0x24);
  local_290 = param_2;
  uVar2 = FUN_017b3d70(&PTR_FUN_017aaf70,1,(longlong)*(short *)(param_2 + 0x24),
                       (longlong)*(short *)(param_2 + 0x26));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar2);
  uVar2 = FUN_017b4010(&PTR_FUN_017ab260,1,
                       (int)*(short *)(local_290 + 0x24) + (int)*(short *)(local_290 + 0x28),
                       (int)*(short *)(local_290 + 0x26) + (int)*(short *)(local_290 + 0x2a));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar2);
  uVar2 = FUN_017b54e0(&PTR_FUN_017ab548,1,
                       (int)*(short *)(local_290 + 0x24) + (int)*(short *)(local_290 + 0x2c),
                       (int)*(short *)(local_290 + 0x26) + (int)*(short *)(local_290 + 0x2e));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar2);
  local_2e8._0_4_ = (int)*(short *)(local_290 + 0x26) + (int)*(short *)(local_290 + 0x1a);
  FUN_00498350(local_248,(int)*(short *)(local_290 + 0x24) + (int)*(short *)(local_290 + 0x14),
               (int)*(short *)(local_290 + 0x26) + (int)*(short *)(local_290 + 0x16),
               (int)*(short *)(local_290 + 0x24) + (int)*(short *)(local_290 + 0x18));
  uVar2 = FUN_017b6ac0(&PTR_FUN_017ab8b8,1,local_248);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar2);
  local_2e8 = CONCAT44(local_2e8._4_4_,
                       (int)*(short *)(local_290 + 0x26) + (int)*(short *)(local_290 + 0x22));
  FUN_00498350(local_248,(int)*(short *)(local_290 + 0x24) + (int)*(short *)(local_290 + 0x1c),
               (int)*(short *)(local_290 + 0x26) + (int)*(short *)(local_290 + 0x1e),
               (int)*(short *)(local_290 + 0x24) + (int)*(short *)(local_290 + 0x20));
  uVar2 = FUN_017b6ac0(&PTR_FUN_017ad080,1,local_248);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar2);
  iVar5 = *(int *)(*(longlong *)(local_290 + 0x30) + 0x10);
  local_284 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(local_290 + 0x30),local_284);
      FUN_004169a0(&local_250,lVar3 + 0xc);
      local_2e8 = CONCAT62(local_2e8._2_6_,(short)local_284);
      local_2e0 = CONCAT71(local_2e0._1_7_,*(undefined1 *)(lVar3 + 0x1e));
      local_2d8 = CONCAT71(local_2d8._1_7_,*(undefined1 *)(lVar3 + 0x1f));
      local_2d0 = *(byte *)(lVar3 + 0x20);
      local_2c8 = (int)*(short *)(lVar3 + 0x21) + (int)(short)local_234;
      local_2c0 = (int)*(short *)(lVar3 + 0x23) + (int)local_234._2_2_;
      local_2b8 = CONCAT71(local_2b8._1_7_,*(undefined1 *)(lVar3 + 0x25));
      local_2b0 = lVar3 + 0x26;
      local_2a8 = *(undefined8 *)(lVar3 + 0x2e);
      local_2a0 = *(undefined4 *)(lVar3 + 0x36);
      uVar2 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_250,*(undefined1 *)(lVar3 + 0x1d));
      FUN_01796750(auStack_308,uVar2);
      local_284 = local_284 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(local_290 + 0x38) + 0x10);
  local_284 = 0;
  if (-1 < iVar5 + -1) {
    do {
      piVar4 = (int *)FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
      if (*piVar4 == 0x65) {
        lVar3 = FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
        local_2e8._0_4_ = (int)*(short *)(lVar3 + 0x12) + (int)local_234._2_2_;
        FUN_00498350(local_248,(int)*(short *)(lVar3 + 0xc) + (int)(short)local_234,
                     (int)*(short *)(lVar3 + 0xe) + (int)local_234._2_2_,
                     (int)*(short *)(lVar3 + 0x10) + (int)(short)local_234);
        local_2e8 = CONCAT44(local_2e8._4_4_,(int)*(short *)(lVar3 + 0x18));
        uVar2 = FUN_017b1980(&PTR_FUN_017a8d10,1,local_248);
        FUN_01796750(auStack_308,uVar2);
      }
      else {
        piVar4 = (int *)FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
        if (*piVar4 == 0x67) {
          lVar3 = FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
          local_30[0] = (byte *)(lVar3 + 0xc);
          FUN_00409a70(local_30[0],local_130,*local_30[0] + 1);
          FUN_017919d0(local_30,*local_30[0] + 2);
          FUN_00409a70(local_30[0],local_230,*local_30[0] + 1);
          FUN_017919d0(local_30,*local_30[0] + 2);
          pbVar1 = local_30[0];
          FUN_004169a0(&local_258,local_130);
          FUN_004169a0(&local_260,local_230);
          local_2e8 = local_258;
          local_2e0 = local_260;
          local_2d8 = *(undefined8 *)(pbVar1 + 4);
          local_2d0 = pbVar1[0xc];
          local_2c8 = CONCAT31(local_2c8._1_3_,pbVar1[0xd]);
          local_2c0 = *(int *)(pbVar1 + 0xe);
          uVar2 = FUN_017b3100(&PTR_FUN_017a83d8,1,(int)*(short *)pbVar1 + (int)(short)local_234);
          FUN_01796750(auStack_308,uVar2);
        }
        else {
          piVar4 = (int *)FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
          if (*piVar4 == 0x68) {
            lVar3 = FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
            pbVar1 = (byte *)(lVar3 + 0xc);
            local_30[0] = pbVar1;
            if (0 < *(short *)(lVar3 + 0x1e)) {
              local_280 = (short *)(lVar3 + 0x20);
              local_268 = FUN_00498310((int)*(short *)pbVar1 + (int)*local_280 +
                                       (int)(short)local_234,
                                       (int)*(short *)(lVar3 + 0xe) + (int)*(short *)(lVar3 + 0x22)
                                       + (int)local_234._2_2_);
              local_2e8 = CONCAT44(local_2e8._4_4_,*(undefined4 *)(lVar3 + 0x14));
              local_2e0 = CONCAT44(local_2e0._4_4_,*(undefined4 *)(lVar3 + 0x18));
              local_2d8 = CONCAT44(local_2d8._4_4_,(int)*(short *)(lVar3 + 0x1c));
              local_278 = FUN_017b4250(&PTR_FUN_017a9fa8,1,&local_268,0);
              iVar6 = *(short *)(lVar3 + 0x1e) + -1;
              local_26c = 1;
              if (0 < iVar6) {
                do {
                  local_268 = FUN_00498310((int)*(short *)pbVar1 +
                                           (int)local_280[(longlong)local_26c * 2] +
                                           (int)(short)local_234,
                                           (int)*(short *)(lVar3 + 0xe) +
                                           (int)local_280[(longlong)local_26c * 2 + 1] +
                                           (int)local_234._2_2_);
                  FUN_017b5040(local_278,&local_268);
                  local_26c = local_26c + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              FUN_01796750(auStack_308,local_278);
            }
          }
          else {
            piVar4 = (int *)FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
            if (*piVar4 == 0x6a) {
              lVar3 = FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
              local_30[0] = (byte *)(lVar3 + 0xc);
              local_2e8 = CONCAT71(local_2e8._1_7_,*(undefined1 *)(lVar3 + 0x10));
              local_2e0 = CONCAT71(local_2e0._1_7_,*(undefined1 *)(lVar3 + 0x11));
              local_2d8 = CONCAT71(local_2d8._1_7_,*(undefined1 *)(lVar3 + 0x12));
              local_2d0 = *(byte *)(lVar3 + 0x13);
              local_2c8 = *(int *)(lVar3 + 0x14);
              local_2c0 = *(int *)(lVar3 + 0x18);
              local_2b8 = lVar3 + 0x20;
              local_2b0 = CONCAT44(local_2b0._4_4_,*(undefined4 *)(lVar3 + 0x1c));
              uVar2 = FUN_017b7590(&PTR_FUN_017ac7a0,1,
                                   (int)*(short *)local_30[0] + (int)(short)local_234,
                                   (int)*(short *)(lVar3 + 0xe) + (int)local_234._2_2_);
              FUN_01796750(auStack_308,uVar2);
            }
            else {
              lVar3 = FUN_004aeac0(*(undefined8 *)(local_290 + 0x38),local_284);
              local_2e8._0_4_ = (int)*(short *)(lVar3 + 0x13) + (int)local_234._2_2_;
              FUN_00498350(local_248,(int)*(short *)(lVar3 + 0xd) + (int)(short)local_234,
                           (int)*(short *)(lVar3 + 0xf) + (int)local_234._2_2_,
                           (int)*(short *)(lVar3 + 0x11) + (int)(short)local_234);
              local_2e8 = CONCAT44(local_2e8._4_4_,*(undefined4 *)(lVar3 + 0x15));
              local_2e0 = CONCAT44(local_2e0._4_4_,*(undefined4 *)(lVar3 + 0x19));
              local_2d8 = CONCAT44(local_2d8._4_4_,(int)*(short *)(lVar3 + 0x1d));
              uVar2 = FUN_017b2230(&PTR_FUN_017a9680,1,*(undefined1 *)(lVar3 + 0xc),local_248);
              FUN_01796750(auStack_308,uVar2);
            }
          }
        }
      }
      local_284 = local_284 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_260,3);
  return;
}

