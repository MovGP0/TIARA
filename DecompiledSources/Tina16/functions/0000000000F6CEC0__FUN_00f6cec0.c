/* Ghidra address: 00f6cec0 */
/* Ghidra symbol: FUN_00f6cec0 */


undefined8 FUN_00f6cec0(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x30) != '\b') {
    cVar1 = FUN_00f6f8c0();
    if ((cVar1 != '\0') && ((param_2 == 0 || (param_2 == 1)))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

