/* Ghidra address: 006911f0 */
/* Ghidra symbol: FUN_006911f0 */


void FUN_006911f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined1 *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined1 local_44 [12];
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined4 local_28;
  longlong *local_20;
  
  local_b0 = auStack_118;
  lVar5 = FUN_00786090(param_1);
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0068fbb0(param_1,local_60);
    iVar2 = FUN_004230a0(local_60);
    if (iVar2 != 0) {
      FUN_0068fbb0(param_1,local_70);
      iVar2 = FUN_004230c0(local_70);
      if (iVar2 != 0) {
        local_50 = (longlong *)FUN_00777cd0();
        FUN_00690650(param_1,local_80);
        iVar2 = FUN_004230c0(local_80);
        if (0 < iVar2) {
          cVar1 = (**(code **)(*local_50 + 0x90))(local_50);
          if (cVar1 != '\0') {
            local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
            FUN_0068fbb0(param_1,local_90);
            uVar3 = FUN_004230a0(local_90);
            FUN_0068fbb0(param_1,local_a0);
            uVar4 = FUN_004230c0(local_a0);
            (**(code **)(*local_20 + 0xe0))(local_20,uVar3,uVar4);
            lVar5 = FUN_00609e10(local_20);
            uVar3 = FUN_00778bd0(local_50,0xff00000f,0);
            FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),uVar3);
            plVar6 = (longlong *)FUN_00609e10(local_20);
            uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
            uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
            local_f8 = CONCAT44(local_f8._4_4_,uVar4);
            FUN_004238d0(local_c0,0,0,uVar3);
            (**(code **)(*plVar6 + 0xa8))(plVar6,local_c0);
            FUN_00690650(param_1,local_30);
            FUN_00690a90(param_1,local_c0);
            local_30[0] = local_b8;
            FUN_00690bc0(param_1,local_c0);
            local_28 = local_c0[0];
            iVar2 = FUN_004230c0(local_30);
            if (0 < iVar2) {
              (**(code **)(*local_50 + 0x198))(local_50,local_44,0x23);
              uVar7 = FUN_00609e10(local_20);
              uVar7 = FUN_005ffa40(uVar7);
              local_f8 = 0;
              local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
              FUN_00778dc0(local_50,uVar7,local_44,local_30);
            }
            FUN_00690690(param_1,local_30);
            uVar7 = FUN_00609e10(local_20);
            local_38 = FUN_005ffa40(uVar7);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            if (cVar1 != '\0') {
              (**(code **)(*local_50 + 0x198))(local_50,local_44,*(undefined1 *)(param_1 + 0x4b));
              local_f8 = 0;
              local_f0 = local_f0 & 0xffffffff00000000;
              FUN_00778dc0(local_50,local_38,local_44,local_30);
            }
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            if (cVar1 == '\0') {
              (**(code **)(*local_50 + 0x198))(local_50,local_44,0xd);
            }
            else {
              (**(code **)(*local_50 + 0x198))(local_50,local_44,*(undefined1 *)(param_1 + 0x4c));
            }
            FUN_00690a90(param_1,local_c0);
            local_f8 = 0;
            local_f0 = local_f0 & 0xffffffff00000000;
            FUN_00778dc0(local_50,local_38,local_44,local_c0);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            if (cVar1 == '\0') {
              (**(code **)(*local_50 + 0x198))(local_50,local_44,0x11);
            }
            else {
              (**(code **)(*local_50 + 0x198))(local_50,local_44,*(undefined1 *)(param_1 + 0x4d));
            }
            FUN_00690bc0(param_1,local_c0);
            local_f8 = 0;
            local_f0 = local_f0 & 0xffffffff00000000;
            FUN_00778dc0(local_50,local_38,local_44,local_c0);
            uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
            uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
            local_f8 = CONCAT44(local_f8._4_4_,uVar4);
            local_f0 = local_38;
            local_e8 = 0;
            local_e0 = 0;
            local_d8 = 0xcc0020;
            thunk_FUN_0415fcd2(param_2,0,0,uVar3);
            FUN_00410f20(local_20);
          }
        }
      }
    }
  }
  return;
}

