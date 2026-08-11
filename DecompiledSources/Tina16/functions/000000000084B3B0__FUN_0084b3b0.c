/* Ghidra address: 0084b3b0 */
/* Ghidra symbol: FUN_0084b3b0 */


longlong FUN_0084b3b0(longlong param_1,char param_2,byte param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0x10) = 0;
  *(undefined4 *)(local_res8 + 0x18) = 0xffffffff;
  *(ushort *)(local_res8 + 0x1c) = (byte)(&DAT_01e1a170)[param_3] + 1;
  *(ushort *)(local_res8 + 0x14) = (ushort)(byte)(&DAT_01e1a170)[param_3];
  *(ushort *)(local_res8 + 0x16) = (ushort)(byte)(&DAT_01e1a172)[param_3];
  *(undefined4 *)(local_res8 + 0x20) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

