/* Ghidra address: 010e4550 */
/* Ghidra symbol: FUN_010e4550 */


void FUN_010e4550(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e16370(param_2,*(undefined4 *)(param_1 + 0x878));
  *(undefined4 *)(param_1 + 0x878) = uVar1;
  return;
}

