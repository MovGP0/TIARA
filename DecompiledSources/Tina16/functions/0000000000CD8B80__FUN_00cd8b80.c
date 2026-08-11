/* Ghidra address: 00cd8b80 */
/* Ghidra symbol: FUN_00cd8b80 */


longlong FUN_00cd8b80(longlong param_1,char param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
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
  FUN_004b6930(local_res8,0);
  FUN_00414ad0(local_res8 + 0x78,&LAB_00cd8c8c);
  *(undefined1 *)(local_res8 + 0x80) = 1;
  *(undefined1 *)(local_res8 + 0x81) = 1;
  uVar2 = FUN_00875200(param_3 == '\x03',0x7fffffff,0x4e);
  *(undefined4 *)(local_res8 + 0x84) = uVar2;
  *(char *)(local_res8 + 0x88) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

