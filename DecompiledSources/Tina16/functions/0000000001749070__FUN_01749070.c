/* Ghidra address: 01749070 */
/* Ghidra symbol: FUN_01749070 */


void FUN_01749070(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  short local_35;
  short local_33;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined4 local_2d;
  undefined4 local_25;
  byte *local_20;
  
  local_a0 = 0;
  local_90 = 0;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_b0 = param_1;
  local_a8 = param_2;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (local_a8 == (longlong *)0x0) {
LAB_017490ff:
    if (local_res18 == (longlong *)0x0) goto LAB_01749712;
  }
  else {
    cVar2 = FUN_0175ad40(local_b0,local_a8);
    if (cVar2 == '\0') goto LAB_017490ff;
  }
  plVar1 = (longlong *)local_b0[5];
  if (*(char *)((longlong)plVar1 + 0xb) != '\0') goto LAB_01749712;
  (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_20);
  if (local_b0[8] == 0) {
    lVar5 = FUN_01d06fb0(local_b0[5],*(undefined1 *)(local_b0[5] + 0xd1));
    local_b0[8] = lVar5;
  }
  if ((param_6 == '\0') || (local_b0[8] == 0)) {
LAB_01749495:
    if (local_a8 != (longlong *)0x0) {
      uVar3 = (**(code **)(*(longlong *)local_b0[5] + 0x2a8))((longlong *)local_b0[5],local_a8);
      (**(code **)(*local_a8 + 0xb8))(local_a8,uVar3);
    }
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,param_6);
    (**(code **)(*local_b0 + 8))(local_b0,&local_70,local_a8,param_5);
    local_e8 = (undefined8 *)&local_58;
    local_e0._0_1_ = 1;
    local_d8._0_1_ = 1;
    FUN_01d048c0(local_b0[5],local_70 + 5,local_6c + 5,&local_54);
    local_e8 = (undefined8 *)&local_60;
    local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,1);
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_01d048c0(local_b0[5],local_68 + -7,local_64 + -7,&local_5c);
    if (local_a8 != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_a8 + 0xd0))(local_a8,0);
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,local_60);
      local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,uVar3);
      (**(code **)(*local_a8 + 0x60))(local_a8,local_54,local_58,local_5c);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x100))(local_res18,&local_98);
      (**(code **)(*local_98 + 0x100))(local_98,&local_90,L"interactive");
      cVar2 = FUN_0043fc50(local_90,0);
      if (cVar2 != '\0') {
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,(uint)*local_20);
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,local_70 + 0xc);
        local_d8 = CONCAT44(local_d8._4_4_,local_6c + 0xc);
        local_d0 = local_a8;
        local_c8 = 1;
        FUN_01748af0(local_b0,&local_a0,local_res18,local_res20);
        goto LAB_017496f5;
      }
    }
    local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,(uint)*local_20);
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,local_70 + 0xc);
    local_d8 = CONCAT44(local_d8._4_4_,local_6c + 0xc);
    local_d0 = local_a8;
    local_c8 = 1;
    FUN_01748af0(local_b0,&local_78,local_res18,local_res20);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x108))(local_78,L"showtext",L"0:num");
    }
  }
  else {
    cVar2 = FUN_01d07320(local_b0[5]);
    if (cVar2 < '\0') goto LAB_01749495;
    cVar2 = FUN_00c3d380(local_b0[8],&local_40,&local_35);
    if (cVar2 != '\0') {
      cVar2 = FUN_01d07320(local_b0[5]);
      *(int *)(local_b0 + 2) = (int)cVar2;
      FUN_01a9d8b0(local_a8,(char)local_b0[2]);
      FUN_01a9a720(local_a8,*(undefined4 *)(local_b0[5] + 0xc),*(undefined4 *)(local_b0[5] + 0x10));
      uVar3 = FUN_0173cca0(local_b0[5],param_5,param_6);
      FUN_01a9a770(local_a8,uVar3);
      FUN_01a9a780(local_a8,*(undefined1 *)(local_b0[5] + 0xd1),*(undefined1 *)(local_b0[5] + 0xd3))
      ;
      local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,local_2e);
      local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,local_2d);
      local_d8 = local_40;
      uVar6 = FUN_01a9f1e0(local_a8,local_31,local_30,local_2f);
      FUN_0060a8f0(DAT_0210ffb8,PTR_IMAGE_DOS_HEADER_0200c280,L"bmHexKeyArrow");
      if (*(char *)((longlong)local_b0 + 10) == '\0') {
        if (*(int *)((longlong)local_b0 + 0x14) == (int)local_b0[2]) {
          FUN_00410f20(uVar6);
        }
        else {
          local_e0 = (undefined1 *)0x0;
          local_d8 = CONCAT71(local_d8._1_7_,1);
          local_e8 = (undefined8 *)uVar6;
          FUN_01a9f420(local_a8,(longlong)local_35,(longlong)local_33,local_25);
          *(int *)((longlong)local_b0 + 0x14) = (int)local_b0[2];
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_0210ffb8 + 0x60))(DAT_0210ffb8);
        uVar4 = (**(code **)(*DAT_0210ffb8 + 0x48))(DAT_0210ffb8);
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,uVar4);
        FUN_00498370(local_50,0xfffffff6,0xfffffff0,uVar3);
        local_e0 = local_50;
        local_d8 = CONCAT71(local_d8._1_7_,1);
        local_e8 = (undefined8 *)uVar6;
        FUN_01a9f420(local_a8,(longlong)local_35,(longlong)local_33,local_25);
      }
      local_e8 = (undefined8 *)(((double)*local_20 * 3.141592653589793) / 8.0);
      DAT_0210ffb8 = (longlong *)FUN_01748de0(auStack_108,DAT_0210ffb8,4,4);
      local_e8 = &DAT_0210ffb8;
      local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,1);
      FUN_01a9f830(local_a8,0xfffffff6,0xfffffff0,local_25);
      local_e0._0_4_ = 0xfffffffb;
      local_d8._0_4_ = 0xffffffe0;
      local_d0 = local_a8;
      local_c8 = 0;
      local_e8._0_4_ = (uint)*(byte *)(local_b0 + 7);
      FUN_01748af0(local_b0,&local_80,local_res18,local_res20);
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,(uint)*local_20);
      local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,0xfffffffb);
      local_d8 = CONCAT44(local_d8._4_4_,0xffffffe0);
      local_d0 = local_a8;
      local_c8 = 1;
      FUN_01748af0(local_b0,&local_88,local_res18,local_res20);
    }
  }
LAB_017496f5:
  if (*(char *)((longlong)local_b0 + 9) == '\0') {
    *(byte *)(local_b0 + 7) = *local_20;
  }
LAB_01749712:
  FUN_00417840(&local_a0,&LAB_00b9fca0,2);
  FUN_00414480(&local_90);
  FUN_00417840(&local_88,&LAB_00b9fca0,3);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

