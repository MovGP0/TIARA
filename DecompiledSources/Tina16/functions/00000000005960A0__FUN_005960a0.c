/* Ghidra address: 005960a0 */
/* Ghidra symbol: FUN_005960a0 */


void FUN_005960a0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596d70(param_1);
  if (iVar1 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined1 *)(*param_1 + (longlong)iVar1);
    FUN_00599430(param_1,iVar1,3);
  }
  return;
}

