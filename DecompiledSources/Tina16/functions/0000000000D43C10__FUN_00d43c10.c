/* Ghidra address: 00d43c10 */
/* Ghidra symbol: FUN_00d43c10 */


void FUN_00d43c10(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  int local_100 [2];
  int local_f8;
  undefined1 *local_f0;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_c0 [14];
  undefined8 local_88;
  undefined1 local_80 [14];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70 [4];
  int local_6c;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_f0 = auStack_138;
  plVar5 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar5 + 0x90))(plVar5);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x80) == 0) {
      local_c0[0] = 0x40;
      thunk_FUN_040b3dfb(*(undefined8 *)(param_1 + 8),local_c0);
      *(undefined8 *)(param_1 + 0x80) = local_88;
    }
    cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    if (cVar1 == '\0') {
      local_72 = 5;
    }
    else {
      cVar1 = FUN_00d43ae0(param_1);
      if (cVar1 == '\0') {
        if ((*(char *)(param_1 + 0x79) == '\0') || (*(char *)(param_1 + 0x60) == '\0')) {
          local_72 = 2;
        }
        else {
          local_72 = 3;
        }
      }
      else {
        local_72 = 4;
      }
    }
    cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    if (cVar1 == '\0') {
      local_71 = 0xe;
    }
    else {
      cVar1 = FUN_00788bc0(param_1);
      if ((cVar1 == '\0') &&
         ((*(longlong *)(param_1 + 0x88) == 0 ||
          (lVar8 = thunk_FUN_041da4fa(), lVar8 != *(longlong *)(param_1 + 0x88))))) {
        if (*(char *)(param_1 + 0x60) == '\0') {
          local_71 = 0xb;
        }
        else {
          local_71 = 0xc;
        }
      }
      else {
        local_71 = 0xd;
      }
    }
    local_118._0_4_ = 0;
    FUN_004238d0(local_70,0,0,0);
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
    uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*local_30 + 0xe0))(local_30,uVar2,uVar3);
    uVar2 = (**(code **)(*local_30 + 0x60))(local_30);
    uVar3 = (**(code **)(*local_30 + 0x48))(local_30);
    local_118 = CONCAT44(local_118._4_4_,uVar3);
    FUN_004238d0(&local_40,0,0,uVar2);
    plVar5 = (longlong *)FUN_00781840();
    (**(code **)(*plVar5 + 0xf0))(plVar5,local_80,local_71);
    cVar1 = FUN_00d44440(param_1);
    if ((cVar1 == '\x01') && (*(longlong *)(param_1 + 0x80) != 0)) {
      thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x80),local_70);
      thunk_FUN_03e49910(*(undefined8 *)(param_1 + 8),local_50);
      local_34 = local_6c - local_4c;
      uVar6 = FUN_00781840();
      uVar7 = FUN_00609e10(local_30);
      uVar7 = FUN_005ffa40(uVar7);
      local_118 = 0;
      local_110 = 0;
      FUN_00778dc0(uVar6,uVar7,local_80,&local_40);
      local_60 = CONCAT44(local_3c,local_40);
      local_58 = CONCAT44(local_34,local_38);
      thunk_FUN_04176532(&local_60,0xfffffffe,0xfffffffe);
      local_c8 = (longlong *)FUN_00609e10(local_30);
      FUN_005fdcb0(local_c8[0x10],0);
      uVar2 = FUN_005fbf20(0xff000005);
      FUN_005fdab0(local_c8[0x10],uVar2);
      (**(code **)(*local_c8 + 0xa8))(local_c8,&local_60);
      iVar4 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
      uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
      uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
      local_118._0_4_ = uVar3;
      FUN_004238d0(&local_40,0,iVar4 - (local_44 - local_64),uVar2);
      local_d0 = (longlong *)FUN_00609e10(local_30);
      FUN_005fdcb0(local_d0[0x10],0);
      uVar6 = FUN_00781840();
      uVar2 = FUN_007793c0(uVar6,0xff00000f);
      FUN_005fdab0(local_d0[0x10],uVar2);
      (**(code **)(*local_d0 + 0xa8))(local_d0,&local_40);
      uVar2 = (**(code **)(*local_30 + 0x60))(local_30);
      uVar3 = (**(code **)(*local_30 + 0x48))(local_30);
      local_118 = CONCAT44(local_118._4_4_,uVar3);
      FUN_004238d0(&local_40,0,0,uVar2);
      local_34 = local_6c - local_4c;
    }
    else {
      uVar6 = FUN_00781840();
      uVar7 = FUN_00609e10(local_30);
      uVar7 = FUN_005ffa40(uVar7);
      local_118 = 0;
      local_110 = 0;
      FUN_00778dc0(uVar6,uVar7,local_80,&local_40);
    }
    if (((*(char *)(param_1 + 0x2b) == '\0') || (*(longlong *)(param_1 + 0x88) != 0)) &&
       (cVar1 = FUN_00d44440(param_1), cVar1 != '\x01')) {
      FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_40);
      thunk_FUN_04176532(&local_40,0xfffffffe,0xfffffffe);
      FUN_00d43b10(param_1,local_100);
      local_38 = local_100[0];
      local_d8 = (longlong *)FUN_00609e10(local_30);
      uVar2 = FUN_005fbf20(0xff000005);
      FUN_005fdab0(local_d8[0x10],uVar2);
      (**(code **)(*local_d8 + 0xa8))(local_d8,&local_40);
    }
    cVar1 = FUN_00d44440(param_1);
    if (cVar1 != '\x01') {
      plVar5 = (longlong *)FUN_00781840();
      (**(code **)(*plVar5 + 0xf0))(plVar5,local_80,local_72);
      uVar6 = FUN_00781840();
      uVar7 = FUN_00609e10(local_30);
      uVar7 = FUN_005ffa40(uVar7);
      FUN_00d43b10(param_1,local_100);
      local_118 = 0;
      local_110 = 0;
      FUN_00778dc0(uVar6,uVar7,local_80,local_100);
    }
    cVar1 = FUN_00d44440(param_1);
    if ((cVar1 != '\x01') || (iVar4 = FUN_004230c0(local_70), iVar4 < 1)) {
      lVar8 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x147,0,0);
      if ((lVar8 < 0) || (*(longlong *)(param_1 + 0x88) != 0)) {
        if (*(longlong *)(param_1 + 0x88) != 0) {
          thunk_FUN_03e49910(*(undefined8 *)(param_1 + 8),&local_40);
          thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x88),&local_60);
          FUN_00429ca0(&local_60,-local_40,-local_3c);
          uVar6 = FUN_005ffa40(param_2);
          local_118 = CONCAT44(local_118._4_4_,local_58._4_4_);
          thunk_FUN_041a27b3(uVar6,local_60 & 0xffffffff,local_60._4_4_,local_58 & 0xffffffff);
        }
      }
      else {
        FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_40);
        thunk_FUN_04176532(&local_40,0xfffffffe,0xfffffffe);
        local_e0 = *(undefined8 *)(param_1 + 8);
        uVar9 = thunk_FUN_04118143(local_e0,0xfffffff0);
        if ((uVar9 & 3) != 1) {
          cVar1 = FUN_00787a60(*(undefined8 *)(param_1 + 0x18));
          if (cVar1 == '\x01') {
            FUN_00d43b10(param_1,local_100);
            local_40 = local_f8 + 1;
          }
          else {
            FUN_00d43b10(param_1,local_100);
            local_38 = local_100[0] + -1;
          }
        }
        uVar6 = FUN_005ffa40(param_2);
        local_118 = CONCAT44(local_118._4_4_,local_34);
        thunk_FUN_041a27b3(uVar6,local_40,local_3c,local_38);
      }
    }
    (**(code **)(*param_2 + 0x88))(param_2,0,0,local_30);
    FUN_00410f20(local_30);
    return;
  }
  return;
}

