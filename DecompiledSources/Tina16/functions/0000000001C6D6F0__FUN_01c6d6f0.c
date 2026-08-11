/* Ghidra address: 01c6d6f0 */
/* Ghidra symbol: FUN_01c6d6f0 */


void FUN_01c6d6f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
    uVar2 = FUN_01367900(&PTR_FUN_013606d0,1,param_1,0);
    FUN_01c6cee0(param_1,uVar2);
    FUN_01c6d670(param_1,*(undefined8 *)(param_1 + 0xbc0));
  }
  return;
}

