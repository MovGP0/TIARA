/* Ghidra address: 00b93320 */
/* Ghidra symbol: FUN_00b93320 */


undefined8 FUN_00b93320(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_005b8460(L"%TINADIR%",local_res10[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_005b8460(L"%WORKDIR%",local_res10[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_005b8460(L"%TEMPDIR%",local_res10[0]);
      if (cVar1 == '\0') {
        cVar1 = FUN_005b8460(L"%SETTINGSDIR%",local_res10[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_005b8460(L"%CATALOGDIR%",local_res10[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_005b8460(L"%COMMONCATDIR%",local_res10[0]);
            if (cVar1 == '\0') {
              cVar1 = FUN_005b8460(L"%EXAMPLESDIR%",local_res10[0]);
              if (cVar1 == '\0') {
                cVar1 = FUN_005b8460(L"%TCCATDIR%",local_res10[0]);
                if (cVar1 == '\0') {
                  FUN_00414ad0(param_1,local_res10[0]);
                }
                else {
                  FUN_00b92400(&local_48,local_res10[0],0xb);
                  FUN_00416ba0(param_1,L"<TCCATDIR>",local_48);
                }
              }
              else {
                FUN_00b92400(&local_40,local_res10[0],0xe);
                FUN_00416ba0(param_1,L"<EXAMPLESDIR>",local_40);
              }
            }
            else {
              FUN_00b92400(&local_38,local_res10[0],0xf);
              FUN_00416ba0(param_1,L"<COMMONCATDIR>",local_38);
            }
          }
          else {
            FUN_00b92400(&local_30,local_res10[0],0xd);
            FUN_00416ba0(param_1,L"<CATALOGDIR>",local_30);
          }
        }
        else {
          FUN_00b92400(&local_28,local_res10[0],0xe);
          FUN_00416ba0(param_1,L"<SETTINGSDIR>",local_28);
        }
      }
      else {
        FUN_00b92400(&local_20,local_res10[0],10);
        FUN_00416ba0(param_1,L"<TEMPDIR>",local_20);
      }
    }
    else {
      FUN_00b92400(&local_18,local_res10[0],10);
      FUN_00416ba0(param_1,L"<WORKDIR>",local_18);
    }
  }
  else {
    FUN_00b92400(&local_10,local_res10[0],10);
    FUN_00416ba0(param_1,L"<TINADIR>",local_10);
  }
  FUN_00414560(&local_48,8);
  FUN_00414480(local_res10);
  return param_1;
}

