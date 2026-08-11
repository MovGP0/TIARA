/* Ghidra address: 00848040 */
/* Ghidra symbol: FUN_00848040 */


void FUN_00848040(longlong *param_1,int param_2,int param_3,undefined8 param_4,longlong param_5,
                 int param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar3)(param_1);
  if ((cVar1 != '\0') && (param_6 == 0)) {
    iVar2 = FUN_0064d0b0(param_1);
    param_2 = iVar2 - param_2;
  }
  if (local_res18[0] == (int)param_1[0xa0]) {
    return;
  }
  if (((int)param_1[0xa0] == *(int *)(param_5 + 0x18)) && (param_2 < *(int *)(param_5 + 4))) {
    return;
  }
  if (((int)param_1[0xa0] == *(int *)(param_5 + 0x20) + -1) && (*(int *)(param_5 + 8) < param_2)) {
    return;
  }
  FUN_00843b70(param_1);
  if (param_2 < *(int *)(param_5 + 4)) {
    if (*(int *)(param_5 + 0x18) < (int)param_1[0xa0]) {
      FUN_008447f0(param_1,param_6,0,0,0);
      (**(code **)(*param_1 + 0x198))(param_1);
      FUN_00841d10(param_1,param_4);
    }
    local_res18[0] = *(int *)(param_5 + 0x1c);
  }
  else if (param_2 < *(int *)(param_5 + 0x14)) {
    if (local_res18[0] < 0) {
      local_res18[0] = (int)param_1[0xa0];
    }
  }
  else {
    if (((int)param_1[0xa0] == *(int *)(param_5 + 0x10)) &&
       ((int)param_1[0xa0] < *(int *)(param_5 + 0x20) + -1)) {
      FUN_008447f0(param_1,param_6,1,0,0);
      (**(code **)(*param_1 + 0x198))(param_1);
      FUN_00841d10(param_1,param_4);
    }
    local_res18[0] = *(int *)(param_5 + 0x10);
  }
  if ((char)param_1[0xaa] == '\x05') {
    pcVar3 = (code *)FUN_00411550(param_1,0xff99);
    cVar1 = (*pcVar3)(param_1,(longlong)param_1 + 0x4fc,local_res18,param_7);
    if (cVar1 == '\0') goto LAB_008481d4;
  }
  else {
LAB_008481d4:
    if ((char)param_1[0xaa] != '\x04') goto LAB_00848210;
    pcVar3 = (code *)FUN_00411550(param_1,0xff98);
    cVar1 = (*pcVar3)(param_1,(longlong)param_1 + 0x4fc,local_res18,param_7);
    if (cVar1 == '\0') goto LAB_00848210;
  }
  *(int *)(param_1 + 0xa0) = local_res18[0];
LAB_00848210:
  FUN_00843b70(param_1);
  return;
}

