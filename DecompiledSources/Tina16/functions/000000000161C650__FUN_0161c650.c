/* Ghidra address: 0161c650 */
/* Ghidra symbol: FUN_0161c650 */


undefined8 FUN_0161c650(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong local_20;
  
  cVar2 = FUN_0161c100(param_1,param_2,&local_20);
  if ((cVar2 == '\0') || ((*(uint *)(local_20 + 0x5cc) & 0x10) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((!bVar1) && (cVar2 = FUN_0161c060(param_1,param_2), cVar2 == '\0')) &&
      (cVar2 = FUN_0161bbd0(param_1), cVar2 == '\0')) &&
     (cVar2 = FUN_0161c0b0(param_1,param_2), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}

