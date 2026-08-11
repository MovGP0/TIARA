/* Ghidra address: 00bb3840 */
/* Ghidra symbol: FUN_00bb3840 */


undefined1 FUN_00bb3840(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  ulonglong local_28;
  ulonglong local_20;
  undefined1 local_11;
  longlong *local_10;
  
  local_40 = auStack_68;
  local_20 = 0;
  local_10 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  uVar1 = FUN_00b97c30(&PTR_FUN_0043a338);
  FUN_00b97c60(uVar1,&local_20);
  local_28 = local_20;
  if (local_20 != 0) {
    local_28 = *(ulonglong *)(local_20 - 8);
  }
  (**(code **)(*local_10 + 0x20))(local_10,local_20,local_28 & 0xffffffff);
  local_2c = 0;
  if (param_2 != 0) {
    local_2c = *(int *)(param_2 + -4);
  }
  uVar1 = FUN_00416740(param_2);
  (**(code **)(*local_10 + 0x20))(local_10,uVar1,local_2c * 2);
  (**(code **)(*local_10 + 0x48))(local_10,0,0);
  local_11 = FUN_00bb3b90(param_1,local_10);
  FUN_00410f20(local_10);
  FUN_00419430(&local_20,&DAT_00406578);
  return local_11;
}

