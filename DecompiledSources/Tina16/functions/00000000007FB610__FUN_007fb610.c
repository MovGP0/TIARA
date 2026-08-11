/* Ghidra address: 007fb610 */
/* Ghidra symbol: FUN_007fb610 */


void FUN_007fb610(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_30 = auStack_58;
  *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
  FUN_006586f0(param_1,param_2);
  local_1a = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    local_1a = 0;
  }
  else if (iVar1 == 1) {
    local_1a = 1;
  }
  else if (iVar1 == 2) {
    local_1a = 2;
  }
  (**(code **)(*param_1 + 0x270))(param_1,local_1a);
  *(int *)(param_1 + 0x92) = (int)param_1[0x92] + -1;
  local_19 = (undefined1)param_1[0x95];
  *(undefined1 *)(param_1 + 0x95) = 1;
  FUN_007fb090(param_1);
  *(undefined1 *)(param_1 + 0x95) = local_19;
  if ((*(char *)(param_1[0x93] + 0x24) != '\0') || (*(char *)(param_1[0x96] + 0x24) != '\0')) {
    FUN_007fb150(param_1);
  }
  return;
}

