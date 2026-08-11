/* Ghidra address: 00661d70 */
/* Ghidra symbol: FUN_00661d70 */


void FUN_00661d70(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_20 = 0;
  local_10 = 0;
  FUN_00414480(param_2);
  FUN_004b84c0(*(undefined8 *)(param_1 + 0xf8),&local_14,4);
  if (0 < local_14) {
    FUN_00419260(&local_20,&DAT_00406578,1,(longlong)local_14);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0xf8),local_20,(longlong)local_14);
    FUN_00414480(&local_10);
    local_28 = FUN_0045ae90();
    local_30 = local_20;
    if (local_20 != 0) {
      local_30 = *(longlong *)(local_20 + -8);
    }
    local_58 = (undefined4)local_30;
    FUN_0045aba0(local_28,&local_10,local_20,0);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00419430(&local_20,&DAT_00406578);
  FUN_00414480(&local_10);
  return;
}

