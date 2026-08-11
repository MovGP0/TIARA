/* Ghidra address: 01a66170 */
/* Ghidra symbol: FUN_01a66170 */


void FUN_01a66170(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  dVar2 = (double)FUN_00b90090(uVar1);
  FUN_00b90440(uVar1,dVar2 - 1.0);
  return;
}

