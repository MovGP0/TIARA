/* Ghidra address: 006ddea0 */
/* Ghidra symbol: FUN_006ddea0 */


undefined8 FUN_006ddea0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x38) == '\0') && (lVar1 = FUN_006dd390(param_1), lVar1 == 0)) &&
     (lVar1 = FUN_006dd430(param_1), lVar1 == 0)) {
    return 1;
  }
  return 0;
}

