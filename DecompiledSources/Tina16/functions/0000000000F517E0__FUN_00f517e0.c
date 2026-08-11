/* Ghidra address: 00f517e0 */
/* Ghidra symbol: FUN_00f517e0 */


void FUN_00f517e0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_01b07880(param_1);
  if (*(char *)(param_1 + 0x98) == '\b') {
    uVar1 = FUN_01b077e0(param_1);
    *(undefined8 *)(param_1 + 0x120) = uVar1;
  }
  return;
}

