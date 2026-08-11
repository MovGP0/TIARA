/* Ghidra address: 00636180 */
/* Ghidra symbol: FUN_00636180 */


undefined8 FUN_00636180(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_40 [2];
  undefined1 local_38;
  uint local_30;
  undefined1 local_28;
  uint local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_005fbf20(param_2);
  local_40[0] = uVar1 & 0xff;
  local_38 = 0;
  local_30 = uVar1 >> 8 & 0xff;
  local_28 = 0;
  local_20 = uVar1 >> 0x10 & 0xff;
  local_18 = 0;
  FUN_00442f70(&local_10,L"#%.2x%.2x%.2x",local_40,2);
  FUN_0043e130(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

