/* Ghidra address: 0163e420 */
/* Ghidra symbol: FUN_0163e420 */


longlong FUN_0163e420(longlong param_1,char param_2)

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
  *(undefined8 *)(local_res8 + 0x10a8) = 0;
  FUN_00414480(local_res8 + 0x10b8);
  FUN_00414480(local_res8 + 0x10c8);
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined4 *)(local_res8 + 0x60) = 0;
  *(undefined1 *)(local_res8 + 0x10d4) = 0;
  *(undefined4 *)(local_res8 + 0x10d0) = 0;
  FUN_0163e740(local_res8,0);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  uVar2 = FUN_01619450(&DAT_01617950,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00e01c60(&DAT_00e01340,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  *(undefined8 *)(local_res8 + 0x10b0) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10f0) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_0164a770(&DAT_0161fc10,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

