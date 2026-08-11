/* Ghidra address: 00cf1560 */
/* Ghidra symbol: FUN_00cf1560 */


longlong FUN_00cf1560(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  ushort local_1a;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_004b1710(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x40) = 0;
  FUN_00414480(local_res8 + 0x18);
  FUN_00414480(local_res8 + 0x38);
  FUN_00414480(local_res8 + 0x28);
  *(undefined1 *)(local_res8 + 0x50) = 0;
  local_1a = FUN_008b0360();
  if (local_1a == 0xdf) {
    *(undefined2 *)(local_res8 + 0x60) = 0x51;
    FUN_00414ad0(local_res8 + 0x58,*(undefined8 *)(PTR_DAT_02003e88 + 0x6f8));
  }
  else if (local_1a == 0x333) {
    *(undefined2 *)(local_res8 + 0x60) = 0x42;
    FUN_00414ad0(local_res8 + 0x58,*(undefined8 *)(PTR_DAT_02003e88 + 0x1580));
  }
  else {
    *(undefined2 *)(local_res8 + 0x60) = 0x42;
    FUN_00414ad0(local_res8 + 0x58,*(undefined8 *)(PTR_DAT_02003e88 + (ulonglong)local_1a * 8));
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

