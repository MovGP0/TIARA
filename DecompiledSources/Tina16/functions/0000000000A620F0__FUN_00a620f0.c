/* Ghidra address: 00a620f0 */
/* Ghidra symbol: FUN_00a620f0 */


void FUN_00a620f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8)

{
  longlong lVar1;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 auStack_38 [32];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_00a620c0(auStack_38,local_res18,local_res20);
  FUN_00a620c0(auStack_38,&param_5,&param_6);
  if (local_res20[0] < param_1) {
    if (param_2 < param_5) {
      *param_7 = local_res20[0];
      *param_8 = param_5;
    }
    else {
      if ((param_6 < param_2) &&
         ((double)param_6 / (double)param_2 < (double)local_res20[0] / (double)param_1)) {
        *param_8 = param_6;
        lVar1 = FUN_0040c770(((double)param_6 / (double)param_2) * (double)param_1);
        if (lVar1 <= local_res18[0]) {
          lVar1 = (longlong)local_res18[0];
        }
        *param_7 = (int)lVar1;
        return;
      }
      *param_7 = local_res20[0];
      lVar1 = FUN_0040c770(((double)local_res20[0] / (double)param_1) * (double)param_2);
      if (lVar1 <= param_5) {
        lVar1 = (longlong)param_5;
      }
      *param_8 = (int)lVar1;
    }
  }
  else if (param_1 < local_res18[0]) {
    if (param_6 < param_2) {
      *param_7 = local_res18[0];
      *param_8 = param_6;
    }
    else {
      if ((param_2 < param_5) &&
         ((double)local_res18[0] / (double)param_1 <= (double)param_5 / (double)param_2)) {
        *param_8 = param_5;
        lVar1 = FUN_0040c770(((double)param_5 / (double)param_2) * (double)param_1);
        if (local_res20[0] <= lVar1) {
          lVar1 = (longlong)local_res20[0];
        }
        *param_7 = (int)lVar1;
        return;
      }
      *param_7 = local_res18[0];
      lVar1 = FUN_0040c770(((double)local_res18[0] / (double)param_1) * (double)param_2);
      if (param_6 <= lVar1) {
        lVar1 = (longlong)param_6;
      }
      *param_8 = (int)lVar1;
    }
  }
  else if (param_6 < param_2) {
    *param_8 = param_6;
    param_2 = (param_6 * param_1) / param_2;
    if (param_2 <= local_res18[0]) {
      param_2 = local_res18[0];
    }
    *param_7 = param_2;
  }
  else if (param_2 < param_5) {
    *param_8 = param_5;
    param_2 = (param_5 * param_1) / param_2;
    if (local_res20[0] <= param_2) {
      param_2 = local_res20[0];
    }
    *param_7 = param_2;
  }
  else {
    *param_7 = param_1;
    *param_8 = param_2;
  }
  return;
}

