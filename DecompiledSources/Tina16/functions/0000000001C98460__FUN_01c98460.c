/* Ghidra address: 01c98460 */
/* Ghidra symbol: FUN_01c98460 */


void FUN_01c98460(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01c8cf20(param_1,*(undefined8 *)(param_1 + 0x27a8));
  if (cVar1 == '\0') {
    uVar2 = FUN_014c0b50();
    FUN_014c4290(uVar2,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  }
  else {
    cVar1 = FUN_014a1f90(0,0,0,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_014c0b50();
      FUN_014c4290(uVar2,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    }
  }
  return;
}

