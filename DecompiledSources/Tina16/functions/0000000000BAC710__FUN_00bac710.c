/* Ghidra address: 00bac710 */
/* Ghidra symbol: FUN_00bac710 */


undefined8 FUN_00bac710(short param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    uVar2 = FUN_00bac6f0();
  }
  else {
    cVar1 = FUN_00bac690();
    if (((cVar1 == '\0') && (param_1 != 0x5f)) && (param_1 != 0x3a)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

