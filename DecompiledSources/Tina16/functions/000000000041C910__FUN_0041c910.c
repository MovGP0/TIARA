/* Ghidra address: 0041c910 */
/* Ghidra symbol: FUN_0041c910 */


void FUN_0041c910(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0041c3c0(*(undefined8 *)(param_1[2] + (longlong)iVar1 * 8));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_00411d90(*param_1);
  FUN_0041c140(param_1 + 2);
  return;
}

