/* Ghidra address: 00b58710 */
/* Ghidra symbol: FUN_00b58710 */


longlong FUN_00b58710(longlong param_1,char param_2,longlong param_3)

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
  *(longlong *)(local_res8 + 8) = param_3;
  *(longlong *)(local_res8 + 0x58) = param_3 + 0x28;
  FUN_004144d0(local_res8 + 0x60);
  *(undefined2 *)(local_res8 + 0x68) = 0;
  *(undefined2 *)(local_res8 + 0x6a) = 0x4400;
  uVar2 = FUN_00b4f900(&LAB_00b466d8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00b52b20(&LAB_00b47ac8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_00b52b20(&LAB_00b48140,1,local_res8);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_00b57160(&DAT_00b493d8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00b57480(&DAT_00b49798,1,local_res8);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_00b21e70(&DAT_00b203d0,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_00b581c0(&DAT_00b4a9f0,1,local_res8);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  uVar2 = FUN_00b34d70(&DAT_00b34488,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  uVar2 = FUN_00b39910(&DAT_00b39068,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  *(undefined1 *)(local_res8 + 0x80) = 1;
  FUN_00b58a00(local_res8);
  *(undefined1 *)(local_res8 + 0x81) = 1;
  *(undefined1 *)(local_res8 + 0x82) = 0;
  *(undefined1 *)(local_res8 + 0x83) = 1;
  *(undefined1 *)(local_res8 + 0x84) = 1;
  *(undefined2 *)(local_res8 + 0x85) = 0;
  *(undefined1 *)(local_res8 + 0x87) = 0;
  *(undefined1 *)(local_res8 + 0x89) = 100;
  *(undefined1 *)(local_res8 + 0x8a) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

