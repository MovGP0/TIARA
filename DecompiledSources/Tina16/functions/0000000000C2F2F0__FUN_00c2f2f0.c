/* Ghidra address: 00c2f2f0 */
/* Ghidra symbol: FUN_00c2f2f0 */


void FUN_00c2f2f0(char *param_1,undefined8 param_2,int param_3,char param_4)

{
  char *pcVar1;
  char *local_28;
  int local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415dd0(&local_10,param_2,0);
  pcVar1 = (char *)FUN_00415ab0(local_10);
  local_28 = param_1;
  local_18 = param_3;
  for (; (0 < local_18 && (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    *local_28 = *pcVar1;
    local_28 = local_28 + 1;
    local_18 = local_18 + -1;
  }
  for (; 0 < local_18; local_18 = local_18 + -1) {
    *local_28 = param_4;
    local_28 = local_28 + 1;
  }
  FUN_004144d0(&local_10);
  return;
}

