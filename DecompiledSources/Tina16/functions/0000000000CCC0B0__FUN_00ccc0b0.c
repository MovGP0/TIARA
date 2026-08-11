/* Ghidra address: 00ccc0b0 */
/* Ghidra symbol: FUN_00ccc0b0 */


undefined4 FUN_00ccc0b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_54;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_70 = auStack_a8;
  local_60 = 0;
  local_54 = 0;
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_20,param_2);
  uVar2 = (**(code **)*local_20)(local_20);
  local_48 = (**(code **)PTR_DAT_02002828)(local_20[1],uVar2);
  if (local_48 == 0) {
    FUN_00ca5690(0xad,7);
  }
  else {
    FUN_00419260(&local_60,&DAT_00ccc078,1,0x81);
    *(undefined1 *)(local_60 + 0x80) = 0;
    local_68 = local_60;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      (**(code **)(param_1 + 0xa0))(local_60,0x80,0,*(undefined8 *)(param_1 + 0xa8));
    }
    local_40 = (**(code **)PTR_DAT_02004058)(local_48,0);
    if (local_40 == 0) {
      FUN_00ca5690(0xad,0x23);
    }
    else {
      local_28 = 0;
      local_88 = &local_28;
      iVar3 = (**(code **)PTR_DAT_02004780)(local_40,local_68,&local_38,&local_30);
      if (iVar3 == 1) {
        local_54 = (**(code **)PTR_DAT_02001980)(param_1,local_30);
        (**(code **)PTR_DAT_02001688)(local_28,*(undefined8 *)PTR_DAT_02004818);
        (**(code **)PTR_DAT_02004818)(local_30);
        (**(code **)PTR_DAT_020010f0)(local_38);
        (**(code **)PTR_DAT_02002f30)(local_40);
        (**(code **)PTR_DAT_02002fc0)(local_48);
        puVar1 = local_20;
        local_50 = local_20;
        local_20 = (undefined8 *)0x0;
        FUN_00410f20(puVar1);
        goto LAB_00ccc322;
      }
      FUN_00ca5690(0xad,0x23);
      FUN_00ccc3a0(0,local_70);
    }
    FUN_00ccc3c0(0,local_70);
  }
  FUN_00ccc3e0(0,local_70);
LAB_00ccc322:
  FUN_00419430(&local_60,&DAT_00ccc078);
  return local_54;
}

