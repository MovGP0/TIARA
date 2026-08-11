/* Ghidra address: 014f9e20 */
/* Ghidra symbol: FUN_014f9e20 */


void FUN_014f9e20(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0x41f8);
  *(undefined2 *)(param_1 + 0x41f8) = *(undefined2 *)(param_1 + 0x4238);
  *(undefined2 *)(param_1 + 0x4238) = uVar1;
  FUN_01aac620(*(undefined8 *)PTR_DAT_020050e8);
  return;
}

