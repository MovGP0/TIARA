/* Ghidra address: 01bbc1a0 */
/* Ghidra symbol: FUN_01bbc1a0 */


longlong FUN_01bbc1a0(longlong param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = 0;
  uVar2 = FUN_010c9d50(&DAT_010c95c8,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  FUN_00414ad0(local_res8 + 0x68,&DAT_01bbc32c);
  FUN_00414ad0(local_res8 + 0x70,&DAT_01bbc340);
  FUN_00414ad0(local_res8 + 0x78,&DAT_01bbc354);
  FUN_00414ad0(local_res8 + 0x80,&DAT_01bbc368);
  FUN_00414ad0(local_res8 + 0x88,&DAT_01bbc37c);
  FUN_00414ad0(local_res8 + 0x90,&LAB_01bbc390);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

