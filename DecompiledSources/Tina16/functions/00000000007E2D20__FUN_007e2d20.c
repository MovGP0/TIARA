/* Ghidra address: 007e2d20 */
/* Ghidra symbol: FUN_007e2d20 */


void FUN_007e2d20(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x80) != param_2) {
    *(byte *)(param_1 + 0x80) = param_2;
    if ((*(longlong *)(param_1 + 200) != 0) && ((*(ushort *)(param_1 + 0x34) & 2) == 0)) {
      uVar1 = FUN_007de060(*(longlong *)(param_1 + 200));
      thunk_FUN_04189447(uVar1,*(undefined2 *)(param_1 + 0xa8),
                         *(undefined4 *)(&DAT_01e12f8c + (ulonglong)param_2 * 4));
    }
    if ((param_2 != 0) && (*(char *)(param_1 + 0x85) != '\0')) {
      FUN_007e2ca0(param_1);
    }
  }
  return;
}

