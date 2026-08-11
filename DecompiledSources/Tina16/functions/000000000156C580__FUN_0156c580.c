/* Ghidra address: 0156c580 */
/* Ghidra symbol: FUN_0156c580 */


void FUN_0156c580(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_40 = 0;
  FUN_004b3880(*(undefined8 *)(param_1 + 0x18),&local_38);
  FUN_01575650(*(undefined8 *)(param_1 + 0x8d0),&local_40);
  local_58 = local_40;
  FUN_00416cd0(param_1 + 0x98,3,local_38,&LAB_0156c6d8);
  local_20 = *(longlong *)(param_1 + 0x98);
  local_24 = 0;
  if (local_20 != 0) {
    local_24 = *(int *)(local_20 + -4);
  }
  local_14 = local_24;
  local_10 = FUN_00409570((longlong)((local_24 + 1) * 2));
  FUN_00442620(local_10,*(undefined8 *)(param_1 + 0x98));
  _BusDisplay_SetData(param_2,local_10);
  FUN_004095f0(local_10);
  FUN_00414560(&local_40,2);
  return;
}

