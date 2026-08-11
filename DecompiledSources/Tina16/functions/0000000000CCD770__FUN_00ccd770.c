/* Ghidra address: 00ccd770 */
/* Ghidra symbol: FUN_00ccd770 */


undefined4 FUN_00ccd770(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_34;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  local_34 = 0;
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_20,param_2);
  uVar2 = (**(code **)*local_20)(local_20);
  local_28 = (**(code **)PTR_DAT_02002828)(local_20[1],uVar2);
  if (local_28 == 0) {
    FUN_00ca5690(0xd5,7);
  }
  else {
    if (param_3 == 1) {
      local_44 = 5;
      local_40 = FUN_00ca5630(local_28,0,*(undefined8 *)(param_1 + 0xa0),
                              *(undefined8 *)(param_1 + 0xa8));
      if (local_40 != 0) {
        local_34 = FUN_00ca54f0(param_1,local_40);
        (**(code **)PTR_DAT_020053b8)(local_40);
        (**(code **)PTR_DAT_02002fc0)(local_28);
        puVar1 = local_20;
        local_30 = local_20;
        local_20 = (undefined8 *)0x0;
        FUN_00410f20(puVar1);
        return local_34;
      }
      FUN_00ca5690(0xd5,local_44);
    }
    else {
      FUN_00ca5690(0xd5,0x7c);
    }
    FUN_00ccd920(0,local_50);
  }
  FUN_00ccd940(0,local_50);
  return local_34;
}

