/* Ghidra address: 01d11b00 */
/* Ghidra symbol: FUN_01d11b00 */


longlong FUN_01d11b00(longlong param_1,char param_2)

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
  *(undefined1 *)(local_res8 + 0x78) = 0;
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  *(undefined1 *)(local_res8 + 0x98) = 1;
  *(undefined8 *)(local_res8 + 8) = 0x3fe0000000000000;
  *(undefined8 *)(local_res8 + 0x10) = 0x3fe0000000000000;
  *(undefined8 *)(local_res8 + 0x18) = 0x3fe8000000000000;
  *(undefined8 *)(local_res8 + 0x20) = 0x3fe8000000000000;
  *(undefined8 *)(local_res8 + 0x28) = 0x3fd3333333333333;
  *(undefined8 *)(local_res8 + 0x30) = 0x3fe0000000000000;
  *(undefined2 *)(local_res8 + 0x38) = 2;
  FUN_005fcd80(*(undefined8 *)(local_res8 + 0x80),L"Arial");
  FUN_005fce30(*(undefined8 *)(local_res8 + 0x80),0xc);
  FUN_00414ad0(local_res8 + 0x90,L"Symbol");
  *(undefined1 *)(local_res8 + 0x89) = 0;
  *(undefined4 *)(local_res8 + 0x8c) = 0;
  *(undefined1 *)(local_res8 + 0x88) = 0;
  *(undefined1 *)(local_res8 + 0xb8) = 1;
  *(undefined4 *)(local_res8 + 0xbc) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xc0) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x40) = 0;
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
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

