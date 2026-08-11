/* Ghidra address: 00554ab0 */
/* Ghidra symbol: FUN_00554ab0 */


undefined8
FUN_00554ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_60 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00417580(local_60,&DAT_00527bf8);
  uVar4 = FUN_005466a0(param_1);
  FUN_005376c0(param_3,local_60,uVar4,1);
  FUN_005382b0(local_60,&local_30);
  FUN_00554100(param_1,&local_40);
  lVar5 = 0;
  if (local_40 != 0) {
    lVar5 = *(longlong *)(local_40 + -8);
  }
  if (param_5 + 1 != lVar5) {
    uVar4 = FUN_0044d710(&PTR_FUN_005277c0,1,PTR_PTR_02001778);
    FUN_004134c0(uVar4);
  }
  FUN_00419260(&local_38,&DAT_00492e48,1,(longlong)(param_5 + 1));
  local_cc = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    do {
      lVar7 = (longlong)local_cc;
      plVar1 = *(longlong **)(local_40 + lVar7 * 8);
      lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (lVar5 == 0) {
        uVar4 = FUN_00538390(param_4);
        FUN_00560000(&local_88,uVar4);
        FUN_00417c40(local_38 + lVar7 * 0x20,&local_88,&DAT_00527bf8);
      }
      else {
        plVar1 = *(longlong **)(local_40 + lVar7 * 8);
        bVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
        if ((bVar2 & 0x21) == 0) {
          plVar1 = *(longlong **)(local_40 + lVar7 * 8);
          uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
          uVar4 = FUN_005466a0(uVar4);
          FUN_005376c0(param_4,&local_c8,uVar4,1);
          FUN_00417c40(local_38 + lVar7 * 0x20,&local_c8,&DAT_00527bf8);
        }
        else {
          plVar1 = *(longlong **)(local_40 + lVar7 * 8);
          uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
          lVar5 = FUN_005466a0(uVar4);
          lVar6 = FUN_00536180(param_4);
          if (lVar5 != lVar6) {
            uVar4 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02004980);
            FUN_004134c0(uVar4);
          }
          uVar4 = FUN_00538390(param_4);
          FUN_00560000(&local_a8,uVar4);
          FUN_00417c40(local_38 + lVar7 * 0x20,&local_a8,&DAT_00527bf8);
        }
      }
      local_cc = local_cc + 1;
      param_4 = param_4 + 0x20;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  lVar5 = FUN_005540b0(param_1);
  if (lVar5 == 0) {
    uVar3 = FUN_005540d0(param_1);
    FUN_00557210(param_2,local_30,local_38,uVar3,0,0,0);
  }
  else {
    uVar3 = FUN_005540d0(param_1);
    uVar4 = FUN_005540b0(param_1);
    uVar4 = FUN_005466a0(uVar4);
    FUN_00557210(param_2,local_30,local_38,uVar3,uVar4,0,0);
  }
  FUN_00417840(&local_c8,&DAT_00527bf8,3);
  FUN_00417740(local_60,&DAT_00527bf8);
  FUN_00419430(&local_40,&DAT_00531510);
  FUN_00419430(&local_38,&DAT_00492e48);
  return param_2;
}

