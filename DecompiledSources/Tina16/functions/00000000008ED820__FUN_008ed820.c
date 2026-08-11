/* Ghidra address: 008ed820 */
/* Ghidra symbol: FUN_008ed820 */


undefined2 FUN_008ed820(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2a2ec + (param_2 & 0xff) * 2);
}

