/* Ghidra address: 01cf1990 */
/* Ghidra symbol: FUN_01cf1990 */


undefined4 FUN_01cf1990(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = FUN_017bdc30(param_1);
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_00414480(param_1 + 0x180);
  *(undefined1 *)(param_1 + 0x188) = 0;
  FUN_00414480(param_1 + 400);
  *(undefined4 *)(param_1 + 0x18c) = 1;
  *(undefined1 *)(param_1 + 0x3b8) = 0xff;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  FUN_00414480(param_1 + 0x3b0);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x3e0) = uVar2;
  *(undefined1 *)(param_1 + 1000) = 0;
  *(undefined1 *)(param_1 + 0x3d2) = 0;
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  FUN_0040d200(param_1 + 0x3bc,8,0);
  FUN_0040d200(param_1 + 0x3c4,2,0);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  *(undefined1 *)(param_1 + 0x3d1) = 0;
  *(undefined1 *)(param_1 + 0x3d3) = 0;
  FUN_017feb40(param_1);
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x3f0) = uVar2;
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x4f8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x500) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x508) = uVar2;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x530) = 0;
  *(undefined1 *)(param_1 + 0x531) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined1 *)(param_1 + 0x532) = 0;
  *(undefined1 *)(param_1 + 0x560) = 0;
  FUN_00414480(param_1 + 0x568);
  *(undefined1 *)(param_1 + 0x533) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  FUN_00414480(param_1 + 0x588);
  iVar4 = 4;
  puVar3 = (undefined4 *)(param_1 + 0x518);
  do {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar1;
}

