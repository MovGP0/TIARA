/* Ghidra address: 010c8830 */
/* Ghidra symbol: FUN_010c8830 */


void FUN_010c8830(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_010c7d20(param_1);
  if (cVar1 == '\0') {
    FUN_010c7a40(param_1,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = FUN_0040c850(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  return;
}

