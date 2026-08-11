/* Ghidra address: 017f21b0 */
/* Ghidra symbol: FUN_017f21b0 */


undefined4 FUN_017f21b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  
  FUN_017f20b0(param_1);
  FUN_00416e20(param_1,1,1);
  FUN_00416e20(param_1,1,1);
  FUN_00416e20(param_1,1,1);
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + -4);
  }
  FUN_00416e20(param_1,uVar1,1);
  FUN_017f20b0(param_1);
  return unaff_ESI;
}

