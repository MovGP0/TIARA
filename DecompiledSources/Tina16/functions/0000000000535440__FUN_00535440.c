/* Ghidra address: 00535440 */
/* Ghidra symbol: FUN_00535440 */


void FUN_00535440(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar3 == 0) {
    uVar4 = FUN_00538390(param_2);
    FUN_00560000(&local_38,uVar4);
    FUN_00417c40(param_3,&local_38,&DAT_00527bf8);
    goto code_r0x005356e7;
  }
  bVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((bVar1 & 0x21) != 0) {
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar3 = FUN_005466a0(uVar4);
    lVar5 = FUN_00536180(param_2);
    if (lVar3 != lVar5) {
      uVar4 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02004980);
      FUN_004134c0(uVar4);
    }
    uVar4 = FUN_00538390(param_2);
    FUN_00560000(&local_58,uVar4);
    FUN_00417c40(param_3,&local_58,&DAT_00527bf8);
    goto code_r0x005356e7;
  }
  uVar6 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((uVar6 & 2) == 0) {
LAB_005356a7:
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar4 = FUN_005466a0(uVar4);
    FUN_005376c0(param_2,&local_b8,uVar4,1);
    FUN_00417c40(param_3,&local_b8,&DAT_00527bf8);
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((uVar6 & 0x10) == 0) {
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = FUN_005466a0(uVar4);
      cVar2 = FUN_00535260(uVar4,param_4,1);
      if (cVar2 == '\0') goto LAB_005356a7;
    }
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    puVar7 = (undefined *)FUN_005466a0(uVar4);
    if (puVar7 == &DAT_00527bf8) {
      FUN_00560040(&local_78,param_2);
      FUN_00417c40(param_3,&local_78,&DAT_00527bf8);
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      lVar3 = FUN_005466a0(uVar4);
      lVar5 = FUN_00536180(param_2);
      if (lVar3 != lVar5) {
        uVar4 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02004980);
        FUN_004134c0(uVar4);
      }
      uVar4 = FUN_00538390(param_2);
      FUN_00560000(&local_98,uVar4);
      FUN_00417c40(param_3,&local_98,&DAT_00527bf8);
    }
  }
code_r0x005356e7:
  FUN_00417840(&local_b8,&DAT_00527bf8,5);
  return;
}

