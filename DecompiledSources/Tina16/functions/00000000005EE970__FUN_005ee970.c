/* Ghidra address: 005ee970 */
/* Ghidra symbol: FUN_005ee970 */


void FUN_005ee970(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0xa0))
            (*(longlong **)(param_1 + 0x60),param_3,*(undefined8 *)(param_1 + 0x38));
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_20 = (longlong *)FUN_004b2790(&DAT_00476598,1,local_38);
  while( true ) {
    local_40 = local_20;
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    iVar1 = (**(code **)(*(longlong *)local_20[2] + 0x28))((longlong *)local_20[2]);
    if (iVar1 <= (int)local_40[1]) break;
    FUN_004b2850(local_20,&local_28);
    if (param_2 == 0) {
      FUN_00414b50(&local_30,local_28);
    }
    else {
      local_68 = local_28;
      FUN_00416cd0(&local_30,3,param_2,*(undefined8 *)PTR_PTR_02002f88);
    }
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),local_30);
    if (param_3 == 0) {
      FUN_005ee970(param_1,local_30,local_28);
    }
    else {
      local_68 = local_28;
      FUN_00416cd0(&local_58,3,param_3,*(undefined8 *)PTR_PTR_02002f88);
      FUN_005ee970(param_1,local_30,local_58);
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_30,2);
  return;
}

