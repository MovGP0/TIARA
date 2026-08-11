/* Ghidra address: 01378e80 */
/* Ghidra symbol: FUN_01378e80 */


longlong FUN_01378e80(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4,
                     undefined1 param_5)

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
  FUN_010dbbd0(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x98) = param_5;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x118) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  FUN_004b67b0(uVar2,0);
  *(undefined4 *)(local_res8 + 0x78) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x59) = 1;
  *(undefined1 *)(local_res8 + 0x58) = 0;
  *(undefined1 *)(local_res8 + 0x99) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0xa8) = 0x412e848000000000;
  *(double *)(local_res8 + 0xb0) =
       (*(double *)(local_res8 + 0xa8) + *(double *)(local_res8 + 0xa0)) / 2.0;
  *(double *)(local_res8 + 0xb8) = *(double *)(local_res8 + 0xa8) - *(double *)(local_res8 + 0xa0);
  *(undefined4 *)(local_res8 + 0xc4) = 100;
  *(undefined4 *)(local_res8 + 200) = 0x400;
  *(undefined4 *)(local_res8 + 0xc0) = *(undefined4 *)(local_res8 + 0xc4);
  *(undefined1 *)(local_res8 + 0xcd) = 0;
  *(undefined8 *)(local_res8 + 0xd8) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0xe0) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)(local_res8 + 0xe8) = 0x3ff0000000000000;
  *(undefined1 *)(local_res8 + 0xcc) = 0;
  *(undefined8 *)(local_res8 + 0xf0) = 0;
  *(undefined4 *)(local_res8 + 0xf8) = 0;
  *(undefined4 *)(local_res8 + 0xfc) = 0;
  *(undefined4 *)(local_res8 + 0x100) = 0;
  *(undefined4 *)(local_res8 + 0x104) = 0;
  *(undefined4 *)(local_res8 + 0x108) = 0;
  *(undefined1 *)(local_res8 + 0x10c) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

