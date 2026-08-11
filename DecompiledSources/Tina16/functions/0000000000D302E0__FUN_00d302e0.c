/* Ghidra address: 00d302e0 */
/* Ghidra symbol: FUN_00d302e0 */


void FUN_00d302e0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  DAT_0201a158 = DAT_0201a158 + -1;
  if (DAT_0201a158 == -1) {
    FUN_004144d0(&DAT_0201a148);
    FUN_004144d0(&DAT_0201a150);
    DAT_0201a140 = FUN_00d2fd00();
    if (DAT_0201a140 < 0x10) {
      DAT_0201a118 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (DAT_0201a140 & 0x1f) &
                     0x7c0U) != 0;
    }
    else {
      DAT_0201a118 = false;
    }
    DAT_0201a119 = DAT_0201a140 == 1;
    DAT_0201a11a = DAT_0201a140 == 3;
    DAT_0201a11b = DAT_0201a140 == 8;
    DAT_0201a11c = DAT_0201a140 == 2;
    DAT_0201a11d = DAT_0201a140 == 4;
    DAT_0201a11e = DAT_0201a140 == 5;
    DAT_0201a11f = DAT_0201a140 == 9;
    DAT_0201a120 = DAT_0201a140 == 10;
    FUN_00d30070(&local_10);
    FUN_00414bf0(&DAT_0201a130,local_10);
    FUN_00d2fec0(&local_20);
    FUN_00416880(&local_28,local_20);
    FUN_0043e130(&local_18,local_28);
    FUN_00415dd0(&DAT_0201a138,local_18,0);
    FUN_00d30130(&local_30);
    FUN_00414bf0(&DAT_0201a128,local_30);
    uVar1 = (ulonglong)DAT_0201a140;
    if (uVar1 < 6) {
      if (uVar1 - 1 < 2) {
        FUN_00414bf0(&DAT_0201a108,"Windows 95");
      }
      else if (uVar1 - 3 < 2) {
        FUN_00414bf0(&DAT_0201a108,"Windows 98");
      }
      else if (uVar1 - 3 == 2) {
        FUN_00414bf0(&DAT_0201a108,"Windows Millenium Edition");
      }
    }
    else if (uVar1 - 6 < 2) {
      FUN_00414bf0(&DAT_0201a108,"Windows NT");
    }
    else if (uVar1 == 8) {
      FUN_00414bf0(&DAT_0201a108,"Windows 2000");
    }
    else if (uVar1 == 9) {
      FUN_00414bf0(&DAT_0201a108,"Windows XP");
    }
    else if (uVar1 == 10) {
      FUN_00414bf0(&DAT_0201a108,"Windows Vista");
    }
    if (DAT_0201a118 == '\0') {
      FUN_00414bf0(&DAT_0201a110,"SYSTEM\\CurrentControlSet\\Services\\Class");
    }
    else {
      FUN_00414bf0(&DAT_0201a110,"SYSTEM\\CurrentControlSet\\Control\\Class");
    }
  }
  FUN_004144d0(&local_30);
  FUN_00414480(&local_28);
  FUN_004144d0(&local_20);
  FUN_00414480(&local_18);
  FUN_004144d0(&local_10);
  return;
}

