/* Ghidra address: 014d9fa0 */
/* Ghidra symbol: FUN_014d9fa0 */


int FUN_014d9fa0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                int param_7,int param_8,int param_9,int *param_10,char *param_11,char *param_12)

{
  int iVar1;
  longlong lVar2;
  
  if ((((param_1 == param_2) && (param_4 == '\0')) && (param_5 == '\0')) && (param_6 == '\0')) {
    if (param_3 == '\0') {
      if (*param_10 < param_7) {
        *param_10 = *param_10 + 1;
      }
      else if (param_8 == 0) {
        *param_10 = 0;
      }
    }
    else if (param_3 == '\x01') {
      if (*param_10 < 1) {
        if (param_8 == 0) {
          *param_10 = param_7;
        }
      }
      else {
        *param_10 = *param_10 + -1;
      }
    }
  }
  else if (param_6 == '\x01') {
    *param_10 = 0;
  }
  else if (param_5 == '\x01') {
    *param_10 = param_7;
  }
  iVar1 = param_9 % 10;
  if (iVar1 == 0) {
    if (*param_10 == param_7) {
      *param_11 = '\x01';
    }
    else {
      *param_11 = '\0';
    }
    if (*param_10 == 0) {
      *param_12 = '\x01';
    }
    else {
      *param_12 = '\0';
    }
  }
  else if (iVar1 == 1) {
    lVar2 = FUN_0040c770((double)param_7 / 2.0);
    if (*param_10 < lVar2) {
      *param_11 = '\0';
    }
    else {
      *param_11 = '\x01';
    }
    if (*param_10 == 0) {
      *param_12 = '\x01';
    }
    else {
      *param_12 = '\0';
    }
  }
  else if (iVar1 == 2) {
    if (*param_10 == param_7) {
      *param_11 = '\x01';
      *param_12 = '\0';
    }
    if (*param_10 == 0) {
      *param_12 = '\x01';
      *param_11 = '\0';
    }
  }
  if (param_9 / 10 == 1) {
    if (*param_11 == '\0') {
      *param_12 = '\x01';
    }
    else if (*param_11 == '\x01') {
      *param_12 = '\0';
    }
    else {
      *param_12 = *param_12;
    }
  }
  if (param_9 / 10 == 2) {
    if (*param_12 == '\0') {
      *param_11 = '\x01';
    }
    else if (*param_12 == '\x01') {
      *param_11 = '\0';
    }
    else {
      *param_11 = *param_12;
    }
  }
  return *param_10;
}

