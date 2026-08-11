/* Ghidra address: 0055b5f0 */
/* Ghidra symbol: FUN_0055b5f0 */


longlong * FUN_0055b5f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < -3) {
    if (iVar1 == -4) {
      param_2 = param_2 + 9;
      goto LAB_0055b67a;
    }
    if (iVar1 == -8) {
      param_2 = param_2 + 3;
      goto LAB_0055b67a;
    }
    if (iVar1 == -7) {
      param_2 = param_2 + 2;
      goto LAB_0055b67a;
    }
    if (iVar1 == -6) {
      param_2 = param_2 + 1;
      goto LAB_0055b67a;
    }
    if (iVar1 == -5) goto LAB_0055b67a;
  }
  else {
    if (iVar1 == -3) {
      param_2 = param_2 + 8;
      goto LAB_0055b67a;
    }
    if (iVar1 == -2) {
      param_2 = param_2 + 7;
      goto LAB_0055b67a;
    }
    if (iVar1 == -1) {
      param_2 = param_2 + 6;
      goto LAB_0055b67a;
    }
  }
  param_2 = (longlong *)((longlong)param_2 + (longlong)iVar1 + 0x50);
LAB_0055b67a:
  if (*(char *)(param_1 + 8) != '\0') {
    param_2 = (longlong *)*param_2;
  }
  return param_2;
}

