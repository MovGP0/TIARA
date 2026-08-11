/* Ghidra address: 01a662b0 */
/* Ghidra symbol: FUN_01a662b0 */


void FUN_01a662b0(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6e8);
  dVar2 = (double)FUN_00b90090(uVar1);
  FUN_00b90440(uVar1,dVar2 - 0.1);
  return;
}

