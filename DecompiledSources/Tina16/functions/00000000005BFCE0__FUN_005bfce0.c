/* Ghidra address: 005bfce0 */
/* Ghidra symbol: FUN_005bfce0 */


undefined8 * FUN_005bfce0(undefined8 param_1,undefined4 param_2)

{
  ushort wYear;
  BOOL BVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  _TIME_ZONE_INFORMATION *p_Var5;
  undefined8 uVar6;
  undefined1 auStack_108 [32];
  WORD local_e8;
  undefined8 local_e0;
  _TIME_ZONE_INFORMATION local_d4;
  
  wYear = (ushort)param_2;
  puVar3 = (undefined8 *)FUN_00409570(0x30);
  p_Var5 = &local_d4;
  for (lVar4 = 0x15; lVar4 != 0; lVar4 = lVar4 + -1) {
    p_Var5->Bias = 0;
    p_Var5->StandardName[0] = L'\0';
    p_Var5->StandardName[1] = L'\0';
    p_Var5 = (_TIME_ZONE_INFORMATION *)(p_Var5->StandardName + 2);
  }
  p_Var5->Bias = 0;
  if (0x641 < wYear) {
    if (wYear < 0x786c) {
      if ((((*(int *)PTR_DAT_02001bd8 < 7) &&
           ((*(int *)PTR_DAT_02001bd8 != 6 || (*(int *)PTR_DAT_02003a08 < 2)))) &&
          ((*(int *)PTR_DAT_02001bd8 != 6 ||
           ((*(int *)PTR_DAT_02003a08 != 1 || (*(int *)PTR_DAT_02004520 < 1)))))) ||
         (BVar1 = GetTimeZoneInformationForYear(wYear,(PDYNAMIC_TIME_ZONE_INFORMATION)0x0,&local_d4)
         , BVar1 == 0)) {
        iVar2 = thunk_FUN_03a92fc6(&local_d4);
      }
      else {
        iVar2 = 1;
      }
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          local_e0 = FUN_00448a90(local_d4.StandardDate.wHour,local_d4.StandardDate.wMinute,
                                  local_d4.StandardDate.wSecond,0);
          local_e8 = local_d4.StandardDate.wDay;
          uVar6 = FUN_005bfbc0(auStack_108,param_2,local_d4.StandardDate.wMonth,
                               local_d4.StandardDate.wDayOfWeek);
          puVar3[1] = uVar6;
          local_e0 = FUN_00448a90(local_d4.DaylightDate.wHour,local_d4.DaylightDate.wMinute,
                                  local_d4.DaylightDate.wSecond,0);
          local_e8 = local_d4.DaylightDate.wDay;
          uVar6 = FUN_005bfbc0(auStack_108,param_2,local_d4.DaylightDate.wMonth,
                               local_d4.DaylightDate.wDayOfWeek);
          *puVar3 = uVar6;
        }
        puVar3[2] = (longlong)((local_d4.StandardBias + local_d4.Bias) * -0x3c);
        puVar3[3] = (longlong)((local_d4.DaylightBias + local_d4.Bias) * -0x3c);
        FUN_00416830(puVar3 + 4,local_d4.StandardName,0x20);
        FUN_00416830(puVar3 + 5,local_d4.DaylightName,0x20);
      }
      return puVar3;
    }
    return puVar3;
  }
  return puVar3;
}

