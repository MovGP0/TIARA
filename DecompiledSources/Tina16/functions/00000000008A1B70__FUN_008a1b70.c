/* Ghidra address: 008a1b70 */
/* Ghidra symbol: FUN_008a1b70 */


ulonglong FUN_008a1b70(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_40 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_0043ea00(&local_28,param_1);
  local_78 = 1;
  FUN_00874ee0(&local_48,&local_28,&DAT_008a1e28,1);
  FUN_00414b50(&local_28,local_48);
  local_2c = 0;
  if (local_28 != 0) {
    local_2c = *(int *)(local_28 + -4);
  }
  if (local_2c < 1) goto LAB_008a1da9;
  cVar1 = FUN_008791b0(local_28,1,&DAT_008a1e38);
  if (cVar1 == '\0') {
    FUN_008a1af0(&local_50,local_28);
    FUN_00414b50(&local_28,local_50);
  }
  else {
    local_30 = 0;
    if (local_28 != 0) {
      local_30 = *(int *)(local_28 + -4);
    }
    if (local_30 == 6) {
      cVar1 = FUN_00879280(local_28,4,0x3a);
      if (cVar1 != '\0') {
        FUN_00879060(&local_28,4,1);
      }
    }
    else {
      local_34 = 0;
      if (local_28 != 0) {
        local_34 = *(int *)(local_28 + -4);
      }
      if (local_34 == 3) {
        FUN_00416ad0(&local_28,&LAB_008a1e4c);
      }
    }
    local_38 = 0;
    if (local_28 != 0) {
      local_38 = *(int *)(local_28 + -4);
    }
    if (local_38 != 5) goto LAB_008a1da9;
    cVar1 = FUN_008752e0(local_28,2,2);
    if (cVar1 == '\0') goto LAB_008a1da9;
    cVar1 = FUN_008752e0(local_28,2,4);
    if (cVar1 == '\0') goto LAB_008a1da9;
  }
  FUN_00416dc0(&local_58,local_28,2,2);
  uVar2 = FUN_00877c50(local_58);
  FUN_00416dc0(&local_60,local_28,4,2);
  uVar3 = FUN_00877c50(local_60);
  local_20 = FUN_00448a90(uVar2,uVar3,0,0);
  cVar1 = FUN_00879280(local_28,1,0x2d);
  if (cVar1 != '\0') {
    local_20 = local_20 ^ 0x8000000000000000;
  }
LAB_008a1da9:
  FUN_00414560(&local_60,4);
  FUN_00414480(&local_28);
  return local_20;
}

