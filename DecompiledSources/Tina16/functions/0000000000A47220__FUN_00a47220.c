/* Ghidra address: 00a47220 */
/* Ghidra symbol: FUN_00a47220 */


undefined8 FUN_00a47220(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_28 = *(undefined8 *)(param_1 + 8);
  local_10 = thunk_FUN_040ef593(0);
  local_18 = thunk_FUN_0418f5de(local_10,*(undefined8 *)PTR_DAT_020036e8,0);
  thunk_FUN_03a5de49(local_10);
  local_48 = local_28;
  local_40 = 0;
  local_20 = thunk_FUN_041525f6(local_10,local_28,4,*(undefined8 *)(param_1 + 0x18));
  thunk_FUN_0418f5de(local_10,local_18,0);
  thunk_FUN_041a9b5c(0,local_10);
  return local_20;
}

