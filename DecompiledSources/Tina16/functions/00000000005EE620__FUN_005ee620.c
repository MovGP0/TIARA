/* Ghidra address: 005ee620 */
/* Ghidra symbol: FUN_005ee620 */


void FUN_005ee620(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_38 = *(longlong *)(param_1 + 0x10);
  FUN_005ea710(local_38,param_2);
  local_30 = FUN_005ebee0(*(undefined8 *)(param_1 + 0x10),param_2);
  if (local_30 != 0) {
    local_20 = *(undefined8 *)(local_38 + 8);
    cVar1 = FUN_004113d0(param_4,&PTR_FUN_0047cbc0);
    local_28 = param_4;
    if (cVar1 == '\0') {
      local_28 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    }
    if (local_28 != param_4) {
      lVar4 = (**(code **)*param_4)(param_4);
      lVar5 = FUN_004b6da0(param_4);
      FUN_004b8ba0(local_28,param_4,lVar4 - lVar5);
      FUN_004b6dc0(local_28,0);
    }
    FUN_005ea700(*(undefined8 *)(param_1 + 0x10),local_30);
    lVar4 = FUN_004b6da0(local_28);
    iVar2 = (**(code **)*local_28)(local_28);
    iVar3 = FUN_004b6da0(local_28);
    FUN_005ebc90(local_38,param_3,local_28[1] + lVar4,iVar2 - iVar3);
    FUN_005ea700(*(undefined8 *)(param_1 + 0x10),local_20);
    if (param_4 != local_28) {
      FUN_00410f20(local_28);
    }
    thunk_FUN_0418fb4b(local_30);
  }
  return;
}

