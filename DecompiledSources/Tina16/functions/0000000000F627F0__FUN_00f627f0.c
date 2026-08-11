/* Ghidra address: 00f627f0 */
/* Ghidra symbol: FUN_00f627f0 */


longlong FUN_00f627f0(longlong param_1,char param_2)

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
  uVar2 = FUN_00410e60(&PTR_FUN_00f6c2f8,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00f6c2f8,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_005fd250(&PTR_FUN_005f3290,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  *(undefined1 *)(local_res8 + 0x60) = 0;
  *(undefined1 *)(local_res8 + 0x61) = 0;
  *(undefined1 *)(local_res8 + 0xe0) = 0;
  *(undefined1 *)(local_res8 + 0x80) = 0;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 0x19) = 0;
  *(undefined4 *)(local_res8 + 0x30) = 0;
  uVar2 = FUN_015fd610(0,0);
  *(undefined8 *)(local_res8 + 0xd8) = uVar2;
  FUN_00f65150(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

