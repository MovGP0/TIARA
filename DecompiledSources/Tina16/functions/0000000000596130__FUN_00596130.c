/* Ghidra address: 00596130 */
/* Ghidra symbol: FUN_00596130 */


void FUN_00596130(longlong *param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596e40(param_1);
  if (iVar1 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined2 *)(*param_1 + (longlong)iVar1 * 2);
    FUN_005994f0(param_1,iVar1,3);
  }
  return;
}

