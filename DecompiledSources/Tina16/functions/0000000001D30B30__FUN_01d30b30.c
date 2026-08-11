/* Ghidra address: 01d30b30 */
/* Ghidra symbol: FUN_01d30b30 */


longlong FUN_01d30b30(longlong param_1,char param_2,undefined8 param_3,ushort param_4,
                     undefined1 param_5)

{
  undefined1 *puVar1;
  int iVar2;
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
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  FUN_004b6dc0(param_3,0);
  FUN_01d31a60(local_res8);
  *(undefined4 *)(local_res8 + 0x28) = 0;
  *(undefined2 *)(local_res8 + 0x24) = 0;
  *(undefined2 *)(local_res8 + 0x26) = 0;
  *(undefined4 *)(local_res8 + 0x2c) = 0xb;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  *(bool *)(local_res8 + 8) = (param_4 & 1) != 0;
  *(undefined1 *)(local_res8 + 9) = param_5;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  if (*(char *)(local_res8 + 8) == '\0') {
    FUN_01d31b30(local_res8);
    FUN_01d31bd0(local_res8);
  }
  else {
    FUN_01d31ab0(local_res8);
  }
  iVar2 = FUN_01d31a40(local_res8);
  if (iVar2 != 0) {
    DAT_03567a38 = FUN_01d31a40(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

