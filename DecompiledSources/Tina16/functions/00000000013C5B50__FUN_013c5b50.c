/* Ghidra address: 013c5b50 */
/* Ghidra symbol: FUN_013c5b50 */


void FUN_013c5b50(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 800) = uVar1;
  *(undefined1 *)(param_1 + 0x279) = 1;
  return;
}

