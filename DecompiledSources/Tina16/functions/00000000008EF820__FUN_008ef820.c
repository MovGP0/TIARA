/* Ghidra address: 008ef820 */
/* Ghidra symbol: FUN_008ef820 */


undefined2 FUN_008ef820(undefined8 param_1,ulonglong param_2)

{
  return *(undefined2 *)(&DAT_01e2dfa2 + (param_2 & 0xff) * 2);
}

