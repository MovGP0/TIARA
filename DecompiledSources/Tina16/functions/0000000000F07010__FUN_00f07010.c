/* Ghidra address: 00f07010 */
/* Ghidra symbol: FUN_00f07010 */


longlong * FUN_00f07010(longlong *param_1,longlong param_2,char param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480();
  if (param_3 == '\0') {
    FUN_00414ad0(param_1,local_res10[0]);
    goto LAB_00f07253;
  }
  if (param_3 == '\x01') {
LAB_00f070fb:
    iVar4 = 0;
    iVar5 = 1;
    if (param_3 == '\x01') {
      iVar3 = 3;
    }
    else {
      iVar3 = 4;
    }
    iVar6 = 0;
    if (local_res10[0] != 0) {
      iVar6 = *(int *)(local_res10[0] + -4);
    }
    if (0 < iVar6) {
      do {
        sVar1 = *(short *)(local_res10[0] + -2 + (longlong)iVar6 * 2);
        if (sVar1 != 0x30) {
          if (sVar1 == 0x31) {
            if (-1 < iVar4) {
              iVar4 = iVar4 + iVar5;
            }
          }
          else {
            iVar4 = -1;
          }
        }
        iVar5 = iVar5 * 2;
        iVar2 = 0;
        if (local_res10[0] != 0) {
          iVar2 = *(int *)(local_res10[0] + -4);
        }
        if ((((iVar2 - iVar6) + 1) % iVar3 == 0) || (iVar6 == 1)) {
          if (iVar4 < 0) {
            FUN_00416ba0(param_1,&DAT_00f07294,*param_1);
          }
          else {
            FUN_00416ba0(param_1,(&PTR_DAT_01efa320)[iVar4],*param_1);
          }
          iVar4 = 0;
          iVar5 = 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (param_3 == '\x02') {
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    if (local_res10[0] != 0) {
      iVar5 = *(int *)(local_res10[0] + -4);
    }
    if (0 < iVar5) {
      do {
        sVar1 = *(short *)(local_res10[0] + -2 + (longlong)iVar5 * 2);
        if (sVar1 != 0x30) {
          if (sVar1 == 0x31) {
            if (-1 < iVar3) {
              iVar3 = iVar3 + iVar4;
            }
          }
          else {
            iVar3 = -1;
          }
        }
        iVar4 = iVar4 * 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar3 < 0) {
      FUN_00416ba0(param_1,&DAT_00f07294,*param_1);
    }
    else {
      FUN_0043f750(param_1,iVar3);
    }
  }
  else {
    if (param_3 == '\x03') goto LAB_00f070fb;
    FUN_00414ad0(param_1,local_res10[0]);
  }
  if (param_3 == '\x03') {
    iVar5 = 0;
    if (local_res10[0] != 0) {
      iVar5 = *(int *)(local_res10[0] + -4);
    }
    iVar4 = 0;
    if (*param_1 != 0) {
      iVar4 = *(int *)(*param_1 + -4);
    }
    iVar4 = iVar5 / 4 - iVar4;
    if (0 < iVar4) {
      do {
        FUN_00416ba0(param_1,&DAT_00f072a4,*param_1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00416ad0(param_1,&LAB_00f072b4);
  }
LAB_00f07253:
  FUN_00414480(local_res10);
  return param_1;
}

