/* Ghidra address: 00dd7000 */
/* Ghidra symbol: FUN_00dd7000 */


void FUN_00dd7000(longlong *param_1)

{
  char cVar1;
  
  FUN_004d3040(param_1);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    cVar1 = FUN_00dd72a0(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
  }
  return;
}

