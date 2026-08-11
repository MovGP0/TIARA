/* Ghidra address: 004e5930 */
/* Ghidra symbol: FUN_004e5930 */


void FUN_004e5930(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = iVar1 * 2;
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  FUN_004e5780(param_1,iVar1);
  return;
}

