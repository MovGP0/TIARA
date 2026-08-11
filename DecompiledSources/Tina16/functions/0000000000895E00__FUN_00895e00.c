/* Ghidra address: 00895e00 */
/* Ghidra symbol: FUN_00895e00 */


void FUN_00895e00(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_34;
  int *local_30;
  int local_28;
  int local_24;
  int *local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = 0x3c00;
  local_20[0] = (int *)FUN_004095c0(0x3c00);
  while (local_24 = (*(code *)PTR_FUN_01e23578)(local_20[0],&local_28), local_24 != 0) {
    if ((local_24 == 0x32) || (local_24 == 0xe8)) goto LAB_00895f0d;
    if (local_24 == 0xea) {
      FUN_00409620(local_20,local_28);
    }
    else {
      thunk_FUN_041931fb(local_24);
      FUN_00874a00();
    }
  }
  if (local_28 == 0) {
LAB_00895f0d:
    FUN_00895f30(0,local_40);
  }
  else {
    iVar1 = *local_20[0];
    if (iVar1 != 0) {
      local_30 = local_20[0] + 1;
      local_34 = 0;
      do {
        FUN_00891ce0(*(undefined8 *)(param_1 + 0x30),&local_48,local_30,0);
        (**(code **)(*param_2 + 0x78))(param_2,local_48);
        local_30 = local_30 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004095f0(local_20[0]);
  }
  FUN_00414480(&local_48);
  return;
}

