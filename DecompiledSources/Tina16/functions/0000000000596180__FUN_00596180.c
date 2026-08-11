/* Ghidra address: 00596180 */
/* Ghidra symbol: FUN_00596180 */


void FUN_00596180(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596920(param_1);
  if (iVar1 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(*param_1 + (longlong)iVar1 * 4);
    FUN_005995b0(param_1,iVar1,3);
  }
  return;
}

