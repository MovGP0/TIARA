/* Ghidra address: 01695e10 */
/* Ghidra symbol: FUN_01695e10 */


bool FUN_01695e10(longlong param_1,byte param_2)

{
  return (param_2 & *(byte *)(param_1 + 9)) != 0;
}

