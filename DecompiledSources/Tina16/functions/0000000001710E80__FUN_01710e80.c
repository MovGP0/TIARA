/* Ghidra address: 01710e80 */
/* Ghidra symbol: FUN_01710e80 */


longlong FUN_01710e80(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 0xd0,local_res18);
  FUN_00416ba0(local_res8 + 0xd8,local_res18,L"\\SPICELIB");
  FUN_00416ba0(local_res8 + 0xe0,local_res20,L"\\SPICELIB");
  FUN_01710d00(local_res8 + 8);
  FUN_01710d00(local_res8 + 0x10);
  FUN_01710d00(local_res8 + 0x18);
  FUN_01710d00(local_res8 + 0x20);
  FUN_01710d00(local_res8 + 0x28);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  FUN_004b67b0(uVar2,1);
  *(undefined2 *)(*(longlong *)(local_res8 + 0x90) + 0x30) = 0x7c;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x68) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  FUN_00c834f0(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),uVar2);
  FUN_004b67b0(*(undefined8 *)(local_res8 + 0xa0),1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa8) = uVar2;
  FUN_00416ba0(&local_28,local_res18,L"\\ComponentToolbar.als");
  cVar1 = FUN_00440a20(local_28,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_30,local_res18,L"\\ComponentToolbar.als");
    (**(code **)(**(longlong **)(local_res8 + 0xa8) + 0xd8))
              (*(longlong **)(local_res8 + 0xa8),local_30);
  }
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  FUN_004b67b0(uVar2,1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  FUN_004b67b0(uVar2,1);
  FUN_01711a20(local_res8,*(undefined8 *)(local_res8 + 0xd8),*(undefined8 *)(local_res8 + 0xe0));
  FUN_004b67b0(*(undefined8 *)(local_res8 + 0x90),0);
  FUN_01711cd0(local_res8);
  *(undefined1 *)(*(longlong *)(local_res8 + 8) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(local_res8 + 0x10) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(local_res8 + 0x20) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(local_res8 + 0x28) + 0x78) = 0;
  FUN_017125a0(local_res8);
  FUN_017117b0(local_res8,local_res18);
  FUN_00414560(&local_30,2);
  FUN_00414560(&local_res18,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

