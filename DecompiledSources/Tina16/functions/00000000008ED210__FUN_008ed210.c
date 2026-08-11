/* Ghidra address: 008ed210 */
/* Ghidra symbol: FUN_008ed210 */


undefined2 FUN_008ed210(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e28cec + (param_2 & 0xff) * 2);
}

