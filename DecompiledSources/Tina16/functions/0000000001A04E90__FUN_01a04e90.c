/* Ghidra address: 01a04e90 */
/* Ghidra symbol: FUN_01a04e90 */


undefined8
FUN_01a04e90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  int local_20;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_10 = 0;
  local_18 = 0;
  local_48 = &local_1a;
  local_40 = &local_1b;
  lVar1 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),param_3,param_4,&local_19);
  local_20 = (int)*(short *)(lVar1 + 0x1f);
  if (local_20 == -1) {
    if (param_5 == '\0') {
      FUN_00414480(&local_18);
      local_23 = *(char *)(param_1 + 0xc0) == '\x04';
      if ((bool)local_23) {
        FUN_00414b50(&local_18,&DAT_01a050c8);
      }
      else {
        FUN_00414b50(&local_18,L"$G_DGND");
      }
      FUN_00414ad0(param_2,local_18);
      FUN_00414480(&local_18);
    }
    else {
      FUN_00414480(&local_10);
      local_22 = *(char *)(param_1 + 0xc0) == '\x04';
      if ((bool)local_22) {
        FUN_00414b50(&local_10,&DAT_01a05098);
      }
      else {
        FUN_00414b50(&local_10,L"$G_DPWR");
      }
      FUN_00414ad0(param_2,local_10);
      FUN_00414480(&local_10);
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
  }
  else if (local_20 == -2) {
    FUN_00414ad0(param_2,&LAB_01a050f8);
  }
  else {
    local_48 = &local_21;
    FUN_019effd0(param_1,param_2,local_20,1);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

