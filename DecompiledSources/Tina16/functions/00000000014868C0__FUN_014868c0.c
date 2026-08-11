/* Ghidra address: 014868c0 */
/* Ghidra symbol: FUN_014868c0 */


void FUN_014868c0(longlong param_1)

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
  FUN_01486710(param_1,iVar1);
  return;
}

