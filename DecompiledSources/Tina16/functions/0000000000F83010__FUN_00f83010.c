/* Ghidra address: 00f83010 */
/* Ghidra symbol: FUN_00f83010 */


void FUN_00f83010(longlong param_1,longlong param_2,ushort param_3,ushort param_4,int param_5,
                 longlong *param_6)

{
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_4c;
  longlong local_48;
  longlong local_40;
  char local_31;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  
  local_60 = auStack_88;
  local_30 = *param_6;
  lStack_28 = param_6[1];
  if (*(char *)(param_1 + 0x8e) == '\0') {
    local_31 = '\0';
    local_4c = 0;
    local_48 = FUN_004afa30(*(undefined8 *)(param_1 + 0x80));
    while ((local_4c <= *(int *)(local_48 + 0x10) + -1 && (local_31 == '\0'))) {
      local_40 = FUN_004aeac0(local_48,local_4c);
      if (local_40 != 0) {
        if ((((*(uint *)(local_40 + 0x30) == (uint)param_3) &&
             (*(ulonglong *)(local_40 + 0x38) == (ulonglong)param_4)) &&
            (*(longlong *)(local_40 + 0x40) == (longlong)param_5)) &&
           ((*(longlong *)(local_40 + 8) == param_2 && (*(longlong *)(local_40 + 0x10) == local_30))
           )) {
          local_31 = '\x01';
        }
        else {
          local_31 = '\0';
        }
      }
      local_4c = local_4c + 1;
    }
    if (local_31 != '\0') {
      thunk_FUN_0417aa68(*(undefined4 *)(local_40 + 0x6c));
      FUN_004ae870(local_48,local_4c + -1);
      FUN_00410f20(local_40);
    }
    local_20 = *(longlong *)(param_1 + 0x80);
    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
  }
  return;
}

