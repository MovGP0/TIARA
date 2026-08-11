/* Ghidra address: 0109c800 */
/* Ghidra symbol: FUN_0109c800 */


void FUN_0109c800(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x9e0) = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x9d8) = uVar1;
  *(undefined4 *)(param_1 + 0x1640) = 1;
  *(undefined4 *)(param_1 + 0x1644) = 1;
  FUN_00414480(param_1 + 0x9b0);
  uVar1 = FUN_010afd00(&DAT_010a9ec8,1);
  *(undefined8 *)(param_1 + 0x1650) = uVar1;
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf4);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf0);
  *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf4) = 1;
  *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf0) = 4000;
  *(undefined4 *)(param_1 + 0xa0c) = 3;
  (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))(*(longlong **)(param_1 + 0x7d8),1);
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))
            (*(longlong **)(param_1 + 2000),
             CONCAT31((int3)(*(uint *)(param_1 + 0xa0c) >> 8),(*(uint *)(param_1 + 0xa0c) & 2) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))
            (*(longlong **)(param_1 + 0x7c8),
             CONCAT31((int3)(*(uint *)(param_1 + 0xa0c) >> 8),(*(uint *)(param_1 + 0xa0c) & 4) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x268))
            (*(longlong **)(param_1 + 0x7e0),
             CONCAT31((int3)(*(uint *)(param_1 + 0xa0c) >> 8),(*(uint *)(param_1 + 0xa0c) & 8) != 0)
            );
  iVar2 = 0;
  do {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x9e8 + (longlong)iVar2 * 8) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  uVar1 = FUN_007d5080(&PTR_FUN_007d3710,1,param_1);
  FUN_006e4390(*(undefined8 *)(param_1 + 0x7a8),uVar1);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0x4e8) + 0xa9) = 0;
  uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x1630) = uVar1;
  FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"icon_breakpoint_line");
  FUN_007d59d0(*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x4e8),
               *(undefined8 *)(param_1 + 0x1630),0);
  uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x1638) = uVar1;
  FUN_0060a8f0(uVar1,PTR_IMAGE_DOS_HEADER_0200c280,L"icon_breakpoint_line_disabled");
  FUN_007d59d0(*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x4e8),
               *(undefined8 *)(param_1 + 0x1638),0);
  *(undefined8 *)(param_1 + 0xa20) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x1658) = uVar1;
  FUN_01099800(param_1,uVar1,0);
  return;
}

