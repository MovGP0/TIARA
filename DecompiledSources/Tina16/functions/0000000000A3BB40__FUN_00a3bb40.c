/* Ghidra address: 00a3bb40 */
/* Ghidra symbol: FUN_00a3bb40 */


void FUN_00a3bb40(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_3c;
  undefined1 local_38 [16];
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a2f148);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
    if ((cVar1 != '\0') && (cVar1 = FUN_00a3c6f0(param_1), cVar1 != '\0')) {
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      (**(code **)(*param_2 + 0xe0))(param_2,uVar2,uVar3);
      cVar1 = FUN_00a3c2e0(param_1);
      if (cVar1 == '\x02') {
        FUN_0060bbf0(param_2,7);
        FUN_0060a2b0(param_2,1);
        lVar5 = FUN_00609e10(param_2);
        FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0);
        plVar6 = (longlong *)FUN_00609e10(param_2);
        uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
        local_98 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_00498370(local_38,0,0,uVar2);
        (**(code **)(*plVar6 + 0xa8))(plVar6,local_38);
      }
      else {
        uVar2 = FUN_00a3ba60(auStack_b8);
        FUN_0060bbf0(param_2,uVar2);
        FUN_0060a2b0(param_2,0);
      }
      lVar5 = (**(code **)(*param_1 + 0x50))(param_1);
      if (lVar5 != 0) {
        uVar7 = (**(code **)(*param_1 + 0x50))(param_1);
        uVar7 = FUN_00608880(uVar7);
        (**(code **)(*param_2 + 0x78))(param_2,uVar7);
      }
      cVar1 = FUN_00a3c2e0(param_1);
      if (cVar1 == '\x01') {
        uVar7 = FUN_00a33e30(param_1[0x2c],&PTR_FUN_00a31a70);
        uVar2 = FUN_00a35880(uVar7);
        FUN_0060be30(param_2,uVar2);
        (**(code **)(*param_2 + 0x80))(param_2,1);
        uVar7 = FUN_00609e10(param_2);
        uVar7 = FUN_005ffa40(uVar7);
        thunk_FUN_041e8c78(uVar7,3);
        uVar7 = FUN_00609e10(param_2);
        local_48 = FUN_005ffa40(uVar7);
        local_3c = (**(code **)(*param_1 + 0x60))(param_1);
        uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        lVar5 = FUN_00a39e90(param_1);
        local_68 = FUN_00a39e90(param_1);
        local_90 = 0;
        local_88 = 0;
        local_70 = *(undefined8 *)(lVar5 + 0x478);
        local_68 = local_68 + 0x44;
        local_60 = 0;
        local_58 = 0xcc0020;
        local_98 = uVar2;
        local_80 = uVar3;
        local_78 = uVar4;
        thunk_FUN_03cc01a5(local_48,0,0,local_3c);
        return;
      }
      plVar6 = (longlong *)FUN_00609e10(param_2);
      (**(code **)(*plVar6 + 0x88))(plVar6,0,0,param_1);
      return;
    }
    FUN_004b1190(param_1,param_2);
  }
  else {
    FUN_00a3c080(param_2,param_1);
  }
  return;
}

