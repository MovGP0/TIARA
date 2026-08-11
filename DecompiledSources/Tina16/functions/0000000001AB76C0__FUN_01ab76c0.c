/* Ghidra address: 01ab76c0 */
/* Ghidra symbol: FUN_01ab76c0 */


void FUN_01ab76c0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_00414610(param_5);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0xe8);
  local_50 = param_3;
  if (param_3 < iVar3) {
    local_50 = iVar3;
  }
  local_4c = param_4;
  if (param_4 < iVar3) {
    local_4c = iVar3;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0xec);
  if (iVar3 < local_50) {
    local_50 = iVar3;
  }
  if (iVar3 < local_4c) {
    local_4c = iVar3;
  }
  if (*(int *)(param_1 + 0xb0) < local_4c) {
    *(int *)(param_1 + 0xb0) = local_4c;
    uVar2 = (longlong)
            (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) -
            *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2;
    iVar3 = (local_4c - local_50) / 2;
    iVar6 = (int)uVar2;
    uVar2 = (ulonglong)(uint)(iVar6 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
    iVar5 = (int)((longlong)uVar2 / 2);
    if (iVar5 <= iVar3) {
      iVar3 = iVar5;
    }
    lVar7 = FUN_01d2b190(&PTR_FUN_01d29210,
                         CONCAT71((uint7)((ulonglong)((longlong)uVar2 % 2) >> 8) & 0xffffff,1));
    (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x10))
              (*(longlong **)(lVar7 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar7,local_50,*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) - iVar6);
    FUN_01d2c460(lVar7,local_50 + iVar3,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xec));
    FUN_01d2c460(lVar7,local_4c - iVar3,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xec));
    FUN_01d2c460(lVar7,local_4c,*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) - iVar6);
    FUN_01d2c460(lVar7,local_4c - iVar3,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xe8));
    FUN_01d2c460(lVar7,local_50 + iVar3,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xe8));
    FUN_01d2c460(lVar7,local_50,*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) - iVar6);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
              (*(longlong **)(param_1 + 0x48),L"DigPeriod",lVar7);
    plVar8 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
    FUN_005fcd80(*(undefined8 *)(plVar8[0x12] + 0x80),L"Arial");
    FUN_005fce70(*(undefined8 *)(plVar8[0x12] + 0x80),0);
    FUN_005fce30(*(undefined8 *)(plVar8[0x12] + 0x80),0x1e);
    uVar4 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x78));
    FUN_005fc860(*(undefined8 *)(plVar8[0x12] + 0x80),uVar4);
    FUN_01ab7650(param_1,local_40,param_5);
    (**(code **)(**(longlong **)(plVar8[0x12] + 0xa0) + 0x78))
              (*(longlong **)(plVar8[0x12] + 0xa0),local_40[0]);
    while( true ) {
      iVar3 = FUN_01d1bfb0(plVar8[0x12],param_2);
      if (iVar3 <= (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) -
                   *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) + -2) break;
      iVar3 = FUN_005fce00(*(undefined8 *)(plVar8[0x12] + 0x80));
      if (iVar3 < 4) break;
      uVar1 = *(undefined8 *)(plVar8[0x12] + 0x80);
      iVar3 = FUN_005fce00(uVar1);
      FUN_005fce30(uVar1,iVar3 + -1);
    }
    iVar5 = FUN_01d1b660(plVar8[0x12],param_2);
    lVar7 = *(longlong *)(param_1 + 0xf0);
    iVar3 = *(int *)(lVar7 + 0xec);
    iVar6 = FUN_01d1bfb0(plVar8[0x12],param_2);
    local_48 = FUN_00498310(local_50 + ((local_4c - local_50) - iVar5) / 2,
                            iVar3 + ((*(int *)(lVar7 + 0xe8) - iVar3) - iVar6) / 2);
    (**(code **)(*plVar8 + 200))(plVar8,&local_48);
    iVar3 = FUN_01d1b660(plVar8[0x12],param_2);
    if (iVar3 < local_4c - local_50) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                (*(longlong **)(param_1 + 0x48),L"DigPeriod",plVar8);
    }
    else {
      FUN_00410f20(plVar8);
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(&param_5);
  return;
}

