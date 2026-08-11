/* Ghidra address: 01805730 */
/* Ghidra symbol: FUN_01805730 */


void FUN_01805730(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  char *local_10;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = (char *)0x0;
  if ((*(longlong *)(param_2 + 0x30) == 0) && (*(char *)(param_2 + 0x38) == '\0')) {
    FUN_004144d0(&local_10);
  }
  else {
    FUN_0041d830(&local_10,*(undefined8 *)(param_2 + 0x30));
    if (*(char *)(param_2 + 0x38) != '\0') {
      FUN_004155b0(&local_10," ld=\"0\"");
    }
    if ((local_10 == (char *)0x0) || (*local_10 != ' ')) {
      FUN_004156b0(&local_10,&DAT_018059e8,local_10);
    }
  }
  iVar1 = FUN_01803a10(param_2);
  if (iVar1 == 0) {
    if (*(longlong *)(param_2 + 0x40) == 0) {
      FUN_004155b0(&local_10,&DAT_018059f8);
    }
    else {
      FUN_0041d830(local_20,*(undefined8 *)(param_2 + 0x40));
      FUN_00415dd0(&local_28,*(undefined8 *)(param_2 + 0x20),0);
      FUN_00415980(&local_10,6,local_10,&DAT_01805a08,local_20[0],&DAT_01805a18,local_28,
                   &DAT_01805a08);
    }
  }
  else {
    FUN_004155b0(&local_10,&DAT_01805a08);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_00415dd0(&local_30,*(undefined8 *)(param_2 + 0x20),0);
    FUN_00415980(&local_10,3,&LAB_01805a28,local_30,local_10);
  }
  else {
    FUN_018056f0(&local_38,param_3);
    FUN_00415dd0(&local_40,*(undefined8 *)(param_2 + 0x20),0);
    FUN_00415980(&local_10,4,local_38,&LAB_01805a28,local_40,local_10);
  }
  FUN_018055c0(param_1,local_10);
  FUN_00414590(&local_40,4);
  FUN_004144d0(local_20);
  FUN_004144d0(&local_10);
  return;
}

