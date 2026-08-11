/* Ghidra address: 005485a0 */
/* Ghidra symbol: FUN_005485a0 */


void FUN_005485a0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_00534b60();
    FUN_004134c0(uVar2);
  }
  return;
}

