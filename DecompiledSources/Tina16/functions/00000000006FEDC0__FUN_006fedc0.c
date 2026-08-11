/* Ghidra address: 006fedc0 */
/* Ghidra symbol: FUN_006fedc0 */


void FUN_006fedc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x601) != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    lVar1 = FUN_0064fca0(param_1,0xb006,*(undefined2 *)(param_2 + 8),
                         (longlong)*(int *)(param_2 + 0x10));
    if (lVar1 != 0) {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

