/* Ghidra address: 00810c40 */
/* Ghidra symbol: FUN_00810c40 */


void FUN_00810c40(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_100 [4];
  int local_fc;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c [12];
  longlong *local_20;
  
  local_e0 = auStack_158;
  lVar5 = FUN_00786090(param_1);
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_008117e0(param_1,local_4c);
    iVar2 = FUN_004230a0(local_4c);
    if (0 < iVar2) {
      FUN_008117e0(param_1,local_5c);
      iVar2 = FUN_004230c0(local_5c);
      if (0 < iVar2) {
        local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        FUN_008117e0(param_1,local_6c);
        uVar3 = FUN_004230a0(local_6c);
        (**(code **)(*local_20 + 0x88))(local_20,uVar3);
        FUN_008117e0(param_1,local_7c);
        uVar3 = FUN_004230c0(local_7c);
        (**(code **)(*local_20 + 0x70))(local_20,uVar3);
        uVar6 = FUN_00609e10(local_20);
        uVar6 = FUN_005ffa40(uVar6);
        FUN_008117e0(param_1,&local_f0);
        FUN_008117e0(param_1,local_100);
        FUN_0064ae10(uVar6,-local_f0,-local_fc);
        plVar7 = (longlong *)FUN_00781840();
        cVar1 = (**(code **)(*plVar7 + 0x90))(plVar7);
        if (cVar1 != '\0') {
          FUN_008117e0(param_1,local_3c);
          FUN_00811d70(param_1,&local_f0);
          local_38 = local_e4;
          FUN_00811760(param_1,&local_f0);
          local_30 = local_ec;
          iVar2 = FUN_004230c0(local_3c);
          if (0 < iVar2) {
            iVar2 = FUN_004230a0(local_3c);
            if (0 < iVar2) {
              plVar7 = (longlong *)FUN_00781840();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_2c,0x2d);
              uVar6 = FUN_00781840();
              uVar8 = FUN_00609e10(local_20);
              uVar8 = FUN_005ffa40(uVar8);
              local_138 = 0;
              local_130 = (ulonglong)local_130._4_4_ << 0x20;
              FUN_00778dc0(uVar6,uVar8,local_2c,local_3c);
            }
          }
          FUN_008118f0(param_1,local_8c);
          iVar2 = FUN_004230c0(local_8c);
          if (0 < iVar2) {
            FUN_008118f0(param_1,local_9c);
            iVar2 = FUN_004230a0(local_9c);
            if (0 < iVar2) {
              plVar7 = (longlong *)FUN_00781840();
              (**(code **)(*plVar7 + 0x198))(plVar7,local_2c,*(undefined1 *)(param_1 + 0x70));
              uVar6 = FUN_00781840();
              uVar8 = FUN_00609e10(local_20);
              uVar8 = FUN_005ffa40(uVar8);
              FUN_008118f0(param_1,&local_f0);
              local_138 = 0;
              local_130 = local_130 & 0xffffffff00000000;
              FUN_00778dc0(uVar6,uVar8,local_2c,&local_f0);
            }
          }
          FUN_008118f0(param_1,local_ac);
          iVar2 = FUN_004230c0(local_ac);
          if (iVar2 == 0) {
            plVar7 = (longlong *)FUN_00781840();
            (**(code **)(*plVar7 + 0x198))(plVar7,local_2c,5);
          }
          else {
            plVar7 = (longlong *)FUN_00781840();
            (**(code **)(*plVar7 + 0x198))(plVar7,local_2c,*(undefined1 *)(param_1 + 0x71));
          }
          uVar6 = FUN_00781840();
          uVar8 = FUN_00609e10(local_20);
          uVar8 = FUN_005ffa40(uVar8);
          FUN_00811d70(param_1,&local_f0);
          local_138 = 0;
          local_130 = local_130 & 0xffffffff00000000;
          FUN_00778dc0(uVar6,uVar8,local_2c,&local_f0);
          FUN_008118f0(param_1,local_bc);
          iVar2 = FUN_004230c0(local_bc);
          if (iVar2 == 0) {
            plVar7 = (longlong *)FUN_00781840();
            (**(code **)(*plVar7 + 0x198))(plVar7,local_2c,9);
          }
          else {
            plVar7 = (longlong *)FUN_00781840();
            (**(code **)(*plVar7 + 0x198))(plVar7,local_2c,*(undefined1 *)(param_1 + 0x60));
          }
          uVar6 = FUN_00781840();
          uVar8 = FUN_00609e10(local_20);
          uVar8 = FUN_005ffa40(uVar8);
          FUN_00811760(param_1,&local_f0);
          local_138 = 0;
          local_130 = local_130 & 0xffffffff00000000;
          FUN_00778dc0(uVar6,uVar8,local_2c,&local_f0);
        }
        uVar6 = FUN_00609e10(local_20);
        uVar6 = FUN_005ffa40(uVar6);
        FUN_008117e0(param_1,&local_f0);
        FUN_008117e0(param_1,local_100);
        FUN_0064ae10(uVar6,local_f0,local_fc);
        FUN_008117e0(param_1,&local_cc);
        uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
        uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
        uVar6 = FUN_00609e10(local_20);
        local_130 = FUN_005ffa40(uVar6);
        local_138 = CONCAT44(local_138._4_4_,uVar4);
        local_128 = 0;
        local_120 = 0;
        local_118 = 0xcc0020;
        thunk_FUN_0415fcd2(param_2,local_cc,local_c8,uVar3);
        FUN_00410f20(local_20);
      }
    }
  }
  return;
}

