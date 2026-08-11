/* Ghidra address: 018c5a00 */
/* Ghidra symbol: FUN_018c5a00 */


longlong FUN_018c5a00(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01978880(local_res8,0,param_3);
  uVar2 = FUN_018c57c0(&DAT_018c3c38,1);
  *(undefined8 *)(local_res8 + 0xc0) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x140) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x150) = uVar2;
  uVar2 = FUN_01879e70(&PTR_FUN_01878468,1,param_3);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xe0) = uVar2;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  uVar2 = FUN_018cfbe0(&DAT_018c37e0,1);
  *(undefined8 *)(local_res8 + 0x170) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

