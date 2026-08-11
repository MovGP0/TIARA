/* Ghidra address: 008ed2e0 */
/* Ghidra symbol: FUN_008ed2e0 */


undefined2 FUN_008ed2e0(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e290ec + (param_2 & 0xff) * 2);
}

