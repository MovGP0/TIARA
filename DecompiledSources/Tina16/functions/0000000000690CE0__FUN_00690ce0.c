/* Ghidra address: 00690ce0 */
/* Ghidra symbol: FUN_00690ce0 */


void FUN_00690ce0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [12];
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_24;
  longlong *local_20;
  
  local_b0 = auStack_118;
  lVar5 = FUN_00786090(param_1);
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0068fbb0(param_1,local_5c);
    iVar2 = FUN_004230a0(local_5c);
    if (iVar2 != 0) {
      FUN_0068fbb0(param_1,local_6c);
      iVar2 = FUN_004230c0(local_6c);
      if (iVar2 != 0) {
        local_40 = (longlong *)FUN_00777cd0();
        FUN_0068ffb0(param_1,local_7c);
        iVar2 = FUN_004230a0(local_7c);
        if (0 < iVar2) {
          cVar1 = (**(code **)(*local_40 + 0x90))(local_40);
          if (cVar1 != '\0') {
            local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
            FUN_0068fbb0(param_1,local_8c);
            uVar3 = FUN_004230a0(local_8c);
            FUN_0068fbb0(param_1,local_9c);
            uVar4 = FUN_004230c0(local_9c);
            (**(code **)(*local_20 + 0xe0))(local_20,uVar3,uVar4);
            lVar5 = FUN_00609e10(local_20);
            uVar6 = FUN_00777cd0();
            uVar3 = FUN_00778bd0(uVar6,0xff00000f,0);
            FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),uVar3);
            plVar7 = (longlong *)FUN_00609e10(local_20);
            uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
            uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
            local_f8 = CONCAT44(local_f8._4_4_,uVar4);
            FUN_004238d0(local_c0,0,0,uVar3);
            (**(code **)(*plVar7 + 0xa8))(plVar7,local_c0);
            FUN_0068ffb0(param_1,local_30);
            FUN_006903f0(param_1,local_c0);
            local_2c = local_b4;
            FUN_00690520(param_1,local_c0);
            local_24 = local_bc;
            iVar2 = FUN_004230c0(local_30);
            if (0 < iVar2) {
              plVar7 = (longlong *)FUN_00777cd0();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_4c,0x2d);
              uVar6 = FUN_00777cd0();
              uVar8 = FUN_00609e10(local_20);
              uVar8 = FUN_005ffa40(uVar8);
              local_f8 = 0;
              local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
              FUN_00778dc0(uVar6,uVar8,local_4c,local_30);
            }
            FUN_0068fff0(param_1,local_30);
            uVar6 = FUN_00609e10(local_20);
            local_38 = FUN_005ffa40(uVar6);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            if (cVar1 != '\0') {
              plVar7 = (longlong *)FUN_00777cd0();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_4c,*(undefined1 *)(param_1 + 0x48));
              uVar6 = FUN_00777cd0();
              local_f8 = 0;
              local_f0 = local_f0 & 0xffffffff00000000;
              FUN_00778dc0(uVar6,local_38,local_4c,local_30);
            }
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            if (cVar1 == '\0') {
              plVar7 = (longlong *)FUN_00777cd0();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_4c,5);
            }
            else {
              plVar7 = (longlong *)FUN_00777cd0();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_4c,*(undefined1 *)(param_1 + 0x49));
            }
            uVar6 = FUN_00777cd0();
            FUN_006903f0(param_1,local_c0);
            local_f8 = 0;
            local_f0 = local_f0 & 0xffffffff00000000;
            FUN_00778dc0(uVar6,local_38,local_4c,local_c0);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            if (cVar1 == '\0') {
              plVar7 = (longlong *)FUN_00777cd0();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_4c,9);
            }
            else {
              plVar7 = (longlong *)FUN_00777cd0();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_4c,*(undefined1 *)(param_1 + 0x4a));
            }
            uVar6 = FUN_00777cd0();
            FUN_00690520(param_1,local_c0);
            local_f8 = 0;
            local_f0 = local_f0 & 0xffffffff00000000;
            FUN_00778dc0(uVar6,local_38,local_4c,local_c0);
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

