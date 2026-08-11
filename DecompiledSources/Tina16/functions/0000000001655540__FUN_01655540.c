/* Ghidra address: 01655540 */
/* Ghidra symbol: FUN_01655540 */


int * FUN_01655540(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *unaff_R13;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((*param_3 == 1) && (*param_2 == 1)) {
    if (param_1 < 7) {
      if (param_1 == 6) {
        unaff_R13 = (int *)FUN_01655470(*(double *)(param_2 + 10) * *(double *)(param_3 + 10));
      }
      else if (param_1 == 4) {
        unaff_R13 = (int *)FUN_01655470(*(double *)(param_2 + 10) + *(double *)(param_3 + 10));
      }
      else if (param_1 == 5) {
        unaff_R13 = (int *)FUN_01655470(*(double *)(param_2 + 10) - *(double *)(param_3 + 10));
      }
    }
    else if (param_1 == 7) {
      local_38 = *(undefined8 *)(param_2 + 10);
      local_30 = *(undefined8 *)(param_3 + 10);
      FUN_016aa3d0(&local_38,1);
      unaff_R13 = (int *)FUN_01655470();
    }
    else if (param_1 == 8) {
      FUN_00c42670(*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_3 + 10));
      unaff_R13 = (int *)FUN_01655470();
    }
    FUN_016a94d0(param_2,1);
    FUN_016a94d0(param_3,1);
    return unaff_R13;
  }
  if (param_1 < 7) {
    if (param_1 == 6) {
      if ((*param_2 == 1) && (*(double *)(param_2 + 10) == 0.0)) {
        FUN_016a94d0(param_3,1);
        return param_2;
      }
      if ((*param_3 == 1) && (*(double *)(param_3 + 10) == 0.0)) {
        FUN_016a94d0(param_2,1);
        return param_3;
      }
      if ((*param_2 == 1) && (*(double *)(param_2 + 10) == 1.0)) {
        FUN_016a94d0(param_2,1);
        return param_3;
      }
      if ((*param_3 == 1) && (*(double *)(param_3 + 10) == 1.0)) {
        FUN_016a94d0(param_3,1);
        return param_2;
      }
    }
    else if (param_1 == 4) {
      if ((*param_2 == 1) && (*(double *)(param_2 + 10) == 0.0)) {
        FUN_016a94d0(param_2,1);
        return param_3;
      }
      if ((*param_3 == 1) && (*(double *)(param_3 + 10) == 0.0)) {
        FUN_016a94d0(param_3,1);
        return param_2;
      }
    }
    else if (param_1 == 5) {
      if ((*param_3 == 1) && (*(double *)(param_3 + 10) == 0.0)) {
        FUN_016a94d0(param_3,1);
        return param_2;
      }
      if ((*param_2 == 1) && (*(double *)(param_2 + 10) == 0.0)) {
        piVar1 = (int *)FUN_016554c0(0xe,param_3);
        FUN_016a94d0(param_2,1);
        return piVar1;
      }
    }
  }
  else if (param_1 == 7) {
    if ((*param_2 == 1) && (*(double *)(param_2 + 10) == 0.0)) {
      FUN_016a94d0(param_3,1);
      return param_2;
    }
    if ((*param_3 == 1) && (*(double *)(param_3 + 10) == 1.0)) {
      FUN_016a94d0(param_3,1);
      return param_2;
    }
  }
  else if ((param_1 == 8) && (*param_3 == 1)) {
    if (*(double *)(param_3 + 10) == 0.0) {
      piVar1 = (int *)FUN_01655470(0x3ff0000000000000);
      FUN_016a94d0(param_2,1);
      FUN_016a94d0(param_3,1);
      return piVar1;
    }
    if (*(double *)(param_3 + 10) == 1.0) {
      FUN_016a94d0(param_3,1);
      return param_2;
    }
  }
  piVar1 = (int *)FUN_004095c0(0xd0);
  FUN_0040d200(piVar1,0xd0,0);
  *piVar1 = param_1;
  *(int **)(piVar1 + 2) = param_2;
  *(int **)(piVar1 + 4) = param_3;
  piVar1[0x13] = param_1;
  return piVar1;
}

