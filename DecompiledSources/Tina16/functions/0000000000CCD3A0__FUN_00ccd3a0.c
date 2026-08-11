/* Ghidra address: 00ccd3a0 */
/* Ghidra symbol: FUN_00ccd3a0 */


int FUN_00ccd3a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  int local_34;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  local_60 = auStack_88;
  local_34 = 0;
  (**(code **)PTR_DAT_02003ca0)();
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_20,param_2);
  uVar2 = (**(code **)*local_20)(local_20);
  local_28 = (**(code **)PTR_DAT_02002828)(local_20[1],uVar2);
  if (local_28 == 0) {
    FUN_00ca5690(0xad,7);
    FUN_00ccd620(0,local_60);
    return local_34;
  }
  local_40 = (**(code **)PTR_DAT_020015d0)
                       (local_28,0,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
  if (local_40 == 0) {
    FUN_00ca5690(0xdc,9);
  }
  else {
    local_34 = (**(code **)PTR_DAT_02001980)(param_1,local_40);
    iVar3 = (**(code **)PTR_DAT_02004858)();
    if (iVar3 != 0) {
      local_34 = 0;
    }
    if (local_34 != 0) {
      FUN_00ca55d0(param_1);
      do {
        local_48 = FUN_00ca5610(local_28,0,*(undefined8 *)(param_1 + 0xa0),
                                *(undefined8 *)(param_1 + 0xa8));
        if (local_48 == 0) goto code_r0x00ccd552;
        local_4c = FUN_00ca55b0(param_1);
      } while (local_4c != 0);
      (**(code **)PTR_DAT_02004818)(local_48);
      local_34 = 0;
code_r0x00ccd552:
      if (local_48 != 0) {
        local_50 = (**(code **)PTR_DAT_02002358)();
        iVar3 = FUN_00ca5640(local_50);
        if ((iVar3 == 9) && (iVar3 = FUN_00ca5650(local_50), iVar3 == 0x6c)) {
          (**(code **)PTR_DAT_02003ca0)();
        }
        else {
          local_34 = 0;
        }
      }
    }
    if (local_40 != 0) {
      (**(code **)PTR_DAT_02004818)(local_40);
    }
  }
  (**(code **)PTR_DAT_02002fc0)(local_28);
  puVar1 = local_20;
  local_30 = local_20;
  local_20 = (undefined8 *)0x0;
  FUN_00410f20(puVar1);
  return local_34;
}

