/* Ghidra address: 010bc1c0 */
/* Ghidra symbol: FUN_010bc1c0 */


undefined4 FUN_010bc1c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01cf0520(param_1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined1 *)(param_1 + 0x38) = 4;
  return uVar1;
}

