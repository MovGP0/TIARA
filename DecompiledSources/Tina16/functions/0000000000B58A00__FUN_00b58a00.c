/* Ghidra address: 00b58a00 */
/* Ghidra symbol: FUN_00b58a00 */


void FUN_00b58a00(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8),param_1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

