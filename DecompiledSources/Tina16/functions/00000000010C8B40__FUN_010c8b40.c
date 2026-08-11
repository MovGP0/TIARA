/* Ghidra address: 010c8b40 */
/* Ghidra symbol: FUN_010c8b40 */


void FUN_010c8b40(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040c840(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_00409e80(uVar1);
  *(double *)(param_1 + 8) = (double)iVar2;
  return;
}

