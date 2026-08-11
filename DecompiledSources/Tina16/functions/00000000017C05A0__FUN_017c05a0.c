/* Ghidra address: 017c05a0 */
/* Ghidra symbol: FUN_017c05a0 */


undefined4 FUN_017c05a0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_017ff2c0(param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x99) = 0;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  uVar2 = FUN_00b92120(0,0);
  FUN_017c2d60(param_1,uVar2);
  uVar2 = FUN_00b92120(0,0);
  FUN_017c2d60(param_1,uVar2);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  FUN_017feb40(param_1);
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x3d8) = 1;
  *(undefined1 *)(param_1 + 0x3d9) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined1 *)(param_1 + 0x3da) = 0;
  *(undefined1 *)(param_1 + 0x3db) = 0;
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  *(undefined1 *)(param_1 + 0x3dc) = 0;
  *(undefined1 *)(param_1 + 0x3f9) = 0;
  FUN_00414480(param_1 + 0x400);
  return uVar1;
}

