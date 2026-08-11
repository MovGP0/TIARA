/* Ghidra address: 008ed900 */
/* Ghidra symbol: FUN_008ed900 */


undefined2 FUN_008ed900(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2a6ec + (param_2 & 0xff) * 2);
}

