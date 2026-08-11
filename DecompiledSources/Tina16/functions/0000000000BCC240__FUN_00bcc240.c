/* Ghidra address: 00bcc240 */
/* Ghidra symbol: FUN_00bcc240 */


int FUN_00bcc240(int param_1,int param_2,longlong param_3)

{
  char cVar1;
  short *psVar2;
  int local_2c [3];
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  else if (((1 < param_2) && (cVar1 = FUN_00bcbec0(param_3,local_2c), cVar1 != '\0')) &&
          (local_2c[0] + 1 < param_1)) {
    psVar2 = (short *)(param_3 + -2 + (longlong)(local_2c[0] + 1) * 2);
    for (param_1 = param_1 - (local_2c[0] + 1); 0 < param_1; param_1 = param_1 + -1) {
      if (*psVar2 == 0) {
        local_2c[0] = local_2c[0] + param_1;
        break;
      }
      if (*psVar2 == 9) {
        local_2c[0] = (local_2c[0] + param_2) - (local_2c[0] + param_2) % param_2;
      }
      else {
        local_2c[0] = local_2c[0] + 1;
      }
      psVar2 = psVar2 + 1;
    }
    param_1 = local_2c[0] + 1;
  }
  return param_1;
}

