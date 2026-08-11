/* Ghidra address: 00af2250 */
/* Ghidra symbol: FUN_00af2250 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af2250(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_48 [17];
  char local_37;
  undefined1 local_34 [17];
  char local_23;
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  char local_f;
  char local_9;
  
  local_50 = auStack_78;
  FUN_0065b830(param_1);
  local_9 = (*(ushort *)(param_1 + 0x8a0) & 2) != 0;
  *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) | 2;
  FUN_00af1a50(param_1,local_20,0,0);
  if ((byte)(*(char *)(param_1 + 0x799) - 2U) < 2) {
    if (DAT_0201476c < 0) {
      _DAT_02014780 = _DAT_02014780 + 1;
      if ((*(ushort *)(param_1 + 0x79a) & 0x40) == 0) {
        DAT_02014784 = DAT_02014784 + 1;
        FUN_00af21b0(auStack_78,local_18,local_14);
        FUN_00af1a50(param_1,local_34,*(undefined4 *)(param_1 + 0x918),
                     *(undefined4 *)(param_1 + 0x908));
        local_f = local_23;
        if (local_23 != '\0') {
          DAT_02014788 = DAT_02014788 + 1;
          FUN_00af21b0(auStack_78,local_18 - *(int *)(param_1 + 0x760),local_14);
          FUN_00af1a50(param_1,local_48,*(undefined4 *)(param_1 + 0x918),
                       *(undefined4 *)(param_1 + 0x908));
          local_f = local_37;
          if (local_37 == '\0') {
            DAT_0201478c = DAT_0201478c + 1;
            FUN_00af21b0(auStack_78,local_18,local_14);
          }
        }
      }
      else {
        FUN_00af21b0(auStack_78,local_18 - *(int *)(param_1 + 0x760),local_14);
      }
    }
    else {
      _DAT_02014770 = _DAT_02014770 + 1;
      FUN_00af21b0(auStack_78,local_18 - *(int *)(param_1 + 0x760),local_14);
      if (((*(ushort *)(param_1 + 0x79a) & 0x40) == 0) && (0 < *(int *)(param_1 + 0x908))) {
        DAT_02014774 = DAT_02014774 + 1;
        FUN_00af1a50(param_1,local_34,*(undefined4 *)(param_1 + 0x918),
                     *(undefined4 *)(param_1 + 0x908));
        local_f = local_23;
        if ((local_23 == '\0') || (*(int *)(param_1 + 0x908) <= local_14 * 2)) {
          DAT_02014778 = DAT_02014778 + 1;
          FUN_00af21b0(auStack_78,local_18,local_14);
          FUN_00af1a50(param_1,local_48,*(undefined4 *)(param_1 + 0x918),
                       *(undefined4 *)(param_1 + 0x908));
          local_f = local_37;
          if (local_37 != '\0') {
            DAT_0201477c = DAT_0201477c + 1;
            FUN_00af21b0(auStack_78,local_18 - *(int *)(param_1 + 0x760),local_14);
          }
        }
      }
    }
    if ((0 < *(int *)(param_1 + 0x908)) && ((*(ushort *)(param_1 + 0x79a) & 0x40) == 0)) {
      if (local_f == '\0') {
        DAT_0201476c = DAT_0201476c + -1;
      }
      else {
        DAT_0201476c = DAT_0201476c + 1;
      }
    }
  }
  else {
    FUN_00af21b0(auStack_78,local_18,local_14);
  }
  FUN_00af1c20(param_1);
  if (local_9 == '\0') {
    *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) & 0xfffd;
  }
  return;
}

