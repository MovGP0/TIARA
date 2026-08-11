/* Ghidra address: 00ea8460 */
/* Ghidra symbol: FUN_00ea8460 */


undefined8 FUN_00ea8460(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  char local_11;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_10 = 0;
  FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_3);
  FUN_00ea4e40(*(undefined8 *)(param_1 + 0x20),param_4);
  local_11 = FUN_00ea4940(*(undefined8 *)(param_1 + 0x20));
  if (local_11 == '\0') {
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),&local_48);
    local_58 = 0;
    local_50 = local_11;
    FUN_00ea7370(param_2,*(undefined8 *)(param_1 + 0x18),local_48,0);
  }
  else {
    local_10 = 0;
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),&local_10);
    local_20 = *(undefined8 *)(param_1 + 0x20);
    local_2c = FUN_00ea4500(local_20,0);
    local_28 = *(undefined8 *)(param_1 + 0x20);
    local_58 = FUN_00ea4460(local_28,0);
    local_50 = local_11;
    FUN_00ea7370(param_2,*(undefined8 *)(param_1 + 0x18),local_10,local_2c);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_48);
  return param_2;
}

