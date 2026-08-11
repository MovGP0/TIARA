/* Ghidra address: 018a5310 */
/* Ghidra symbol: FUN_018a5310 */


int * FUN_018a5310(undefined8 param_1,int *param_2,int param_3,int param_4,double param_5,
                  char param_6)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_004b2060(param_1);
  if ((param_3 < iVar1) && (-1 < param_3)) {
    lVar2 = FUN_018a4e90(param_1,param_3);
    if (param_6 == '\0') {
      *param_2 = *(int *)(lVar2 + 0x20);
    }
    else {
      *param_2 = (param_4 - *(int *)(lVar2 + 0x1c)) - *(int *)(lVar2 + 0x20);
    }
    param_2[1] = *(int *)(lVar2 + 0x24);
    param_2[2] = *param_2 + *(int *)(lVar2 + 0x1c);
    param_2[3] = param_2[1] + *(int *)(lVar2 + 0x18);
  }
  else {
    if (param_5 * 794.0 <= (double)param_4) {
      iVar1 = FUN_0040c770(((double)param_4 - param_5 * 794.0) / 2.0);
    }
    else {
      iVar1 = 10;
    }
    *param_2 = iVar1;
    iVar1 = FUN_0040c770(param_5 * 10.0);
    param_2[1] = iVar1;
    iVar1 = FUN_0040c770(param_5 * 794.0);
    param_2[2] = *param_2 + iVar1;
    iVar1 = FUN_0040c770(param_5 * 1123.0);
    param_2[3] = param_2[1] + iVar1;
  }
  return param_2;
}

