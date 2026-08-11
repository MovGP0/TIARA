/* Ghidra address: 01bea9f0 */
/* Ghidra symbol: FUN_01bea9f0 */


void FUN_01bea9f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_88;
  if (*(longlong *)(param_1 + 800) == 0) {
    local_30 = 0;
    local_60 = auStack_88;
  }
  else {
    local_30 = FUN_004b1870(*(longlong *)(param_1 + 800));
  }
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2b08);
  if (cVar1 == '\0') {
    FUN_01c074b0(param_1,param_2,param_3,param_4);
  }
  else {
    local_58 = FUN_01c07120(param_1);
    *(short *)(local_58 + 0x318) = *(short *)(local_58 + 0x318) + 1;
    lVar3 = FUN_01c07120(param_1);
    plVar4 = (longlong *)FUN_01bfaa70(*(undefined8 *)(lVar3 + 0x498));
    (**(code **)(*plVar4 + 0x40))(plVar4);
    local_38 = FUN_004113f0(param_2,&PTR_FUN_01bf2b08);
    lVar3 = FUN_01c07120(param_1);
    local_40 = *(undefined8 *)(lVar3 + 0x4a0);
    pcVar5 = (code *)FUN_00411550(local_40,0xffec);
    lVar3 = (*pcVar5)(local_40);
    lVar6 = FUN_01c07120(param_1);
    uVar7 = FUN_01bfaa70(*(undefined8 *)(lVar6 + 0x498));
    local_20 = (longlong *)(**(code **)(lVar3 + 0x38))(lVar3,1,uVar7);
    FUN_01bfe550(local_20,1);
    FUN_01bfdfd0(local_20,*(undefined8 *)(local_38 + 0x68));
    lVar3 = FUN_01c07120(param_1);
    FUN_01bfe240(local_20,*(undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x4a0) + 0xe0) + 0x48)
                );
    (**(code **)(*local_20 + 0x28))(local_20,local_30);
    plVar4 = (longlong *)FUN_01bfaa70(local_20);
    (**(code **)(*plVar4 + 0x40))(plVar4);
    iVar2 = FUN_01bfee50();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_01c07120(param_1);
        local_50 = *(undefined8 *)(lVar3 + 0x4a0);
        pcVar5 = (code *)FUN_00411550(local_50,0xffec);
        lVar3 = (*pcVar5)(local_50);
        uVar7 = FUN_01bfaa70(local_20);
        local_28 = (**(code **)(lVar3 + 0x38))(lVar3,1,uVar7);
        uVar7 = FUN_01bfee10(local_38,local_2c);
        FUN_01bfde30(local_28,uVar7);
        FUN_01bfe240(local_28,*(undefined4 *)((longlong)local_20 + 0xa4));
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    plVar4 = (longlong *)FUN_01c07120(param_1);
    (**(code **)(*plVar4 + 0x340))(plVar4,local_20);
    uVar7 = FUN_01bfee50(local_38);
    (**(code **)(*(longlong *)local_20[0x10] + 0x128))
              ((longlong *)local_20[0x10],
               CONCAT71((int7)((ulonglong)uVar7 >> 8),0 < (int)uVar7) & 0xffffffff);
    plVar4 = (longlong *)FUN_01bfaa70(local_20);
    (**(code **)(*plVar4 + 0x48))(plVar4);
    lVar3 = FUN_01c07120(param_1);
    plVar4 = (longlong *)FUN_01bfaa70(*(undefined8 *)(lVar3 + 0x498));
    (**(code **)(*plVar4 + 0x48))(plVar4);
    uVar7 = FUN_01c07120(param_1);
    FUN_00654410(uVar7);
    uVar7 = FUN_01c07120(param_1);
    FUN_01bf6300(uVar7);
  }
  return;
}

