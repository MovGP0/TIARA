/* Ghidra address: 0135b760 */
/* Ghidra symbol: FUN_0135b760 */


void FUN_0135b760(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 *local_40;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_40 = auStack_78;
  local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_58 = local_58 & 0xffffff00;
  local_20[0] = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,1);
  if (local_20[0] != 0) {
    local_30 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
    FUN_0198cd90(local_30,param_2,0x11,1);
    local_58 = 0;
    (**(code **)(*local_30 + 0x48))(local_30,local_20,0,0);
    FUN_00611620(*(undefined8 *)(param_1 + 8),local_28);
    FUN_0135b880(param_1,1);
    uVar1 = (**(code **)*local_30)(local_30);
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  FUN_00410f20(local_20[0]);
  return;
}

