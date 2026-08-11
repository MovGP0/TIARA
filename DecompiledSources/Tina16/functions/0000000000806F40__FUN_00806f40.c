/* Ghidra address: 00806f40 */
/* Ghidra symbol: FUN_00806f40 */


void FUN_00806f40(longlong param_1)

{
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (*(longlong *)(param_1 + 0x698) != 0)) {
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x698),0x226,
                       *(undefined2 *)(&DAT_01e14f20 + (ulonglong)*(byte *)(param_1 + 0x4d9) * 2),0)
    ;
  }
  return;
}

