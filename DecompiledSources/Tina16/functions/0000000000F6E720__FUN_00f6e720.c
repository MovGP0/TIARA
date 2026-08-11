/* Ghidra address: 00f6e720 */
/* Ghidra symbol: FUN_00f6e720 */


longlong FUN_00f6e720(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined1 *)(local_res8 + 0x40) = 1;
  *(undefined4 *)(local_res8 + 0x10) = 1;
  *(undefined1 *)(local_res8 + 0x41) = 0;
  *(undefined1 *)(local_res8 + 0x108) = 0;
  *(undefined1 *)(local_res8 + 0x109) = 0;
  *(undefined1 *)(local_res8 + 0x10a) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  *(undefined1 *)(local_res8 + 0x30) = 0;
  *(undefined4 *)(local_res8 + 0x94) = 0;
  FUN_00414480(local_res8 + 0xf8);
  FUN_00414480(local_res8 + 0x100);
  *(undefined1 *)(local_res8 + 0x42) = 0;
  FUN_00414480(local_res8 + 0xf0);
  FUN_00f6e8e0(local_res8,1);
  local_1c = 0;
  do {
    *(undefined4 *)(local_res8 + 0x44 + (longlong)local_1c * 8) = 0xffffffff;
    *(undefined1 *)(local_res8 + 0x48 + (longlong)local_1c * 8) = 0;
    local_1c = local_1c + 1;
  } while (local_1c != 10);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

