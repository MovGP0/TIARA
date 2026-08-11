/* Ghidra address: 01c342c0 */
/* Ghidra symbol: FUN_01c342c0 */


char FUN_01c342c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                 double *param_5)

{
  int iVar1;
  int iVar2;
  bool local_69;
  undefined8 local_68;
  undefined1 local_60 [48];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_68 = 0;
  local_20 = 0;
  local_28 = 0;
  if ((DAT_0356676c == -1) || (iVar1 = FUN_01c337e0(param_1), DAT_0356676c <= iVar1)) {
    local_69 = true;
  }
  else {
    local_69 = false;
  }
  if (local_69 == false) goto LAB_01c344ad;
  if (DAT_03566770 == 0) {
LAB_01c34383:
    local_69 = true;
  }
  else {
    FUN_0043e130(&local_20,*(undefined8 *)(param_1 + 0x20));
    FUN_0043e130(&local_28,DAT_03566770);
    iVar1 = FUN_00416db0(local_20,local_28);
    if (iVar1 == 0) goto LAB_01c34383;
    local_69 = false;
  }
  if (local_69 != false) {
    FUN_01c34280(param_1,param_2,param_3,param_4,DAT_0356678a,param_5);
    if (DAT_0356678a == '\0') {
      if (DAT_03566789 != '\0') {
        local_69 = 0.0 <= *param_5;
      }
    }
    else if ((param_4 == (longlong *)0x0) ||
            (iVar1 = (**(code **)(*param_4 + 0x28))(param_4), *param_5 < (double)iVar1)) {
      local_69 = false;
    }
    else {
      local_69 = true;
    }
    if (local_69 != false) {
      local_69 = (bool)FUN_01c33b90(DAT_03566778,DAT_03566780,DAT_03566788,param_1);
    }
    if (local_69 != false) {
      iVar1 = FUN_01c337e0(param_1);
      for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        FUN_00c411c0(param_1,local_60,iVar2);
        FUN_004169a0(&local_68,local_60);
        FUN_0043ea00(&local_30,local_68);
        if (local_30 == 0) break;
      }
      local_69 = iVar2 == iVar1;
    }
  }
LAB_01c344ad:
  FUN_00414480(&local_68);
  FUN_00414560(&local_30,3);
  return local_69;
}

