/* Ghidra address: 01c00b50 */
/* Ghidra symbol: FUN_01c00b50 */


void FUN_01c00b50(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  FUN_0064ebd0(param_1,param_2,param_3,param_4);
  if (param_1[0x93] == 0) {
    local_20 = FUN_004113f0(param_2,&PTR_FUN_01bf2330);
    FUN_01c02120(param_1,*(undefined8 *)(local_20 + 0x50));
    lVar2 = FUN_01bfb5a0(*(undefined8 *)(*(longlong *)(local_20 + 0x50) + 0xe0));
    param_1[0x93] = lVar2;
    *(longlong **)(lVar2 + 0x18) = param_1;
  }
  *(short *)(param_1 + 99) = (short)param_1[99] + 1;
  local_28 = param_1;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2b08);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2778);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x290))(param_1,param_2,param_3,param_4);
      }
    }
    else {
      (**(code **)(*param_1 + 0x288))(param_1,param_2,param_3,param_4);
    }
  }
  else {
    (**(code **)(*param_1 + 0x348))(param_1,param_2,param_3,param_4);
  }
  uVar3 = FUN_01bfaa70(param_1[0x93]);
  FUN_01bf9980(uVar3,1);
  (**(code **)(*(longlong *)param_1[0x93] + 0x68))((longlong *)param_1[0x93]);
  FUN_00654410(param_1);
  FUN_00654320(param_1,0);
  return;
}

