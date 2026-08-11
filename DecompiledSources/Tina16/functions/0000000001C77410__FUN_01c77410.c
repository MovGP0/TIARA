/* Ghidra address: 01c77410 */
/* Ghidra symbol: FUN_01c77410 */


void FUN_01c77410(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
    lVar2 = FUN_013699b0(&PTR_FUN_01361948,1,param_1);
    if (-1 < *(int *)(lVar2 + 0x2c)) {
      FUN_01c6cee0(param_1,lVar2);
    }
  }
  return;
}

