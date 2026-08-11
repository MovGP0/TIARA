/* Ghidra address: 00463a50 */
/* Ghidra symbol: FUN_00463a50 */


ulonglong FUN_00463a50(ushort *param_1)

{
  ushort uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  ulonglong local_10;
  
  local_20 = auStack_48;
  uVar1 = *param_1;
  if (uVar1 < 0x13) {
    if (uVar1 == 0x12) {
      return (ulonglong)param_1[4];
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 == 1) {
      if (DAT_01dc436a != '\0') {
        FUN_00460110(1,0x13);
      }
      return 0;
    }
    if (uVar1 == 0xb) {
      return (longlong)(short)param_1[4];
    }
    if (uVar1 == 0x11) {
      return (ulonglong)(byte)param_1[4];
    }
  }
  else {
    if (uVar1 == 0x13) {
      return (ulonglong)*(uint *)(param_1 + 4);
    }
    if (uVar1 == 0x15) {
      return *(ulonglong *)(param_1 + 4);
    }
    if (uVar1 == 0x4015) {
      return **(ulonglong **)(param_1 + 4);
    }
  }
  local_20 = auStack_48;
  local_10 = FUN_004634b0(param_1);
  if ((longlong)local_10 < 0) {
    local_10 = FUN_00410a90();
  }
  return local_10;
}

