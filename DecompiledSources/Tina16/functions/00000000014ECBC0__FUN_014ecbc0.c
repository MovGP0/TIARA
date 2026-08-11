/* Ghidra address: 014ecbc0 */
/* Ghidra symbol: FUN_014ecbc0 */


void FUN_014ecbc0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_30 = auStack_88;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  *(undefined1 *)(param_1 + 0x2390) = 0;
  *(undefined4 *)(param_1 + 0x2378) = 0;
  *(undefined4 *)(param_1 + 0x2374) = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  if (cVar1 == '\0') {
    FUN_00414b50(&local_20,&DAT_014ece70);
  }
  else {
    FUN_00414b50(&local_20,L"tina");
  }
  local_68 = *(undefined8 *)(param_1 + 0x2388);
  local_60 = local_20;
  local_58 = param_1;
  local_18 = FUN_014e7f80(&DAT_014e7988,1,*(undefined4 *)(param_1 + 0x2378),
                          *(undefined4 *)(param_1 + 0x2374));
  FUN_014e94d0(local_18);
  local_28 = FUN_014ea960(local_18);
  FUN_0041ddd0(&local_38,PTR_PTR_02003cc8);
  FUN_014ebd70(param_1,local_38);
  FUN_014ebef0(param_1,0);
  FUN_014ecfb0(param_1,*(undefined8 *)(local_18 + 0xa0),*(undefined8 *)(local_18 + 0xa8),local_28);
  FUN_0041ddd0(&local_40,PTR_PTR_02003018);
  FUN_014ebd70(param_1,local_40);
  if (*(char *)(param_1 + 0x2390) == '\0') {
    FUN_014ebef0(param_1,100);
  }
  FUN_00410f20(local_18);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  return;
}

