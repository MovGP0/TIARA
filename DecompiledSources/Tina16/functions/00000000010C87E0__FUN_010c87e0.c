/* Ghidra address: 010c87e0 */
/* Ghidra symbol: FUN_010c87e0 */


void FUN_010c87e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_010c7d20(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0040c2f0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
    FUN_010c7a80(param_1);
  }
  else {
    uVar2 = FUN_0040c2f0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  return;
}

