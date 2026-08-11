/* Ghidra address: 0044f850 */
/* Ghidra symbol: FUN_0044f850 */


longlong * FUN_0044f850(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_00414ad0(param_1);
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(undefined4 *)(*param_1 + -4);
  }
  cVar1 = FUN_0044f780(*param_1,uVar2);
  if (cVar1 == '\0') {
    FUN_00416ad0(param_1,&LAB_0044f8a0);
  }
  return param_1;
}

