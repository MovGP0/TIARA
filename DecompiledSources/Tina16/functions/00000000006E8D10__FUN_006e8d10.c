/* Ghidra address: 006e8d10 */
/* Ghidra symbol: FUN_006e8d10 */


int FUN_006e8d10(char *param_1,longlong param_2,int param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  pcVar2 = param_1;
  for (; param_3 < param_4 + -1; param_3 = param_3 + 2) {
    if ((*(char *)(local_res10[0] + param_3) == '\n') &&
       (*(char *)(local_res10[0] + (param_3 + 1)) == '\0')) {
      *pcVar2 = '\r';
      pcVar2[1] = '\0';
      pcVar2[2] = '\n';
      pcVar2[3] = '\0';
      pcVar1 = pcVar2 + 4;
    }
    else {
      *pcVar2 = *(char *)(local_res10[0] + param_3);
      pcVar2[1] = *(char *)(local_res10[0] + (param_3 + 1));
      pcVar1 = pcVar2 + 2;
      if ((*(char *)(local_res10[0] + param_3) == '\r') &&
         (*(char *)(local_res10[0] + (param_3 + 1)) == '\0')) {
        *pcVar1 = '\n';
        pcVar2[3] = '\0';
        pcVar1 = pcVar2 + 4;
        if ((*(char *)(local_res10[0] + (param_3 + 2)) == '\n') &&
           (*(char *)(local_res10[0] + (param_3 + 3)) == '\0')) {
          param_3 = param_3 + 2;
        }
      }
    }
    pcVar2 = pcVar1;
  }
  if (param_3 == param_4 + -1) {
    *pcVar2 = *(char *)(local_res10[0] + param_3);
    pcVar2 = pcVar2 + 1;
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return (int)pcVar2 - (int)param_1;
}

