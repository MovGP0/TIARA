/* Ghidra address: 01711430 */
/* Ghidra symbol: FUN_01711430 */


void FUN_01711430(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_01710e30(param_1 + 8);
  FUN_01710e30(param_1 + 0x10);
  FUN_01710e30(param_1 + 0x18);
  FUN_01710e30(param_1 + 0x20);
  FUN_01710e30(param_1 + 0x28);
  FUN_01710e50(param_1 + 0x80);
  FUN_01710e50(param_1 + 0x88);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  FUN_004b67b0(uVar1,1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x90) + 0x30) = 0x7c;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_01710e50(param_1 + 0x30);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  FUN_01710e50(param_1 + 0x58);
  FUN_01710e50(param_1 + 0x60);
  FUN_01710e50(param_1 + 0x68);
  FUN_01710e50(param_1 + 0x70);
  FUN_01710e50(param_1 + 0x78);
  FUN_01711a20(param_1,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0));
  FUN_004b67b0(*(undefined8 *)(param_1 + 0x90),0);
  FUN_01711cd0(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x78) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x78) = 0;
  FUN_004095f0(*(undefined8 *)(param_1 + 0xb0));
  FUN_017125a0(param_1);
  FUN_017117b0(param_1,*(undefined8 *)(param_1 + 0xd0));
  return;
}

