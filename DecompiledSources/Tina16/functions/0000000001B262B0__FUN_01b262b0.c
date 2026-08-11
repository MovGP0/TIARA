/* Ghidra address: 01b262b0 */
/* Ghidra symbol: FUN_01b262b0 */


void FUN_01b262b0(longlong param_1)

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
  FUN_01b26100(param_1,iVar1);
  return;
}

