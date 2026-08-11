/* Ghidra address: 01c773c0 */
/* Ghidra symbol: FUN_01c773c0 */


void FUN_01c773c0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
    uVar2 = FUN_013699b0(&PTR_FUN_01361730,1,param_1);
    FUN_01c6cee0(param_1,uVar2);
  }
  return;
}

