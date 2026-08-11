/* Ghidra address: 00a54aa0 */
/* Ghidra symbol: FUN_00a54aa0 */


undefined8 FUN_00a54aa0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00a55bb0(param_1 + 0x2e8);
  if (cVar1 == '\0') {
    cVar1 = FUN_0046c3b0(param_1 + 0x2e8);
    if (cVar1 != '\0') goto LAB_00a54ac8;
LAB_00a54b2c:
    uVar2 = 1;
  }
  else {
LAB_00a54ac8:
    cVar1 = FUN_00a55bb0(param_1 + 0x300);
    if (cVar1 == '\0') {
      cVar1 = FUN_0046c3b0(param_1 + 0x300);
      if (cVar1 == '\0') goto LAB_00a54b2c;
    }
    cVar1 = FUN_00a55bb0(param_1 + 0x318);
    if (cVar1 == '\0') {
      cVar1 = FUN_0046c3b0(param_1 + 0x318);
      if (cVar1 == '\0') goto LAB_00a54b2c;
    }
    cVar1 = FUN_00a55bb0(param_1 + 0x330);
    if (cVar1 == '\0') {
      cVar1 = FUN_0046c3b0(param_1 + 0x330);
      if (cVar1 == '\0') goto LAB_00a54b2c;
    }
    uVar2 = 0;
  }
  return uVar2;
}

