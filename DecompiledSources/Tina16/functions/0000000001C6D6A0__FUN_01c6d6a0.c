/* Ghidra address: 01c6d6a0 */
/* Ghidra symbol: FUN_01c6d6a0 */


void FUN_01c6d6a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
    FUN_01c6ec30(param_1,0xffffffff,0,0,1);
    FUN_01c6d670(param_1,*(undefined8 *)(param_1 + 0xbc8));
  }
  return;
}

