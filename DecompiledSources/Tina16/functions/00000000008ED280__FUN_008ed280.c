/* Ghidra address: 008ed280 */
/* Ghidra symbol: FUN_008ed280 */


undefined2 FUN_008ed280(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e28eec + (param_2 & 0xff) * 2);
}

