/* Ghidra address: 0044f8b0 */
/* Ghidra symbol: FUN_0044f8b0 */


longlong * FUN_0044f8b0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00414ad0(param_1);
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(undefined4 *)(*param_1 + -4);
  }
  cVar1 = FUN_0044f780(*param_1,uVar2);
  if (cVar1 != '\0') {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    FUN_004169f0(param_1,iVar3 + -1);
  }
  return param_1;
}

