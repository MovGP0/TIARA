/* Ghidra address: 005fd520 */
/* Ghidra symbol: FUN_005fd520 */


undefined8 FUN_005fd520(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  uint local_28;
  undefined4 local_24;
  undefined4 local_1c;
  longlong local_10;
  
  local_40 = auStack_68;
  local_30 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(local_30 + 0x10) == 0) {
    local_38 = DAT_02012028;
    FUN_00427930(DAT_02012028 + 0x10);
    if (*(longlong *)(local_30 + 0x10) == 0) {
      local_28 = (uint)*(ushort *)(&DAT_01decf1a + (ulonglong)*(byte *)(local_30 + 0x30) * 2);
      local_24 = *(undefined4 *)(local_30 + 0x2c);
      local_1c = FUN_005fbf20(*(undefined4 *)(local_30 + 0x28));
      uVar1 = thunk_FUN_03ce28b8(&local_28);
      *(undefined8 *)(local_30 + 0x10) = uVar1;
    }
    local_10 = DAT_02012028;
    FUN_00427ff0(DAT_02012028 + 0x10);
  }
  return *(undefined8 *)(local_30 + 0x10);
}

