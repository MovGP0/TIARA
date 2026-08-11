/* Ghidra address: 008ed890 */
/* Ghidra symbol: FUN_008ed890 */


undefined2 FUN_008ed890(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2a4ec + (param_2 & 0xff) * 2);
}

