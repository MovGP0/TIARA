/* Ghidra address: 0181f950 */
/* Ghidra symbol: FUN_0181f950 */


void FUN_0181f950(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  char *local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_10 = (char *)0x0;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    FUN_004144d0(&local_10);
  }
  else {
    FUN_0041d830(&local_10,*(undefined8 *)(param_2 + 0x28));
    if ((local_10 == (char *)0x0) || (*local_10 != ' ')) {
      FUN_004156b0(&local_10,&DAT_0181faf8,local_10);
    }
  }
  iVar1 = FUN_0181e3e0(param_2);
  if (iVar1 == 0) {
    FUN_004155b0(&local_10,&DAT_0181fb08);
  }
  else {
    FUN_004155b0(&local_10,&DAT_0181fb18);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_00415dd0(local_20,*(undefined8 *)(param_2 + 0x18),0);
    FUN_00415980(&local_10,3,&LAB_0181fb28,local_20[0],local_10);
  }
  else {
    FUN_0181f910(&local_28,param_3);
    FUN_00415dd0(&local_30,*(undefined8 *)(param_2 + 0x18),0);
    FUN_00415980(&local_10,4,local_28,&LAB_0181fb28,local_30,local_10);
  }
  FUN_0181f800(param_1,local_10);
  FUN_00414590(&local_30,3);
  FUN_004144d0(&local_10);
  return;
}

