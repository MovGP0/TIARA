/* Ghidra address: 00900780 */
/* Ghidra symbol: FUN_00900780 */


undefined8 FUN_00900780(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_008ff340(param_1);
  if ((cVar1 == '\0') || ((short)param_1 == 0x3a)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

