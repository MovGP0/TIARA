/* Ghidra address: 01ab6b60 */
/* Ghidra symbol: FUN_01ab6b60 */


longlong FUN_01ab6b60(longlong param_1,char param_2)

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
  FUN_01d2d210(local_res8,0);
  uVar2 = FUN_005fd250(&PTR_FUN_005f3290,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  if (*(longlong *)PTR_DAT_02001e00 == 0) {
    FUN_005fd6d0(uVar2,2);
  }
  else {
    FUN_005fd6d0(uVar2,*(undefined4 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x50))
    ;
  }
  *(undefined4 *)(local_res8 + 0x90) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined8 *)(local_res8 + 0x58) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined8 *)(local_res8 + 0x88) = 0;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0xd0) = 0;
  *(undefined1 *)(local_res8 + 0xd8) = 0;
  *(undefined8 *)(local_res8 + 0xe8) = 0;
  *(undefined8 *)(local_res8 + 0xf0) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xf8) = uVar2;
  DAT_01fcef4c = DAT_01fcef4c + 1;
  *(int *)(local_res8 + 0xa0) = DAT_01fcef4c;
  uVar2 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,0);
  *(undefined8 *)(local_res8 + 0x68) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

