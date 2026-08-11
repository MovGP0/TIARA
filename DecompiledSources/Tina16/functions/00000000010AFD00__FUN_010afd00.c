/* Ghidra address: 010afd00 */
/* Ghidra symbol: FUN_010afd00 */


longlong FUN_010afd00(longlong param_1,char param_2)

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
  FUN_00414ad0(local_res8 + 0x10,L"noname");
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  *(undefined1 *)(local_res8 + 0xc) = 0;
  *(undefined1 *)(local_res8 + 0xd) = 1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  FUN_0040d200(local_res8 + 0x28,6,0);
  *(undefined4 *)(local_res8 + 8) = 3;
  *(undefined4 *)(local_res8 + 0x48) = 0;
  *(undefined4 *)(local_res8 + 0x4c) = 0;
  *(undefined1 *)(local_res8 + 0x38) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

