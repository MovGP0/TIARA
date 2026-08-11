/* Ghidra address: 01c6d920 */
/* Ghidra symbol: FUN_01c6d920 */


void FUN_01c6d920(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
    uVar2 = FUN_01364e80(&PTR_FUN_01362168,1,param_1);
    FUN_01c6cee0(param_1,uVar2);
    FUN_01c6d670(param_1,*(undefined8 *)(param_1 + 0xbb0));
  }
  return;
}

