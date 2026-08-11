/* Ghidra address: 00b92430 */
/* Ghidra symbol: FUN_00b92430 */


undefined8 FUN_00b92430(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_005b8460(DAT_01e94b78,local_res10[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_005b8460(DAT_01e94b80,local_res10[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_005b8460(DAT_01e94b88,local_res10[0]);
      if (cVar1 == '\0') {
        cVar1 = FUN_005b8460(DAT_01e94b90,local_res10[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_005b8460(DAT_01e94b98,local_res10[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_005b8460(DAT_01e94ba0,local_res10[0]);
            if (cVar1 == '\0') {
              FUN_00416ba0(&local_50,DAT_01e94b78,L"\\Examples");
              cVar1 = FUN_005b8460(local_50,local_res10[0]);
              if (cVar1 == '\0') {
                FUN_00414ad0(param_1,local_res10[0]);
              }
              else {
                iVar2 = 0;
                FUN_00416ba0(&local_58,DAT_01e94b78,L"\\Examples");
                if (local_58 != 0) {
                  FUN_00416ba0(&local_60,DAT_01e94b78,L"\\Examples");
                  iVar2 = *(int *)(local_60 + -4);
                }
                FUN_00b92400(&local_68,local_res10[0],iVar2 + 1);
                FUN_00416ba0(param_1,L"<EXAMPLESDIR>",local_68);
              }
            }
            else {
              iVar2 = 0;
              if (DAT_01e94ba0 != 0) {
                iVar2 = *(int *)(DAT_01e94ba0 + -4);
              }
              FUN_00b92400(&local_48,local_res10[0],iVar2 + 1);
              FUN_00416ba0(param_1,L"<COMMONCATDIR>",local_48);
            }
          }
          else {
            iVar2 = 0;
            if (DAT_01e94b98 != 0) {
              iVar2 = *(int *)(DAT_01e94b98 + -4);
            }
            FUN_00b92400(&local_40,local_res10[0],iVar2 + 1);
            FUN_00416ba0(param_1,L"<CATALOGDIR>",local_40);
          }
        }
        else {
          iVar2 = 0;
          if (DAT_01e94b90 != 0) {
            iVar2 = *(int *)(DAT_01e94b90 + -4);
          }
          FUN_00b92400(&local_38,local_res10[0],iVar2 + 1);
          FUN_00416ba0(param_1,L"<SETTINGSDIR>",local_38);
        }
      }
      else {
        iVar2 = 0;
        if (DAT_01e94b88 != 0) {
          iVar2 = *(int *)(DAT_01e94b88 + -4);
        }
        FUN_00b92400(&local_30,local_res10[0],iVar2 + 1);
        FUN_00416ba0(param_1,L"<TEMPDIR>",local_30);
      }
    }
    else {
      iVar2 = 0;
      if (DAT_01e94b80 != 0) {
        iVar2 = *(int *)(DAT_01e94b80 + -4);
      }
      FUN_00b92400(&local_28,local_res10[0],iVar2 + 1);
      FUN_00416ba0(param_1,L"<WORKDIR>",local_28);
    }
  }
  else {
    iVar2 = 0;
    if (DAT_01e94b78 != 0) {
      iVar2 = *(int *)(DAT_01e94b78 + -4);
    }
    FUN_00b92400(local_20,local_res10[0],iVar2 + 1);
    FUN_00416ba0(param_1,L"<TINADIR>",local_20[0]);
  }
  FUN_00414560(&local_68,10);
  FUN_00414480(local_res10);
  return param_1;
}

