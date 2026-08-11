/* Ghidra address: 009007b0 */
/* Ghidra symbol: FUN_009007b0 */


undefined8 FUN_009007b0(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_008ff3a0(param_1);
  if ((cVar1 == '\0') || ((short)param_1 == 0x3a)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

