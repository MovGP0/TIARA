/* Ghidra address: 004c9f90 */
/* Ghidra symbol: FUN_004c9f90 */


void FUN_004c9f90(longlong param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  byte local_21;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
            (*(longlong **)(param_1 + 0x1d0),&local_21,&local_28);
  FUN_004c1d80(*(undefined8 *)(param_1 + 0x1d0),local_20);
  FUN_004c1d80(*(undefined8 *)(param_1 + 0x1d0),&local_30);
  FUN_00414b50(param_1 + 0x1c8,local_30);
  FUN_004c9bf0(param_1);
  if ((local_21 & 1) == 0) {
    if ((local_21 & 4) == 0) {
      FUN_004c9d80(param_1,L"object ");
    }
    else {
      FUN_004c9d80(param_1,L"inline ");
    }
  }
  else {
    FUN_004c9d80(param_1,L"inherited ");
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_004c9ea0(param_1,*(undefined8 *)(param_1 + 0x1c8));
    FUN_004c9d80(param_1,&DAT_004ca1d4);
  }
  FUN_004c9ea0(param_1,local_20[0]);
  if ((local_21 & 2) != 0) {
    FUN_004c9d80(param_1,&PTR_DAT_004ca1e8);
    FUN_0043f750(&local_38,local_28);
    FUN_004c9d80(param_1,local_38);
    FUN_004c9d80(param_1,&DAT_004ca1fc);
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    FUN_00414b50(param_1 + 0x1c8,local_20[0]);
  }
  FUN_004c9d80(param_1,&LAB_004ca20c);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

