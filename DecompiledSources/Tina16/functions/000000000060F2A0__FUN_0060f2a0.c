/* Ghidra address: 0060f2a0 */
/* Ghidra symbol: FUN_0060f2a0 */


longlong * FUN_0060f2a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_50 [16];
  undefined1 *local_40;
  longlong *local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_20 + 0x88))(local_20,8);
  (**(code **)(*local_20 + 0x70))(local_20,8);
  local_30 = (longlong *)FUN_00609e10(local_20);
  FUN_005fdcb0(local_30[0x10],0);
  FUN_005fdab0(local_30[0x10],param_2);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_68 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_50,0,0,uVar1);
  (**(code **)(*local_30 + 0xa8))(local_30,local_50);
  local_28 = 0;
  do {
    local_24 = 0;
    do {
      if (local_28 % 2 == local_24 % 2) {
        (**(code **)(*local_30 + 0x40))(local_30,local_24,local_28,param_3);
      }
      local_24 = local_24 + 1;
    } while (local_24 != 9);
    local_28 = local_28 + 1;
  } while (local_28 != 9);
  FUN_00609160(local_20);
  return local_20;
}

