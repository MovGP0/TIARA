/* Ghidra address: 00c3c560 */
/* Ghidra symbol: FUN_00c3c560 */


longlong FUN_00c3c560(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  FUN_01d33100(local_res8,0);
  *(undefined4 *)(local_res8 + 8) = 0;
  uVar3 = FUN_00b95b20(0,0,0,0);
  *(undefined8 *)(local_res8 + 0xc) = uVar3;
  uVar3 = FUN_00b95b20(0,0,0,0);
  *(undefined8 *)(local_res8 + 0x14) = uVar3;
  uVar3 = FUN_00b95b20(0,0,0,0);
  *(undefined8 *)(local_res8 + 0x1c) = uVar3;
  uVar2 = FUN_00b959a0(0x50,0x50);
  *(undefined4 *)(local_res8 + 0x24) = uVar2;
  uVar2 = FUN_00b959a0(0,0);
  *(undefined4 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00b959a0(0x28,0x14);
  *(undefined4 *)(local_res8 + 0x2c) = uVar2;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar3;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

