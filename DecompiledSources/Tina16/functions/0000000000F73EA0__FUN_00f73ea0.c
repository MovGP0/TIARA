/* Ghidra address: 00f73ea0 */
/* Ghidra symbol: FUN_00f73ea0 */


void FUN_00f73ea0(longlong param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x30) == '\x06') {
    FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x110),L" <- ",
                 *(undefined8 *)(param_1 + 0x118));
  }
  else if (*(char *)(param_1 + 0x30) == '\a') {
    if (*(char *)(param_1 + 0x128) == '\0') {
      FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x110),L" <- ",
                   *(undefined8 *)(param_1 + 0x118));
    }
    else {
      FUN_00f61040(local_20,*(undefined4 *)(param_1 + 0x120));
      FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x110),L" <- ",local_20[0]);
    }
  }
  else {
    FUN_00414480(&local_10);
  }
  FUN_00f6f0a0(param_1,&local_30);
  FUN_00416ba0(&local_28,local_10,local_30);
  FUN_00f6f540(param_1,local_28);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  return;
}

