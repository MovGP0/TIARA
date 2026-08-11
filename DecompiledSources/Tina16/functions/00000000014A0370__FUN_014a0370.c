/* Ghidra address: 014a0370 */
/* Ghidra symbol: FUN_014a0370 */


void FUN_014a0370(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x778) = uVar1;
  FUN_01099800(param_1,uVar1,0);
  return;
}

