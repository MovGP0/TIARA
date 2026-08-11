/* Ghidra address: 00b34bf0 */
/* Ghidra symbol: FUN_00b34bf0 */


longlong FUN_00b34bf0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  uVar2 = FUN_00b220f0(&DAT_00b207e8,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  *(undefined1 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 9) = 0;
  *(undefined1 *)(local_res8 + 10) = 0;
  *(undefined1 *)(local_res8 + 0xd) = 1;
  *(undefined1 *)(local_res8 + 0xe) = 1;
  *(undefined1 *)(local_res8 + 0xb) = 1;
  *(undefined1 *)(local_res8 + 0xc) = 1;
  FUN_00414520(local_res8 + 0x10);
  FUN_00414520(local_res8 + 0x18);
  FUN_00414520(local_res8 + 0x20);
  FUN_00414520(local_res8 + 0x28);
  FUN_004144d0(local_res8 + 0x30);
  FUN_004144d0(local_res8 + 0x38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

