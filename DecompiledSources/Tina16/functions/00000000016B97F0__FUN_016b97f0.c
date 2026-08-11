/* Ghidra address: 016b97f0 */
/* Ghidra symbol: FUN_016b97f0 */


longlong FUN_016b97f0(longlong param_1,char param_2,undefined1 param_3)

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
  *(undefined1 *)(local_res8 + 0x9aa) = param_3;
  uVar2 = FUN_00ed61b0(&DAT_00ed5d50,1,local_res8);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  uVar2 = FUN_016a35d0(&DAT_016a2ea8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016b37f8,1,5000,5000);
  *(undefined8 *)(local_res8 + 0x9b8) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016a0250,1,100,100);
  *(undefined8 *)(local_res8 + 0xa38) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa50) = uVar2;
  FUN_004b67b0(uVar2,1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa58) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa60) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa68) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xa70) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xa78) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016a2078,1,100,100);
  *(undefined8 *)(local_res8 + 0x9e0) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016a24d8,1,100,100);
  *(undefined8 *)(local_res8 + 0x9f8) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016b3c30,1,100,100);
  *(undefined8 *)(local_res8 + 0x9c8) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016b40d8,1,0x32,0x32);
  *(undefined8 *)(local_res8 + 0xa20) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa48) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_016b2d98,1,5000,5000);
  *(undefined8 *)(local_res8 + 0xa28) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_01d33528,1,0x32,0x32);
  *(undefined8 *)(local_res8 + 0xa08) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_01d33528,1,0x32,0x32);
  *(undefined8 *)(local_res8 + 0xa10) = uVar2;
  uVar2 = FUN_016d0640(&PTR_FUN_016b7de8,1);
  *(undefined8 *)(local_res8 + 0xdb8) = uVar2;
  uVar2 = FUN_00409570(200);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  FUN_00417c40(local_res8 + 0x58,PTR_DAT_02001120,&DAT_01d0d0b8);
  *(undefined8 *)(local_res8 + 0xdb0) = 0x3ff0000000000000;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

