/* Ghidra address: 005fe0d0 */
/* Ghidra symbol: FUN_005fe0d0 */


longlong FUN_005fe0d0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00427fb0(local_res8 + 0x30);
  lVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(longlong *)(local_res8 + 0x70) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_005ffd60;
  *(longlong *)(lVar2 + 0x20) = local_res8 + 0x30;
  lVar2 = FUN_005fd250(&PTR_FUN_005f3290,0x5ffd01);
  *(longlong *)(local_res8 + 0x78) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_005ffd90;
  *(longlong *)(lVar2 + 0x20) = local_res8 + 0x30;
  lVar2 = FUN_005fd7d0(&PTR_FUN_005f35d8,0x5ffd01);
  *(longlong *)(local_res8 + 0x80) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_005ffdc0;
  *(longlong *)(lVar2 + 0x20) = local_res8 + 0x30;
  *(undefined4 *)(local_res8 + 0x90) = 0xcc0020;
  *(undefined1 *)(local_res8 + 0x68) = 0;
  FUN_004afc10(DAT_02012038,local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

