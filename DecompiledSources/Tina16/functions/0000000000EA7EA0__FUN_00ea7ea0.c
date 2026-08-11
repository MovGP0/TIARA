/* Ghidra address: 00ea7ea0 */
/* Ghidra symbol: FUN_00ea7ea0 */


void FUN_00ea7ea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [48];
  undefined8 local_20 [2];
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_20[0] = 0;
  FUN_00417580(local_50,&DAT_00ea5ae8);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_20[0] = 0;
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),local_20);
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_64 = FUN_00ea4500(local_58,0);
    local_60 = *(undefined8 *)(param_1 + 0x20);
    local_88 = FUN_00ea4460(local_60,0);
    local_80 = 1;
    FUN_00ea7370(local_50,*(undefined8 *)(param_1 + 0x18),local_20[0],local_64);
    FUN_00414480(local_20);
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),&local_78,local_50);
    FUN_00414ad0(param_3,local_78);
  }
  FUN_00414480(&local_78);
  FUN_00417740(local_50,&DAT_00ea5ae8);
  return;
}

