/* Ghidra address: 00c4e2f0 */
/* Ghidra symbol: FUN_00c4e2f0 */


void FUN_00c4e2f0(void)

{
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  longlong *local_18;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_4c = 2;
  local_28 = &DAT_02019c90;
  do {
    if (*local_28 != 0) {
      local_48 = *(undefined8 *)(*local_28 + 8);
      local_40 = 0x11;
      FUN_00442f70(&local_38,L"SMemcomm destroy ",&local_48,0);
      FUN_00c4c420(local_38);
      local_18 = local_28;
      local_20 = *local_28;
      *local_28 = 0;
      FUN_00410f20(local_20);
    }
    local_28 = local_28 + 1;
    local_4c = local_4c + -1;
  } while (local_4c != 0);
  FUN_00414480(&local_38);
  return;
}

