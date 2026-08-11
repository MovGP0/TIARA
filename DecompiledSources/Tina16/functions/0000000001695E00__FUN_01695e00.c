/* Ghidra address: 01695e00 */
/* Ghidra symbol: FUN_01695e00 */


bool FUN_01695e00(longlong param_1,byte param_2)

{
  return (param_2 & *(byte *)(param_1 + 8)) != 0;
}

