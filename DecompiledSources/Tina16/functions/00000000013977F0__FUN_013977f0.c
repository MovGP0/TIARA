/* Ghidra address: 013977f0 */
/* Ghidra symbol: FUN_013977f0 */


void FUN_013977f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x288))(*(longlong **)(param_1 + 0xd0),local_20);
  if (local_20[0] == 0) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x128))(*(longlong **)(param_1 + 0xd0),local_30);
    FUN_019a44e0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_20,local_30[0],
                 *(undefined8 *)(param_1 + 0xd0));
    if (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x3b9) == '\0') {
      FUN_00416cd0(&local_38,3,local_20[0],&LAB_01397a08,param_2);
      FUN_017bf050(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),local_38);
    }
    else {
      FUN_017bf050(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),local_20[0]);
    }
  }
  else {
    FUN_00b90780(&local_40,local_20[0]);
    FUN_00414b50(local_20,local_40);
    if (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x3b9) == '\0') {
      FUN_00416cd0(&local_48,3,local_20[0],&LAB_01397a08,param_2);
      FUN_017bf050(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),local_48);
    }
    else {
      FUN_017bf050(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),local_20[0]);
    }
  }
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  return;
}

