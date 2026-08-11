/* Ghidra address: 00800470 */
/* Ghidra symbol: FUN_00800470 */


void FUN_00800470(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x4d7) != param_2) &&
     (*(char *)(param_1 + 0x4d7) = param_2, (*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    FUN_00655b90();
  }
  return;
}

