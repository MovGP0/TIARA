/* Ghidra address: 01a99bf0 */
/* Ghidra symbol: FUN_01a99bf0 */


void FUN_01a99bf0(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_01cfb4e0(param_2,param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

