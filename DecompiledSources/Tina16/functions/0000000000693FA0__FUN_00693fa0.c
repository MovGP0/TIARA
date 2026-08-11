/* Ghidra address: 00693fa0 */
/* Ghidra symbol: FUN_00693fa0 */


void FUN_00693fa0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [4];
  int local_ac;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined1 *local_90;
  bool local_81;
  undefined8 local_80;
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  longlong *local_28;
  longlong *local_20;
  
  local_90 = auStack_e8;
  cVar1 = FUN_006926e0(param_1);
  if (cVar1 == '\0') {
    local_81 = true;
  }
  else {
    local_80 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = thunk_FUN_04118143(local_80,0xfffffff0);
    local_81 = (uVar4 & 0x200000) == 0;
  }
  if (local_81 == false) {
    local_28 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    if (param_2 == 0) {
      uVar5 = thunk_FUN_0411fe47(*(undefined8 *)(param_1 + 0x68));
      FUN_005ffb10(local_28,uVar5);
    }
    else {
      FUN_005ffb10(local_28,param_2);
    }
    FUN_00693850(param_1,local_54);
    iVar2 = FUN_004230a0(local_54);
    if (0 < iVar2) {
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_00693850(param_1,local_64);
      uVar3 = FUN_004230a0(local_64);
      (**(code **)(*local_20 + 0x88))(local_20,uVar3);
      FUN_00693850(param_1,local_74);
      uVar3 = FUN_004230c0(local_74);
      (**(code **)(*local_20 + 0x70))(local_20,uVar3);
      uVar5 = FUN_00609e10(local_20);
      uVar5 = FUN_005ffa40(uVar5);
      FUN_00693850(param_1,&local_a0);
      FUN_00693850(param_1,local_b0);
      FUN_0064ae10(uVar5,-local_a0,-local_ac);
      plVar6 = (longlong *)FUN_00777cd0();
      cVar1 = (**(code **)(*plVar6 + 0x90))(plVar6);
      if (cVar1 != '\0') {
        FUN_00693850(param_1,local_44);
        FUN_006939a0(param_1,&local_a0);
        local_40 = local_94;
        FUN_00693910(param_1,&local_a0);
        local_38 = local_9c;
        iVar2 = FUN_004230c0(local_44);
        if (0 < iVar2) {
          plVar6 = (longlong *)FUN_00777cd0();
          (**(code **)(*plVar6 + 0x198))(plVar6,local_34,0x2d);
          uVar5 = FUN_00777cd0();
          uVar7 = FUN_00609e10(local_20);
          uVar7 = FUN_005ffa40(uVar7);
          local_c8 = 0;
          local_c0 = 0;
          FUN_00778dc0(uVar5,uVar7,local_34,local_44);
        }
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 0x198))(plVar6,local_34,*(undefined1 *)(param_1 + 0x60));
        uVar5 = FUN_00777cd0();
        uVar7 = FUN_00609e10(local_20);
        uVar7 = FUN_005ffa40(uVar7);
        FUN_00693b00(param_1,&local_a0);
        local_c8 = 0;
        local_c0 = 0;
        FUN_00778dc0(uVar5,uVar7,local_34,&local_a0);
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 0x198))(plVar6,local_34,*(undefined1 *)(param_1 + 0x61));
        uVar5 = FUN_00777cd0();
        uVar7 = FUN_00609e10(local_20);
        uVar7 = FUN_005ffa40(uVar7);
        FUN_006939a0(param_1,&local_a0);
        local_c8 = 0;
        local_c0 = 0;
        FUN_00778dc0(uVar5,uVar7,local_34,&local_a0);
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 0x198))(plVar6,local_34,*(undefined1 *)(param_1 + 0x62));
        uVar5 = FUN_00777cd0();
        uVar7 = FUN_00609e10(local_20);
        uVar7 = FUN_005ffa40(uVar7);
        FUN_00693910(param_1,&local_a0);
        local_c8 = 0;
        local_c0 = 0;
        FUN_00778dc0(uVar5,uVar7,local_34,&local_a0);
      }
      uVar5 = FUN_00609e10(local_20);
      uVar5 = FUN_005ffa40(uVar5);
      FUN_00693850(param_1,&local_a0);
      FUN_00693850(param_1,local_b0);
      FUN_0064ae10(uVar5,local_a0,local_ac);
      FUN_00693850(param_1,&local_a0);
      FUN_00693850(param_1,local_b0);
      (**(code **)(*local_28 + 0x88))(local_28,local_a0,local_ac,local_20);
      FUN_00410f20(local_20);
    }
    if (param_2 == 0) {
      uVar5 = FUN_005ffa40(local_28);
      thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 0x68),uVar5);
      FUN_005ffb10(local_28,0);
    }
    else {
      FUN_005ffb10(local_28,0);
    }
    FUN_00410f20(local_28);
  }
  return;
}

