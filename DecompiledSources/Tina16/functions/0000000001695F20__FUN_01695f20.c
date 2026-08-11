/* Ghidra address: 01695f20 */
/* Ghidra symbol: FUN_01695f20 */


longlong FUN_01695f20(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined *)(local_res8 + 8) = *PTR_DAT_020052b0 | *PTR_DAT_020045a8;
  *(byte *)(local_res8 + 9) =
       *PTR_DAT_02004b10 | *DAT_02004b08 | *PTR_DAT_02003f70 | *PTR_DAT_02001c98 | *PTR_DAT_02005a48
       | *PTR_DAT_02001118;
  *(undefined4 *)(local_res8 + 0x318) = param_3;
  *(undefined4 *)(local_res8 + 0x324) = 0;
  *(undefined4 *)(local_res8 + 0x328) = 0;
  *(undefined1 *)(local_res8 + 0x32c) = 0;
  *(undefined1 *)(local_res8 + 0x11) = 0;
  uVar2 = FUN_00b94dc0(0,&PTR_FUN_00c53040,10,5);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  *(undefined1 *)(local_res8 + 0x10) = 0;
  local_20 = (undefined4 *)(local_res8 + 0x20);
  *(undefined4 *)(local_res8 + 0x24) = 1;
  *(undefined2 *)(local_res8 + 0x30) = 0x20;
  *local_20 = 0;
  FUN_00414480(local_res8 + 0x2e0);
  FUN_00414480(local_res8 + 0x2e8);
  FUN_00414480(local_res8 + 0x2f0);
  *(undefined1 *)(local_res8 + 0x2dc) = 0;
  *(undefined1 *)(local_res8 + 0x338) = 0;
  FUN_01695da0(local_res8,*PTR_DAT_020045a8);
  FUN_01695da0(local_res8,*PTR_DAT_02004b10);
  FUN_01695550(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

