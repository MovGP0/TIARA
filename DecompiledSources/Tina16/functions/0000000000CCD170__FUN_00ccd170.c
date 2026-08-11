/* Ghidra address: 00ccd170 */
/* Ghidra symbol: FUN_00ccd170 */


undefined4 FUN_00ccd170(longlong param_1,undefined8 param_2,int param_3)

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
    FUN_00ca5690(0xad,7);
    goto LAB_00ccd31d;
  }
  if (param_3 == 1) {
    local_44 = 9;
    local_40 = FUN_00ca5610(local_28,0,*(undefined8 *)(param_1 + 0xa0),
                            *(undefined8 *)(param_1 + 0xa8));
LAB_00ccd2aa:
    if (local_40 != 0) {
      local_34 = (**(code **)PTR_DAT_02001980)(param_1,local_40);
      (**(code **)PTR_DAT_02004818)(local_40);
      (**(code **)PTR_DAT_02002fc0)(local_28);
      puVar1 = local_20;
      local_30 = local_20;
      local_20 = (undefined8 *)0x0;
      FUN_00410f20(puVar1);
      return local_34;
    }
    FUN_00ca5690(0xad,local_44);
  }
  else {
    if (param_3 == 2) {
      local_44 = 0xd;
      local_40 = (**(code **)PTR_DAT_02005ab8)(local_28,0);
      goto LAB_00ccd2aa;
    }
    FUN_00ca5690(0xad,0x7c);
  }
  FUN_00ccd350(0,local_50);
LAB_00ccd31d:
  FUN_00ccd370(0,local_50);
  return local_34;
}

