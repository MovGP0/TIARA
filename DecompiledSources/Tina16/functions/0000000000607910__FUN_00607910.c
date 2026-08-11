/* Ghidra address: 00607910 */
/* Ghidra symbol: FUN_00607910 */


void FUN_00607910(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_005fdf10(param_1);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),*(longlong *)(param_1 + 0xa0));
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      thunk_FUN_0418f5de(*(undefined8 *)(param_1 + 0x60),*(longlong *)(param_1 + 0xa8),0xffffffff);
    }
    local_10 = *(undefined8 *)(param_1 + 0x60);
    FUN_005ffb10(param_1,0);
    thunk_FUN_041a2fd8(local_10);
    FUN_004afd50(DAT_01dee370,param_1,1);
    FUN_005fe090(param_1);
  }
  return;
}

