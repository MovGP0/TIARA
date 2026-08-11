/* Ghidra address: 01c1bae0 */
/* Ghidra symbol: FUN_01c1bae0 */


undefined ** FUN_01c1bae0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bd2b58);
  if (cVar1 == '\0') {
    cVar1 = FUN_01c1b7b0();
    if (cVar1 == '\0') {
      ppuVar2 = &PTR_FUN_01c0f258;
    }
    else if (cVar1 == '\x01') {
      ppuVar2 = &PTR_FUN_01c085b0;
    }
    else {
      ppuVar2 = &PTR_FUN_01c13d40;
    }
  }
  else {
    cVar1 = FUN_01c1b7b0();
    if (cVar1 == '\0') {
      ppuVar2 = &PTR_FUN_01c0fba0;
    }
    else if (cVar1 == '\x01') {
      ppuVar2 = &PTR_FUN_01c09708;
    }
    else {
      ppuVar2 = &PTR_FUN_01c14e48;
    }
  }
  return ppuVar2;
}

