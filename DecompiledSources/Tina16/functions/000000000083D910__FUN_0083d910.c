/* Ghidra address: 0083d910 */
/* Ghidra symbol: FUN_0083d910 */


void FUN_0083d910(longlong *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (param_3 != 0) {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)*param_1;
    }
    if ((param_2 < 0) || (iVar1 < param_2)) {
      FUN_0041ddd0(local_20,PTR_PTR_02004318);
      FUN_0083d530(local_20[0]);
    }
    iVar1 = iVar1 + param_3;
    if (iVar1 < 0) {
      FUN_0041ddd0(&local_28,PTR_PTR_020034e0);
      FUN_0083d530(local_28);
    }
    else if (0x7fffffd < iVar1) {
      FUN_0041ddd0(&local_30,PTR_PTR_02003b38);
      FUN_0083d530(local_30);
    }
    if (0 < iVar1) {
      iVar1 = iVar1 + 1;
    }
    FUN_00409620(param_1,(longlong)(iVar1 * 4));
    if (*param_1 != 0) {
      while (param_2 = param_2 + 1, param_2 < iVar1) {
        *(undefined4 *)(*param_1 + (longlong)param_2 * 4) = param_4;
      }
      *(int *)*param_1 = iVar1 + -1;
    }
  }
  FUN_00414560(&local_30,3);
  return;
}

