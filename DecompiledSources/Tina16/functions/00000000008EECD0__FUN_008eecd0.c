/* Ghidra address: 008eecd0 */
/* Ghidra symbol: FUN_008eecd0 */


undefined2 FUN_008eecd0(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2cea2 + (param_2 & 0xff) * 2);
}

