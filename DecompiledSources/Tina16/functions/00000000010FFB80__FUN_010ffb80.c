/* Ghidra address: 010ffb80 */
/* Ghidra symbol: FUN_010ffb80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_010ffb80(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_01d2dd00((longlong)param_1 + 0x14,param_3,param_4), cVar1 == '\0')) {
    return 0;
  }
  if ((*(int *)((longlong)param_1 + 0x24) <= param_3) &&
     (((param_3 <= *(int *)((longlong)param_1 + 0x2c) && ((int)param_1[5] <= param_4)) &&
      (param_4 <= (int)param_1[6])))) {
    return 1;
  }
  iVar2 = FUN_010ffaa0(param_1,param_2);
  iVar3 = FUN_010ffb10(param_1,param_2);
  if (((((double)(int)param_1[9] - (double)_DAT_01f21b0c <= (double)param_3) &&
       ((double)param_3 <= (double)((int)param_1[9] + iVar2) + (double)_DAT_01f21b0c)) &&
      ((double)*(int *)((longlong)param_1 + 0x4c) - (double)_DAT_01f21b0c <= (double)param_4)) &&
     ((double)param_4 <=
      (double)(*(int *)((longlong)param_1 + 0x4c) + iVar3) + (double)_DAT_01f21b0c)) {
    return 1;
  }
  return 0;
}

