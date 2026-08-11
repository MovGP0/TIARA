/* Ghidra address: 01b217a0 */
/* Ghidra symbol: FUN_01b217a0 */


void FUN_01b217a0(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + -4);
  }
  FUN_00416e20(param_1,uVar1,1);
  return;
}

