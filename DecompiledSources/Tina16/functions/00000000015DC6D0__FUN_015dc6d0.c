/* Ghidra address: 015dc6d0 */
/* Ghidra symbol: FUN_015dc6d0 */


longlong FUN_015dc6d0(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined8 *)(local_res8 + 0x238) = 0;
  *(undefined8 *)(local_res8 + 0x250) = 0;
  *(undefined1 *)(local_res8 + 0x128) = 0;
  uVar2 = FUN_015c2060(&PTR_FUN_015b8f20,1);
  *(undefined8 *)(local_res8 + 0xc0) = uVar2;
  FUN_015ca520(local_res8,1);
  *(undefined1 *)(local_res8 + 0x84) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 200) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd0) = uVar2;
  *(undefined1 *)(local_res8 + 0x243) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd8) = uVar2;
  *(undefined1 *)(local_res8 + 0x110) = 0;
  *(undefined1 *)(local_res8 + 0x111) = 1;
  *(undefined1 *)(local_res8 + 0x103) = 0;
  uVar2 = FUN_015c1d70(&PTR_FUN_015b8b38,1);
  *(undefined8 *)(local_res8 + 0x108) = uVar2;
  *(undefined1 *)(local_res8 + 600) = 1;
  uVar2 = FUN_015c1c10(&DAT_015b87c8,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  *(undefined1 *)(local_res8 + 0x230) = 0;
  *(undefined1 *)(local_res8 + 0x112) = 0;
  FUN_004d22d0(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

