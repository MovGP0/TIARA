/* Ghidra address: 01167200 */
/* Ghidra symbol: FUN_01167200 */


void FUN_01167200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_160 = 0;
  local_158 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  iVar1 = FUN_004170c0(&DAT_0116756c,DAT_0203add0,1);
  FUN_00416dc0(local_20,DAT_0203add0,iVar1 + 3,2);
  FUN_0043ea00(local_30,local_20[0]);
  DAT_0203ae84 = FUN_0043fc00(local_30[0]);
  if (9 < DAT_0203ae84) {
    iVar1 = iVar1 + 1;
  }
  FUN_00416dc0(local_20,DAT_0203add0,iVar1 + 6,2);
  FUN_0043ea00(&local_38,local_20[0]);
  DAT_0203ae88 = FUN_0043fc00(local_38);
  if (9 < DAT_0203ae88) {
    iVar1 = iVar1 + 1;
  }
  FUN_00416dc0(&local_40,DAT_0203add0,iVar1 + 9,1);
  DAT_0203ae8c = FUN_0040e860(local_40,&DAT_0203ae80);
  DAT_0203ae84 = param_1 + DAT_0203a524 * DAT_0203ae84;
  DAT_0203ae88 = param_2 + DAT_0203a524 * DAT_0203ae88;
  iVar2 = FUN_004170c0(&DAT_01167580,DAT_0203add0,1);
  if (iVar1 + 0xc < iVar2) {
    FUN_00416dc0(&local_50,DAT_0203add8,iVar1 + 0xb,(iVar2 - iVar1) + -0xb);
    FUN_0043ea00(&local_48,local_50);
    FUN_00416910(local_150,local_48,0xff);
    FUN_00415020(&DAT_0203a509,local_150,5);
  }
  else {
    DAT_0203a509 = 0;
  }
  iVar1 = FUN_00414f50(&DAT_0203a509,&DAT_01167584,(ulonglong)DAT_0203a509 + 1);
  if (iVar1 == 0) {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_158);
    FUN_00416910(local_150,local_158,0xff);
    FUN_00415020(&DAT_0203a509,local_150,5);
  }
  else {
    iVar1 = FUN_00414f50(&DAT_0203a509,&LAB_01167587,(ulonglong)DAT_0203a509 + 1);
    if (iVar1 == 0) {
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_160);
      FUN_00416910(local_150,local_160,0xff);
      FUN_00415020(&DAT_0203a509,local_150,5);
    }
  }
  FUN_00414560(&local_160,2);
  FUN_00414560(&local_50,5);
  FUN_00414480(local_20);
  return;
}

