/* Ghidra address: 00b928f0 */
/* Ghidra symbol: FUN_00b928f0 */


undefined8 FUN_00b928f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar1 = FUN_005b8460(L"$TINA",local_res10);
  if (cVar1 == '\0') {
    cVar1 = FUN_005b8460(L"<TINADIR>",local_res10);
    if (cVar1 == '\0') {
      cVar1 = FUN_005b8460(L"<WORKDIR>",local_res10);
      if (cVar1 == '\0') {
        cVar1 = FUN_005b8460(L"<TEMPDIR>",local_res10);
        if (cVar1 == '\0') {
          cVar1 = FUN_005b8460(L"<SETTINGSDIR>",local_res10);
          if (cVar1 == '\0') {
            cVar1 = FUN_005b8460(L"<CATALOGDIR>",local_res10);
            if (cVar1 == '\0') {
              cVar1 = FUN_005b8460(L"<COMMONCATDIR>",local_res10);
              if (cVar1 == '\0') {
                cVar1 = FUN_005b8460(L"<EXAMPLESDIR>",local_res10);
                if (cVar1 == '\0') {
                  cVar1 = FUN_005b8460(L"<TCCATDIR>",local_res10);
                  if ((cVar1 == '\0') || (local_res18 == 0)) {
                    FUN_00414ad0(param_1,local_res10);
                  }
                  else {
                    FUN_00b92400(&local_50,local_res10,0xb);
                    FUN_00416ba0(param_1,local_res18,local_50);
                  }
                }
                else {
                  FUN_00b92400(&local_48,local_res10,0xe);
                  FUN_00416cd0(param_1,3,DAT_01e94b78,L"\\Examples",local_48);
                }
              }
              else {
                FUN_00b92400(&local_40,local_res10,0xf);
                FUN_00416ba0(param_1,DAT_01e94ba0,local_40);
              }
            }
            else {
              FUN_00b92400(&local_38,local_res10,0xd);
              FUN_00416ba0(param_1,DAT_01e94b98,local_38);
            }
          }
          else {
            FUN_00b92400(&local_30,local_res10,0xe);
            FUN_00416ba0(param_1,DAT_01e94b90,local_30);
          }
        }
        else {
          FUN_00b92400(&local_28,local_res10,10);
          FUN_00416ba0(param_1,DAT_01e94b88,local_28);
        }
      }
      else {
        FUN_00b92400(&local_20,local_res10,10);
        FUN_00416ba0(param_1,DAT_01e94b80,local_20);
      }
    }
    else {
      FUN_00b92400(&local_18,local_res10,10);
      FUN_00416ba0(param_1,DAT_01e94b78,local_18);
    }
  }
  else {
    FUN_00b92400(&local_10,local_res10,6);
    FUN_00416ba0(param_1,DAT_01e94b78,local_10);
  }
  FUN_00414560(&local_50,9);
  FUN_00414560(&local_res10,2);
  return param_1;
}

