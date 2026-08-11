/* Ghidra address: 0161db60 */
/* Ghidra symbol: FUN_0161db60 */


void FUN_0161db60(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x90) = (char)param_2;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_0161db60(*(longlong *)(param_1 + 8),param_2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_0161db60(*(longlong *)(param_1 + 0x10),param_2);
  }
  return;
}

