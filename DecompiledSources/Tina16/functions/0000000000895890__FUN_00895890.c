/* Ghidra address: 00895890 */
/* Ghidra symbol: FUN_00895890 */


void FUN_00895890(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_34;
  int *local_30;
  int local_28;
  int local_24;
  int *local_20 [2];
  
  local_40 = auStack_88;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_28 = 0;
  local_20[0] = (int *)0x0;
  while (local_24 = (*(code *)PTR_FUN_01e23570)(local_20[0],&local_28,0), local_24 != 0) {
    if (local_24 == 0x32) goto LAB_008959fa;
    if (local_24 == 0x7a) {
      FUN_00409620(local_20,local_28);
    }
    else {
      thunk_FUN_041931fb(local_24);
      FUN_00874a00();
    }
  }
  if (local_28 == 0) {
LAB_008959fa:
    FUN_00895a20(0,local_40);
  }
  else {
    iVar1 = *local_20[0];
    if (iVar1 != 0) {
      local_30 = local_20[0] + 1;
      local_34 = 0;
      do {
        FUN_00891ce0(*(undefined8 *)(param_1 + 0x30),&local_50,local_30,0);
        FUN_00891ce0(*(undefined8 *)(param_1 + 0x30),&local_58,local_30 + 2,0);
        local_68 = local_58;
        FUN_00416cd0(&local_48,3,local_50);
        (**(code **)(*param_2 + 0x78))(param_2,local_48);
        local_30 = local_30 + 6;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004095f0(local_20[0]);
  }
  FUN_00414560(&local_58,3);
  return;
}

