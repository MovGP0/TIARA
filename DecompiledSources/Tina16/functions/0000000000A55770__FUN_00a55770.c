/* Ghidra address: 00a55770 */
/* Ghidra symbol: FUN_00a55770 */


undefined8 FUN_00a55770(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_00a55bb0(param_1 + 0x498);
  if ((cVar1 == '\0') && (cVar1 = FUN_0046c3b0(param_1 + 0x498), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

