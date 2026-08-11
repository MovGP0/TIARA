/* Ghidra address: 008edac0 */
/* Ghidra symbol: FUN_008edac0 */


undefined2 FUN_008edac0(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2adec + (param_2 & 0xff) * 2);
}

