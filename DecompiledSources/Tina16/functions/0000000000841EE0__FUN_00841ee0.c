/* Ghidra address: 00841ee0 */
/* Ghidra symbol: FUN_00841ee0 */


void FUN_00841ee0(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  code **local_38;
  code *local_28;
  longlong local_20;
  
  local_28 = FUN_00848220;
  local_48 = *(undefined4 *)(param_1 + 0x4e8);
  local_40 = *(undefined4 *)(param_1 + 0x4a4);
  local_38 = &local_28;
  local_20 = param_1;
  FUN_00841e20(auStack_68,param_2,5,*(undefined4 *)(param_1 + 0x4bc));
  local_28 = FUN_00848250;
  local_48 = *(undefined4 *)(param_1 + 0x4ec);
  local_40 = *(undefined4 *)(param_1 + 0x4e0);
  local_38 = &local_28;
  local_20 = param_1;
  FUN_00841e20(auStack_68,param_2 + 0x38,10,*(undefined4 *)(param_1 + 0x4c0));
  return;
}

