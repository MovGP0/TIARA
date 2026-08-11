/* Ghidra address: 0138d2b0 */
/* Ghidra symbol: FUN_0138d2b0 */


void FUN_0138d2b0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_010e1a60(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_010e1b10(param_1);
    uVar1 = FUN_004113f0(uVar1,&PTR_FUN_01133e90);
    FUN_008059a0(uVar1);
    FUN_0113d290(uVar1,*(undefined1 *)(param_1 + 0x7fa));
  }
  return;
}

