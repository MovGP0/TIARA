/* Ghidra address: 01cf1450 */
/* Ghidra symbol: FUN_01cf1450 */


void FUN_01cf1450(char param_1,char param_2,int *param_3,int *param_4,char param_5,char param_6)

{
  int iVar1;
  int in_R10D;
  int in_R11D;
  
  if (param_2 == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  if (param_5 == '\0') {
    if (param_1 == '\0') {
      in_R10D = iVar1 * *param_3;
      in_R11D = *param_4;
    }
    else if (param_1 == '\x01') {
      in_R10D = *param_4;
      in_R11D = -iVar1 * *param_3;
    }
    else if (param_1 == '\x02') {
      in_R10D = -iVar1 * *param_3;
      in_R11D = -*param_4;
    }
    else if (param_1 == '\x03') {
      in_R10D = -*param_4;
      in_R11D = iVar1 * *param_3;
    }
  }
  else if (param_6 == '\0') {
    in_R10D = iVar1 * *param_3;
    in_R11D = *param_4;
  }
  else if (param_6 == '\x01') {
    in_R10D = *param_3;
    in_R11D = -iVar1 * *param_4;
  }
  else if (param_6 == '\x02') {
    in_R10D = -iVar1 * *param_3;
    in_R11D = *param_4;
  }
  else if (param_6 == '\x03') {
    in_R10D = *param_3;
    in_R11D = iVar1 * *param_4;
  }
  *param_3 = in_R10D;
  *param_4 = in_R11D;
  return;
}

