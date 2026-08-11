/* Ghidra address: 017bdc30 */
/* Ghidra symbol: FUN_017bdc30 */


undefined4 FUN_017bdc30(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_017ff2c0(param_1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  FUN_00414480(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  return uVar1;
}

