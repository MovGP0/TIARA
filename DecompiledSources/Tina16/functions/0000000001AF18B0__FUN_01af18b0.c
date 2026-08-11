/* Ghidra address: 01af18b0 */
/* Ghidra symbol: FUN_01af18b0 */


void FUN_01af18b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  code *local_18;
  longlong local_10;
  
  local_20 = 0;
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    if (*(char *)(param_1 + 0x7b2) == '\0') {
      local_18 = FUN_01af1a30;
      local_10 = param_1;
      FUN_00f834f0(&local_18);
      *(undefined1 *)(param_1 + 0x7b2) = 1;
      FUN_0064e140(param_1,0xfff5);
    }
  }
  else {
    if (*(longlong *)PTR_DAT_02004e40 != 0) {
      uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
      thunk_FUN_0413e052(uVar1,0x123b,3,0);
    }
    *(undefined1 *)(param_1 + 0x7a0) = 0;
    FUN_00648720(&local_20,*(undefined8 *)(param_1 + 0x7c8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_20);
    local_18 = FUN_01af1a30;
    local_10 = param_1;
    FUN_00f833f0(&local_18,100);
  }
  FUN_00414480(&local_20);
  return;
}

