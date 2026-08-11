/* Ghidra address: 00f40220 */
/* Ghidra symbol: FUN_00f40220 */


longlong FUN_00f40220(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00c591e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffffffde | 0x50;
  uVar2 = FUN_00f40370(local_res8);
  *(undefined8 *)(local_res8 + 0x4d0) = uVar2;
  uVar2 = FUN_00f40370(local_res8);
  *(undefined8 *)(local_res8 + 0x4d8) = uVar2;
  FUN_00f409e0(local_res8,0);
  FUN_00f40a90(local_res8,0);
  FUN_0064cbf0(local_res8,0x14);
  FUN_0064cc50(local_res8,0x19);
  *(undefined8 *)(local_res8 + 0x4e0) = *(undefined8 *)(local_res8 + 0x4d0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

