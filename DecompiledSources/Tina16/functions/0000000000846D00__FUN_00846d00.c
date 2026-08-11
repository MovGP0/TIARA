/* Ghidra address: 00846d00 */
/* Ghidra symbol: FUN_00846d00 */


void FUN_00846d00(longlong *param_1,char param_2,ushort param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  undefined1 *local_130;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  uint local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_a9;
  undefined1 local_a8 [116];
  undefined8 local_34;
  undefined1 local_29;
  
  local_f0 = auStack_168;
  local_120 = 0;
  local_118 = (longlong *)0x0;
  local_110 = (longlong *)0x0;
  local_108 = 0;
  local_100 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  local_29 = 0;
  FUN_00848db0(param_1);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    pcVar3 = (code *)FUN_00411550(param_1,0xffb3);
    cVar1 = (*pcVar3)(param_1);
    if (cVar1 == '\0') {
      lVar4 = FUN_007f9b70(param_1,1);
      if (lVar4 != 0) goto LAB_00846df9;
    }
    (**(code **)(*param_1 + 600))(param_1);
    cVar1 = FUN_0083f660(param_1);
    if (cVar1 == '\0') {
      FUN_0064e190(param_1,0);
      goto LAB_00847670;
    }
  }
LAB_00846df9:
  if ((param_2 == '\0') && ((param_3 & 0x40) != 0)) {
    pcVar3 = (code *)FUN_00411550(param_1,0xffe9);
    (*pcVar3)(param_1);
  }
  else if (param_2 == '\0') {
    FUN_00841d10(param_1,local_a8);
    local_148 = param_1 + 0x9e;
    local_140 = (longlong)param_1 + 0x4f4;
    local_138 = param_1 + 0x9f;
    local_130 = local_a8;
    (**(code **)(*param_1 + 0x268))(param_1,param_4,param_5,param_1 + 0xaa);
    if ((char)param_1[0xaa] != '\0') {
      if ((char)param_1[0xaa] == '\x03') {
        pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
        cVar1 = (*pcVar3)(param_1);
        if (cVar1 != '\0') {
          iVar2 = FUN_0064d0b0(param_1);
          *(int *)((longlong)param_1 + 0x4f4) = iVar2 - *(int *)((longlong)param_1 + 0x4f4);
        }
      }
      FUN_00842b00(param_1,local_a8);
      goto LAB_00847670;
    }
    local_34 = FUN_008417f0(param_1,param_4,param_5,local_a8);
    if (((int)local_34 < *(int *)((longlong)param_1 + 0x4bc)) ||
       (local_34._4_4_ = (int)(local_34 >> 0x20), local_34._4_4_ < (int)param_1[0x98])) {
      if ((*(int *)((longlong)param_1 + 0x564) != -1) || ((int)param_1[0xad] != -1)) {
        *(undefined1 *)(param_1 + 0xac) = 1;
        *(undefined1 *)((longlong)param_1 + 0x561) = 0;
        FUN_00844240(param_1,(longlong)param_1 + 0x564);
      }
      if (((((*(uint *)((longlong)param_1 + 0x4d4) & 0x100) == 0) || ((int)local_34 < 0)) ||
          (*(int *)((longlong)param_1 + 0x4bc) <= (int)local_34)) ||
         (local_34._4_4_ < (int)param_1[0x98])) {
        if ((((*(uint *)((longlong)param_1 + 0x4d4) & 0x200) != 0) && (-1 < (longlong)local_34)) &&
           ((local_34._4_4_ < (int)param_1[0x98] &&
            (*(int *)((longlong)param_1 + 0x4bc) <= (int)local_34)))) {
          *(int *)((longlong)param_1 + 0x4fc) = (int)local_34;
          *(int *)(param_1 + 0xa0) = (int)local_34;
          local_dc = param_5;
          local_e0 = param_4;
          pcVar3 = (code *)FUN_00411550(param_1,0xff9b);
          cVar1 = (*pcVar3)(param_1,(longlong)param_1 + 0x4fc,param_1 + 0xa0,&local_e0);
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0xaa) = 5;
            (**(code **)(*param_1 + 0x198))(param_1);
            FUN_00843b70(param_1);
            local_29 = 1;
            uVar6 = FUN_0065b870(param_1);
            thunk_FUN_04176ccd(uVar6,1,0x3c,0);
          }
        }
      }
      else {
        *(int *)((longlong)param_1 + 0x4fc) = local_34._4_4_;
        *(int *)(param_1 + 0xa0) = local_34._4_4_;
        local_d4 = param_5;
        local_d8 = param_4;
        pcVar3 = (code *)FUN_00411550(param_1,0xff9a);
        cVar1 = (*pcVar3)(param_1,(longlong)param_1 + 0x4fc,param_1 + 0xa0,&local_d8);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0xaa) = 4;
          (**(code **)(*param_1 + 0x198))(param_1);
          FUN_00843b70(param_1);
          local_29 = 1;
          uVar6 = FUN_0065b870(param_1);
          thunk_FUN_04176ccd(uVar6,1,0x3c,0);
        }
      }
    }
    else if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x400) == 0) {
      *(undefined1 *)(param_1 + 0xaa) = 1;
      uVar6 = FUN_0065b870(param_1);
      thunk_FUN_04176ccd(uVar6,1,0x3c,0);
      if ((param_3 & 1) == 0) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
        cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,2);
        if (cVar1 != '\0') {
          local_c8 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db070(&local_110,local_c8);
          cVar1 = (**(code **)(*local_110 + 0x88))(local_110);
          if (cVar1 != '\0') {
            local_d0 = (**(code **)(*param_1 + 0x48))(param_1);
            FUN_004db070(&local_118,local_d0);
            (**(code **)(*local_118 + 0x40))(local_118);
          }
        }
        iVar2 = local_34._4_4_;
        local_a9 = local_34._4_4_ != *(int *)((longlong)param_1 + 0x4ac);
        if ((bool)local_a9) {
          uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db4b0(uVar6);
        }
        local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
        FUN_00844b60(param_1,local_34 & 0xffffffff,iVar2,1);
        if (local_a9 != '\0') {
          uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db2d0(uVar6);
        }
      }
      else {
        FUN_00844ac0(param_1,&local_34);
      }
    }
    else {
      if (((int)local_34 == (int)param_1[0x95]) &&
         (local_34._4_4_ == *(int *)((longlong)param_1 + 0x4ac))) {
        FUN_0083f7b0(param_1);
      }
      else {
        local_a9 = local_34._4_4_ != *(int *)((longlong)param_1 + 0x4ac);
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
        cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,2);
        if (cVar1 != '\0') {
          local_b8 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db070(&local_f8,local_b8);
          cVar1 = (**(code **)(*local_f8 + 0x88))(local_f8);
          if (cVar1 != '\0') {
            local_c0 = (**(code **)(*param_1 + 0x48))(param_1);
            FUN_004db070(&local_100,local_c0);
            (**(code **)(*local_100 + 0x40))(local_100);
          }
        }
        if (local_a9 != '\0') {
          uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db4b0(uVar6);
        }
        local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
        FUN_00844b60(param_1,local_34 & 0xffffffff,local_34._4_4_,1);
        FUN_00848f80(param_1);
        if (local_a9 != '\0') {
          uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db2d0(uVar6);
        }
      }
      pcVar3 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar3)(param_1);
    }
  }
  local_148 = (longlong *)CONCAT44(local_148._4_4_,param_5);
  FUN_00650920(param_1,param_2,param_3,param_4);
LAB_00847670:
  FUN_00417840(&local_120,&DAT_00484e18,6);
  return;
}

