/* Ghidra address: 010a3fd0 */
/* Ghidra symbol: FUN_010a3fd0 */


void FUN_010a3fd0(longlong param_1)

{
  undefined8 uVar1;
  
  DAT_0202f908 = 0;
  *(undefined4 *)(param_1 + 0x98c) = 1;
  *(undefined4 *)(param_1 + 0x990) = 1;
  *(undefined4 *)(param_1 + 0x980) = 1;
  FUN_00414480(param_1 + 0x9a0);
  *(undefined1 *)(param_1 + 0xa2a) = 0;
  *(undefined1 *)(param_1 + 0xa2b) = 0;
  *(undefined1 *)(param_1 + 0xa2c) = 1;
  *(undefined1 *)(param_1 + 0xa28) = *(undefined1 *)(*(longlong *)(param_1 + 0x858) + 0x328);
  *(undefined1 *)(param_1 + 0xa29) = 0;
  *(undefined8 *)(param_1 + 0xa40) = 0;
  *(undefined1 *)(param_1 + 0x1a78) = 1;
  FUN_010a6760(param_1,1);
  *(undefined8 *)(param_1 + 0xa48) = 0xc12e848000000000;
  *(undefined8 *)(param_1 + 0xa38) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x1a70) = 0;
  uVar1 = FUN_010afd00(&DAT_010a9ec8,1);
  *(undefined8 *)(param_1 + 0x9b8) = uVar1;
  uVar1 = FUN_007d5080(&PTR_FUN_007d3710,1,param_1);
  FUN_006e4390(*(undefined8 *)(param_1 + 0x748),uVar1);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x748) + 0x4e8) + 0xa9) = 0;
  uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x970) = uVar1;
  FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"icon_breakpoint_line");
  FUN_007d59d0(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x4e8),
               *(undefined8 *)(param_1 + 0x970),0);
  uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x978) = uVar1;
  FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"icon_breakpoint_line_disabled");
  FUN_007d59d0(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x4e8),
               *(undefined8 *)(param_1 + 0x978),0);
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9c0) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9e0) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9c8) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9d0) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9d8) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9e8) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xa00) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9f8) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9f0) = uVar1;
  *(undefined1 *)(param_1 + 0xa2e) = 1;
  uVar1 = FUN_01093c60(&PTR_FUN_01090708,1,param_1);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x960),uVar1);
  return;
}

