/* Ghidra address: 00f748a0 */
/* Ghidra symbol: FUN_00f748a0 */


void FUN_00f748a0(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x30) == '\b') {
    if (*(char *)(param_1 + 0x110) == '\0') {
      FUN_00414b50(&local_10,L"START");
    }
    else {
      FUN_00414b50(&local_10,L"INT START");
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\t') {
    FUN_00414b50(&local_10,L"STOP");
  }
  FUN_00f6f0a0(param_1,&local_28);
  FUN_00416ba0(local_20,local_10,local_28);
  FUN_00f6f540(param_1,local_20[0]);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

