/* Ghidra address: 0195e4b0 */
/* Ghidra symbol: FUN_0195e4b0 */


void FUN_0195e4b0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0195e4f0(param_1);
  if (cVar2 != (char)param_2) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
    uVar1 = FUN_0194e140(param_2);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  return;
}

