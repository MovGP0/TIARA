/* Ghidra address: 01bfd250 */
/* Ghidra symbol: FUN_01bfd250 */


longlong FUN_01bfd250(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined4 *)(local_res8 + 0x48) = 0x20000000;
  FUN_01bfa590(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xa0) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x90) = 0;
  *(undefined1 *)(local_res8 + 0x95) = 1;
  *(undefined1 *)(local_res8 + 0xa9) = 1;
  *(undefined1 *)(local_res8 + 0x96) = 1;
  *(undefined1 *)(local_res8 + 0x78) = 1;
  *(undefined4 *)(local_res8 + 0x88) = 0;
  *(undefined4 *)(local_res8 + 0xa4) = 0;
  *(undefined1 *)(local_res8 + 0xb0) = 0;
  FUN_00414480(local_res8 + 0xb8);
  *(undefined1 *)(local_res8 + 0xc0) = 0;
  *(undefined1 *)(local_res8 + 0xc1) = 0;
  uVar2 = FUN_01bfc700(&PTR_FUN_01bf0090,1,local_res8);
  *(undefined8 *)(local_res8 + 200) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

