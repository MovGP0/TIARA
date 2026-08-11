/* Ghidra address: 0112a040 */
/* Ghidra symbol: thunk_FUN_0112a06e */


void thunk_FUN_0112a06e(longlong param_1,byte param_2)

{
  while ((*(ushort *)(param_1 + 10) == 0 || (0xc < *(ushort *)(param_1 + 10)))) {
    *(short *)(param_1 + 8) =
         *(short *)(param_1 + 8) + *(short *)(&DAT_01f240d0 + (ulonglong)param_2 * 4);
    *(short *)(param_1 + 10) =
         *(short *)(param_1 + 10) + *(short *)(&DAT_01f240e8 + (ulonglong)param_2 * 4);
  }
  return;
}

