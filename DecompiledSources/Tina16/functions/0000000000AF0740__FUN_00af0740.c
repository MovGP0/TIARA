/* Ghidra address: 00af0740 */
/* Ghidra symbol: FUN_00af0740 */


void FUN_00af0740(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_10 = FUN_00ad03b0(&DAT_00acfb00,1,*(undefined8 *)(param_1 + 0x8c8));
  FUN_00ae63d0(local_10,*(undefined8 *)(param_1 + 0x8b0));
  FUN_00ad3070(local_10,&local_28);
  FUN_00af0380(param_1,local_28,*(undefined8 *)(local_10 + 0x10),*(undefined8 *)(local_10 + 0x18));
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  return;
}

