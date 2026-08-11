/* Ghidra address: 008eec20 */
/* Ghidra symbol: FUN_008eec20 */


undefined2 FUN_008eec20(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2cca2 + (param_2 & 0xff) * 2);
}

