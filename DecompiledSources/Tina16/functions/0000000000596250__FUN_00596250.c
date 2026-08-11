/* Ghidra address: 00596250 */
/* Ghidra symbol: FUN_00596250 */


void FUN_00596250(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596fe0(param_1);
  if (iVar1 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*param_1 + (longlong)iVar1 * 8);
    FUN_00599670(param_1,iVar1,3);
  }
  return;
}

